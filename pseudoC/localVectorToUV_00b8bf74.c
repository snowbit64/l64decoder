// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localVectorToUV
// Entry Point: 00b8bf74
// Size: 108 bytes
// Signature: undefined __cdecl localVectorToUV(BaseTerrain * param_1, float param_2, float param_3, float * param_4, float * param_5)


/* DensityMapOperationShapes::localVectorToUV(BaseTerrain const*, float, float, float&, float&) */

void DensityMapOperationShapes::localVectorToUV
               (BaseTerrain *param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)BaseTerrain::getTerrainHalfSize();
  fVar2 = (float)BaseTerrain::getUnitsPerPixel();
  fVar1 = fVar1 * fVar2 + fVar1 * fVar2;
  *param_4 = param_2 / fVar1;
  *param_5 = param_3 / fVar1;
  return;
}


