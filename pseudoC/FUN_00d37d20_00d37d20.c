// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d37d20
// Entry Point: 00d37d20
// Size: 228 bytes
// Signature: undefined FUN_00d37d20(void)


void FUN_00d37d20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  code **ppcVar4;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ppcVar4 = *(code ***)(param_1 + 0x120);
  local_50 = param_2;
  iVar2 = (**ppcVar4)(ppcVar4,param_2,param_3,&local_50);
  while (0 < iVar2) {
    iVar2 = (**ppcVar4)(ppcVar4,local_50,param_3,&local_50);
  }
  if ((*(char *)(param_1 + 0x38c) == '\0') && (iVar2 != 0)) {
    uVar3 = 0;
    *param_4 = param_2;
  }
  else if (iVar2 + 2U < 3) {
    uVar3 = (ulong)(4 - iVar2);
  }
  else {
    uVar3 = FUN_00d32af4(param_1,ppcVar4,param_2,param_3);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


