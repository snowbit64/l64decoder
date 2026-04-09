// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markDensityRegionDirty
// Entry Point: 00a711cc
// Size: 160 bytes
// Signature: undefined __thiscall markDensityRegionDirty(TerrainDetailTransformGroup * this, DensityMap * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, bool param_7)


/* non-virtual thunk to TerrainDetailTransformGroup::markDensityRegionDirty(DensityMap*, unsigned
   int, unsigned int, unsigned int, unsigned int, unsigned int, bool) */

void __thiscall
TerrainDetailTransformGroup::markDensityRegionDirty
          (TerrainDetailTransformGroup *this,DensityMap *param_1,uint param_2,uint param_3,
          uint param_4,uint param_5,uint param_6,bool param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  if ((*(int *)(*(long *)(this + 0x10) + 0x80) != -1) &&
     ((param_6 >> (ulong)(*(int *)(*(long *)(this + 0x10) + 0x80) - 1U & 0x1f) & 1) == 0)) {
    return;
  }
  iVar1 = *(int *)(this + 0x38);
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x24));
  iVar2 = *(int *)(this + 0x20);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  iVar3 = (int)((float)(param_2 - iVar1) / fVar5);
  iVar4 = (int)((float)(param_3 - iVar1) / fVar5);
                    /* WARNING: Could not recover jumptable at 0x00a71264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x1f0) + 0x90))
            (this + -0x1f0,iVar3 - (iVar2 >> 1),iVar4 - (iVar2 >> 1),
             (int)((float)(ulong)(iVar1 + param_4) / fVar5) - iVar3,
             (int)((float)(ulong)(iVar1 + param_5) / fVar5) - iVar4,param_7);
  return;
}


