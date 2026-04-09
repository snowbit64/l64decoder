// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00974ee0
// Entry Point: 00974ee0
// Size: 660 bytes
// Signature: undefined FUN_00974ee0(void)


void FUN_00974ee0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00974d38();
  if ((*(int *)param_3 < *(int *)param_4) ||
     ((iVar3 = iVar2, *(int *)param_4 == *(int *)param_3 &&
      ((double)param_4[1] < (double)param_3[1])))) {
    uVar7 = *param_4;
    uVar5 = param_4[2];
    uVar9 = param_3[1];
    uVar8 = *param_3;
    uVar6 = param_3[2];
    param_3[1] = param_4[1];
    *param_3 = uVar7;
    param_3[2] = uVar5;
    param_4[1] = uVar9;
    *param_4 = uVar8;
    param_4[2] = uVar6;
    if ((*(int *)param_2 < *(int *)param_3) ||
       ((iVar3 = iVar2 + 1, *(int *)param_3 == *(int *)param_2 &&
        ((double)param_3[1] < (double)param_2[1])))) {
      uVar7 = *param_3;
      uVar5 = param_3[2];
      uVar9 = param_2[1];
      uVar8 = *param_2;
      uVar6 = param_2[2];
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      param_2[2] = uVar5;
      param_3[1] = uVar9;
      *param_3 = uVar8;
      param_3[2] = uVar6;
      if ((*(int *)param_1 < *(int *)param_2) ||
         ((iVar3 = iVar2 + 2, *(int *)param_2 == *(int *)param_1 &&
          ((double)param_2[1] < (double)param_1[1])))) {
        uVar7 = *param_2;
        uVar5 = param_2[2];
        uVar9 = param_1[1];
        uVar8 = *param_1;
        uVar6 = param_1[2];
        param_1[1] = param_2[1];
        *param_1 = uVar7;
        param_1[2] = uVar5;
        param_2[1] = uVar9;
        *param_2 = uVar8;
        param_2[2] = uVar6;
        iVar3 = iVar2 + 3;
      }
    }
  }
  if ((*(int *)param_4 < *(int *)param_5) ||
     ((iVar2 = iVar3, *(int *)param_5 == *(int *)param_4 &&
      ((double)param_5[1] < (double)param_4[1])))) {
    uVar7 = *param_5;
    uVar5 = param_5[2];
    uVar9 = param_4[1];
    uVar8 = *param_4;
    uVar6 = param_4[2];
    param_4[1] = param_5[1];
    *param_4 = uVar7;
    param_4[2] = uVar5;
    param_5[1] = uVar9;
    *param_5 = uVar8;
    param_5[2] = uVar6;
    if ((*(int *)param_3 < *(int *)param_4) ||
       ((iVar2 = iVar3 + 1, *(int *)param_4 == *(int *)param_3 &&
        ((double)param_4[1] < (double)param_3[1])))) {
      uVar7 = *param_4;
      uVar5 = param_4[2];
      uVar9 = param_3[1];
      uVar8 = *param_3;
      uVar6 = param_3[2];
      param_3[1] = param_4[1];
      *param_3 = uVar7;
      param_3[2] = uVar5;
      param_4[1] = uVar9;
      *param_4 = uVar8;
      param_4[2] = uVar6;
      if ((*(int *)param_2 < *(int *)param_3) ||
         ((iVar2 = iVar3 + 2, *(int *)param_3 == *(int *)param_2 &&
          ((double)param_3[1] < (double)param_2[1])))) {
        uVar7 = *param_3;
        uVar5 = param_3[2];
        uVar9 = param_2[1];
        uVar8 = *param_2;
        uVar6 = param_2[2];
        param_2[1] = param_3[1];
        *param_2 = uVar7;
        param_2[2] = uVar5;
        param_3[1] = uVar9;
        *param_3 = uVar8;
        param_3[2] = uVar6;
        if ((*(int *)param_1 < *(int *)param_2) ||
           ((iVar2 = iVar3 + 3, *(int *)param_2 == *(int *)param_1 &&
            ((double)param_2[1] < (double)param_1[1])))) {
          uVar7 = *param_2;
          uVar5 = param_2[2];
          uVar9 = param_1[1];
          uVar8 = *param_1;
          uVar6 = param_1[2];
          param_1[1] = param_2[1];
          *param_1 = uVar7;
          param_1[2] = uVar5;
          param_2[1] = uVar9;
          *param_2 = uVar8;
          param_2[2] = uVar6;
          iVar2 = iVar3 + 4;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


