"""Anim pointers struct splitter."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase, do_pretty_print

class N64SegAnimPointers(CTSegBase):
    SUFFIX = "animP"

    def disassemble_data(self, rom_bytes):
        SIZE = 12
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) % SIZE != 0:
            error(
                f"Error: roomAct segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself("Animp")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"AnimPointer {sym.name}[{len(buf) // SIZE}] = {{")

        offset = 0
        csv_lines = []
        while offset < len(buf):
            data = struct.unpack('>III', buf[offset:offset+SIZE])
            row = []
            symG = self.get_symbol(data[0]-0x28, type="Animh")
            if not symG:
                symG = self.create_symbol(
                    addr=data[0], in_segment=True, type="Animh", define=True
                )
            row.append("&"+symG.name+".frames")
            symG = self.get_symbol(data[1]-0x2C, type="Animh")
            if not symG:
                symG = self.create_symbol(
                    addr=data[1], in_segment=True, type="Animh", define=True
                )
            row.append("&"+symG.name+".objects")
            symG = self.get_symbol(data[2]-0x2C, type="Animarr")
            if not symG:
                symG = self.create_symbol(
                    addr=data[2], in_segment=True, type="Animarr", define=True
                )
            row.append("&"+symG.name+"[0][0]")
            csv_lines.append(",".join(row))
            offset += SIZE

        lines += do_pretty_print(csv_lines)
        lines[-1] = lines[-1][:-1]

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
