// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e9d60
// Entry Point: 006e9d60
// Size: 132 bytes
// Signature: undefined FUN_006e9d60(void)


void FUN_006e9d60(uint *param_1)

{
  long lVar1;
  AdsBrockerManager *this;
  float local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (AdsBrockerManager *)AdsBrockerManager::getInstance();
  AdsBrockerManager::getOcclusionRegion(this,*param_1,param_1[4],&local_38);
  param_1[0x40] = (uint)local_38;
  param_1[0x44] = uStack_34;
  param_1[0x42] = 4;
  param_1[0x46] = 4;
  param_1[0x48] = local_30;
  param_1[0x4a] = 4;
  param_1[0x4c] = uStack_2c;
  param_1[0x4e] = 4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


