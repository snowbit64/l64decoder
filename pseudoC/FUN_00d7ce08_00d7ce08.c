// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d7ce08
// Entry Point: 00d7ce08
// Size: 108 bytes
// Signature: undefined FUN_00d7ce08(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d7ce08(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined auStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x18))(param_1,auStack_f0);
  iVar2 = fprintf(_stderr,"%s\n",auStack_f0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


