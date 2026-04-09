// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00791f00
// Entry Point: 00791f00
// Size: 40 bytes
// Signature: undefined FUN_00791f00(void)


void FUN_00791f00(uint *param_1)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueRemoveCharacterController(this,*param_1);
  return;
}


