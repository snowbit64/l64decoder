// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_getSubMatrix
// Entry Point: 00ebb3d0
// Size: 496 bytes
// Signature: undefined __cdecl fm_getSubMatrix(int param_1, int param_2, double * param_3, double * param_4)


/* FLOAT_MATH::fm_getSubMatrix(int, int, double*, double const*) */

void FLOAT_MATH::fm_getSubMatrix(int param_1,int param_2,double *param_3,double *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    iVar2 = 0;
LAB_00ebb430:
    uVar1 = iVar2 << 2;
    if (param_1 == 0) {
      param_3[uVar1] = param_4[5];
LAB_00ebb46c:
      uVar4 = 2;
      param_3[uVar1 | 1] = param_4[6];
LAB_00ebb47c:
      param_3[uVar4 | uVar1] = param_4[7];
    }
    else {
      param_3[uVar1] = param_4[4];
      if (param_1 == 1) goto LAB_00ebb46c;
      param_3[uVar1 | 1] = param_4[5];
      if (param_1 == 2) {
        uVar4 = 2;
        goto LAB_00ebb47c;
      }
      param_3[uVar1 | 2] = param_4[6];
      if (param_1 != 3) {
        uVar4 = 3;
        goto LAB_00ebb47c;
      }
    }
    iVar2 = iVar2 + 1;
    if (param_2 != 2) goto LAB_00ebb494;
  }
  else {
    if (param_1 == 0) {
      *param_3 = param_4[1];
LAB_00ebb410:
      lVar3 = 2;
      param_3[1] = param_4[2];
LAB_00ebb41c:
      param_3[lVar3] = param_4[3];
    }
    else {
      *param_3 = *param_4;
      if (param_1 == 1) goto LAB_00ebb410;
      param_3[1] = param_4[1];
      if (param_1 == 2) {
        lVar3 = 2;
        goto LAB_00ebb41c;
      }
      param_3[2] = param_4[2];
      if (param_1 != 3) {
        lVar3 = 3;
        goto LAB_00ebb41c;
      }
    }
    iVar2 = 1;
    if (param_2 != 1) goto LAB_00ebb430;
LAB_00ebb494:
    uVar1 = iVar2 << 2;
    if (param_1 == 0) {
      param_3[uVar1] = param_4[9];
LAB_00ebb4d0:
      uVar4 = 2;
      param_3[uVar1 | 1] = param_4[10];
LAB_00ebb4e0:
      param_3[uVar4 | uVar1] = param_4[0xb];
    }
    else {
      param_3[uVar1] = param_4[8];
      if (param_1 == 1) goto LAB_00ebb4d0;
      param_3[uVar1 | 1] = param_4[9];
      if (param_1 == 2) {
        uVar4 = 2;
        goto LAB_00ebb4e0;
      }
      param_3[uVar1 | 2] = param_4[10];
      if (param_1 != 3) {
        uVar4 = 3;
        goto LAB_00ebb4e0;
      }
    }
    if (param_2 == 3) {
      return;
    }
    iVar2 = iVar2 + 1;
  }
  uVar1 = iVar2 << 2;
  if (param_1 == 0) {
    param_3[uVar1] = param_4[0xd];
  }
  else {
    param_3[uVar1] = param_4[0xc];
    if (param_1 != 1) {
      param_3[uVar1 | 1] = param_4[0xd];
      if (param_1 == 2) {
        uVar4 = 2;
      }
      else {
        param_3[uVar1 | 2] = param_4[0xe];
        if (param_1 == 3) {
          return;
        }
        uVar4 = 3;
      }
      goto LAB_00ebb544;
    }
  }
  uVar4 = 2;
  param_3[uVar1 | 1] = param_4[0xe];
LAB_00ebb544:
  param_3[uVar4 | uVar1] = param_4[0xf];
  return;
}


