// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsInputMeshPolyline
// Entry Point: 008d2508
// Size: 28 bytes
// Signature: undefined __thiscall getIsInputMeshPolyline(FillPlaneGeometry * this, uint param_1)


/* FillPlaneGeometry::getIsInputMeshPolyline(unsigned int) const */

bool __thiscall FillPlaneGeometry::getIsInputMeshPolyline(FillPlaneGeometry *this,uint param_1)

{
  return *(float *)(*(long *)(*(long *)(this + 0xb0) + (ulong)param_1 * 8) + 0x34) == 1.0;
}


