// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd7d4
// Entry Point: 007bd7d4
// Size: 72 bytes
// Signature: undefined FUN_007bd7d4(void)


void FUN_007bd7d4(PedestrianSystem *param_1,uint *param_2)

{
  EntityRegistryManager *this;
  TransformGroup *pTVar1;
  
  if (*param_2 != 0) {
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    pTVar1 = (TransformGroup *)EntityRegistryManager::getEntityById(this,*param_2);
    PedestrianSystem::setPedestrianSystemAimTarget(param_1,pTVar1);
    return;
  }
  return;
}


