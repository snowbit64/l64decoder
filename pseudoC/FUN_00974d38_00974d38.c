// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00974d38
// Entry Point: 00974d38
// Size: 424 bytes
// Signature: undefined FUN_00974d38(void)


undefined8 FUN_00974d38(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)param_2;
  if ((*(int *)param_1 < iVar1) ||
     ((iVar1 == *(int *)param_1 && ((double)param_2[1] < (double)param_1[1])))) {
    if ((iVar1 < *(int *)param_3) ||
       ((*(int *)param_3 == iVar1 && ((double)param_3[1] < (double)param_2[1])))) {
      uVar7 = *param_3;
      uVar4 = 1;
      uVar5 = param_3[2];
      uVar9 = param_1[1];
      uVar8 = *param_1;
      uVar6 = param_1[2];
      param_1[1] = param_3[1];
      *param_1 = uVar7;
      param_1[2] = uVar5;
    }
    else {
      uVar6 = *param_2;
      uVar4 = param_2[2];
      uVar8 = param_1[1];
      uVar7 = *param_1;
      uVar5 = param_1[2];
      param_1[1] = param_2[1];
      *param_1 = uVar6;
      param_1[2] = uVar4;
      param_2[1] = uVar8;
      *param_2 = uVar7;
      param_2[2] = uVar5;
      if ((*(int *)param_3 <= *(int *)param_2) &&
         ((*(int *)param_3 != *(int *)param_2 || ((double)param_2[1] <= (double)param_3[1]))))
      goto LAB_00974eb8;
      uVar7 = *param_3;
      uVar4 = 2;
      uVar5 = param_3[2];
      uVar9 = param_2[1];
      uVar8 = *param_2;
      uVar6 = param_2[2];
      param_2[1] = param_3[1];
      *param_2 = uVar7;
      param_2[2] = uVar5;
    }
    param_3[1] = uVar9;
    *param_3 = uVar8;
    param_3[2] = uVar6;
  }
  else {
    if ((*(int *)param_3 <= iVar1) &&
       ((*(int *)param_3 != iVar1 || ((double)param_2[1] <= (double)param_3[1])))) {
      uVar4 = 0;
      goto LAB_00974ebc;
    }
    uVar6 = *param_3;
    uVar4 = param_3[2];
    uVar8 = param_2[1];
    uVar7 = *param_2;
    uVar5 = param_2[2];
    param_2[1] = param_3[1];
    *param_2 = uVar6;
    param_2[2] = uVar4;
    param_3[1] = uVar8;
    *param_3 = uVar7;
    param_3[2] = uVar5;
    if ((*(int *)param_1 < *(int *)param_2) ||
       ((*(int *)param_2 == *(int *)param_1 && ((double)param_2[1] < (double)param_1[1])))) {
      uVar7 = *param_2;
      uVar4 = 2;
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
      goto LAB_00974ebc;
    }
LAB_00974eb8:
    uVar4 = 1;
  }
LAB_00974ebc:
  if (*(long *)(lVar2 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


