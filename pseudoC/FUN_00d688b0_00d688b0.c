// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d688b0
// Entry Point: 00d688b0
// Size: 424 bytes
// Signature: undefined FUN_00d688b0(void)


void FUN_00d688b0(long *param_1,undefined param_2,uint param_3)

{
  char cVar1;
  code **ppcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  
  if (0xfffd < param_3) {
    ppcVar2 = (code **)*param_1;
    *(undefined4 *)(ppcVar2 + 5) = 0xc;
    (**ppcVar2)(param_1);
  }
  puVar3 = (undefined8 *)param_1[5];
  puVar5 = (undefined *)*puVar3;
  *puVar3 = puVar5 + 1;
  *puVar5 = 0xff;
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + -1;
  if ((lVar6 + -1 == 0) && (cVar1 = (*(code *)puVar3[3])(param_1), cVar1 == '\0')) {
    ppcVar2 = (code **)*param_1;
    *(undefined4 *)(ppcVar2 + 5) = 0x19;
    (**ppcVar2)(param_1);
  }
  plVar4 = (long *)param_1[5];
  puVar5 = (undefined *)*plVar4;
  *plVar4 = (long)(puVar5 + 1);
  *puVar5 = param_2;
  lVar6 = plVar4[1];
  plVar4[1] = lVar6 + -1;
  if ((lVar6 + -1 == 0) && (cVar1 = (*(code *)plVar4[3])(param_1), cVar1 == '\0')) {
    ppcVar2 = (code **)*param_1;
    *(undefined4 *)(ppcVar2 + 5) = 0x19;
    (**ppcVar2)(param_1);
  }
  plVar4 = (long *)param_1[5];
  puVar5 = (undefined *)*plVar4;
  *plVar4 = (long)(puVar5 + 1);
  *puVar5 = (char)(param_3 + 2 >> 8);
  lVar6 = plVar4[1];
  plVar4[1] = lVar6 + -1;
  if ((lVar6 + -1 == 0) && (cVar1 = (*(code *)plVar4[3])(param_1), cVar1 == '\0')) {
    ppcVar2 = (code **)*param_1;
    *(undefined4 *)(ppcVar2 + 5) = 0x19;
    (**ppcVar2)(param_1);
  }
  plVar4 = (long *)param_1[5];
  puVar5 = (undefined *)*plVar4;
  *plVar4 = (long)(puVar5 + 1);
  *puVar5 = (char)(param_3 + 2);
  lVar6 = plVar4[1];
  plVar4[1] = lVar6 + -1;
  if ((lVar6 + -1 == 0) && (cVar1 = (*(code *)plVar4[3])(param_1), cVar1 == '\0')) {
    ppcVar2 = (code **)*param_1;
    *(undefined4 *)(ppcVar2 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x00d68a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**ppcVar2)(param_1);
    return;
  }
  return;
}


