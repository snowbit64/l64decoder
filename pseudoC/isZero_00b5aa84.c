// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isZero
// Entry Point: 00b5aa84
// Size: 16 bytes
// Signature: undefined __cdecl isZero(double param_1, double param_2)


/* MathUtil::isZero(double, double) */

bool MathUtil::isZero(double param_1,double param_2)

{
  return ABS(param_1) < param_2;
}


