// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b5d50
// Entry Point: 007b5d50
// Size: 224 bytes
// Signature: undefined FUN_007b5d50(void)


void FUN_007b5d50(DensityMapVisualizationOverlay *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = ReflectionUtil::getEntity
                    (*param_2,0x2000000000000,"setDensityMapVisualizationOverlayGrowthStateColor",
                     "foliage");
  if (lVar4 == 0) {
    return;
  }
  uVar1 = *(uint *)(lVar4 + 0xa4);
  uVar2 = *(uint *)(lVar4 + 0xa8);
  iVar3 = (**(code **)(**(long **)(lVar4 + 0x50) + 0x60))();
  if (iVar3 != 0) {
    DensityMapVisualizationOverlay::setTypedStateColor
              (param_1,*(DensityMap **)(lVar4 + 0x50),*(uint *)(lVar4 + 0x80),uVar1,uVar2,param_2[4]
               ,(float)param_2[8],(float)param_2[0xc],(float)param_2[0x10]);
    return;
  }
  DensityMapVisualizationOverlay::setStateColor
            (param_1,*(DensityMap **)(lVar4 + 0x50),(DensityMap *)0x0,0,uVar1,uVar2,param_2[4],
             (float)param_2[8],(float)param_2[0xc],(float)param_2[0x10]);
  return;
}


