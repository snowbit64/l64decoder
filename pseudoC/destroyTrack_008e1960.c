// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyTrack
// Entry Point: 008e1960
// Size: 108 bytes
// Signature: undefined __thiscall destroyTrack(TyreTrackGeometry * this, uint param_1)


/* TyreTrackGeometry::destroyTrack(unsigned int) */

void __thiscall TyreTrackGeometry::destroyTrack(TyreTrackGeometry *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = param_1 - 1;
  if ((uVar1 < *(uint *)(this + 0x60)) &&
     (pvVar2 = *(void **)(*(long *)(this + 0x68) + (ulong)uVar1 * 8), pvVar2 != (void *)0x0)) {
    if (*(uint *)((long)pvVar2 + 0x84) != 0xffffffff) {
      *(undefined8 *)(*(long *)(this + 0x80) + (ulong)*(uint *)((long)pvVar2 + 0x84) * 8) = 0;
    }
    if (*(uint *)((long)pvVar2 + 0x88) != 0xffffffff) {
      *(undefined8 *)(*(long *)(this + 0x80) + (ulong)*(uint *)((long)pvVar2 + 0x88) * 8) = 0;
    }
    operator_delete(pvVar2);
    *(undefined8 *)(*(long *)(this + 0x68) + (ulong)uVar1 * 8) = 0;
  }
  return;
}


