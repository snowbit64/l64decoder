// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00795668
// Entry Point: 00795668
// Size: 40 bytes
// Signature: undefined FUN_00795668(void)


void FUN_00795668(uint *param_1)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueRemoveRope(this,*param_1);
  return;
}


