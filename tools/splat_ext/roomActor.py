"""Room actor struct splitter."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase, lookup_enum, do_pretty_print

class N64SegRoomActor(CTSegBase):
    SUFFIX = "roomAct"

    def disassemble_data(self, rom_bytes):
        SIZE = 96
        NULL_STRUCT = (0,) * 24
        NULL_MACRO = "NULL_ACTOR"

        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) % SIZE != 0:
            error(
                f"Error: roomAct segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself("Roomact")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"RoomActor {sym.name}[] = {{")

        csv_lines = []
        has_null = False
        x = 0
        while x < len(buf):
            data = struct.unpack(">iffffffffffiffffffffffff", buf[x:x+SIZE])

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

        lines.append("")
        return "\n".join(lines)
