// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_insideAABB
// Entry Point: 00ebd1b4
// Size: 140 bytes
// Signature: undefined __cdecl fm_insideAABB(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_insideAABB(double const*, double const*, double const*) */

undefined8 FLOAT_MATH::fm_insideAABB(double *param_1,double *param_2,double *param_3)

{
  if (*param_1 < *param_2) {
    return 0;
  }
  if (*param_3 < *param_1) {
    return 0;
  }
  if (param_1[1] < param_2[1]) {
    return 0;
  }
  if (param_3[1] < param_1[1]) {
    return 0;
  }
  if (param_1[2] < param_2[2]) {
    return 0;
  }
  if (param_3[2] < param_1[2]) {
    return 0;
  }
  return 1;
}


