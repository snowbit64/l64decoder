// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00791e00
// Entry Point: 00791e00
// Size: 40 bytes
// Signature: undefined FUN_00791e00(void)


void FUN_00791e00(float *param_1)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::setTimeScale(this,*param_1);
  return;
}


