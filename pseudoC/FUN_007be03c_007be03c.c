// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007be03c
// Entry Point: 007be03c
// Size: 64 bytes
// Signature: undefined FUN_007be03c(void)


void FUN_007be03c(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)PerlinNoiseUtil::getPerlinNoise2D
                           (*param_1,param_1[4],param_1[8],(uint)param_1[0xc],(int)param_1[0x10]);
  param_1[0x40] = fVar1;
  param_1[0x42] = 5.605194e-45;
  return;
}


