// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f25cec
// Entry Point: 00f25cec
// Size: 152 bytes
// Signature: undefined FUN_00f25cec(void)


void FUN_00f25cec(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  bVar2 = *(int *)((long)param_2 + 0xc) == 3;
  if (bVar2) {
    lVar3 = FUN_00f10a70(*param_2,auStack_68);
    uVar4 = FUN_00f128c0(param_1,auStack_68,lVar3 - (long)auStack_68);
    *param_2 = uVar4;
    *(undefined4 *)((long)param_2 + 0xc) = 5;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


