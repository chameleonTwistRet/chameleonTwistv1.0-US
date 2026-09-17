"""Lights struct splitter: emits gdSPDefLights1(...)."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase


class N64SegLights(CTSegBase):
    SUFFIX = "light"

    def disassemble_data(self, rom_bytes):
        SIZE = 24
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) != SIZE:
            error(
                f"Error: Light segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself("Light")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"Lights1 {sym.name} = ")

        data = struct.unpack(">BBBbBBBbBBBbBBBbBBBbBBBb", buf)
        ambient = [data[0], data[1], data[2]]
        rgb1 = [data[8], data[9], data[0xA]]
        xyz1 = [data[0x10], data[0x11], data[0x12]]

        lines.append("gdSPDefLights1(")
        lines.append("\t/* ambient color */")
        lines.append("\t" + ", ".join(str(i) for i in ambient) + ",")
        lines.append("\t/* colored light direction */")
        lines.append("\t" + ", ".join(str(i) for i in rgb1 + xyz1))
        lines.append(");")
        lines.append("")
        return "\n".join(lines)
