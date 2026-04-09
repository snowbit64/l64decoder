// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b2400
// Entry Point: 007b2400
// Size: 44 bytes
// Signature: undefined FUN_007b2400(void)


void FUN_007b2400(DensityMapHeightUpdater *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = param_2[4];
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  DensityMapHeightUpdater::setHeightTypeProperties
            (param_1,*param_2,uVar1,(float)param_2[8],(float)param_2[0xc],(float)param_2[0x10],
             (float)param_2[0x14],(float)param_2[0x18]);
  return;
}


