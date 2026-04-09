// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d68558
// Entry Point: 00d68558
// Size: 204 bytes
// Signature: undefined FUN_00d68558(void)


void FUN_00d68558(long *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  code **ppcVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = (undefined8 *)param_1[5];
  puVar4 = (undefined *)*puVar2;
  *puVar2 = puVar4 + 1;
  *puVar4 = 0xff;
  lVar5 = puVar2[1];
  puVar2[1] = lVar5 + -1;
  if ((lVar5 + -1 == 0) && (cVar1 = (*(code *)puVar2[3])(param_1), cVar1 == '\0')) {
    ppcVar3 = (code **)*param_1;
    *(undefined4 *)(ppcVar3 + 5) = 0x19;
    (**ppcVar3)(param_1);
  }
  puVar2 = (undefined8 *)param_1[5];
  puVar4 = (undefined *)*puVar2;
  *puVar2 = puVar4 + 1;
  *puVar4 = 0xd9;
  lVar5 = puVar2[1];
  puVar2[1] = lVar5 + -1;
  if ((lVar5 + -1 == 0) && (cVar1 = (*(code *)puVar2[3])(param_1), cVar1 == '\0')) {
    ppcVar3 = (code **)*param_1;
    *(undefined4 *)(ppcVar3 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x00d68620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**ppcVar3)(param_1);
    return;
  }
  return;
}


