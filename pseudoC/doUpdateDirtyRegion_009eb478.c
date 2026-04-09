// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doUpdateDirtyRegion
// Entry Point: 009eb478
// Size: 16 bytes
// Signature: undefined __thiscall doUpdateDirtyRegion(ProceduralPlacementThresholdMask * this, DirtyRegion * param_1)


/* ProceduralPlacementThresholdMask::doUpdateDirtyRegion(ProceduralPlacementMask::DirtyRegion
   const&) */

void __thiscall
ProceduralPlacementThresholdMask::doUpdateDirtyRegion
          (ProceduralPlacementThresholdMask *this,DirtyRegion *param_1)

{
  updateRegion(this,*(uint *)param_1,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),
               *(uint *)(param_1 + 0xc));
  return;
}


