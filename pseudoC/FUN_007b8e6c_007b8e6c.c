// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b8e6c
// Entry Point: 007b8e6c
// Size: 116 bytes
// Signature: undefined FUN_007b8e6c(void)


void FUN_007b8e6c(Vector3 *param_1,float *param_2)

{
  long lVar1;
  long lVar2;
  float local_38;
  float fStack_34;
  float local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  NavigationPath::getOrientation(*param_2,param_1);
  param_2[0x40] = local_38;
  param_2[0x42] = 5.605194e-45;
  param_2[0x44] = fStack_34;
  param_2[0x46] = 5.605194e-45;
  param_2[0x48] = local_30;
  param_2[0x4a] = 5.605194e-45;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


