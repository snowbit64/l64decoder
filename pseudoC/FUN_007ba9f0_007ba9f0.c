// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ba9f0
// Entry Point: 007ba9f0
// Size: 100 bytes
// Signature: undefined FUN_007ba9f0(void)


void FUN_007ba9f0(AnimalHusbandry *param_1,float *param_2)

{
  long lVar1;
  float local_34;
  float fStack_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_34 = *param_2;
  fStack_30 = param_2[4];
  local_2c = param_2[8];
  AnimalHusbandry::reportThreat(param_1,&local_34,param_2[0xc],(uint)param_2[0x10]);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


