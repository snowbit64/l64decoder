// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a657c
// Entry Point: 007a657c
// Size: 64 bytes
// Signature: undefined FUN_007a657c(void)


void FUN_007a657c(TransformGroup *param_1,uint *param_2)

{
  Bt2ScenegraphPhysicsContext *this;
  uint uVar1;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  uVar1 = Bt2ScenegraphPhysicsContext::getWheelShapeAxleSpeed(this,param_1,*param_2);
  param_2[0x40] = uVar1;
  param_2[0x42] = 4;
  return;
}


