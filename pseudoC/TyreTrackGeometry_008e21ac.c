// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TyreTrackGeometry
// Entry Point: 008e21ac
// Size: 224 bytes
// Signature: undefined __thiscall ~TyreTrackGeometry(TyreTrackGeometry * this)


/* TyreTrackGeometry::~TyreTrackGeometry() */

void __thiscall TyreTrackGeometry::~TyreTrackGeometry(TyreTrackGeometry *this)

{
  void *pvVar1;
  uint uVar2;
  ulong uVar3;
  
  *(undefined ***)this = &PTR__TyreTrackGeometry_00fde5f8;
  *(undefined ***)(this + 0x10) = &PTR__TyreTrackGeometry_00fde648;
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 8))();
  }
  uVar2 = *(uint *)(this + 0x60);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      pvVar1 = *(void **)(*(long *)(this + 0x68) + uVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        if (*(uint *)((long)pvVar1 + 0x84) != 0xffffffff) {
          *(undefined8 *)(*(long *)(this + 0x80) + (ulong)*(uint *)((long)pvVar1 + 0x84) * 8) = 0;
        }
        if (*(uint *)((long)pvVar1 + 0x88) != 0xffffffff) {
          *(undefined8 *)(*(long *)(this + 0x80) + (ulong)*(uint *)((long)pvVar1 + 0x88) * 8) = 0;
        }
        operator_delete(pvVar1);
        uVar2 = *(uint *)(this + 0x60);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x68));
  }
  if (*(long **)(this + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x78) + 8))();
  }
  if (*(void **)(this + 0x98) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x98));
  }
  if (*(void **)(this + 0x80) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x80));
  }
  Geometry::~Geometry((Geometry *)this);
  return;
}


