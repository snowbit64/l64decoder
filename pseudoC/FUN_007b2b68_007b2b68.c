// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b2b68
// Entry Point: 007b2b68
// Size: 60 bytes
// Signature: undefined FUN_007b2b68(void)


void FUN_007b2b68(DensityMapHeightUpdater *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = (float)DensityMapHeightUpdater::getHeightTypeAtWorldPos
                           (param_1,*param_2,param_2[4],param_2[8],param_2[0xc]);
  param_2[0x40] = fVar1;
  param_2[0x42] = 1.401298e-45;
  return;
}


