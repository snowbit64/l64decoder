// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796aec
// Entry Point: 00796aec
// Size: 40 bytes
// Signature: undefined FUN_00796aec(void)


void FUN_00796aec(char **param_1)

{
  AndroidAchievements *this;
  
  EngineManager::getInstance();
  this = (AndroidAchievements *)EngineManager::getAchievements();
  AndroidAchievements::init(this,*param_1);
  return;
}


