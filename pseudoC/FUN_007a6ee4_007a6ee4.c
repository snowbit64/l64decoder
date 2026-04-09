// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a6ee4
// Entry Point: 007a6ee4
// Size: 44 bytes
// Signature: undefined FUN_007a6ee4(void)


void FUN_007a6ee4(TransformGroup *param_1)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueRemoveTransformGroup(this,param_1,true);
  return;
}


