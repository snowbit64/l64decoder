// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b294c
// Entry Point: 007b294c
// Size: 116 bytes
// Signature: undefined FUN_007b294c(void)


void FUN_007b294c(DensityMapHeightUpdater *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  DensityMap *pDVar3;
  
  if ((*param_2 == 0) ||
     (lVar2 = ReflectionUtil::getEntity
                        (*param_2,0xa00000000000,"applyDensityMapHeightUpdate","blockMask"),
     lVar2 == 0)) {
    pDVar3 = (DensityMap *)0x0;
  }
  else {
    lVar1 = 0x50;
    if ((*(byte *)(lVar2 + 0x15) & 0x20) != 0) {
      lVar1 = 0x20;
    }
    pDVar3 = *(DensityMap **)(lVar2 + lVar1);
  }
  DensityMapHeightUpdater::setApplyGlobalUpdateBlockMask(param_1,pDVar3,param_2[4],param_2[8]);
  return;
}


