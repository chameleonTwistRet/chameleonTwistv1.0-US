"""Level map struct splitter."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase, do_pretty_print

_PTR_FIELDS = {
    2: "Rmset",
    3: "LvmM",
}

_VARIANT = {
    "Map":    ("lvmM", "LvmM", ""),
    "Header":   ("lvmH", "LvmH", ""),
}

class N64SegLevelMap(CTSegBase):
    def __init__(self, rom_start, rom_end, type, name, vram_start, args, yaml, bss_size):
        super().__init__(rom_start, rom_end, type, name, vram_start, args, yaml, bss_size)
        if isinstance(yaml, dict):
            self.type = yaml.get("args", "Header")
            self.width = yaml.get("width", 0)
            self.height = yaml.get("width", 0)
        else:
            if len(yaml) < 4:
                error(f"Error: {yaml} is missing type parameter")
            self.type = yaml[3]
            self.width = 0
            self.height = 0
            if len(yaml) > 4:
                self.width = yaml[4]
                self.height = yaml[5]
        self.SUFFIX = _VARIANT[self.type][0]

    def disassemble_data(self, rom_bytes):
        buf = rom_bytes[self.rom_start : self.rom_end]

        lines = []
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")

        if self.type == "Header":
            sym = self.get_myself("LvmH")
            if not self.data_only:
                lines.append(f"StageMapData {sym.name} = {{")

            data = struct.unpack('>iiII', buf[:0x10])
            args = []
            i = 0
            while i < len(data):
                if i in (2, 3): #Settings Pointer
                    argsym = self.get_symbol(data[i], type=_PTR_FIELDS[i])
                    if not argsym:
                        argsym = self.create_symbol(
                            addr=data[i], in_segment=True, type=_PTR_FIELDS[i], define=True
                        )
                        args.append("&"+str(data[i]))
                    else:
                        args.append(argsym.name)
                else:
                    args.append(str(data[i]))
                i += 1
            lines.append(", ".join(args))

        elif self.type == "Map":
            x = 0
            rooms = []
            while x < len(buf):
                data = int.from_bytes(buf[x:x+4], 'big', signed=True)
                rooms.append(str(data))
                x += 4

            has_defined_dimensions = self.width > 0 and self.height > 0

            sym = self.get_myself("LvmM")
            if not self.data_only:
                if has_defined_dimensions:
                    lines.append(f"s32 {sym.name}[{self.height}][{self.width}] = {{")
                else:
                    lines.append(f"s32 {sym.name}[{len(rooms)}] = {{")

            if has_defined_dimensions:
                map = [",".join(rooms[i : i + self.width]) for i in range(0, len(rooms), self.width)]
                lines += do_pretty_print(map)
                #remove following comma
                lines[-1] = lines[-1][:-1]
            else:
                lines.append(", ".join(rooms))

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
