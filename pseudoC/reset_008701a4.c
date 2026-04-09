// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 008701a4
// Size: 308 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DensityMapVisualizationOverlay::reset() */

void DensityMapVisualizationOverlay::reset(void)

{
  uint *puVar1;
  DirtyListener *pDVar2;
  uint *puVar3;
  long in_x0;
  uint uVar4;
  ulong uVar5;
  DensityMap **ppDVar6;
  
  puVar1 = (uint *)(in_x0 + 0x29390);
  uVar4 = *(uint *)(in_x0 + 0x4a0);
  puVar3 = (uint *)(in_x0 + 0x8cc8);
  pDVar2 = (DirtyListener *)(in_x0 + 0x78);
  if (uVar4 != 0) {
    uVar5 = 0;
    ppDVar6 = (DensityMap **)(in_x0 + 0x80);
    do {
      if (*ppDVar6 != (DensityMap *)0x0) {
        DensityMap::removeDirtyListener(*ppDVar6,pDVar2);
        uVar4 = *(uint *)(in_x0 + 0x4a0);
      }
      uVar5 = uVar5 + 1;
      ppDVar6 = ppDVar6 + 0x21;
    } while (uVar5 < uVar4);
  }
  uVar4 = *puVar3;
  if (uVar4 != 0) {
    uVar5 = 0;
    ppDVar6 = (DensityMap **)(in_x0 + 0x4a8);
    do {
      if (*ppDVar6 != (DensityMap *)0x0) {
        DensityMap::removeDirtyListener(*ppDVar6,pDVar2);
        uVar4 = *puVar3;
      }
      uVar5 = uVar5 + 1;
      ppDVar6 = ppDVar6 + 0x441;
    } while (uVar5 < uVar4);
  }
  uVar4 = *puVar1;
  if (uVar4 != 0) {
    uVar5 = 0;
    ppDVar6 = (DensityMap **)(in_x0 + 0x8cd0);
    do {
      if (*ppDVar6 != (DensityMap *)0x0) {
        DensityMap::removeDirtyListener(*ppDVar6,pDVar2);
        uVar4 = *puVar1;
      }
      uVar5 = uVar5 + 1;
      ppDVar6 = ppDVar6 + 0x81b;
    } while (uVar5 < uVar4);
  }
  if (*(DensityMap **)(in_x0 + 0x29398) != (DensityMap *)0x0) {
    DensityMap::removeDirtyListener(*(DensityMap **)(in_x0 + 0x29398),pDVar2);
  }
  *(undefined4 *)(in_x0 + 0x4a0) = 0;
  *puVar3 = 0;
  *puVar1 = 0;
  *(undefined8 *)(in_x0 + 0x29398) = 0;
  *(undefined8 *)(in_x0 + 0x80) = 0;
  *(undefined8 *)(in_x0 + 0x4a8) = 0;
  *(undefined8 *)(in_x0 + 0x8cd0) = 0;
  return;
}


