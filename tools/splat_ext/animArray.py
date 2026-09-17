"""Anim array struct splitter: emits Mtx[offset][objects]."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase
from mtx import decompile_matrix

class N64SegAnimArray(CTSegBase):
    SUFFIX = "animArr"

    def __init__(self, rom_start, rom_end, type, name, vram_start, args, yaml, bss_size):
        super().__init__(rom_start, rom_end, type, name, vram_start, args, yaml, bss_size)
        if isinstance(yaml, dict):
            self.offset = yaml.get("offset", 1)
            self.objects = yaml.get("objects", 1)
        else:
            if len(yaml) < 5:
                error(f"Error: {yaml} is missing offset and objects parameters")
            self.offset = yaml[3]
            self.objects = yaml[4]

    def disassemble_data(self, rom_bytes):
        SIZE = 64
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) % SIZE != 0:
            error(
                f"Error: Animation array segment {self.name} size incorrect; Is ({len(buf)}) when it should be a multiple of ({SIZE})!"
            )

        lines = []
        sym = self.get_myself("Animarr")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"Mtx {sym.name}[{self.offset}][{self.objects}] = {{")

        matrixes = []
        offset = 0
        while offset < len(buf):
            new_matrix = decompile_matrix(buf[offset : offset + SIZE])
            new_matrix[-1] += ","
            matrixes.append(new_matrix)
            offset += SIZE

        for i, matrix in enumerate(matrixes):
            if i % self.objects == 0:
                matrix[0] = "{"+matrix[0][1:]
            if i % self.objects == self.objects-1:
                matrix[-1] = matrix[-1][:-1]+"},"

        #flatten
        lines += [line for matrix in matrixes for line in matrix]
        #remove following comma
        lines[-1] = lines[-1][:-1]

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
