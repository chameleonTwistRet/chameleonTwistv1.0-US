"""unkType2 splitter."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase

class N64SegUnkType2(CTSegBase):
    SUFFIX = "ut2"

    def disassemble_data(self, rom_bytes):
        SIZE = 24
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) != SIZE:
            error(
                f"Error: unkType2 segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself("Ut2")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"UnkType2 {sym.name} = {{")

        data = struct.unpack('>ffifff', buf)
        args = []
        for v in data:
            if type(v) == float:
                v = self.round_float(v)
            args.append(str(v))
        lines.append(f", ".join(args))

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
