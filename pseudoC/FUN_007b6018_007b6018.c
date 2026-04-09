// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6018
// Entry Point: 007b6018
// Size: 144 bytes
// Signature: undefined FUN_007b6018(void)


void FUN_007b6018(DensityMapVisualizationOverlay *param_1,uint *param_2)

{
  long lVar1;
  DensityMap *pDVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  lVar1 = ReflectionUtil::getEntity
                    (*param_2,0xa00000000000,"setDensityMapVisualizationOverlayStateBordersColor",
                     "densityMap");
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x15) < '\0') {
      pDVar2 = *(DensityMap **)(lVar1 + 0x50);
      uVar4 = param_2[8];
      fVar5 = (float)param_2[0x10];
      uVar3 = *(int *)(lVar1 + 0x7c) + param_2[4];
    }
    else {
      pDVar2 = *(DensityMap **)(lVar1 + 0x20);
      uVar3 = param_2[4];
      uVar4 = param_2[8];
      fVar5 = (float)param_2[0x10];
    }
    DensityMapVisualizationOverlay::setStateBorderColor
              (param_1,pDVar2,uVar3,uVar4,param_2[0xc],fVar5,(float)param_2[0x14],
               (float)param_2[0x18]);
    return;
  }
  return;
}


