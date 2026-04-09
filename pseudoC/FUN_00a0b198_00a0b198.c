// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00a0b198
// Entry Point: 00a0b198
// Size: 488 bytes
// Signature: undefined FUN_00a0b198(void)


int FUN_00a0b198(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  fVar6 = *(float *)(param_2 + 2);
  if (fVar6 <= *(float *)(param_1 + 2)) {
    if (*(float *)(param_3 + 2) <= fVar6) {
      iVar2 = 0;
      goto LAB_00a0b2b4;
    }
    uVar7 = *param_3;
    uVar4 = param_3[2];
    uVar9 = param_2[1];
    uVar8 = *param_2;
    uVar5 = param_2[2];
    param_2[1] = param_3[1];
    *param_2 = uVar7;
    param_2[2] = uVar4;
    param_3[1] = uVar9;
    *param_3 = uVar8;
    param_3[2] = uVar5;
    if (*(float *)(param_1 + 2) < *(float *)(param_2 + 2)) {
      uVar7 = *param_2;
      iVar2 = 2;
      uVar4 = param_2[2];
      uVar9 = param_1[1];
      uVar8 = *param_1;
      uVar5 = param_1[2];
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      param_1[2] = uVar4;
      param_2[1] = uVar9;
      *param_2 = uVar8;
      param_2[2] = uVar5;
      goto LAB_00a0b2b4;
    }
LAB_00a0b2b0:
    iVar2 = 1;
  }
  else {
    if (*(float *)(param_3 + 2) <= fVar6) {
      uVar7 = *param_2;
      uVar4 = param_2[2];
      uVar9 = param_1[1];
      uVar8 = *param_1;
      uVar5 = param_1[2];
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      param_1[2] = uVar4;
      param_2[1] = uVar9;
      *param_2 = uVar8;
      param_2[2] = uVar5;
      if (*(float *)(param_3 + 2) <= *(float *)(param_2 + 2)) goto LAB_00a0b2b0;
      uVar7 = *param_3;
      iVar2 = 2;
      uVar4 = param_3[2];
      uVar9 = param_2[1];
      uVar8 = *param_2;
      uVar5 = param_2[2];
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      param_2[2] = uVar4;
    }
    else {
      uVar7 = *param_3;
      iVar2 = 1;
      uVar4 = param_3[2];
      uVar9 = param_1[1];
      uVar8 = *param_1;
      uVar5 = param_1[2];
      param_1[1] = param_3[1];
      *param_1 = uVar7;
      param_1[2] = uVar4;
    }
    param_3[1] = uVar9;
    *param_3 = uVar8;
    param_3[2] = uVar5;
  }
LAB_00a0b2b4:
  if (*(float *)(param_3 + 2) < *(float *)(param_4 + 2)) {
    uVar7 = *param_4;
    uVar4 = param_4[2];
    uVar9 = param_3[1];
    uVar8 = *param_3;
    uVar5 = param_3[2];
    param_3[1] = param_4[1];
    *param_3 = uVar7;
    param_3[2] = uVar4;
    param_4[1] = uVar9;
    *param_4 = uVar8;
    param_4[2] = uVar5;
    if (*(float *)(param_3 + 2) <= *(float *)(param_2 + 2)) {
      iVar2 = iVar2 + 1;
    }
    else {
      uVar7 = *param_3;
      uVar4 = param_3[2];
      uVar9 = param_2[1];
      uVar8 = *param_2;
      uVar5 = param_2[2];
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      param_2[2] = uVar4;
      param_3[1] = uVar9;
      *param_3 = uVar8;
      param_3[2] = uVar5;
      if (*(float *)(param_2 + 2) <= *(float *)(param_1 + 2)) {
        iVar2 = iVar2 + 2;
      }
      else {
        uVar7 = *param_2;
        iVar2 = iVar2 + 3;
        uVar4 = param_2[2];
        uVar9 = param_1[1];
        uVar8 = *param_1;
        uVar5 = param_1[2];
        param_1[1] = param_2[1];
        *param_1 = uVar7;
        param_1[2] = uVar4;
        param_2[1] = uVar9;
        *param_2 = uVar8;
        param_2[2] = uVar5;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


