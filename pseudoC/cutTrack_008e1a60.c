// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cutTrack
// Entry Point: 008e1a60
// Size: 96 bytes
// Signature: undefined __thiscall cutTrack(TyreTrackSystem * this, uint param_1)


/* TyreTrackSystem::cutTrack(unsigned int) */

void __thiscall TyreTrackSystem::cutTrack(TyreTrackSystem *this,uint param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 0x28);
  if ((param_1 - 1 < *(uint *)(lVar1 + 0x60)) &&
     (lVar2 = *(long *)(*(long *)(lVar1 + 0x68) + (ulong)(param_1 - 1) * 8), lVar2 != 0)) {
    if (*(uint *)(lVar2 + 0x84) != 0xffffffff) {
      *(undefined8 *)(*(long *)(lVar1 + 0x80) + (ulong)*(uint *)(lVar2 + 0x84) * 8) = 0;
      *(undefined4 *)(lVar2 + 0x84) = 0xffffffff;
    }
    if (*(uint *)(lVar2 + 0x88) != 0xffffffff) {
      *(undefined8 *)(*(long *)(lVar1 + 0x80) + (ulong)*(uint *)(lVar2 + 0x88) * 8) = 0;
      *(undefined4 *)(lVar2 + 0x88) = 0xffffffff;
    }
    *(undefined *)(lVar2 + 8) = 0;
  }
  return;
}


