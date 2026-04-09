// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00791dd8
// Entry Point: 00791dd8
// Size: 40 bytes
// Signature: undefined FUN_00791dd8(void)


void FUN_00791dd8(float *param_1)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::addExtraSimulationTime(this,*param_1);
  return;
}


