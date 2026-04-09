// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd8f8
// Entry Point: 007bd8f8
// Size: 84 bytes
// Signature: undefined FUN_007bd8f8(void)


void FUN_007bd8f8(PedestrianSystem *param_1,uint *param_2)

{
  EntityRegistryManager *this;
  TrafficSystem *pTVar1;
  
  if (*param_2 != 0) {
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    pTVar1 = (TrafficSystem *)EntityRegistryManager::getEntityById(this,*param_2);
    if ((pTVar1 != (TrafficSystem *)0x0) && (((byte)pTVar1[0x13] >> 4 & 1) != 0)) {
      PedestrianSystem::linkTrafficSystem(param_1,pTVar1);
      return;
    }
  }
  return;
}


