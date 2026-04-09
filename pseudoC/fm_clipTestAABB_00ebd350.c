// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_clipTestAABB
// Entry Point: 00ebd350
// Size: 500 bytes
// Signature: undefined __cdecl fm_clipTestAABB(double * param_1, double * param_2, double * param_3, double * param_4, double * param_5, uint * param_6)


/* FLOAT_MATH::fm_clipTestAABB(double const*, double const*, double const*, double const*, double
   const*, unsigned int&) */

uint FLOAT_MATH::fm_clipTestAABB
               (double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
               uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar4 = *param_1;
  if (dVar4 <= *param_3) {
    if (*param_3 <= *param_2) {
      uVar1 = 0;
      dVar6 = param_3[1];
      dVar5 = param_1[1];
      if (dVar5 <= dVar6) goto LAB_00ebd398;
      goto LAB_00ebd3d4;
    }
    uVar1 = 2;
    dVar6 = param_3[1];
    dVar5 = param_1[1];
    if (dVar6 < dVar5) goto LAB_00ebd3d4;
LAB_00ebd398:
    if (param_2[1] < dVar6) {
      uVar1 = uVar1 | 8;
    }
    dVar7 = param_3[2];
    dVar6 = param_1[2];
    if (dVar6 <= dVar7) goto LAB_00ebd3e8;
  }
  else {
    uVar1 = 1;
    dVar6 = param_3[1];
    dVar5 = param_1[1];
    if (dVar5 <= dVar6) goto LAB_00ebd398;
LAB_00ebd3d4:
    uVar1 = uVar1 | 4;
    dVar7 = param_3[2];
    dVar6 = param_1[2];
    if (dVar6 <= dVar7) {
LAB_00ebd3e8:
      if (param_2[2] < dVar7) {
        uVar1 = uVar1 | 0x20;
      }
      goto LAB_00ebd3f8;
    }
  }
  uVar1 = uVar1 | 0x10;
LAB_00ebd3f8:
  if (dVar4 <= *param_4) {
    if (*param_2 < *param_4) {
      uVar2 = 2;
      dVar7 = param_4[1];
    }
    else {
      uVar2 = 0;
      dVar7 = param_4[1];
    }
  }
  else {
    uVar2 = 1;
    dVar7 = param_4[1];
  }
  if (dVar7 < dVar5) {
    uVar2 = uVar2 | 4;
    dVar7 = param_4[2];
  }
  else {
    if (param_2[1] < dVar7) {
      uVar2 = uVar2 | 8;
    }
    dVar7 = param_4[2];
  }
  if (dVar7 < dVar6) {
    uVar2 = uVar2 | 0x10;
  }
  else if (param_2[2] < dVar7) {
    uVar2 = uVar2 | 0x20;
  }
  if (dVar4 <= *param_5) {
    if (*param_5 <= *param_2) {
      uVar3 = 0;
      dVar4 = param_5[1];
    }
    else {
      uVar3 = 2;
      dVar4 = param_5[1];
    }
  }
  else {
    uVar3 = 1;
    dVar4 = param_5[1];
  }
  if (dVar5 <= dVar4) {
    if (param_2[1] < dVar4) {
      uVar3 = uVar3 | 8;
    }
    dVar4 = param_5[2];
  }
  else {
    uVar3 = uVar3 | 4;
    dVar4 = param_5[2];
  }
  if (dVar4 < dVar6) {
    uVar3 = uVar3 | 0x10;
  }
  else if (param_2[2] < dVar4) {
    *param_6 = (uVar3 | 0x20) & uVar2 & uVar1;
    return uVar2 | uVar1 | uVar3 | 0x20;
  }
  *param_6 = uVar3 & uVar2 & uVar1;
  return uVar2 | uVar1 | uVar3;
}


