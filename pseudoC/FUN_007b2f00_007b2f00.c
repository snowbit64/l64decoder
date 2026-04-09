// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b2f00
// Entry Point: 007b2f00
// Size: 132 bytes
// Signature: undefined FUN_007b2f00(void)


void FUN_007b2f00(DensityMapHeightUpdater *param_1,float *param_2)

{
  OcclusionArea *pOVar1;
  OcclusionArea *pOVar2;
  float fVar3;
  
  pOVar1 = (OcclusionArea *)0x0;
  if ((long)DAT_01065bc8 - (long)DAT_01065bc0 != 0) {
    pOVar1 = DAT_01065bc0;
  }
  fVar3 = (float)DensityMapHeightUpdater::smoothHeightAtWorldPos
                           (param_1,*param_2,param_2[4],param_2[8],param_2[0xc],(uint)param_2[0x10],
                            param_2[0x14],param_2[0x18],param_2[0x1c],
                            (int)((ulong)((long)DAT_01065bc8 - (long)DAT_01065bc0) >> 3) *
                            -0x33333333,pOVar1);
  pOVar2 = DAT_01065bc8;
  pOVar1 = DAT_01065bc0;
  param_2[0x40] = fVar3;
  param_2[0x42] = 5.605194e-45;
  if (pOVar2 != pOVar1) {
    DAT_01065bc8 = pOVar1;
  }
  return;
}


