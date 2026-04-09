// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796c44
// Entry Point: 00796c44
// Size: 56 bytes
// Signature: undefined FUN_00796c44(void)


void FUN_00796c44(long param_1)

{
  byte bVar1;
  
  EngineManager::getInstance();
  EngineManager::getAchievements();
  bVar1 = AndroidAchievements::getHaveAchievementsChanged();
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar1 & 1;
  return;
}


