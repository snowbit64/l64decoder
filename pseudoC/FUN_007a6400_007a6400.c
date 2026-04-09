// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a6400
// Entry Point: 007a6400
// Size: 56 bytes
// Signature: undefined FUN_007a6400(void)


void FUN_007a6400(TransformGroup *param_1,uint *param_2)

{
  Bt2ScenegraphPhysicsContext *this;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueSetWheelShapeWidth
            (this,param_1,*param_2,(float)param_2[4],(float)param_2[8]);
  return;
}


