// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4c6f0
// Entry Point: 00e4c6f0
// Size: 244 bytes
// Signature: undefined FUN_00e4c6f0(void)


ulong FUN_00e4c6f0(uint param_1)

{
  if ((int)param_1 < 0) {
    return 0;
  }
  if (param_1 >> 0xe != 0) {
    if (param_1 >> 0x18 != 0) {
      if (param_1 >> 0x1d == 0) {
        return (ulong)((int)(char)(&DAT_004c5180)[param_1 >> 0x19] + 0x19);
      }
      return (ulong)((int)(char)(&DAT_004c5180)[param_1 >> 0x1e] + 0x1e);
    }
    if (param_1 >> 0x13 == 0) {
      return (ulong)((int)(char)(&DAT_004c5180)[param_1 >> 0xf] + 0xf);
    }
    return (ulong)((int)(char)(&DAT_004c5180)[param_1 >> 0x14] + 0x14);
  }
  if (param_1 < 0x10) {
    return (long)(char)(&DAT_004c5180)[param_1];
  }
  if (param_1 < 0x200) {
    return (ulong)((int)(char)(&DAT_004c5180)[param_1 >> 5] + 5);
  }
  return (ulong)((int)(char)(&DAT_004c5180)[param_1 >> 10] + 10);
}


