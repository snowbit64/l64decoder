// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079502c
// Entry Point: 0079502c
// Size: 48 bytes
// Signature: undefined FUN_0079502c(void)


void FUN_0079502c(uint *param_1)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueSetLightJointTranslationLimitForceLimit
            (this,*param_1,param_1[4],(float)param_1[8]);
  return;
}


