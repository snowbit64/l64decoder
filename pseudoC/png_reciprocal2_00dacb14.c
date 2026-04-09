// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_reciprocal2
// Entry Point: 00dacb14
// Size: 92 bytes
// Signature: undefined png_reciprocal2(void)


int png_reciprocal2(int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  
  if (((param_1 != 0) && (param_2 != 0)) &&
     (dVar1 = (1000000000000000.0 / (double)param_1) / (double)param_2 + 0.5,
     dVar2 = (double)(long)dVar1, dVar2 <= 2147483647.0 && -2147483648.0 <= dVar2)) {
    return (int)dVar1;
  }
  return 0;
}


