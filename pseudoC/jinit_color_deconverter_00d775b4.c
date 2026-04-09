// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_color_deconverter
// Entry Point: 00d775b4
// Size: 428 bytes
// Signature: undefined jinit_color_deconverter(void)


void jinit_color_deconverter(long *param_1)

{
  uint uVar1;
  int iVar2;
  code **ppcVar3;
  undefined4 uVar4;
  code **ppcVar5;
  
  ppcVar3 = (code **)(**(code **)param_1[1])(param_1,1,0x38);
  uVar1 = *(uint *)((long)param_1 + 0x3c);
  param_1[0x4d] = (long)ppcVar3;
  *ppcVar3 = FUN_00d77c88;
  if (uVar1 < 8) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0xccU) == 0) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x30U) == 0) {
        if (uVar1 != 1) goto LAB_00d778f8;
        if (*(int *)(param_1 + 7) == 1) goto LAB_00d77640;
      }
      else if (*(int *)(param_1 + 7) == 4) goto LAB_00d77640;
    }
    else if (*(int *)(param_1 + 7) == 3) goto LAB_00d77640;
  }
  else {
LAB_00d778f8:
    if (0 < *(int *)(param_1 + 7)) goto LAB_00d77640;
  }
  ppcVar5 = (code **)*param_1;
  *(undefined4 *)(ppcVar5 + 5) = 0xb;
  (**ppcVar5)(param_1);
LAB_00d77640:
  if ((*(int *)((long)param_1 + 0x16c) == 0) || ((*(uint *)((long)param_1 + 0x3c) | 4) == 6)) {
    iVar2 = *(int *)(param_1 + 8);
  }
  else {
    ppcVar5 = (code **)*param_1;
    *(undefined4 *)(ppcVar5 + 5) = 0x1c;
    (**ppcVar5)(param_1);
    iVar2 = *(int *)(param_1 + 8);
  }
  if (5 < iVar2 - 1U) {
    if (iVar2 == *(int *)((long)param_1 + 0x3c)) {
      *(undefined4 *)((long)param_1 + 0x7c) = *(undefined4 *)(param_1 + 7);
      ppcVar3[1] = FUN_00d78494;
    }
    else {
      ppcVar3 = (code **)*param_1;
      *(undefined4 *)(ppcVar3 + 5) = 0x1c;
      (**ppcVar3)(param_1);
    }
    if (*(char *)((long)param_1 + 0x62) == '\0') {
      uVar4 = *(undefined4 *)((long)param_1 + 0x7c);
    }
    else {
      uVar4 = 1;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d7767c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00d77680 + (ulong)(byte)(&DAT_005487a0)[iVar2 - 1U] * 4))();
  return;
}


