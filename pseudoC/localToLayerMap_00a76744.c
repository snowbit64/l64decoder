// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localToLayerMap
// Entry Point: 00a76744
// Size: 200 bytes
// Signature: undefined __thiscall localToLayerMap(TerrainTransformGroup * this, uint param_1, float param_2, float param_3, float * param_4, float * param_5)


/* TerrainTransformGroup::localToLayerMap(unsigned int, float, float, float&, float&) */

void __thiscall
TerrainTransformGroup::localToLayerMap
          (TerrainTransformGroup *this,uint param_1,float param_2,float param_3,float *param_4,
          float *param_5)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)BaseTerrain::getUnitsPerPixel();
  fVar4 = (float)BaseTerrain::getTerrainHalfSize();
  *param_4 = param_2 / fVar3 + fVar4;
  *param_5 = param_3 / fVar3 + fVar4;
  fVar3 = *param_4;
  iVar1 = BaseTerrain::getHeightMapSize();
  uVar2 = BaseTerrain::getLodTextureSize();
  *param_4 = (fVar3 / (float)(ulong)(iVar1 - 1)) * (float)(uVar2 & 0xffffffff);
  fVar3 = *param_5;
  iVar1 = BaseTerrain::getHeightMapSize();
  uVar2 = BaseTerrain::getLodTextureSize();
  *param_5 = (fVar3 / (float)(ulong)(iVar1 - 1)) * (float)(uVar2 & 0xffffffff);
  return;
}


