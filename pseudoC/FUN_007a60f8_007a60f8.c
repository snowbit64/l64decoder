// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a60f8
// Entry Point: 007a60f8
// Size: 88 bytes
// Signature: undefined FUN_007a60f8(void)


void FUN_007a60f8(TransformGroup *param_1,uint *param_2)

{
  EntityRegistryManager *this;
  TransformGroup *pTVar1;
  Bt2ScenegraphPhysicsContext *this_00;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar1 = (TransformGroup *)EntityRegistryManager::getEntityById(this,*param_2);
  if ((pTVar1 != (TransformGroup *)0x0) && (((byte)pTVar1[0x10] >> 5 & 1) != 0)) {
    ScenegraphPhysicsContextManager::getInstance();
    this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    Bt2ScenegraphPhysicsContext::enqueueAddVehicleLink(this_00,param_1,pTVar1);
    return;
  }
  return;
}


