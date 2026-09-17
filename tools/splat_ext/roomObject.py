"""Room object struct splitter."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase, lookup_enum, do_pretty_print

from math import degrees

class N64SegRoomObject(CTSegBase):
    SUFFIX = "roomObj"

    def disassemble_data(self, rom_bytes):
        SIZE = 140
        NULL_STRUCT = (0,) * 35
        NULL_MACRO = "NULL_OBJECT"

        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) % SIZE != 0:
            error(
                f"Error: roomObject segment {self.name} length ({len(buf)}) is not valid"
            )

        lines = []
        sym = self.get_myself("Roomobj")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"RoomObject {(sym.name)}[] = {{")

        externs = []
        csv_lines = []
        has_null = False
        x = 0
        while x < len(buf):
            data = struct.unpack(">ffffffifiiffffiiiiiiiiiiIIIiiiiiiii", buf[x:x+SIZE])

            if x == len(buf)-SIZE:
                if data == NULL_STRUCT:
                    has_null = True
                    break

            args = []
            i = 0
            while i < len(data):
                use = data[i]
                if i in (0, 3):
                    use = self.make_vec3f(data[i:i+3])
                    i += 2
                elif i == 6: #rotationMode
                    ident = lookup_enum("RotateModes", use, self.version)
                    if ident is not None:
                        use = ident
                elif i == 7:
                    if use != 0:
                        use = f"DEGREES_TO_RADIANS_2PI({self.round_float(degrees(use))})"
                    else:
                        use = "0"
                elif i == 8: #objUse
                    ident = lookup_enum("objUse", use, self.version)
                    if ident is not None:
                        use = ident
                elif i == 9: #objMode
                    ident = lookup_enum("objMode", use, self.version)
                    if ident is not None:
                        use = ident
                elif i == 14: #uservariable symbol
                    if hex(use).startswith("0x3") and len(hex(use)) == 9:
                        #CAN BE:
                            #uservariable symbol
                            #exitDirection
                        #TODO: what the hell is 4DD0D8 - 4dd1f4 in bombland. it is referenced with this slot but i have no idea what it is
                        #ive had to make a workaround for now but this is the first appearance of anything relating to this

                        sym2 = self.create_symbol(
                            addr=use, in_segment=True, type="data", define=True
                        )
                        if not sym2.name.startswith("D_"):
                            if sym2.type == "Vtx":
                                externs.append(f"extern Vtx {sym2.name}[];")
                            use = "&"+sym2.name
                    elif args[4] == "OBJU_ZONE": #zdir
                        ident = lookup_enum("Zone_Directions", use, self.version)
                        if ident is not None:
                            use = ident
                    elif use == 0:
                        use = "NULL"
                elif i in (24, 25, 26):  # function pointers
                    if use != 0:
                        smsym = self.get_symbol(data[i], type="func")
                        if not smsym:
                            smsym = self.create_symbol(
                                addr=use, in_segment=True, type="func", define=True
                            )
                        #TODO: verify declaration
                        if i < 26:
                            externs.append(f"void {smsym.name}(Collider*);")
                        else:
                            externs.append(f"void {smsym.name}(Collider* arg0, RoomObject* arg1);")
                        use = "&"+smsym.name
                    else:
                        use = "NULL"
                elif type(use) == float:
                    use = self.round_float(use)
                args.append(str(use))
                i += 1
            csv_lines.append(",".join(args))
            x += SIZE

        if not self.data_only:
            lines[1:1] = list(set(externs))

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
