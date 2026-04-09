// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localVectorFromUV
// Entry Point: 00b8c04c
// Size: 108 bytes
// Signature: undefined __cdecl localVectorFromUV(BaseTerrain * param_1, float param_2, float param_3, float * param_4, float * param_5)


/* DensityMapOperationShapes::localVectorFromUV(BaseTerrain const*, float, float, float&, float&) */

void DensityMapOperationShapes::localVectorFromUV
               (BaseTerrain *param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)BaseTerrain::getTerrainHalfSize();
  fVar2 = (float)BaseTerrain::getUnitsPerPixel();
  fVar1 = fVar1 * fVar2 + fVar1 * fVar2;
  *param_4 = fVar1 * param_2;
  *param_5 = fVar1 * param_3;
  return;
}


