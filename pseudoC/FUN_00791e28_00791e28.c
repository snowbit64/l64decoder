// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00791e28
// Entry Point: 00791e28
// Size: 104 bytes
// Signature: undefined FUN_00791e28(void)


void FUN_00791e28(uint *param_1)

{
  EntityRegistryManager *this;
  Bt2ScenegraphPhysicsContext *this_00;
  uint uVar1;
  TransformGroup *pTVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar2 = (TransformGroup *)EntityRegistryManager::getEntityById(this,*param_1);
  if (pTVar2 != (TransformGroup *)0x0) {
    ScenegraphPhysicsContextManager::getInstance();
    this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    uVar1 = Bt2ScenegraphPhysicsContext::enqueueCreateCharacterController
                      (this_00,pTVar2,(float)param_1[4],(float)param_1[8],(float)param_1[0xc],
                       (float)param_1[0x10],(float)param_1[0x14],param_1[0x18],(float)param_1[0x1c])
    ;
    param_1[0x40] = uVar1;
    param_1[0x42] = 1;
  }
  return;
}


