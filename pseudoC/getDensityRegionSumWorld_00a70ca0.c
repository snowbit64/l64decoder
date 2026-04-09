// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDensityRegionSumWorld
// Entry Point: 00a70ca0
// Size: 464 bytes
// Signature: undefined __thiscall getDensityRegionSumWorld(TerrainDataPlane * this, float param_1, float param_2, float param_3, float param_4, uint param_5, uint param_6)


/* TerrainDataPlane::getDensityRegionSumWorld(float, float, float, float, unsigned int, unsigned
   int) */

undefined4 __thiscall
TerrainDataPlane::getDensityRegionSumWorld
          (TerrainDataPlane *this,float param_1,float param_2,float param_3,float param_4,
          uint param_5,uint param_6)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  OPERATION OVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined **local_c0 [6];
  undefined4 local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  fVar6 = (float)BaseTerrain::getUnitsPerPixel();
  fVar7 = (float)BaseTerrain::getTerrainHalfSize();
  fVar13 = *(float *)(this + 0x74);
  fVar8 = (float)BaseTerrain::getUnitsPerPixel();
  fVar9 = (float)BaseTerrain::getTerrainHalfSize();
  fVar10 = *(float *)(this + 0x74);
  fVar11 = (float)BaseTerrain::getUnitsPerPixel();
  fVar12 = (float)BaseTerrain::getTerrainHalfSize();
  fVar14 = *(float *)(this + 0x74);
  DensityMapModifier::DensityMapModifier
            ((DensityMapModifier *)local_c0,*(DensityMap **)(this + 0x50));
  local_c0[0] = &PTR__DensityMapModifier_00fdba88;
                    /* try { // try from 00a70d7c to 00a70d83 has its CatchHandler @ 00a70e74 */
  local_90 = DensityMap::getPolygonRoundingMode();
  OVar5 = *(OPERATION *)(this + 0x84);
  if (OVar5 != 2) {
    OVar5 = (OPERATION)(OVar5 == 1);
  }
  iVar3 = (int)((param_1 / fVar6 + fVar7) * fVar13 + 0.5);
  iVar4 = (int)((param_2 / fVar6 + fVar7) * fVar13 + 0.5);
                    /* try { // try from 00a70e14 to 00a70e23 has its CatchHandler @ 00a70e70 */
  uVar2 = DensityMapOldOperations::getDensityRegionSum
                    ((DensityMapOldOperations *)local_c0,iVar3,iVar4,
                     (int)(((param_1 + param_3) / fVar8 + fVar9) * fVar10 + 0.5) - iVar3,
                     (int)(((param_2 + param_4) / fVar11 + fVar12) * fVar14 + 0.5) - iVar4,
                     *(int *)(this + 0x7c) + param_5,param_6,OVar5,*(uint *)(this + 0x80));
  DensityMapModifier::~DensityMapModifier((DensityMapModifier *)local_c0);
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


