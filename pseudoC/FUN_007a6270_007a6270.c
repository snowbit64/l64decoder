// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a6270
// Entry Point: 007a6270
// Size: 64 bytes
// Signature: undefined FUN_007a6270(void)


void FUN_007a6270(TransformGroup *param_1,uint *param_2)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueControlWheelShape
            (this,param_1,*param_2,(float)param_2[4],(float)param_2[8],(float)param_2[0xc],
             (float)param_2[0x10]);
  return;
}


