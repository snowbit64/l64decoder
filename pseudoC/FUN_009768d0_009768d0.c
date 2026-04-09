// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_009768d0
// Entry Point: 009768d0
// Size: 488 bytes
// Signature: undefined FUN_009768d0(void)


int FUN_009768d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  dVar6 = (double)param_2[1];
  if ((double)param_1[1] <= dVar6) {
    if (dVar6 <= (double)param_3[1]) {
      iVar2 = 0;
      goto LAB_009769ec;
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
    if ((double)param_2[1] < (double)param_1[1]) {
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
      goto LAB_009769ec;
    }
LAB_009769e8:
    iVar2 = 1;
  }
  else {
    if (dVar6 <= (double)param_3[1]) {
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
      if ((double)param_2[1] <= (double)param_3[1]) goto LAB_009769e8;
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
LAB_009769ec:
  if ((double)param_4[1] < (double)param_3[1]) {
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
    if ((double)param_2[1] <= (double)param_3[1]) {
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
      if ((double)param_1[1] <= (double)param_2[1]) {
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


