// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd68c
// Entry Point: 007bd68c
// Size: 232 bytes
// Signature: undefined FUN_007bd68c(void)


PedestrianSystem * FUN_007bd68c(char **param_1)

{
  EntityRegistryManager *pEVar1;
  TransformGroup *pTVar2;
  TransformGroup *pTVar3;
  TransformGroup *pTVar4;
  TransformGroup *pTVar5;
  PedestrianSystem *this;
  char *pcVar6;
  
  pEVar1 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar2 = (TransformGroup *)EntityRegistryManager::getEntityById(pEVar1,*(uint *)(param_1 + 2));
  pEVar1 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar3 = (TransformGroup *)EntityRegistryManager::getEntityById(pEVar1,*(uint *)(param_1 + 4));
  pEVar1 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar4 = (TransformGroup *)EntityRegistryManager::getEntityById(pEVar1,*(uint *)(param_1 + 6));
  this = (PedestrianSystem *)0x0;
  if ((((pTVar2 != (TransformGroup *)0x0) && (pTVar3 != (TransformGroup *)0x0)) &&
      (((uint)*(undefined8 *)(pTVar2 + 0x10) >> 5 & 1) != 0)) &&
     ((this = (PedestrianSystem *)0x0, pTVar4 != (TransformGroup *)0x0 &&
      (((uint)*(undefined8 *)(pTVar3 + 0x10) >> 5 & 1) != 0)))) {
    if (((byte)pTVar4[0x10] >> 5 & 1) == 0) {
      this = (PedestrianSystem *)0x0;
    }
    else {
      this = (PedestrianSystem *)operator_new(0x259b0);
      pcVar6 = *param_1;
                    /* try { // try from 007bd720 to 007bd757 has its CatchHandler @ 007bd774 */
      EngineManager::getInstance();
      pTVar5 = (TransformGroup *)Renderer::getRootNode();
      PedestrianSystem::PedestrianSystem
                (this,pcVar6,pTVar2,pTVar3,pTVar4,pTVar5,*(uint *)(param_1 + 8),
                 *(uint *)(param_1 + 10),*(uint *)(param_1 + 0xc));
    }
  }
  return this;
}


