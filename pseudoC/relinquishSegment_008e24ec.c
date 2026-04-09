// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: relinquishSegment
// Entry Point: 008e24ec
// Size: 44 bytes
// Signature: undefined __thiscall relinquishSegment(Track * this, uint param_1)


/* TyreTrackGeometry::Track::relinquishSegment(unsigned int) */

void __thiscall TyreTrackGeometry::Track::relinquishSegment(Track *this,uint param_1)

{
  if (*(uint *)(this + 0x84) == param_1) {
    *(undefined4 *)(this + 0x84) = 0xffffffff;
  }
  if (*(uint *)(this + 0x88) == param_1) {
    *(undefined4 *)(this + 0x88) = 0xffffffff;
  }
  return;
}


