// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XmlUtf16Encode
// Entry Point: 00d3a460
// Size: 84 bytes
// Signature: undefined XmlUtf16Encode(void)


undefined8 XmlUtf16Encode(uint param_1,ushort *param_2)

{
  if (-1 < (int)param_1) {
    if (param_1 >> 0x10 == 0) {
      *param_2 = (ushort)param_1;
      return 1;
    }
    if (param_1 >> 0x10 < 0x11) {
      param_2[1] = (ushort)param_1 & 0x3ff | 0xdc00;
      *param_2 = (short)(param_1 + 0x3ff0000 >> 10) + 0xd800;
      return 2;
    }
  }
  return 0;
}


