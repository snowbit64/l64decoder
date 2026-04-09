// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007978d0
// Entry Point: 007978d0
// Size: 440 bytes
// Signature: undefined FUN_007978d0(void)


void FUN_007978d0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  EntityRegistryManager *pEVar6;
  long lVar7;
  TerrainTransformGroup *pTVar8;
  ulong uVar9;
  BitVector *pBVar10;
  char *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  pEVar6 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar7 = EntityRegistryManager::getEntityById(pEVar6,*param_1);
  if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x15) >> 5 & 1) != 0)) {
    pEVar6 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    pTVar8 = (TerrainTransformGroup *)EntityRegistryManager::getEntityById(pEVar6,param_1[4]);
    if ((pTVar8 != (TerrainTransformGroup *)0x0) && ((char)pTVar8[0x10] < '\0')) {
      iVar3 = (**(code **)(**(long **)(lVar7 + 0x20) + 0x48))();
      iVar4 = (**(code **)(**(long **)(lVar7 + 0x20) + 0x50))();
      if (iVar3 == iVar4) {
        fVar12 = (float)BaseTerrain::getUnitsPerPixel();
        fVar13 = (float)BaseTerrain::getTerrainHalfSize();
        fVar13 = fVar12 * fVar13;
        uVar9 = (**(code **)(**(long **)(lVar7 + 0x20) + 0x48))();
        iVar3 = BaseTerrain::getHeightMapSize();
        fVar14 = (float)(uVar9 & 0xffffffff) / (fVar12 * (float)(ulong)(iVar3 - 1));
        fVar16 = (fVar13 + (float)param_1[0x14]) * fVar14;
        fVar12 = (fVar13 + (float)param_1[0x18]) * fVar14;
        fVar15 = (float)(int)((fVar13 + (float)param_1[0x1c]) * fVar14);
        fVar13 = (float)(int)(fVar14 * (fVar13 + (float)param_1[0x20]));
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        pBVar10 = (BitVector *)(**(code **)(**(long **)(lVar7 + 0x20) + 0x38))();
        pcVar11 = *(char **)(param_1 + 8);
        uVar1 = param_1[0xc];
        uVar2 = param_1[0x10];
        uVar5 = (**(code **)(**(long **)(lVar7 + 0x20) + 0x48))();
        TerrainCollisionMapUtil::generateTipCollisionMap
                  (pBVar10,pTVar8,pcVar11,uVar1,uVar2,uVar5,(int)fVar16,(int)fVar12,(int)fVar15,
                   (int)fVar13);
      }
    }
  }
  return;
}


