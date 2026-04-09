// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00795468
// Entry Point: 00795468
// Size: 48 bytes
// Signature: undefined FUN_00795468(void)


void FUN_00795468(uint *param_1)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueSetPairCollision
            (this,*param_1,param_1[4],*(bool *)(param_1 + 8));
  return;
}


