// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b8df4
// Entry Point: 007b8df4
// Size: 120 bytes
// Signature: undefined FUN_007b8df4(void)


void FUN_007b8df4(Vector3 *param_1,float *param_2)

{
  long lVar1;
  float local_38;
  float fStack_34;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  NavigationPath::getPositionAndDirection(*param_2,param_1,(Vector3 *)&local_38);
  param_2[0x40] = local_38;
  param_2[0x42] = 5.605194e-45;
  param_2[0x44] = fStack_34;
  param_2[0x46] = 5.605194e-45;
  param_2[0x48] = local_30;
  param_2[0x4a] = 5.605194e-45;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


