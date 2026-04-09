// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localDirToDensityMap
// Entry Point: 00a70a60
// Size: 120 bytes
// Signature: undefined __thiscall localDirToDensityMap(TerrainDataPlane * this, float param_1, float param_2, float * param_3, float * param_4)


/* TerrainDataPlane::localDirToDensityMap(float, float, float&, float&) */

void __thiscall
TerrainDataPlane::localDirToDensityMap
          (TerrainDataPlane *this,float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  
  fVar1 = (float)BaseTerrain::getUnitsPerPixel();
  *param_3 = param_1 / fVar1;
  *param_4 = param_2 / fVar1;
  *param_3 = *(float *)(this + 0x74) * *param_3;
  *param_4 = *(float *)(this + 0x74) * *param_4;
  return;
}


