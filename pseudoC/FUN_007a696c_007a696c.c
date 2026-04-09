// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a696c
// Entry Point: 007a696c
// Size: 68 bytes
// Signature: undefined FUN_007a696c(void)


void FUN_007a696c(TransformGroup *param_1,uint *param_2)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueAddDifferential
            (this,param_1,*param_2,*(bool *)(param_2 + 4),param_2[8],*(bool *)(param_2 + 0xc),
             (float)param_2[0x10],(float)param_2[0x14]);
  return;
}


