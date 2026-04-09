// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a69e8
// Entry Point: 007a69e8
// Size: 40 bytes
// Signature: undefined FUN_007a69e8(void)


void FUN_007a69e8(TransformGroup *param_1)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueRemoveAllDifferentials(this,param_1);
  return;
}


