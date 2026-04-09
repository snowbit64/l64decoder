// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doUpdateDirtyRegion
// Entry Point: 009e1ca0
// Size: 16 bytes
// Signature: undefined __cdecl doUpdateDirtyRegion(DirtyRegion * param_1)


/* ProceduralPlacementRaycastPhysicsMask::doUpdateDirtyRegion(ProceduralPlacementMask::DirtyRegion
   const&) */

void ProceduralPlacementRaycastPhysicsMask::doUpdateDirtyRegion(DirtyRegion *param_1)

{
  if (param_1[0xf4] != (DirtyRegion)0x0) {
    updateRegion();
    return;
  }
  return;
}


