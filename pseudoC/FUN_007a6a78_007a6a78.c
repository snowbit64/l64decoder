// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a6a78
// Entry Point: 007a6a78
// Size: 132 bytes
// Signature: undefined FUN_007a6a78(void)


void FUN_007a6a78(TransformGroup *param_1,float *param_2)

{
  uint uVar1;
  Bt2ScenegraphPhysicsContext *this;
  
  uVar1 = (uint)(*(uint3 *)(param_2 + 0x1f) >> 1);
  if ((uint)(*(uint3 *)(param_2 + 0x1b) >> 1) <= (uint)(*(uint3 *)(param_2 + 0x1f) >> 1)) {
    uVar1 = (uint)(*(uint3 *)(param_2 + 0x1b) >> 1);
  }
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueSetMotorProperties
            (this,param_1,*param_2,param_2[4],param_2[8],param_2[0xc],param_2[0x10],param_2[0x14],
             uVar1,*(float **)(param_2 + 0x18),*(float **)(param_2 + 0x1c),true);
  return;
}


