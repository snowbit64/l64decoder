// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_setTranslation
// Entry Point: 00eb4eb0
// Size: 28 bytes
// Signature: undefined __cdecl fm_setTranslation(float * param_1, float * param_2)


/* FLOAT_MATH::fm_setTranslation(float const*, float*) */

void FLOAT_MATH::fm_setTranslation(float *param_1,float *param_2)

{
  param_2[0xc] = *param_1;
  param_2[0xd] = param_1[1];
  param_2[0xe] = param_1[2];
  return;
}


