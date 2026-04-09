// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796b98
// Entry Point: 00796b98
// Size: 116 bytes
// Signature: undefined FUN_00796b98(void)


void FUN_00796b98(uint *param_1)

{
  long lVar1;
  AndroidAchievements *this;
  uint local_30;
  bool local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  EngineManager::getInstance();
  this = (AndroidAchievements *)EngineManager::getAchievements();
  local_2c[0] = false;
  local_30 = 0;
  AndroidAchievements::getData(this,*param_1,local_2c,&local_30);
  *(bool *)(param_1 + 0x40) = local_2c[0];
  param_1[0x42] = 3;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


