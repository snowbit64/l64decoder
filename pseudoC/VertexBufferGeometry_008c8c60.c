// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VertexBufferGeometry
// Entry Point: 008c8c60
// Size: 292 bytes
// Signature: undefined __thiscall ~VertexBufferGeometry(VertexBufferGeometry * this)


/* VertexBufferGeometry::~VertexBufferGeometry() */

void __thiscall VertexBufferGeometry::~VertexBufferGeometry(VertexBufferGeometry *this)

{
  void *pvVar1;
  long *plVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  pvVar3 = *(void **)(this + 0x88);
  uVar4 = *(long *)(this + 0x90) - (long)pvVar3;
  *(undefined ***)this = &PTR__VertexBufferGeometry_00fddfb8;
  *(undefined ***)(this + 0x10) = &PTR__VertexBufferGeometry_00fde008;
  if (0 < (int)(uVar4 >> 3)) {
    lVar6 = 0;
    do {
      plVar2 = *(long **)((long)pvVar3 + lVar6 * 8);
      plVar5 = *(long **)(*(long *)(this + 0xa0) + lVar6 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      pvVar3 = *(void **)(this + 0x88);
      lVar6 = lVar6 + 1;
      uVar4 = *(long *)(this + 0x90) - (long)pvVar3;
    } while (lVar6 < (int)(uVar4 >> 3));
  }
  if (*(long *)(this + 0x60) != *(long *)(this + 0x58)) {
    *(long *)(this + 0x60) = *(long *)(this + 0x58);
  }
  if (uVar4 != 0) {
    *(void **)(this + 0x90) = pvVar3;
  }
  pvVar1 = *(void **)(this + 0xa0);
  if (*(void **)(this + 0xa8) != pvVar1) {
    *(void **)(this + 0xa8) = pvVar1;
  }
  if (*(long *)(this + 0x78) != *(long *)(this + 0x70)) {
    *(long *)(this + 0x78) = *(long *)(this + 0x70);
  }
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xa8) = pvVar1;
    operator_delete(pvVar1);
    pvVar3 = *(void **)(this + 0x88);
  }
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x70);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x58);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar3;
    operator_delete(pvVar3);
  }
  Geometry::~Geometry((Geometry *)this);
  return;
}


