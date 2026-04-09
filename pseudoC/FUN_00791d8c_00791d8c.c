// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00791d8c
// Entry Point: 00791d8c
// Size: 36 bytes
// Signature: undefined FUN_00791d8c(void)


void FUN_00791d8c(undefined8 param_1)

{
  EngineManager *this;
  
  this = (EngineManager *)EngineManager::getInstance();
  EngineManager::setParticleSystemSimulationEnabled(this,*(bool *)param_1);
  return;
}


