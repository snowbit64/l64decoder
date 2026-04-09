// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e793c
// Entry Point: 006e793c
// Size: 40 bytes
// Signature: undefined FUN_006e793c(void)


void FUN_006e793c(long param_1)

{
  EngineManager *this;
  
  this = (EngineManager *)EngineManager::getInstance();
  EngineManager::setFrameLimiter(this,*(bool *)param_1,*(float *)(param_1 + 0x10));
  return;
}


