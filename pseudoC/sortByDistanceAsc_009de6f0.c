// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortByDistanceAsc
// Entry Point: 009de6f0
// Size: 20 bytes
// Signature: undefined __cdecl sortByDistanceAsc(Hit * param_1, Hit * param_2)


/* ProceduralPlacementRaycastObjectsMask::Hit::sortByDistanceAsc(ProceduralPlacementRaycastObjectsMask::Hit
   const&, ProceduralPlacementRaycastObjectsMask::Hit const&) */

bool ProceduralPlacementRaycastObjectsMask::Hit::sortByDistanceAsc(Hit *param_1,Hit *param_2)

{
  return *(float *)(param_1 + 0x20) < *(float *)(param_2 + 0x20);
}


