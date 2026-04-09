// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b768c
// Entry Point: 007b768c
// Size: 104 bytes
// Signature: undefined FUN_007b768c(void)


void FUN_007b768c(long param_1,float *param_2)

{
  Precipitation *this;
  long lVar1;
  float local_34;
  float fStack_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_34 = *param_2;
  this = (Precipitation *)0x0;
  if (param_1 != 0) {
    this = (Precipitation *)(param_1 + -0x10);
  }
  fStack_30 = param_2[4];
  local_2c = param_2[8];
  Precipitation::setWindVelocity(this,&local_34);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


