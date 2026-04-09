// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007953d0
// Entry Point: 007953d0
// Size: 76 bytes
// Signature: undefined FUN_007953d0(void)


void FUN_007953d0(uint *param_1)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueSetLightJointDriveAxis
            (this,*param_1,true,param_1[4],*(bool *)(param_1 + 8),*(bool *)(param_1 + 0xc),
             (float)param_1[0x10],(float)param_1[0x14],(float)param_1[0x18],(float)param_1[0x1c],
             (float)param_1[0x20]);
  return;
}


