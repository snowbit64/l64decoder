// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localToDensityMap
// Entry Point: 00a709c8
// Size: 152 bytes
// Signature: undefined __thiscall localToDensityMap(TerrainDataPlane * this, float param_1, float param_2, float * param_3, float * param_4)


/* TerrainDataPlane::localToDensityMap(float, float, float&, float&) */

void __thiscall
TerrainDataPlane::localToDensityMap
          (TerrainDataPlane *this,float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)BaseTerrain::getUnitsPerPixel();
  fVar2 = (float)BaseTerrain::getTerrainHalfSize();
  *param_3 = param_1 / fVar1 + fVar2;
  *param_4 = param_2 / fVar1 + fVar2;
  *param_3 = *(float *)(this + 0x74) * *param_3;
  *param_4 = *(float *)(this + 0x74) * *param_4;
  return;
}


