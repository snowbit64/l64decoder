// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794fc0
// Entry Point: 00794fc0
// Size: 56 bytes
// Signature: undefined FUN_00794fc0(void)


void FUN_00794fc0(uint *param_1)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueSetLightJointTranslationLimit
            (this,*param_1,param_1[4],*(bool *)(param_1 + 8),(float)param_1[0xc],
             (float)param_1[0x10]);
  return;
}


