// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_identity
// Entry Point: 00eb3d4c
// Size: 44 bytes
// Signature: undefined __cdecl fm_identity(float * param_1)


/* FLOAT_MATH::fm_identity(float*) */

void FLOAT_MATH::fm_identity(float *param_1)

{
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 1.0;
  param_1[5] = 1.0;
  param_1[10] = 1.0;
  param_1[0xf] = 1.0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  return;
}


