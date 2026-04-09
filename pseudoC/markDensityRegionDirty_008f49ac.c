// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markDensityRegionDirty
// Entry Point: 008f49ac
// Size: 236 bytes
// Signature: undefined __cdecl markDensityRegionDirty(DensityMap * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, bool param_7)


/* TerrainLodTexture::markDensityRegionDirty(DensityMap*, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, bool) */

void TerrainLodTexture::markDensityRegionDirty
               (DensityMap *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
               ,bool param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  
  plVar8 = (long *)(ulong)param_2;
  iVar1 = *(int *)(param_1 + 8);
  uVar3 = (**(code **)(*plVar8 + 0x48))(plVar8);
  iVar5 = *(int *)(param_1 + 8);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = (iVar1 * param_3) / uVar3;
  }
  uVar4 = (**(code **)(*plVar8 + 0x50))(plVar8);
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = (iVar5 * param_4) / uVar4;
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar5 = (**(code **)(*plVar8 + 0x48))(plVar8);
  uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8);
  uVar4 = 0;
  if (uVar6 != 0) {
    uVar4 = ((iVar5 + iVar1 * param_5) - 1) / uVar6;
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar5 = (**(code **)(*plVar8 + 0x50))(plVar8);
  uVar7 = (**(code **)(*plVar8 + 0x50))(plVar8);
  uVar6 = 0;
  if (uVar7 != 0) {
    uVar6 = ((iVar5 + iVar1 * param_6) - 1) / uVar7;
  }
  addDirtyRegion((TerrainLodTexture *)param_1,uVar2,uVar3,uVar4,uVar6);
  return;
}


