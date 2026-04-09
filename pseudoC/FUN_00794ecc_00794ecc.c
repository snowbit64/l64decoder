// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794ecc
// Entry Point: 00794ecc
// Size: 36 bytes
// Signature: undefined FUN_00794ecc(void)


void FUN_00794ecc(uint *param_1)

{
  EngineManager *this;
  
  this = (EngineManager *)EngineManager::getInstance();
  EngineManager::removeScriptJointBreakCallback(this,*param_1);
  return;
}


