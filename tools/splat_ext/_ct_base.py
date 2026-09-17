"""
Shared base class and helpers for Chameleon Twist splat extensions.

Subclasses override:
  - SUFFIX: filename suffix used in out_path (e.g. "mtx", "animH")
  - disassemble_data(self, rom_bytes): return the .inc.c text

If a segment needs a dynamic suffix (e.g. collision: colV/colT/colS/colH),
override out_path directly.
"""

from functools import lru_cache
from pathlib import Path

from splat.segtypes.segment import Segment
from splat.util import options

import csv
import io
import struct

class CTSegBase(Segment):
    SUFFIX = None  # override in subclass

    def __init__(self, rom_start, rom_end, type, name, vram_start, args, yaml, bss_size):
        super().__init__(
            rom_start, rom_end, type, name, vram_start, args=args, yaml=yaml, bss_size=bss_size
        )
        self.file_text = None
        self.data_only = isinstance(yaml, dict) and yaml.get("data_only", False)

        #grab version
        self.version = ""
        real_path = str(options.opts.target_path)
        if real_path == "baserom.us.z64":
            self.version = "VER_US"
        elif real_path == "baserom.jp.z64":
            self.version = "VER_JP"

    def get_linker_section(self):
        return []

    def out_path(self) -> Path:
        return options.opts.asset_path / self.dir / f"{self.name}.{self.SUFFIX}.inc.c"

    def scan(self, rom_bytes: bytes):
        if self.out_path().exists():
            return
        self.file_text = self.disassemble_data(rom_bytes)

    def split(self, rom_bytes: bytes):
        if self.file_text and self.out_path():
            self.out_path().parent.mkdir(parents=True, exist_ok=True)
            with open(self.out_path(), "w", newline="\n") as f:
                f.write(self.file_text)

    def get_myself(self, type):
        return self.get_symbol(
            self.vram_start, type=type
        ) or self.create_symbol(
            addr=self.vram_start, in_segment=True, type=type, define=True
        )

    #TODO: check against bytes?
    def round_float(self, in_float):
        """
        in_float SHOULD be 100% equivalent to its c counterpart, down to the decimal.

        however, some floats are needlessly long despite f32 precision not actually
        going that far.

        this is effectively a range checker.
        """
        #up ROUND_PRECISION as needed.
        ROUND_PRECISION = 10

        actual_float = struct.pack(">f", in_float)
        for i in range(ROUND_PRECISION+1):
            new_float = round(in_float, i)
            check_float = struct.pack(">f", new_float)
            if check_float == actual_float:
                return new_float
        print(f"ERR: not enough decimals to represent {in_float}.\n\
              Up your ROUND_PRECISION please!")
        return None

    def make_vec3f(self, data):
        """shorthand"""
        xpos = self.round_float(data[0])
        ypos = self.round_float(data[1])
        zpos = self.round_float(data[2])
        return f"{{{xpos},{ypos},{zpos}}}"

def do_pretty_print(csv_lines):
    out_lines = []
    csv_file_mock = io.StringIO("\n".join(csv_lines))
    parsed_rows = list(csv.reader(csv_file_mock))
    col_widths = {}
    for row in parsed_rows:
        for i, cell in enumerate(row):
            if i not in col_widths or len(cell) > col_widths[i]:
                col_widths[i] = len(cell)

    for row in parsed_rows:
        out_lines.append("\t{"+", ".join(f"{val:>{col_widths[i]}}" for i, val in enumerate(row))+"},")
    return out_lines

def preproc_sim(lines, flags=[]):
    preproc_directives = [
        "#ifdef", "#elif", "#else", "#endif"
    ]

    layers = 0
    current_identifier = ""
    i = 0
    while i < len(lines):
        line = lines[i]
        if line.startswith(f"#ifdef"):
            current_identifier = lines.pop(i).split("ifdef")[-1].strip()
            if current_identifier in flags:
                layers += 1
            else:
                while True:
                    line = lines[i].split(" ")[0].strip()
                    if line in preproc_directives:
                        break
                    else:
                        lines.pop(i)
            continue
        elif line.startswith(f"#else"):
            lines.pop(i)
            if not current_identifier in flags:
                layers += 1
            else:
                while True:
                    line = lines[i].split(" ")[0].strip()
                    if line in preproc_directives:
                        break
                    else:
                        lines.pop(i)
            continue
        elif line.startswith(f"#elif"):
            current_identifier = lines.pop(i).split("elif")[-1].strip()
            if current_identifier in flags:
                layers += 1
            else:
                while True:
                    line = lines[i].split(" ")[0].strip()
                    if line in preproc_directives:
                        break
                    else:
                        lines.pop(i)
            continue
        elif line.startswith(f"#endif"):
            lines.pop(i)
            layers -= 1
            continue
        i += 1
    return lines

@lru_cache(maxsize=1)
def _enums_lines():
    with open("include/enums.h", "r", encoding="UTF-8") as f:
        return f.readlines()

@lru_cache(maxsize=128)
def lookup_enum(enum_name: str, value: int, flags=[]):
    """Find the identifier in an enum block named `enum_name` whose value
    equals `value`. Returns the identifier string, or None if not found.

    Mirrors the ad-hoc parser previously open-coded in collectable.py /
    roomActor.py — same matching rules, but the enums file is read once
    and the result is memoised.
    """
    lines = preproc_sim(_enums_lines(), flags)
    reading = False
    compare_value = 0
    for line in lines:
        if line.strip() == "":
            continue
        if not reading:
            #search for start of enum
            if line.startswith(f"enum {enum_name}"):
                reading = True
            continue
        else:
            #if end of enum reached, stop searching
            if line == "};\n":
                break
        #if enum value is an assignment, use that value
        if line.find("=") != -1:
            try:
                compare_value = int(
                    line.split("=")[-1].split("//")[0].replace(",", "").strip()
                )
            except ValueError:
                pass
        if compare_value == value:
            ident = line.split(",")[0].split("\t")[-1].split("//")[0].strip()
            if ident.find("=") != -1:
                ident = ident.split("=")[0].split("//")[0].strip()
            return ident
        compare_value += 1
    return None