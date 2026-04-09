// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ba940
// Entry Point: 007ba940
// Size: 176 bytes
// Signature: undefined FUN_007ba940(void)


void FUN_007ba940(AnimalHusbandry *param_1,uint *param_2)

{
  EntityRegistryManager *pEVar1;
  TransformGroup *pTVar2;
  TransformGroup *pTVar3;
  TransformGroup *pTVar4;
  TransformGroup *pTVar5;
  
  pEVar1 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar2 = (TransformGroup *)EntityRegistryManager::getEntityById(pEVar1,param_2[4]);
  pEVar1 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar3 = (TransformGroup *)EntityRegistryManager::getEntityById(pEVar1,param_2[8]);
  pEVar1 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar4 = (TransformGroup *)EntityRegistryManager::getEntityById(pEVar1,param_2[0x10]);
  pEVar1 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar5 = (TransformGroup *)EntityRegistryManager::getEntityById(pEVar1,param_2[0x14]);
  if ((((pTVar2 != (TransformGroup *)0x0) && (pTVar3 != (TransformGroup *)0x0)) &&
      (pTVar4 != (TransformGroup *)0x0)) && (pTVar5 != (TransformGroup *)0x0)) {
    AnimalHusbandry::setMilkingPlaceDoors
              (param_1,*param_2,pTVar2,pTVar3,(float)param_2[0xc],pTVar4,pTVar5,(float)param_2[0x18]
              );
    return;
  }
  return;
}


