// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bc108
// Entry Point: 007bc108
// Size: 156 bytes
// Signature: undefined FUN_007bc108(void)


void FUN_007bc108(FoliageBendingSystem *param_1,uint *param_2)

{
  long lVar1;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FoliageBendingSystem::getRectangleAttributes
            (param_1,*param_2,&local_2c,&fStack_30,&local_34,&local_38,&local_3c);
  param_2[0x40] = (uint)local_2c;
  param_2[0x42] = 4;
  param_2[0x44] = (uint)fStack_30;
  param_2[0x4c] = (uint)local_38;
  param_2[0x48] = (uint)local_34;
  param_2[0x46] = 4;
  param_2[0x4a] = 4;
  param_2[0x4e] = 4;
  param_2[0x50] = (uint)local_3c;
  param_2[0x52] = 4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


