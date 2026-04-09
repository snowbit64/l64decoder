// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cutTrack
// Entry Point: 008e1ac0
// Size: 92 bytes
// Signature: undefined __thiscall cutTrack(TyreTrackGeometry * this, uint param_1)


/* TyreTrackGeometry::cutTrack(unsigned int) */

void __thiscall TyreTrackGeometry::cutTrack(TyreTrackGeometry *this,uint param_1)

{
  long lVar1;
  
  if ((param_1 - 1 < *(uint *)(this + 0x60)) &&
     (lVar1 = *(long *)(*(long *)(this + 0x68) + (ulong)(param_1 - 1) * 8), lVar1 != 0)) {
    if (*(uint *)(lVar1 + 0x84) != 0xffffffff) {
      *(undefined8 *)(*(long *)(this + 0x80) + (ulong)*(uint *)(lVar1 + 0x84) * 8) = 0;
      *(undefined4 *)(lVar1 + 0x84) = 0xffffffff;
    }
    if (*(uint *)(lVar1 + 0x88) != 0xffffffff) {
      *(undefined8 *)(*(long *)(this + 0x80) + (ulong)*(uint *)(lVar1 + 0x88) * 8) = 0;
      *(undefined4 *)(lVar1 + 0x88) = 0xffffffff;
    }
    *(undefined *)(lVar1 + 8) = 0;
  }
  return;
}


