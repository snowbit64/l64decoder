// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_clipTestAABB
// Entry Point: 00eb52c4
// Size: 500 bytes
// Signature: undefined __cdecl fm_clipTestAABB(float * param_1, float * param_2, float * param_3, float * param_4, float * param_5, uint * param_6)


/* FLOAT_MATH::fm_clipTestAABB(float const*, float const*, float const*, float const*, float const*,
   unsigned int&) */

uint FLOAT_MATH::fm_clipTestAABB
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
               uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *param_1;
  if (fVar4 <= *param_3) {
    if (*param_3 <= *param_2) {
      uVar1 = 0;
      fVar6 = param_3[1];
      fVar5 = param_1[1];
      if (fVar5 <= fVar6) goto LAB_00eb530c;
      goto LAB_00eb5348;
    }
    uVar1 = 2;
    fVar6 = param_3[1];
    fVar5 = param_1[1];
    if (fVar6 < fVar5) goto LAB_00eb5348;
LAB_00eb530c:
    if (param_2[1] < fVar6) {
      uVar1 = uVar1 | 8;
    }
    fVar7 = param_3[2];
    fVar6 = param_1[2];
    if (fVar6 <= fVar7) goto LAB_00eb535c;
  }
  else {
    uVar1 = 1;
    fVar6 = param_3[1];
    fVar5 = param_1[1];
    if (fVar5 <= fVar6) goto LAB_00eb530c;
LAB_00eb5348:
    uVar1 = uVar1 | 4;
    fVar7 = param_3[2];
    fVar6 = param_1[2];
    if (fVar6 <= fVar7) {
LAB_00eb535c:
      if (param_2[2] < fVar7) {
        uVar1 = uVar1 | 0x20;
      }
      goto LAB_00eb536c;
    }
  }
  uVar1 = uVar1 | 0x10;
LAB_00eb536c:
  if (fVar4 <= *param_4) {
    if (*param_2 < *param_4) {
      uVar2 = 2;
      fVar7 = param_4[1];
    }
    else {
      uVar2 = 0;
      fVar7 = param_4[1];
    }
  }
  else {
    uVar2 = 1;
    fVar7 = param_4[1];
  }
  if (fVar7 < fVar5) {
    uVar2 = uVar2 | 4;
    fVar7 = param_4[2];
  }
  else {
    if (param_2[1] < fVar7) {
      uVar2 = uVar2 | 8;
    }
    fVar7 = param_4[2];
  }
  if (fVar7 < fVar6) {
    uVar2 = uVar2 | 0x10;
  }
  else if (param_2[2] < fVar7) {
    uVar2 = uVar2 | 0x20;
  }
  if (fVar4 <= *param_5) {
    if (*param_5 <= *param_2) {
      uVar3 = 0;
      fVar4 = param_5[1];
    }
    else {
      uVar3 = 2;
      fVar4 = param_5[1];
    }
  }
  else {
    uVar3 = 1;
    fVar4 = param_5[1];
  }
  if (fVar5 <= fVar4) {
    if (param_2[1] < fVar4) {
      uVar3 = uVar3 | 8;
    }
    fVar4 = param_5[2];
  }
  else {
    uVar3 = uVar3 | 4;
    fVar4 = param_5[2];
  }
  if (fVar4 < fVar6) {
    uVar3 = uVar3 | 0x10;
  }
  else if (param_2[2] < fVar4) {
    *param_6 = (uVar3 | 0x20) & uVar2 & uVar1;
    return uVar2 | uVar1 | uVar3 | 0x20;
  }
  *param_6 = uVar3 & uVar2 & uVar1;
  return uVar2 | uVar1 | uVar3;
}


