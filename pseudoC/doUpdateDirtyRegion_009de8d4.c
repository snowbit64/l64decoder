// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doUpdateDirtyRegion
// Entry Point: 009de8d4
// Size: 16 bytes
// Signature: undefined __cdecl doUpdateDirtyRegion(DirtyRegion * param_1)


/* ProceduralPlacementRaycastObjectsMask::doUpdateDirtyRegion(ProceduralPlacementMask::DirtyRegion
   const&) */

void ProceduralPlacementRaycastObjectsMask::doUpdateDirtyRegion(DirtyRegion *param_1)

{
  if (param_1[0x11c] != (DirtyRegion)0x0) {
    updateRegion();
    return;
  }
  return;
}


