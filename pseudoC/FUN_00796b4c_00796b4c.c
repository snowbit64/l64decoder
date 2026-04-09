// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796b4c
// Entry Point: 00796b4c
// Size: 76 bytes
// Signature: undefined FUN_00796b4c(void)


void FUN_00796b4c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  AndroidAchievements *this;
  float fVar3;
  
  uVar1 = param_1[8];
  uVar2 = *param_1;
  fVar3 = (float)(ulong)uVar1;
  if ((float)param_1[4] <= fVar3) {
    fVar3 = (float)param_1[4];
  }
  EngineManager::getInstance();
  this = (AndroidAchievements *)EngineManager::getAchievements();
  AndroidAchievements::setAchievementProgress(this,uVar2,fVar3,uVar1);
  return;
}


