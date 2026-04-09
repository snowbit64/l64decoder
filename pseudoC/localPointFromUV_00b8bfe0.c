// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localPointFromUV
// Entry Point: 00b8bfe0
// Size: 108 bytes
// Signature: undefined __cdecl localPointFromUV(BaseTerrain * param_1, float param_2, float param_3, float * param_4, float * param_5)


/* DensityMapOperationShapes::localPointFromUV(BaseTerrain const*, float, float, float&, float&) */

void DensityMapOperationShapes::localPointFromUV
               (BaseTerrain *param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)BaseTerrain::getTerrainHalfSize();
  fVar2 = (float)BaseTerrain::getUnitsPerPixel();
  fVar1 = fVar1 * fVar2;
  fVar3 = (float)NEON_fnmsub(param_2,fVar1 + fVar1,fVar1);
  fVar2 = (float)NEON_fnmsub(param_3,fVar1 + fVar1,fVar1);
  *param_4 = fVar3;
  *param_5 = fVar2;
  return;
}


