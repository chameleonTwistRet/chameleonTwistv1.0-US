"""rabObject struct splitter: emits rabObject[]."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase, do_pretty_print

class N64SegRabObjects(CTSegBase):
    SUFFIX = "rabObj"

    def disassemble_data(self, rom_bytes):
        SIZE = 20

        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) % SIZE != 0:
            error(
                f"Error: rabObjects segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself("RabObj")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"rabObject {sym.name}[] = {{")

        externs = []
        csv_lines = []
        x = 0
        while x < len(buf):
            data = struct.unpack('>ifffI', buf[x:x+SIZE])

            args = []
            i = 0
            while i < len(data):
                use = data[i]
                if i == 4:
                    sym = self.get_symbol(use, type="ColH")
                    if not sym:
                        sym = self.create_symbol(
                            addr=use, in_segment=True, type="ColH", define=True
                        )
                    use = "&"+sym.name
                    externs.append(f"extern ModelCollision {sym.name};")
                elif type(use) == float:
                    use = self.round_float(use)
                args.append(str(use))
                i += 1
            csv_lines.append(",".join(args))
            x += SIZE

        if not self.data_only:
            lines[1:1] = list(set(externs))

        lines += do_pretty_print(csv_lines)
        #remove following comma
        lines[-1] = lines[-1][:-1]

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
