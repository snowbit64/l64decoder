// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortByDistanceAsc
// Entry Point: 009e2434
// Size: 20 bytes
// Signature: undefined __cdecl sortByDistanceAsc(BasePoint * param_1, BasePoint * param_2)


/* ProceduralPlacementRemapMask::BasePoint::sortByDistanceAsc(ProceduralPlacementRemapMask::BasePoint
   const&, ProceduralPlacementRemapMask::BasePoint const&) */

bool ProceduralPlacementRemapMask::BasePoint::sortByDistanceAsc
               (BasePoint *param_1,BasePoint *param_2)

{
  return *(float *)param_1 < *(float *)param_2;
}


