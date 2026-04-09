// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00791db0
// Entry Point: 00791db0
// Size: 40 bytes
// Signature: undefined FUN_00791db0(void)


void FUN_00791db0(undefined8 param_1)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::setEnableSimulation(this,*(bool *)param_1);
  return;
}


