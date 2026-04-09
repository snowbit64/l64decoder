// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bbe04
// Entry Point: 007bbe04
// Size: 188 bytes
// Signature: undefined FUN_007bbe04(void)


TyreTrackSystem * FUN_007bbe04(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  EntityRegistryManager *pEVar3;
  TransformGroup *pTVar4;
  GsShape *pGVar5;
  TerrainTransformGroup *pTVar6;
  TyreTrackSystem *this;
  
  pEVar3 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar4 = (TransformGroup *)EntityRegistryManager::getEntityById(pEVar3,*param_1);
  pEVar3 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pGVar5 = (GsShape *)EntityRegistryManager::getEntityById(pEVar3,param_1[4]);
  pEVar3 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar6 = (TerrainTransformGroup *)EntityRegistryManager::getEntityById(pEVar3,param_1[0x10]);
  this = (TyreTrackSystem *)0x0;
  if (((pTVar4 != (TransformGroup *)0x0) && (pGVar5 != (GsShape *)0x0)) &&
     (pTVar6 != (TerrainTransformGroup *)0x0)) {
    if (((((byte)pTVar4[0x10] >> 5 & 1) == 0) || (((byte)pGVar5[0x11] >> 3 & 1) == 0)) ||
       (-1 < (char)pTVar6[0x10])) {
      this = (TyreTrackSystem *)0x0;
    }
    else {
      uVar1 = param_1[8];
      uVar2 = param_1[0xc];
      this = (TyreTrackSystem *)operator_new(0x30);
                    /* try { // try from 007bbea4 to 007bbebb has its CatchHandler @ 007bbec0 */
      TyreTrackSystem::TyreTrackSystem(this,pTVar4,pGVar5,pTVar6,uVar1,uVar2);
    }
  }
  return this;
}


