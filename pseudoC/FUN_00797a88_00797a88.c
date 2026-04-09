// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797a88
// Entry Point: 00797a88
// Size: 436 bytes
// Signature: undefined FUN_00797a88(void)


void FUN_00797a88(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  EntityRegistryManager *pEVar5;
  long lVar6;
  TerrainTransformGroup *pTVar7;
  ulong uVar8;
  BitVector *pBVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pEVar5 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar6 = EntityRegistryManager::getEntityById(pEVar5,*param_1);
  if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x15) >> 5 & 1) != 0)) {
    pEVar5 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    pTVar7 = (TerrainTransformGroup *)EntityRegistryManager::getEntityById(pEVar5,param_1[4]);
    if ((pTVar7 != (TerrainTransformGroup *)0x0) && ((char)pTVar7[0x10] < '\0')) {
      iVar2 = (**(code **)(**(long **)(lVar6 + 0x20) + 0x48))();
      iVar3 = (**(code **)(**(long **)(lVar6 + 0x20) + 0x50))();
      if (iVar2 == iVar3) {
        fVar10 = (float)BaseTerrain::getUnitsPerPixel();
        fVar11 = (float)BaseTerrain::getTerrainHalfSize();
        fVar11 = fVar10 * fVar11;
        uVar8 = (**(code **)(**(long **)(lVar6 + 0x20) + 0x48))();
        iVar2 = BaseTerrain::getHeightMapSize();
        fVar12 = (float)(uVar8 & 0xffffffff) / (fVar10 * (float)(ulong)(iVar2 - 1));
        fVar14 = (fVar11 + (float)param_1[0xc]) * fVar12;
        fVar10 = (fVar11 + (float)param_1[0x10]) * fVar12;
        fVar13 = (float)(int)((fVar11 + (float)param_1[0x14]) * fVar12);
        fVar11 = (float)(int)(fVar12 * (fVar11 + (float)param_1[0x18]));
        if (fVar14 <= 0.0) {
          fVar14 = 0.0;
        }
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        pBVar9 = (BitVector *)(**(code **)(**(long **)(lVar6 + 0x20) + 0x38))();
        uVar1 = param_1[8];
        uVar4 = (**(code **)(**(long **)(lVar6 + 0x20) + 0x48))();
        TerrainCollisionMapUtil::generatePlacementCollisionMap
                  (pBVar9,pTVar7,uVar1,uVar4,(int)fVar14,(int)fVar10,(int)fVar13,(int)fVar11);
        return;
      }
    }
  }
  return;
}


