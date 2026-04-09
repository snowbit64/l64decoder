// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794f90
// Entry Point: 00794f90
// Size: 48 bytes
// Signature: undefined FUN_00794f90(void)


void FUN_00794f90(uint *param_1)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueSetLightJointRotationLimitForceLimit
            (this,*param_1,param_1[4],(float)param_1[8]);
  return;
}


