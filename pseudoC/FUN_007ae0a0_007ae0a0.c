// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ae0a0
// Entry Point: 007ae0a0
// Size: 96 bytes
// Signature: undefined FUN_007ae0a0(void)


void FUN_007ae0a0(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *param_2;
  uStack_34 = param_2[4];
  local_30 = param_2[8];
  FUN_0076adbc(param_1 + 0x10,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


