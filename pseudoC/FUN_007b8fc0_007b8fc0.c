// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b8fc0
// Entry Point: 007b8fc0
// Size: 116 bytes
// Signature: undefined FUN_007b8fc0(void)


void FUN_007b8fc0(NavigationPath *param_1,uint *param_2)

{
  long lVar1;
  uint local_38;
  uint uStack_34;
  uint local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  NavigationPath::getWaypoint(param_1,*param_2,(Vector3 *)&local_38);
  param_2[0x40] = local_38;
  param_2[0x42] = 4;
  param_2[0x44] = uStack_34;
  param_2[0x46] = 4;
  param_2[0x48] = local_30;
  param_2[0x4a] = 4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


