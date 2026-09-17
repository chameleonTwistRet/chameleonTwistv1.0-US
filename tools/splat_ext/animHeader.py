"""
Dumps out an animation header as a .inc.c file.
"""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase


class N64SegAnimHeader(CTSegBase):
    SUFFIX = "animH"

    def disassemble_data(self, rom_bytes):
        SIZE = 48
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) != SIZE:
            error(
                f"Error: Animation header segment {self.name} size incorrect; Is ({len(buf)}) when it should be ({SIZE})!"
            )

        lines = []
        sym = self.get_myself("Animh")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"Anim {sym.name} = {{")

        data = struct.unpack('>ffffffffffII', buf)
        args = []
        max_column = 1
        i = 0
        while i < len(data):
            use = data[i]
            if type(use) == float:
                use = self.round_float(use)
            use = str(use)
            max_column = max(max_column, len(use))
            args.append(use)
            i += 1

        #custom pretty print because we want it in columns
        for item in args:
            lines.append(f"{item:>{max_column}},")

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)