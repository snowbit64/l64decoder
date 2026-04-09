// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e7e98
// Entry Point: 006e7e98
// Size: 40 bytes
// Signature: undefined FUN_006e7e98(void)


void FUN_006e7e98(char **param_1)

{
  EngineManager *this;
  
  this = (EngineManager *)EngineManager::getInstance();
  EngineManager::setTerrainLoadDirectory(this,*param_1,*(uint *)(param_1 + 2));
  return;
}


