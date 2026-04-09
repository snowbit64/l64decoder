// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f4b5a0
// Entry Point: 00f4b5a0
// Size: 132 bytes
// Signature: undefined FUN_00f4b5a0(void)


void FUN_00f4b5a0(long param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_34 = *(undefined4 *)(param_1 + 0x28);
  local_30 = 0;
  local_38 = 0xffffffff;
  if (*(long *)(param_2 + 8) == 0) {
    *(undefined4 **)(param_2 + 8) = &local_38;
  }
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),param_2,param_3 & 1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(long *)(param_1 + 0x20) + 8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


