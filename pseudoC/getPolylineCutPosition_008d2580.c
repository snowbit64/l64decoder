// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPolylineCutPosition
// Entry Point: 008d2580
// Size: 12 bytes
// Signature: undefined __thiscall getPolylineCutPosition(FillPlaneGeometry * this, uint param_1)


/* FillPlaneGeometry::getPolylineCutPosition(unsigned int) const */

undefined8 __thiscall
FillPlaneGeometry::getPolylineCutPosition(FillPlaneGeometry *this,uint param_1)

{
  return *(undefined8 *)(*(long *)(this + 0xb0) + (ulong)param_1 * 8);
}


