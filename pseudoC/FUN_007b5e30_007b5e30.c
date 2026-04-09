// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b5e30
// Entry Point: 007b5e30
// Size: 216 bytes
// Signature: undefined FUN_007b5e30(void)


void FUN_007b5e30(DensityMapVisualizationOverlay *param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = ReflectionUtil::getEntity
                    (*param_2,0x800000000000,"setDensityMapVisualizationOverlayTypedStateColor",
                     "densityMap");
  if (lVar2 == 0) {
    return;
  }
  iVar1 = (**(code **)(**(long **)(lVar2 + 0x50) + 0x60))();
  if (iVar1 != 0) {
    DensityMapVisualizationOverlay::setTypedStateColor
              (param_1,*(DensityMap **)(lVar2 + 0x50),*(uint *)(lVar2 + 0x80),
               *(int *)(lVar2 + 0x7c) + param_2[4],param_2[8],param_2[0xc],(float)param_2[0x10],
               (float)param_2[0x14],(float)param_2[0x18]);
    return;
  }
  DensityMapVisualizationOverlay::setStateColor
            (param_1,*(DensityMap **)(lVar2 + 0x50),(DensityMap *)0x0,0,
             *(int *)(lVar2 + 0x7c) + param_2[4],param_2[8],param_2[0xc],(float)param_2[0x10],
             (float)param_2[0x14],(float)param_2[0x18]);
  return;
}


