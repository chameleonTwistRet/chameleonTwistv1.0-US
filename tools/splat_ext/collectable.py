"""Collectable struct splitter."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase, lookup_enum, do_pretty_print

class N64SegCollectable(CTSegBase):
    SUFFIX = "clct"

    def disassemble_data(self, rom_bytes):
        SIZE = 32
        NULL_STRUCT = (0,0,0,0,-1,0,0,0)
        NULL_MACRO = "NULL_COLLECTABLE"
        if self.version == "VER_US":
            SIZE = 20
            NULL_STRUCT = NULL_STRUCT[:-3]

        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) % SIZE != 0:
            error(
                f"Error: clct segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself("Clct")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"Collectable {sym.name}[] = {{")

        to_unpack = '>ifffiiii'
        if self.version == "VER_US":
            to_unpack = '>ifffi'

        csv_lines = []
        has_null = False
        x = 0
        while x < len(buf):
            data = struct.unpack(to_unpack, buf[x:x+SIZE])

            if x == len(buf)-SIZE:
                if data == NULL_STRUCT:
                    has_null = True
                    break

            args = []
            i = 0
            while i < len(data):
                use = data[i]
                if i == 0: #Actor ID
                    ident = lookup_enum("actorIDs", use, self.version)
                    if ident is not None:
                        use = ident
                elif i == 1: #Position
                    use = self.make_vec3f(data[i:i+3])
                    i += 2
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
