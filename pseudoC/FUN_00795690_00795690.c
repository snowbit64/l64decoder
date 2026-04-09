// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00795690
// Entry Point: 00795690
// Size: 44 bytes
// Signature: undefined FUN_00795690(void)


void FUN_00795690(uint *param_1)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueSetRopeMaxLength(this,*param_1,(float)param_1[4]);
  return;
}


