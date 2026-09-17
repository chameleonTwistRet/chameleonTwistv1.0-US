"""Level pointer struct splitter: emits StageModel[]."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase, do_pretty_print

_PTR_FIELDS = {
    0: "Gfx",
    1: "ColH",
}

class N64SegLevelPointer(CTSegBase):
    SUFFIX = "lvp"

    def disassemble_data(self, rom_bytes):
        SIZE = 48

        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) % SIZE != 0:
            error(
                f"Error: levelPointer segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself("Lvp")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"StageModel {sym.name}[] = {{")

        externs = []
        csv_lines = []
        x = 0
        while x < len(buf):
            data = struct.unpack('>IIiiiiiiiiii', buf[x:x+SIZE])

            args = []
            i = 0
            while i < len(data):
                if i <= 1:
                    sym = self.get_symbol(data[i], type=_PTR_FIELDS[i])
                    if not sym:
                        sym = self.create_symbol(
                            addr=data[i], in_segment=True, type=_PTR_FIELDS[i], define=True
                        )
                    if i == 0:
                        externs.append(f"extern Gfx {sym.name}[];")
                        #Gfx is an array so it doesnt need another pointer
                        args.append(sym.name)
                    else:
                        externs.append(f"extern ModelCollision {sym.name};")
                        args.append("&"+sym.name)
                elif i == 2:
                    #if SOMEHOW the rest isnt just padding, report back
                    if data[i:] != (0,) * 10:
                        s = str(data[i:])[1:-1]
                        args.append(f"{{{s}}}")
                    i += 9
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
