// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markDensityRegionDirty
// Entry Point: 008d4ffc
// Size: 240 bytes
// Signature: undefined __cdecl markDensityRegionDirty(DensityMap * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, bool param_7)


/* FoliageBendingSystem::markDensityRegionDirty(DensityMap*, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, bool) */

void FoliageBendingSystem::markDensityRegionDirty
               (DensityMap *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
               ,bool param_7)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar3 = *(long *)(param_1 + 0x4d0);
  lVar4 = *(long *)(param_1 + 0x4c8);
  if (lVar3 != lVar4) {
    uVar6 = 0;
    do {
      if (*(ulong *)(lVar4 + uVar6 * 0x28) == (ulong)param_2) {
        uVar1 = *(uint *)(lVar4 + uVar6 * 0x28 + 0xc);
        param_3 = param_3 >> (ulong)(uVar1 & 0x1f);
        uVar2 = ~(-1 << (ulong)(uVar1 & 0x1f));
        param_4 = param_4 >> (ulong)(uVar1 & 0x1f);
        param_5 = param_5 + uVar2 >> (ulong)(uVar1 & 0x1f);
        param_6 = param_6 + uVar2 >> (ulong)(uVar1 & 0x1f);
        DensityAnimationMap::markRegionDirty
                  ((DensityAnimationMap *)(param_1 + 0x98),param_3,param_4,param_5,param_6);
        lVar3 = *(long *)(param_1 + 0x4d0);
        lVar4 = *(long *)(param_1 + 0x4c8);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      uVar5 = (lVar3 - lVar4 >> 3) * -0x3333333333333333;
    } while (uVar6 <= uVar5 && uVar5 - uVar6 != 0);
  }
  return;
}


