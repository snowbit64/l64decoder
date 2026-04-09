// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doUpdateDirtyRegion
// Entry Point: 009db8f8
// Size: 24 bytes
// Signature: undefined __cdecl doUpdateDirtyRegion(DirtyRegion * param_1)


/* ProceduralPlacementProjectObjectsMask::doUpdateDirtyRegion(ProceduralPlacementMask::DirtyRegion
   const&) */

void ProceduralPlacementProjectObjectsMask::doUpdateDirtyRegion(DirtyRegion *param_1)

{
  if (param_1[0xf4] != (DirtyRegion)0x0) {
    projectMesh((ProceduralPlacementProjectObjectsMask *)param_1,(set *)(param_1 + 0xd8),
                *(float *)(param_1 + 0xf0));
    return;
  }
  return;
}


