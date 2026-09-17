"""Collision struct splitter: Header / Verts / Tris / Settings variants."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase, do_pretty_print

# Map yaml `args` value -> (filename suffix, symbol type, actual symbol suffix)
_VARIANT = {
    "Verts":    ("colV", "ColV", "ColV"),
    "Tris":     ("colT", "ColT", "ColT"),
    "Settings": ("colS", "ColS", "ColS"),
    "Header":   ("colH", "ColH", "ColH"),
}

class N64SegCollision(CTSegBase):
    def __init__(self, rom_start, rom_end, type, name, vram_start, args, yaml, bss_size):
        super().__init__(rom_start, rom_end, type, name, vram_start, args, yaml, bss_size)
        if isinstance(yaml, dict):
            self.type = yaml.get("args", "Verts")
        else:
            if len(yaml) < 4:
                error(f"Error: {yaml} is missing type parameter")
            self.type = yaml[3]
        self.SUFFIX = _VARIANT[self.type][0]

    def disassemble_data(self, rom_bytes):
        buf = rom_bytes[self.rom_start : self.rom_end]

        lines = []

        if self.type == "Verts":
            lines += self._verts(buf)
        elif self.type == "Tris":
            lines += self._tris(buf)
        elif self.type == "Settings":
            lines += self._settings(buf)
        elif self.type == "Header":
            lines += self._header(buf)

        lines.append("")
        return "\n".join(lines)

    def _verts(self, buf):
        SIZE = 12
        if len(buf) % SIZE != 0:
            error(
                f"Error: collision verts segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself(_VARIANT[self.type][1])
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"Vec3f {sym.name}[{buf//SIZE}] = {{")

        csv_lines = []
        i = 0
        while i < len(buf):
            data = struct.unpack(">fff", buf[i:i+SIZE])
            csv_lines.append(self.make_vec3f(data[:3])[1:-1])
            i += SIZE

        lines += do_pretty_print(csv_lines)
        #remove following comma
        lines[-1] = lines[-1][:-1]

        if not self.data_only:
            lines.append("};")

        return lines

    def _tris(self, buf):
        SIZE = 12
        if len(buf) % SIZE != 0:
            error(
                f"Error: collision tris segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself(_VARIANT[self.type][1])
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"Vec3w {sym.name}[{buf//SIZE}] = {{")

        csv_lines = []
        i = 0
        while i < len(buf):
            data = struct.unpack(">iii", buf[i:i+SIZE])
            csv_lines.append(f"{data[0]},{data[1]},{data[2]}")
            i += SIZE

        lines += do_pretty_print(csv_lines)
        #remove following comma
        lines[-1] = lines[-1][:-1]

        if not self.data_only:
            lines.append("};")

        return lines

    def _settings(self, buf):
        SIZE = 24
        if len(buf) != SIZE:
            error(
                f"Error: collision settings segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself(_VARIANT[self.type][1])
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"Rect3D {sym.name} = {{")

        csv_lines = []
        i = 0
        while i < len(buf):
            data = struct.unpack(">fff", buf[i:i+(SIZE//2)])
            csv_lines.append(self.make_vec3f(data[:3])[1:-1])
            i += SIZE//2

        lines += do_pretty_print(csv_lines)
        #remove following comma
        lines[-1] = lines[-1][:-1]

        if not self.data_only:
            lines.append("};")

        return lines

    def _header(self, buf):
        SIZE = 20
        if len(buf) != SIZE:
            error(
                f"Error: collision header segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself(_VARIANT[self.type][1])
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"ModelCollision {sym.name} = {{")

        REFS = {
            2: _VARIANT["Verts"][1],
            3: _VARIANT["Tris"][1],
            4: _VARIANT["Settings"][1],
        }

        data = struct.unpack(">iiIII", buf)
        args = []
        i = 0
        while i < len(data):
            use = data[i]
            if i >= 2:
                sym = self.get_symbol(use, type=REFS[i])
                if not sym:
                    sym = self.create_symbol(
                        addr=self.vram_start, in_segment=True, type=REFS[i], define=True
                    )
                use = sym.name
                if i == 4:
                    use = "&"+use
            args.append(str(use))
            i += 1
        args[0] = f"ARRAY_COUNT({args[2]})"
        args[1] = f"ARRAY_COUNT({args[3]})"
        lines.append(", ".join(args))

        if not self.data_only:
            lines.append("};")

        return lines