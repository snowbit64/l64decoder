// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a99cc
// Entry Point: 007a99cc
// Size: 128 bytes
// Signature: undefined FUN_007a99cc(void)


void FUN_007a99cc(GsShape *param_1,char **param_2)

{
  long lVar1;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  local_30 = 0;
  GsShape::getCustomShaderParameter(param_1,*param_2,(float *)&local_38);
  *(undefined4 *)(param_2 + 0x20) = (undefined4)local_38;
  *(undefined4 *)(param_2 + 0x22) = local_38._4_4_;
  *(undefined4 *)(param_2 + 0x21) = 4;
  *(undefined4 *)(param_2 + 0x23) = 4;
  *(undefined4 *)(param_2 + 0x24) = (undefined4)local_30;
  *(undefined4 *)(param_2 + 0x25) = 4;
  *(undefined4 *)(param_2 + 0x26) = local_30._4_4_;
  *(undefined4 *)(param_2 + 0x27) = 4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


