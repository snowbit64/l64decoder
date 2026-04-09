// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ee8a88
// Entry Point: 00ee8a88
// Size: 200 bytes
// Signature: undefined FUN_00ee8a88(void)


undefined8 FUN_00ee8a88(byte *param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_2;
  if (param_2 < 0x80) {
    *param_1 = bVar1;
    return 1;
  }
  if (param_2 < 0x800) {
    *param_1 = (byte)(param_2 >> 6) | 0xc0;
    param_1[1] = bVar1 & 0x3f | 0x80;
    return 2;
  }
  if (param_2 >> 0x10 == 0) {
    *param_1 = (byte)(param_2 >> 0xc) | 0xe0;
    param_1[1] = (byte)(param_2 >> 6) & 0x3f | 0x80;
    param_1[2] = bVar1 & 0x3f | 0x80;
    return 3;
  }
  if (param_2 >> 0x10 < 0x11) {
    *param_1 = (byte)(param_2 >> 0x12) | 0xf0;
    param_1[1] = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
    param_1[2] = (byte)(param_2 >> 6) & 0x3f | 0x80;
    param_1[3] = bVar1 & 0x3f | 0x80;
    return 4;
  }
  return 0;
}


