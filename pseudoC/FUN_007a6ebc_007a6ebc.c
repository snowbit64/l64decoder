// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a6ebc
// Entry Point: 007a6ebc
// Size: 40 bytes
// Signature: undefined FUN_007a6ebc(void)


void FUN_007a6ebc(TransformGroup *param_1)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup(this,param_1);
  return;
}


