"""Demo pointer table splitter."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase

class N64SegDemoPointers(CTSegBase):
    SUFFIX = "demoP"

    def disassemble_data(self, rom_bytes):
        SIZE = 4
        buf = rom_bytes[self.rom_start : self.rom_end]
        entries = len(buf)//SIZE
        if len(buf) % SIZE != 0:
            error(
                f"Error: demoPointers segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself("Demop")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"ContDemo* {sym.name}[{entries}] = {{")

        data = struct.unpack(">"+("I" * entries), buf)

        actual_data = []
        max_column = 4
        for use in data:
            if use != 0:
                sym = self.get_symbol(use, type="Demo")
                if not sym:
                    sym = self.create_symbol(
                        addr=use, in_segment=True, type="Demo", define=True
                    )
                use = sym.name
            else:
                use = "NULL"
            max_column = max(max_column, len(use))
            actual_data.append(use)

        #custom pretty print because we want it in columns
        for item in actual_data:
            lines.append(f"{item:>{max_column}},")

        #remove following comma
        lines[-1] = lines[-1][:-1]

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)