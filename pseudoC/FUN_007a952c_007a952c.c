// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a952c
// Entry Point: 007a952c
// Size: 84 bytes
// Signature: undefined FUN_007a952c(void)


void FUN_007a952c(Camera *param_1,float *param_2)

{
  long lVar1;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *param_2;
  fStack_2c = param_2[4];
  Camera::setProjectionOffset(param_1,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


