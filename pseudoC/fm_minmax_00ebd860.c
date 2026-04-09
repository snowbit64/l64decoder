// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_minmax
// Entry Point: 00ebd860
// Size: 208 bytes
// Signature: undefined __cdecl fm_minmax(double * param_1, double * param_2, double * param_3)


/* FLOAT_MATH::fm_minmax(double const*, double*, double*) */

void FLOAT_MATH::fm_minmax(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  if (*param_1 < *param_2) {
    *param_2 = *param_1;
    dVar1 = param_1[1];
    if (param_2[1] <= dVar1) goto LAB_00ebd880;
LAB_00ebd8d8:
    param_2[1] = dVar1;
    dVar1 = param_1[2];
    if (param_2[2] <= dVar1) goto LAB_00ebd890;
LAB_00ebd8ec:
    param_2[2] = dVar1;
    dVar1 = *param_1;
    if (dVar1 <= *param_3) goto LAB_00ebd8a0;
LAB_00ebd900:
    *param_3 = dVar1;
    dVar1 = param_1[1];
    if (param_3[1] < dVar1) {
LAB_00ebd914:
      param_3[1] = dVar1;
      dVar1 = param_1[2];
      if (dVar1 <= param_3[2]) {
        return;
      }
      goto LAB_00ebd928;
    }
  }
  else {
    dVar1 = param_1[1];
    if (dVar1 < param_2[1]) goto LAB_00ebd8d8;
LAB_00ebd880:
    dVar1 = param_1[2];
    if (dVar1 < param_2[2]) goto LAB_00ebd8ec;
LAB_00ebd890:
    dVar1 = *param_1;
    if (*param_3 < dVar1) goto LAB_00ebd900;
LAB_00ebd8a0:
    dVar1 = param_1[1];
    if (param_3[1] < dVar1) goto LAB_00ebd914;
  }
  dVar1 = param_1[2];
  if (dVar1 <= param_3[2]) {
    return;
  }
LAB_00ebd928:
  param_3[2] = dVar1;
  return;
}


