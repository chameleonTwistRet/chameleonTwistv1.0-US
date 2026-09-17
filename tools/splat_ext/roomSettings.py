"""Room settings struct splitter."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase, do_pretty_print

# Field index → (referenced symbol type) for the four pointer fields at the
# start of a RoomInstance.
_PTR_FIELDS = {
    0: "Roomobj",
    1: "Roomact",
    2: "Clct",
    3: "Sprite",
}

class N64SegRoomSettings(CTSegBase):
    SUFFIX = "rmSet"

    def disassemble_data(self, rom_bytes):
        SIZE = 108
        NULL_STRUCT = (0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0)
        NULL_MACRO = "NULL_ROOM"
        if self.version == "VER_US":
            SIZE = 104
            NULL_STRUCT = NULL_STRUCT[:-1]

        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) % SIZE != 0:
            error(
                f"Error: roomSettings segment {self.name} length ({len(buf)}) is not valid"
            )
        lines = []
        sym = self.get_myself("Rmset")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"RoomInstance {sym.name}[] = {{")

        to_unpack = '>IIIIiiiiiififffffffhhhhhhhhhhhhff'
        if self.version == "VER_US":
            to_unpack = to_unpack[:-1]

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
                if i <= 3:
                    if use != 0:
                        sym = self.get_symbol(data[i], type=_PTR_FIELDS[i])
                        if not sym:
                            sym = self.create_symbol(
                                addr=data[i], in_segment=True, type=_PTR_FIELDS[i], define=True
                            )
                        use = sym.name
                    else:
                        use = "NULL"
                elif i in (19, 22, 25, 28):
                    use = f"{{{data[i]}, {data[i+1]}, {data[i+2]}}}"
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
