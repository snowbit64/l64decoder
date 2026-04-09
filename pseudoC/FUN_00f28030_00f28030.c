// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f28030
// Entry Point: 00f28030
// Size: 64 bytes
// Signature: undefined FUN_00f28030(void)


bool FUN_00f28030(undefined8 param_1,uint param_2)

{
  if (0xfffffffd < param_2) {
    return true;
  }
  if (0x5f < param_2) {
    return false;
  }
  return param_2 == 0x22 || param_2 - 0x40 < 0xffffffe1;
}


