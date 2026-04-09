// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_color_converter
// Entry Point: 00d60c6c
// Size: 364 bytes
// Signature: undefined jinit_color_converter(void)


void jinit_color_converter(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  code **ppcVar3;
  code **ppcVar4;
  
  ppcVar3 = (code **)(**(code **)param_1[1])(param_1,1,0x18);
  uVar1 = *(undefined4 *)((long)param_1 + 0x3c);
  param_1[0x41] = (long)ppcVar3;
  *ppcVar3 = FUN_00d6103c;
  switch(uVar1) {
  case 1:
    if (*(int *)(param_1 + 7) == 1) goto LAB_00d60cf0;
    break;
  case 2:
  case 3:
  case 6:
  case 7:
    if (*(int *)(param_1 + 7) == 3) goto LAB_00d60cf0;
    break;
  case 4:
  case 5:
    if (*(int *)(param_1 + 7) == 4) goto LAB_00d60cf0;
    break;
  default:
    if (0 < *(int *)(param_1 + 7)) goto LAB_00d60cf0;
  }
  ppcVar4 = (code **)*param_1;
  *(undefined4 *)(ppcVar4 + 5) = 10;
  (**ppcVar4)(param_1);
LAB_00d60cf0:
  if ((*(int *)((long)param_1 + 0x144) == 0) || ((*(uint *)(param_1 + 0xc) | 4) == 6)) {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  else {
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(ppcVar4 + 5) = 0x1c;
    (**ppcVar4)(param_1);
    iVar2 = *(int *)(param_1 + 0xc);
  }
  if (iVar2 - 1U < 7) {
                    /* WARNING: Could not recover jumptable at 0x00d60d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_00d60d30 + (ulong)(byte)(&DAT_00548127)[iVar2 - 1U] * 4))();
    return;
  }
  if ((iVar2 != *(int *)((long)param_1 + 0x3c)) ||
     (*(int *)((long)param_1 + 0x5c) != *(int *)(param_1 + 7))) {
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(ppcVar4 + 5) = 0x1c;
    (**ppcVar4)(param_1);
  }
  ppcVar3[1] = FUN_00d61744;
  return;
}


