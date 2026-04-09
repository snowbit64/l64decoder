// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: relinquishSegments
// Entry Point: 008e2518
// Size: 60 bytes
// Signature: undefined __thiscall relinquishSegments(Track * this, Ring * param_1)


/* TyreTrackGeometry::Track::relinquishSegments(TyreTrackGeometry::Ring*) */

void __thiscall TyreTrackGeometry::Track::relinquishSegments(Track *this,Ring *param_1)

{
  if (*(uint *)(this + 0x84) != 0xffffffff) {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(this + 0x84) * 8) = 0;
    *(undefined4 *)(this + 0x84) = 0xffffffff;
  }
  if (*(uint *)(this + 0x88) != 0xffffffff) {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(this + 0x88) * 8) = 0;
    *(undefined4 *)(this + 0x88) = 0xffffffff;
  }
  return;
}


