// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_intersectAABB
// Entry Point: 00ebdcbc
// Size: 152 bytes
// Signature: undefined __cdecl fm_intersectAABB(double * param_1, double * param_2, double * param_3, double * param_4)


/* FLOAT_MATH::fm_intersectAABB(double const*, double const*, double const*, double const*) */

undefined8
FLOAT_MATH::fm_intersectAABB(double *param_1,double *param_2,double *param_3,double *param_4)

{
  if (*param_4 < *param_1) {
    return 0;
  }
  if (*param_2 < *param_3) {
    return 0;
  }
  if (param_4[1] < param_1[1]) {
    return 0;
  }
  if (param_2[1] < param_3[1]) {
    return 0;
  }
  if (param_4[2] < param_1[2]) {
    return 0;
  }
  if (param_2[2] < param_3[2]) {
    return 0;
  }
  return 1;
}


