// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bbed4
// Entry Point: 007bbed4
// Size: 52 bytes
// Signature: undefined FUN_007bbed4(void)


void FUN_007bbed4(TyreTrackSystem *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = (float)TyreTrackSystem::createTrack(param_1,*param_2,(int)param_2[4]);
  param_2[0x40] = fVar1;
  param_2[0x42] = 1.401298e-45;
  return;
}


