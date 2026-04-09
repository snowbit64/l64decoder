// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007adfc4
// Entry Point: 007adfc4
// Size: 112 bytes
// Signature: undefined FUN_007adfc4(void)


void FUN_007adfc4(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = *param_2;
  uStack_3c = param_2[4];
  local_38 = param_2[8];
  uStack_34 = param_2[0xc];
  local_30 = param_2[0x10];
  uStack_2c = param_2[0x14];
  FUN_0076af70(param_1 + 0x60,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


