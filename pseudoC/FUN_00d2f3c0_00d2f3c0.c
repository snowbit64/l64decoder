// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d2f3c0
// Entry Point: 00d2f3c0
// Size: 168 bytes
// Signature: undefined FUN_00d2f3c0(void)


void FUN_00d2f3c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = (***(code ***)(param_1 + 0x120))();
  FUN_00d2f468(param_1,*(undefined8 *)(param_1 + 0x120),param_2,param_3,uVar2,param_2,param_4,
               *(char *)(param_1 + 0x38c) == '\0',1);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


