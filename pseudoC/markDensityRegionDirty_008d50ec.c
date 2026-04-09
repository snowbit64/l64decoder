// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markDensityRegionDirty
// Entry Point: 008d50ec
// Size: 240 bytes
// Signature: undefined __thiscall markDensityRegionDirty(FoliageBendingSystem * this, DensityMap * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, bool param_7)


/* non-virtual thunk to FoliageBendingSystem::markDensityRegionDirty(DensityMap*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int, bool) */

void __thiscall
FoliageBendingSystem::markDensityRegionDirty
          (FoliageBendingSystem *this,DensityMap *param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,uint param_6,bool param_7)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar3 = *(long *)(this + 0x4a8);
  lVar4 = *(long *)(this + 0x4a0);
  if (lVar3 != lVar4) {
    uVar6 = 0;
    do {
      if (*(DensityMap **)(lVar4 + uVar6 * 0x28) == param_1) {
        uVar1 = *(uint *)(lVar4 + uVar6 * 0x28 + 0xc);
        param_2 = param_2 >> (ulong)(uVar1 & 0x1f);
        uVar2 = ~(-1 << (ulong)(uVar1 & 0x1f));
        param_3 = param_3 >> (ulong)(uVar1 & 0x1f);
        param_4 = param_4 + uVar2 >> (ulong)(uVar1 & 0x1f);
        param_5 = param_5 + uVar2 >> (ulong)(uVar1 & 0x1f);
        DensityAnimationMap::markRegionDirty
                  ((DensityAnimationMap *)(this + 0x70),param_2,param_3,param_4,param_5);
        lVar3 = *(long *)(this + 0x4a8);
        lVar4 = *(long *)(this + 0x4a0);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      uVar5 = (lVar3 - lVar4 >> 3) * -0x3333333333333333;
    } while (uVar6 <= uVar5 && uVar5 - uVar6 != 0);
  }
  return;
}


