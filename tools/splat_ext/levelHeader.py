"""Level header struct splitter."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase

REFS = {
    0: ("LvmH", lambda s: f"&{s.name}"),
    1: ("Rmset", lambda s: s.name),
    2: ("Lvp", lambda s: s.name),
    5: ("RabObjects", lambda s: s.name),
    7: ("Sprlib", lambda s: s.name),
    8: ("Lvlscope", lambda s: f"&{s.name}"),
}

class N64SegLevelHeader(CTSegBase):
    SUFFIX = "lvlHdr"

    def disassemble_data(self, rom_bytes):
        SIZE = 32

        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) != SIZE:
            error(
                f"Error: levelHeader segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself("Lvlhdr")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"StageData {sym.name} = {{")

        data = struct.unpack('>IIIHHIIII', buf)
        args = []
        max_column = 1
        i = 0
        while i < len(data):
            use = data[i]
            if i in REFS:
                if use == 0:
                    use = "NULL"
                else:
                    ref_type, fmt = REFS[i]
                    ref_sym = self.get_symbol(use, type=ref_type)
                    if ref_sym:
                        use = fmt(ref_sym)
                    else:
                        use = self.create_symbol(
                            addr=self.vram_start, in_segment=True, type=ref_type, define=True
                        )
            elif i == 3:
                use = f"ARRAY_COUNT({args[-1]})"
            elif i == 6:
                use = hex(use)
            use = str(use)
            max_column = max(max_column, len(use))
            args.append(use)
            i += 1

        #custom pretty print because we want it in columns
        for item in args:
            lines.append(f"{item:>{max_column}},")

        #remove following comma
        lines[-1] = lines[-1][:-1]

        if not self.data_only:
            lines.append("};")

        # enforce newline at end of file
        lines.append("")
        return "\n".join(lines)
