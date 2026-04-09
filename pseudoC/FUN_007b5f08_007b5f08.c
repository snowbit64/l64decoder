// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b5f08
// Entry Point: 007b5f08
// Size: 272 bytes
// Signature: undefined FUN_007b5f08(void)


void FUN_007b5f08(DensityMapVisualizationOverlay *param_1,uint *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  DensityMap *pDVar4;
  DensityMap *pDVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  
  lVar2 = ReflectionUtil::getEntity
                    (*param_2,0xa00000000000,"setDensityMapVisualizationOverlayStateColor",
                     "densityMap");
  if (param_2[4] == 0) {
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    lVar3 = ReflectionUtil::getEntity
                      (param_2[4],0xa00000000000,"setDensityMapVisualizationOverlayStateColor",
                       "maskDensityMap");
    if (lVar2 == 0) {
      return;
    }
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x15) < '\0') {
        pDVar5 = *(DensityMap **)(lVar3 + 0x50);
        uVar6 = param_2[8] << (ulong)(*(uint *)(lVar3 + 0x7c) & 0x1f);
        cVar1 = *(char *)(lVar2 + 0x15);
      }
      else {
        pDVar5 = *(DensityMap **)(lVar3 + 0x20);
        uVar6 = param_2[8];
        cVar1 = *(char *)(lVar2 + 0x15);
      }
      goto joined_r0x007b5fb0;
    }
    if (param_2[4] != 0) {
      return;
    }
  }
  uVar6 = 0;
  pDVar5 = (DensityMap *)0x0;
  cVar1 = *(char *)(lVar2 + 0x15);
joined_r0x007b5fb0:
  if (cVar1 < '\0') {
    pDVar4 = *(DensityMap **)(lVar2 + 0x50);
    uVar8 = param_2[0x10];
    fVar9 = (float)param_2[0x18];
    uVar7 = *(int *)(lVar2 + 0x7c) + param_2[0xc];
  }
  else {
    pDVar4 = *(DensityMap **)(lVar2 + 0x20);
    uVar7 = param_2[0xc];
    uVar8 = param_2[0x10];
    fVar9 = (float)param_2[0x18];
  }
  DensityMapVisualizationOverlay::setStateColor
            (param_1,pDVar4,pDVar5,uVar6,uVar7,uVar8,param_2[0x14],fVar9,(float)param_2[0x1c],
             (float)param_2[0x20]);
  return;
}


