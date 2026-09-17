"""Sprite library splitter: emits s32 array."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase, lookup_enum

class N64SegSpriteLib(CTSegBase):
    SUFFIX = "sprLib"

    def disassemble_data(self, rom_bytes):
        entries = 16
        SIZE = entries*4
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) % SIZE != 0:
            error(
                f"Error: sprLib segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself("Sprlib")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"s32 {sym.name}[{len(buf)//SIZE}][{entries}] = {{")

        actual_data = []
        max_column = 3
        single_entry = False
        x = 0
        while x < len(buf):
            data = struct.unpack(">"+("i" * entries), buf[x:x+SIZE])
            new = []
            #if null sprlib, just make a single zero for init
            if data == (0,) * entries:
                new = [0]
            else:
                for i in range(len(data)):
                    #if the rest of sprlib are zeros, quit
                    if data[i:] == (0,) * (len(data) - i):
                        break
                    #else, add num
                    value = lookup_enum("SPRITE", data[i], self.version)
                    if value == None:
                        print(f"{data[i]}, {value} not in SPRITE enum!")
                        value = "SPRITE_BLANK"
                    new.append(value)
                    max_column = max(max_column, len(value))

            if len(new) == 1:
                single_entry = True

            actual_data.append(new)
            x += SIZE

        #single entries will have brackets on both sides, making the line longer
        #account for
        max_column += 1
        if single_entry:
            max_column += 1

        #custom pretty print because we want it in columns
        for x in range(len(actual_data)):
            if actual_data[x:] == [[0]] * (len(actual_data) - x):
                break
            for i, use in enumerate(actual_data[x]):
                if i == 0:
                    if len(actual_data[x]) == 1:
                        lines.append(f"{{{use:>{max_column-2}}}},")
                    else:
                        lines.append(f"{{{use:>{max_column-1}},")
                elif i == len(actual_data[x])-1:
                    lines.append(f"{use:>{max_column-1}}}},")
                else:
                    lines.append(f"{use:>{max_column}},")

        #remove following comma
        lines[-1] = lines[-1][:-1]

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)