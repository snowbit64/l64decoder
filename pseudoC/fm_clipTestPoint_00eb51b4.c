// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_clipTestPoint
// Entry Point: 00eb51b4
// Size: 176 bytes
// Signature: undefined __cdecl fm_clipTestPoint(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_clipTestPoint(float const*, float const*, float const*) */

uint FLOAT_MATH::fm_clipTestPoint(float *param_1,float *param_2,float *param_3)

{
  uint uVar1;
  float fVar2;
  
  if (*param_1 <= *param_3) {
    if (*param_3 <= *param_2) {
      uVar1 = 0;
      fVar2 = param_3[1];
      if (param_1[1] <= fVar2) goto LAB_00eb5200;
    }
    else {
      uVar1 = 2;
      fVar2 = param_3[1];
      if (param_1[1] <= fVar2) {
LAB_00eb5200:
        if (param_2[1] < fVar2) {
          uVar1 = uVar1 | 8;
        }
        fVar2 = param_3[2];
        if (fVar2 < param_1[2]) goto LAB_00eb5220;
        goto LAB_00eb5250;
      }
    }
  }
  else {
    uVar1 = 1;
    fVar2 = param_3[1];
    if (param_1[1] <= fVar2) goto LAB_00eb5200;
  }
  uVar1 = uVar1 | 4;
  fVar2 = param_3[2];
  if (fVar2 < param_1[2]) {
LAB_00eb5220:
    return uVar1 | 0x10;
  }
LAB_00eb5250:
  if (param_2[2] < fVar2) {
    uVar1 = uVar1 | 0x20;
  }
  return uVar1;
}


