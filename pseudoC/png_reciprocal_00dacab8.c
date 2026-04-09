// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_reciprocal
// Entry Point: 00dacab8
// Size: 68 bytes
// Signature: undefined png_reciprocal(void)


int png_reciprocal(int param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = 10000000000.0 / (double)param_1 + 0.5;
  dVar3 = (double)(long)dVar2;
  iVar1 = (int)dVar2;
  if ((dVar3 < -2147483648.0 || 2147483647.0 <= dVar3) &&
      (dVar3 < -2147483648.0 || dVar3 != 2147483647.0)) {
    iVar1 = 0;
  }
  return iVar1;
}


