// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4f6c8
// Entry Point: 00e4f6c8
// Size: 60 bytes
// Signature: undefined FUN_00e4f6c8(void)


float FUN_00e4f6c8(uint param_1)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (float)(ulong)(param_1 & 0x1fffff);
  if ((int)param_1 < 0) {
    fVar1 = -(float)(ulong)(param_1 & 0x1fffff);
  }
  dVar2 = ldexp((double)fVar1,(param_1 >> 0x15 & 0x3ff) - 0x314);
  return (float)dVar2;
}


