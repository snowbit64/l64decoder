// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d68a58
// Entry Point: 00d68a58
// Size: 112 bytes
// Signature: undefined FUN_00d68a58(void)


void FUN_00d68a58(undefined8 *param_1,undefined param_2)

{
  char cVar1;
  long *plVar2;
  code **ppcVar3;
  undefined *puVar4;
  long lVar5;
  
  plVar2 = (long *)param_1[5];
  puVar4 = (undefined *)*plVar2;
  *plVar2 = (long)(puVar4 + 1);
  *puVar4 = param_2;
  lVar5 = plVar2[1];
  plVar2[1] = lVar5 + -1;
  if ((lVar5 + -1 == 0) && (cVar1 = (*(code *)plVar2[3])(), cVar1 == '\0')) {
    ppcVar3 = (code **)*param_1;
    *(undefined4 *)(ppcVar3 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x00d68ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**ppcVar3)(param_1);
    return;
  }
  return;
}


