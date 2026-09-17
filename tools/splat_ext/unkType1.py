"""unkType1 (PlatformKeyframe) splitter."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase, do_pretty_print

class N64SegUnkType1(CTSegBase):
    SUFFIX = "ut1"


    def disassemble_data(self, rom_bytes):
        SIZE = 36
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) % SIZE != 0:
            error(
                f"Error: unkType1 segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself("Ut1")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"PlatformKeyframe {sym.name}[] = {{")

        csv_lines = []
        x = 0
        while x < len(buf):
            data = struct.unpack(">fffiiiiii", buf[x:x+SIZE])
            args = []
            i = 0
            while i < len(data):
                use = data[i]
                if i == 0: #Position
                    use = self.make_vec3f(data[i:i+3])
                    i += 2
                args.append(str(use))
                i += 1
            csv_lines.append(",".join(args))
            x += SIZE

        lines += do_pretty_print(csv_lines)
        #remove following comma
        lines[-1] = lines[-1][:-1]

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)