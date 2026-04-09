// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeNormal
// Entry Point: 00eb9198
// Size: 56 bytes
// Signature: undefined __cdecl computeNormal(uint param_1, float * param_2, uint param_3, float * param_4)


/* FLOAT_MATH::computeNormal(unsigned int, float*, unsigned int, float const*) */

void FLOAT_MATH::computeNormal(uint param_1,float *param_2,uint param_3,float *param_4)

{
  float *pfVar1;
  
  pfVar1 = (float *)((long)param_2 + (ulong)(param_3 * param_1));
  *pfVar1 = *param_4 + *pfVar1;
  pfVar1[1] = param_4[1] + pfVar1[1];
  pfVar1[2] = param_4[2] + pfVar1[2];
  return;
}


