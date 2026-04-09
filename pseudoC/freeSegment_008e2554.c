// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: freeSegment
// Entry Point: 008e2554
// Size: 12 bytes
// Signature: undefined __thiscall freeSegment(Ring * this, Track * param_1, uint param_2)


/* TyreTrackGeometry::Ring::freeSegment(TyreTrackGeometry::Track*, unsigned int) */

void __thiscall TyreTrackGeometry::Ring::freeSegment(Ring *this,Track *param_1,uint param_2)

{
  *(undefined8 *)(*(long *)(this + 0x10) + (ulong)param_2 * 8) = 0;
  return;
}


