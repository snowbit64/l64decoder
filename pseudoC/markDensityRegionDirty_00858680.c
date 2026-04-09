// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markDensityRegionDirty
// Entry Point: 00858680
// Size: 12 bytes
// Signature: undefined __thiscall markDensityRegionDirty(DensityMapSyncer * this, DensityMap * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, bool param_7)


/* non-virtual thunk to DensityMapSyncer::markDensityRegionDirty(DensityMap*, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned int, bool) */

void __thiscall
DensityMapSyncer::markDensityRegionDirty
          (DensityMapSyncer *this,DensityMap *param_1,uint param_2,uint param_3,uint param_4,
          uint param_5,uint param_6,bool param_7)

{
  markDensityRegionDirty
            ((DensityMap *)(this + -0x20),(uint)param_1,param_2,param_3,param_4,param_5,
             SUB41(param_6,0));
  return;
}


