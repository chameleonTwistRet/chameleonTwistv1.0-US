"""N64 Mtx struct splitter: dumps Mtx as .inc.c."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase

def decompile_matrix(buf):
    words = struct.unpack(">IIIIIIIIIIIIIIII", buf)
    hexed = [f"0x{w:08X}" for w in words]
    return [
        f" {{ {hexed[0]}, {hexed[1]},",
        f"   {hexed[2]}, {hexed[3]},",
        f"   {hexed[4]}, {hexed[5]},",
        f"   {hexed[6]}, {hexed[7]},",
        "",
        f"   {hexed[8]}, {hexed[9]},",
        f"   {hexed[10]}, {hexed[11]},",
        f"   {hexed[12]}, {hexed[13]},",
        f"   {hexed[14]}, {hexed[15]} }}",
    ]

class N64SegMtx(CTSegBase):
    SUFFIX = "mtx"

    def disassemble_data(self, rom_bytes):
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) != 64:
            if len(buf) == 72:
                print('Hi! does this literally ever get used')
                buf = buf[:64]
            else:
                error(
                    f"Error: Mtx segment {self.name} length ({len(buf)}) is not a 4x4 matrix!"
                )

        lines = []
        sym = self.get_myself("Mtx")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"Mtx {sym.name} = {{")

        lines += decompile_matrix(buf)

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
