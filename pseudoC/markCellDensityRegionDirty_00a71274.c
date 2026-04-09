// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markCellDensityRegionDirty
// Entry Point: 00a71274
// Size: 4 bytes
// Signature: undefined __cdecl markCellDensityRegionDirty(int param_1, int param_2, uint param_3, uint param_4, bool param_5)


/* TerrainDetailTransformGroup::markCellDensityRegionDirty(int, int, unsigned int, unsigned int,
   bool) */

void TerrainDetailTransformGroup::markCellDensityRegionDirty
               (int param_1,int param_2,uint param_3,uint param_4,bool param_5)

{
  bool in_w5;
  
  LocalGeometryTransformGroup::reloadCellsDelayed
            ((LocalGeometryTransformGroup *)(ulong)(uint)param_1,param_2,param_3,param_4,
             (uint)param_5,in_w5);
  return;
}


