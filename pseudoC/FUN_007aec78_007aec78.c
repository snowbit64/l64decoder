// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aec78
// Entry Point: 007aec78
// Size: 68 bytes
// Signature: undefined FUN_007aec78(void)


void FUN_007aec78(TerrainDataPlane *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = (float)TerrainDataPlane::getDensityRegionSumWorld
                           (param_1,*param_2,param_2[4],param_2[8],param_2[0xc],(uint)param_2[0x10],
                            (uint)param_2[0x14]);
  param_2[0x40] = fVar1;
  param_2[0x42] = 1.401298e-45;
  return;
}


