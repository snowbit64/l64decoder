// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computePos
// Entry Point: 00eb918c
// Size: 12 bytes
// Signature: undefined __cdecl computePos(uint param_1, float * param_2, uint param_3)


/* FLOAT_MATH::computePos(unsigned int, float const*, unsigned int) */

long FLOAT_MATH::computePos(uint param_1,float *param_2,uint param_3)

{
  return (long)param_2 + (ulong)(param_3 * param_1);
}


