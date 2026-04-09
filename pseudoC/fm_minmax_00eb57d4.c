// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_minmax
// Entry Point: 00eb57d4
// Size: 208 bytes
// Signature: undefined __cdecl fm_minmax(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_minmax(float const*, float*, float*) */

void FLOAT_MATH::fm_minmax(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  if (*param_1 < *param_2) {
    *param_2 = *param_1;
    fVar1 = param_1[1];
    if (param_2[1] <= fVar1) goto LAB_00eb57f4;
LAB_00eb584c:
    param_2[1] = fVar1;
    fVar1 = param_1[2];
    if (param_2[2] <= fVar1) goto LAB_00eb5804;
LAB_00eb5860:
    param_2[2] = fVar1;
    fVar1 = *param_1;
    if (fVar1 <= *param_3) goto LAB_00eb5814;
LAB_00eb5874:
    *param_3 = fVar1;
    fVar1 = param_1[1];
    if (param_3[1] < fVar1) {
LAB_00eb5888:
      param_3[1] = fVar1;
      fVar1 = param_1[2];
      if (fVar1 <= param_3[2]) {
        return;
      }
      goto LAB_00eb589c;
    }
  }
  else {
    fVar1 = param_1[1];
    if (fVar1 < param_2[1]) goto LAB_00eb584c;
LAB_00eb57f4:
    fVar1 = param_1[2];
    if (fVar1 < param_2[2]) goto LAB_00eb5860;
LAB_00eb5804:
    fVar1 = *param_1;
    if (*param_3 < fVar1) goto LAB_00eb5874;
LAB_00eb5814:
    fVar1 = param_1[1];
    if (param_3[1] < fVar1) goto LAB_00eb5888;
  }
  fVar1 = param_1[2];
  if (fVar1 <= param_3[2]) {
    return;
  }
LAB_00eb589c:
  param_3[2] = fVar1;
  return;
}


