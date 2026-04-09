// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _float32_unpack
// Entry Point: 00e18694
// Size: 52 bytes
// Signature: undefined _float32_unpack(void)


float _float32_unpack(ulong param_1)

{
  double dVar1;
  
  dVar1 = (double)(param_1 & 0x1fffff);
  if ((param_1 & 0x80000000) != 0) {
    dVar1 = -(double)(param_1 & 0x1fffff);
  }
  dVar1 = ldexp(dVar1,((uint)param_1 >> 0x15 & 0x3ff) - 0x314);
  return (float)dVar1;
}


