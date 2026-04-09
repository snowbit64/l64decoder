// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_multiply
// Entry Point: 00eb8894
// Size: 28 bytes
// Signature: undefined __cdecl fm_multiply(float * param_1, float param_2)


/* FLOAT_MATH::fm_multiply(float*, float) */

void FLOAT_MATH::fm_multiply(float *param_1,float param_2)

{
  *(ulong *)param_1 =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) * param_2,
                (float)*(undefined8 *)param_1 * param_2);
  param_1[2] = param_1[2] * param_2;
  return;
}


