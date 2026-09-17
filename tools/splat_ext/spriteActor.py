"""Sprite actor struct splitter."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase, lookup_enum, do_pretty_print

class N64SegSpriteActor(CTSegBase):
    SUFFIX = "sprite"

    def disassemble_data(self, rom_bytes):
        SIZE = 80
        NULL_STRUCT = (-1,0,-1,-1,-1,-1,32,32,1,0,0,0,0,0,0,0,-1,-1,0,0)
        NULL_MACRO = "NULL_SPRITE"

        buf = rom_bytes[self.rom_start : self.rom_end]
        if (len(buf)) % SIZE != 0:
            error(
                f"Error: spriteActor segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself("Sprite")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"SpriteActor {sym.name}[] = {{")

        csv_lines = []
        has_null = False
        x = 0
        while x < len(buf):
            data = struct.unpack('>iiffffffiffifffiiiii', buf[x:x+SIZE])

            if x == len(buf)-SIZE:
                if data == NULL_STRUCT:
                    has_null = True
                    break

            args = []
            i = 0
            while i < len(data):
                use = data[i]
                if i == 1: #Sprite ID
                    ident = lookup_enum("SPRITE", use, self.version)
                    if ident is not None:
                        use = ident
                elif i in (2, 5): #Position
                    use = self.make_vec3f(data[i:i+3])
                    i += 2
                elif i == 16: #color
                    use = f"{{{data[i]},{data[i+1]},{data[i+2]},{data[i+3]}}}"
                    i += 3
                elif type(use) == float:
                    use = self.round_float(use)
                args.append(str(use))
                i += 1
            csv_lines.append(",".join(args))
            x += SIZE

        lines += do_pretty_print(csv_lines)
        if has_null:
            lines.append("\t"+NULL_MACRO)
        else:
            #remove following comma
            lines[-1] = lines[-1][:-1]

        if not self.data_only:
            lines.append("};")

        # enforce newline at end of file
        lines.append("")
        return "\n".join(lines)
