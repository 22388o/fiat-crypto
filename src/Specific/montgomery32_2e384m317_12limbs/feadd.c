static void feadd(uint32_t out[12], const uint32_t in1[12], const uint32_t in2[12]) {
  { const uint32_t x24 = in1[11];
  { const uint32_t x25 = in1[10];
  { const uint32_t x23 = in1[9];
  { const uint32_t x21 = in1[8];
  { const uint32_t x19 = in1[7];
  { const uint32_t x17 = in1[6];
  { const uint32_t x15 = in1[5];
  { const uint32_t x13 = in1[4];
  { const uint32_t x11 = in1[3];
  { const uint32_t x9 = in1[2];
  { const uint32_t x7 = in1[1];
  { const uint32_t x5 = in1[0];
  { const uint32_t x46 = in2[11];
  { const uint32_t x47 = in2[10];
  { const uint32_t x45 = in2[9];
  { const uint32_t x43 = in2[8];
  { const uint32_t x41 = in2[7];
  { const uint32_t x39 = in2[6];
  { const uint32_t x37 = in2[5];
  { const uint32_t x35 = in2[4];
  { const uint32_t x33 = in2[3];
  { const uint32_t x31 = in2[2];
  { const uint32_t x29 = in2[1];
  { const uint32_t x27 = in2[0];
  { uint32_t x49; uint8_t x50 = _addcarryx_u32(0x0, x5, x27, &x49);
  { uint32_t x52; uint8_t x53 = _addcarryx_u32(x50, x7, x29, &x52);
  { uint32_t x55; uint8_t x56 = _addcarryx_u32(x53, x9, x31, &x55);
  { uint32_t x58; uint8_t x59 = _addcarryx_u32(x56, x11, x33, &x58);
  { uint32_t x61; uint8_t x62 = _addcarryx_u32(x59, x13, x35, &x61);
  { uint32_t x64; uint8_t x65 = _addcarryx_u32(x62, x15, x37, &x64);
  { uint32_t x67; uint8_t x68 = _addcarryx_u32(x65, x17, x39, &x67);
  { uint32_t x70; uint8_t x71 = _addcarryx_u32(x68, x19, x41, &x70);
  { uint32_t x73; uint8_t x74 = _addcarryx_u32(x71, x21, x43, &x73);
  { uint32_t x76; uint8_t x77 = _addcarryx_u32(x74, x23, x45, &x76);
  { uint32_t x79; uint8_t x80 = _addcarryx_u32(x77, x25, x47, &x79);
  { uint32_t x82; uint8_t x83 = _addcarryx_u32(x80, x24, x46, &x82);
  { uint32_t x85; uint8_t x86 = _subborrow_u32(0x0, x49, 0xfffffec3, &x85);
  { uint32_t x88; uint8_t x89 = _subborrow_u32(x86, x52, 0xffffffff, &x88);
  { uint32_t x91; uint8_t x92 = _subborrow_u32(x89, x55, 0xffffffff, &x91);
  { uint32_t x94; uint8_t x95 = _subborrow_u32(x92, x58, 0xffffffff, &x94);
  { uint32_t x97; uint8_t x98 = _subborrow_u32(x95, x61, 0xffffffff, &x97);
  { uint32_t x100; uint8_t x101 = _subborrow_u32(x98, x64, 0xffffffff, &x100);
  { uint32_t x103; uint8_t x104 = _subborrow_u32(x101, x67, 0xffffffff, &x103);
  { uint32_t x106; uint8_t x107 = _subborrow_u32(x104, x70, 0xffffffff, &x106);
  { uint32_t x109; uint8_t x110 = _subborrow_u32(x107, x73, 0xffffffff, &x109);
  { uint32_t x112; uint8_t x113 = _subborrow_u32(x110, x76, 0xffffffff, &x112);
  { uint32_t x115; uint8_t x116 = _subborrow_u32(x113, x79, 0xffffffff, &x115);
  { uint32_t x118; uint8_t x119 = _subborrow_u32(x116, x82, 0xffffffff, &x118);
  { uint32_t _; uint8_t x122 = _subborrow_u32(x119, x83, 0x0, &_);
  { uint32_t x123 = cmovznz32(x122, x118, x82);
  { uint32_t x124 = cmovznz32(x122, x115, x79);
  { uint32_t x125 = cmovznz32(x122, x112, x76);
  { uint32_t x126 = cmovznz32(x122, x109, x73);
  { uint32_t x127 = cmovznz32(x122, x106, x70);
  { uint32_t x128 = cmovznz32(x122, x103, x67);
  { uint32_t x129 = cmovznz32(x122, x100, x64);
  { uint32_t x130 = cmovznz32(x122, x97, x61);
  { uint32_t x131 = cmovznz32(x122, x94, x58);
  { uint32_t x132 = cmovznz32(x122, x91, x55);
  { uint32_t x133 = cmovznz32(x122, x88, x52);
  { uint32_t x134 = cmovznz32(x122, x85, x49);
  out[0] = x134;
  out[1] = x133;
  out[2] = x132;
  out[3] = x131;
  out[4] = x130;
  out[5] = x129;
  out[6] = x128;
  out[7] = x127;
  out[8] = x126;
  out[9] = x125;
  out[10] = x124;
  out[11] = x123;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
