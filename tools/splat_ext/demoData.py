"""Demo data struct splitter: emits ContDemo[]."""

import struct
import sys
from splat.util.log import error
from splat.util import options

sys.path.append(str(options.opts.base_path / "tools/splat_ext"))
from _ct_base import CTSegBase, do_pretty_print

_BUTTONS = {
    "R_CBUTTONS": 1 << 0,
    "L_CBUTTONS": 1 << 1,
    "D_CBUTTONS": 1 << 2,
    "U_CBUTTONS": 1 << 3,
    "R_TRIG": 1 << 4,
    "L_TRIG": 1 << 5,
    "R_JPAD": 1 << 8,
    "L_JPAD": 1 << 9,
    "D_JPAD": 1 << 10,
    "U_JPAD": 1 << 11,
    "START_BUTTON": 1 << 12,
    "Z_TRIG": 1 << 13,
    "B_BUTTON": 1 << 14,
    "A_BUTTON": 1 << 15,
}

class N64SegDemoData(CTSegBase):
    SUFFIX = "demo"

    def disassemble_data(self, rom_bytes):
        SIZE = 4
        buf = rom_bytes[self.rom_start : self.rom_end]
        if len(buf) % SIZE != 0:
            error(
                f"Error: Demo segment {self.name} length ({len(buf)}) is a proper array!"
            )

        lines = []
        sym = self.get_myself("Demo")
        if not self.data_only:
            lines.append('#include "common.h"')
            lines.append("")
            lines.append(f"ContDemo {sym.name}[{len(buf)//SIZE}] = {{")

        i = 0
        csv_lines = []
        while i < len(buf):
            data = struct.unpack('>Hbb', buf[i:i+SIZE])
            inputs = data[0]
            if inputs > 0 and inputs < 0xFFFF:
                inputs = " | ".join(name for name, bit in _BUTTONS.items() if inputs & bit)
            csv_lines.append(",".join([str(inputs), str(data[1]), str(data[2])]))
            i += SIZE

        lines += do_pretty_print(csv_lines)
        #remove following comma
        lines[-1] = lines[-1][:-1]

        if not self.data_only:
            lines.append("};")

        lines.append("")
        return "\n".join(lines)
