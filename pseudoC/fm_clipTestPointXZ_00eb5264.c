// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_clipTestPointXZ
// Entry Point: 00eb5264
// Size: 96 bytes
// Signature: undefined __cdecl fm_clipTestPointXZ(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_clipTestPointXZ(float const*, float const*, float const*) */

uint FLOAT_MATH::fm_clipTestPointXZ(float *param_1,float *param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  if (*param_1 <= *param_3) {
    uVar1 = 0;
    if (*param_2 < *param_3) {
      uVar1 = 2;
    }
    fVar3 = param_3[2];
    uVar2 = uVar1;
    if (fVar3 < param_1[2]) goto LAB_00eb52bc;
  }
  else {
    uVar1 = 1;
    fVar3 = param_3[2];
    uVar2 = 1;
    if (fVar3 < param_1[2]) {
LAB_00eb52bc:
      return uVar2 | 0x10;
    }
  }
  if (param_2[2] < fVar3) {
    uVar1 = uVar1 | 0x20;
  }
  return uVar1;
}


