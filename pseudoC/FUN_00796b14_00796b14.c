// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796b14
// Entry Point: 00796b14
// Size: 56 bytes
// Signature: undefined FUN_00796b14(void)


void FUN_00796b14(long param_1)

{
  byte bVar1;
  
  EngineManager::getInstance();
  EngineManager::getAchievements();
  bVar1 = AndroidAchievements::hasNativeGUI();
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar1 & 1;
  return;
}


