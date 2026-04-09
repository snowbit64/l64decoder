// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cutTrack
// Entry Point: 008e30b8
// Size: 64 bytes
// Signature: undefined __thiscall cutTrack(TyreTrackGeometry * this, Track * param_1)


/* TyreTrackGeometry::cutTrack(TyreTrackGeometry::Track*) */

void __thiscall TyreTrackGeometry::cutTrack(TyreTrackGeometry *this,Track *param_1)

{
  if (*(uint *)(param_1 + 0x84) != 0xffffffff) {
    *(undefined8 *)(*(long *)(this + 0x80) + (ulong)*(uint *)(param_1 + 0x84) * 8) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  }
  if (*(uint *)(param_1 + 0x88) != 0xffffffff) {
    *(undefined8 *)(*(long *)(this + 0x80) + (ulong)*(uint *)(param_1 + 0x88) * 8) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  }
  param_1[8] = (Track)0x0;
  return;
}


