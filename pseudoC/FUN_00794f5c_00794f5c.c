// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794f5c
// Entry Point: 00794f5c
// Size: 52 bytes
// Signature: undefined FUN_00794f5c(void)


void FUN_00794f5c(uint *param_1)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueSetLightJointRotationLimitSpring
            (this,*param_1,param_1[4],(float)param_1[8],(float)param_1[0xc]);
  return;
}


