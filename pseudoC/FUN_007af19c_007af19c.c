// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007af19c
// Entry Point: 007af19c
// Size: 112 bytes
// Signature: undefined FUN_007af19c(void)


void FUN_007af19c(long *param_1,long param_2)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x10))(param_1,&uStack_2c,&local_30);
  *(undefined4 *)(param_2 + 0x100) = uStack_2c;
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x110) = local_30;
  *(undefined4 *)(param_2 + 0x118) = 4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


