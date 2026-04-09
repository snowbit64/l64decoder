// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cubicRoot
// Entry Point: 00b5ad08
// Size: 84 bytes
// Signature: undefined __cdecl cubicRoot(double param_1)


/* MathUtil::cubicRoot(double) */

undefined  [16] MathUtil::cubicRoot(double param_1)

{
  double dVar1;
  undefined auVar2 [16];
  
  if (param_1 <= 0.0) {
    dVar1 = 0.0;
    if (param_1 < 0.0) {
      dVar1 = pow(-param_1,0.3333333333333333);
      dVar1 = -dVar1;
    }
  }
  else {
    dVar1 = pow(param_1,0.3333333333333333);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar1;
  return auVar2;
}


