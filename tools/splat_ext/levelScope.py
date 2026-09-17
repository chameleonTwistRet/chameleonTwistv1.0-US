"""Level scope struct splitter."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase

class N64SegLevelScope(CTSegBase):
    SUFFIX = "lvlScope"

    def disassemble_data(self, rom_bytes):
        SIZE = 24
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) != SIZE:
            error(
                f"Error: levelScope segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself("Lvlscope")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"LevelScope {sym.name} = {{")

        data = struct.unpack('>iiiiii', buf)
        i = 0
        args = []
        while i < len(data):
            use = data[i]
            if i == 0:
                use = f"{{{data[i]}, {data[i+1]}, {data[i+2]}}}"
                i += 2
            args.append(str(use))
            i += 1
        lines.append(", ".join(args))

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
