// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: worldToDensityMap
// Entry Point: 00a707f8
// Size: 464 bytes
// Signature: undefined __thiscall worldToDensityMap(TerrainDataPlane * this, float param_1, float param_2, float param_3, float param_4, uint * param_5, uint * param_6, uint * param_7, uint * param_8)


/* TerrainDataPlane::worldToDensityMap(float, float, float, float, unsigned int&, unsigned int&,
   unsigned int&, unsigned int&) */

void __thiscall
TerrainDataPlane::worldToDensityMap
          (TerrainDataPlane *this,float param_1,float param_2,float param_3,float param_4,
          uint *param_5,uint *param_6,uint *param_7,uint *param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar6 = (float)BaseTerrain::getUnitsPerPixel();
  fVar7 = (float)BaseTerrain::getTerrainHalfSize();
  fVar13 = *(float *)(this + 0x74);
  fVar8 = (float)BaseTerrain::getUnitsPerPixel();
  fVar9 = (float)BaseTerrain::getTerrainHalfSize();
  fVar12 = *(float *)(this + 0x74);
  fVar10 = (float)BaseTerrain::getUnitsPerPixel();
  fVar11 = (float)BaseTerrain::getTerrainHalfSize();
  uVar3 = (uint)(fVar13 * (param_1 / fVar6 + fVar7));
  uVar4 = (uint)(fVar13 * (param_2 / fVar6 + fVar7));
  uVar5 = (uint)(fVar12 * ((param_1 + param_3) / fVar8 + fVar9));
  fVar6 = *(float *)(this + 0x74) * ((param_2 + param_4) / fVar10 + fVar11);
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = DensityMap::getSquareSize();
    if (iVar1 < (int)uVar3) {
      uVar3 = DensityMap::getSquareSize();
    }
  }
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = DensityMap::getSquareSize();
    if (iVar1 < (int)uVar4) {
      uVar4 = DensityMap::getSquareSize();
    }
  }
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else {
    iVar1 = DensityMap::getSquareSize();
    if (iVar1 < (int)uVar5) {
      uVar5 = DensityMap::getSquareSize();
    }
  }
  if ((int)fVar6 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)fVar6;
    iVar1 = DensityMap::getSquareSize();
    if (iVar1 < (int)uVar2) {
      uVar2 = DensityMap::getSquareSize();
    }
  }
  *param_5 = uVar3;
  *param_6 = uVar4;
  *param_7 = uVar5;
  *param_8 = uVar2;
  return;
}


