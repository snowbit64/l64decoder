// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b2ba4
// Entry Point: 007b2ba4
// Size: 72 bytes
// Signature: undefined FUN_007b2ba4(void)


void FUN_007b2ba4(DensityMapHeightUpdater *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = (float)DensityMapHeightUpdater::getHeightTypeAtWorldLine
                           (param_1,*param_2,param_2[4],param_2[8],param_2[0xc],param_2[0x10],
                            param_2[0x14],param_2[0x18]);
  param_2[0x40] = fVar1;
  param_2[0x42] = 1.401298e-45;
  return;
}


