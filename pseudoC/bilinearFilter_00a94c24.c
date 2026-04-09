// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bilinearFilter
// Entry Point: 00a94c24
// Size: 28 bytes
// Signature: undefined __cdecl bilinearFilter(double param_1)


/* ImageScale::bilinearFilter(double) */

undefined  [16] ImageScale::bilinearFilter(double param_1)

{
  undefined auVar1 [16];
  double dVar2;
  
  dVar2 = 1.0 - ABS(param_1);
  if (1.0 <= ABS(param_1)) {
    dVar2 = 0.0;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar2;
  return auVar1;
}


