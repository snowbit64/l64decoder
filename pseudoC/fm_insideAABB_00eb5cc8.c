// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_insideAABB
// Entry Point: 00eb5cc8
// Size: 152 bytes
// Signature: undefined __cdecl fm_insideAABB(float * param_1, float * param_2, float * param_3, float * param_4)


/* FLOAT_MATH::fm_insideAABB(float const*, float const*, float const*, float const*) */

undefined8 FLOAT_MATH::fm_insideAABB(float *param_1,float *param_2,float *param_3,float *param_4)

{
  if (*param_2 < *param_4) {
    return 0;
  }
  if (param_2[1] < param_4[1]) {
    return 0;
  }
  if (param_2[2] < param_4[2]) {
    return 0;
  }
  if (*param_3 < *param_1) {
    return 0;
  }
  if (param_3[1] < param_1[1]) {
    return 0;
  }
  if (param_3[2] < param_1[2]) {
    return 0;
  }
  return 1;
}


