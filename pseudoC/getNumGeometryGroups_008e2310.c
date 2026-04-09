// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumGeometryGroups
// Entry Point: 008e2310
// Size: 16 bytes
// Signature: undefined __cdecl getNumGeometryGroups(uint param_1)


/* TyreTrackGeometry::getNumGeometryGroups(unsigned int) const */

bool TyreTrackGeometry::getNumGeometryGroups(uint param_1)

{
  return *(int *)((ulong)param_1 + 0x8c) != 0;
}


