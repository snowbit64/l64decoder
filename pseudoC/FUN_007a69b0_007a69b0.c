// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a69b0
// Entry Point: 007a69b0
// Size: 56 bytes
// Signature: undefined FUN_007a69b0(void)


void FUN_007a69b0(TransformGroup *param_1,uint *param_2)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueUpdateDifferential
            (this,param_1,*param_2,(float)param_2[4],(float)param_2[8]);
  return;
}


