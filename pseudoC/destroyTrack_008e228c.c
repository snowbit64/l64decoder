// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyTrack
// Entry Point: 008e228c
// Size: 48 bytes
// Signature: undefined __thiscall destroyTrack(TyreTrackGeometry * this, Track * param_1)


/* TyreTrackGeometry::destroyTrack(TyreTrackGeometry::Track*) */

void __thiscall TyreTrackGeometry::destroyTrack(TyreTrackGeometry *this,Track *param_1)

{
  if (*(uint *)(param_1 + 0x84) != 0xffffffff) {
    *(undefined8 *)(*(long *)(this + 0x80) + (ulong)*(uint *)(param_1 + 0x84) * 8) = 0;
  }
  if (*(uint *)(param_1 + 0x88) != 0xffffffff) {
    *(undefined8 *)(*(long *)(this + 0x80) + (ulong)*(uint *)(param_1 + 0x88) * 8) = 0;
  }
  operator_delete(param_1);
  return;
}


