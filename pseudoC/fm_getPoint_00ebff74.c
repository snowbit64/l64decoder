// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_getPoint
// Entry Point: 00ebff74
// Size: 12 bytes
// Signature: undefined __cdecl fm_getPoint(double * param_1, uint param_2, uint param_3)


/* FLOAT_MATH::fm_getPoint(double const*, unsigned int, unsigned int) */

long FLOAT_MATH::fm_getPoint(double *param_1,uint param_2,uint param_3)

{
  return (long)param_1 + (ulong)(param_3 * param_2);
}


