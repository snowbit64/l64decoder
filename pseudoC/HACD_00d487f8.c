// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HACD
// Entry Point: 00d487f8
// Size: 388 bytes
// Signature: undefined __thiscall ~HACD(HACD * this)


/* HACD::HACD::~HACD() */

void __thiscall HACD::HACD::~HACD(HACD *this)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(this + 0x30) != 0) {
    operator_delete__((void *)(*(long *)(this + 0x30) + -8));
  }
  lVar5 = *(long *)(this + 0xf8);
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + -8);
    lVar3 = *plVar4;
    if (lVar3 != 0) {
      lVar6 = 0;
      lVar3 = lVar3 * 0x110;
      do {
        lVar1 = lVar5 + lVar3;
        pvVar2 = *(void **)(lVar1 + -0x48);
        *(undefined ***)(lVar1 + -0x110) = &PTR__ICHull_01012900;
        if (pvVar2 != (void *)0x0) {
          *(void **)(lVar1 + -0x40) = pvVar2;
          operator_delete(pvVar2);
        }
        pvVar2 = *(void **)(lVar1 + -0x60);
        if (pvVar2 != (void *)0x0) {
          *(void **)(lVar5 + lVar3 + -0x58) = pvVar2;
          operator_delete(pvVar2);
        }
        lVar1 = lVar5 + lVar3;
        pvVar2 = *(void **)(lVar1 + -0x78);
        if (pvVar2 != (void *)0x0) {
          *(void **)(lVar1 + -0x70) = pvVar2;
          operator_delete(pvVar2);
        }
        TMMesh::~TMMesh((TMMesh *)(lVar1 + -0x108));
        lVar5 = lVar5 + -0x110;
        lVar6 = lVar6 + 0x110;
      } while (lVar3 - lVar6 != 0);
    }
    operator_delete__(plVar4);
  }
  if (*(void **)(this + 0x180) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x180));
  }
  if (*(long *)(this + 0x20) != 0) {
    operator_delete__((void *)(*(long *)(this + 0x20) + -8));
  }
  if (*(long *)(this + 0x28) != 0) {
    operator_delete__((void *)(*(long *)(this + 0x28) + -8));
  }
  if (*(long *)this != 0) {
    operator_delete__((void *)(*(long *)this + -8));
  }
  if (*(long *)(this + 8) != 0) {
    operator_delete__((void *)(*(long *)(this + 8) + -8));
  }
  if (*(long *)(this + 0x38) != 0) {
    operator_delete__((void *)(*(long *)(this + 0x38) + -8));
  }
  if (*(long *)(this + 0x40) != 0) {
    operator_delete__((void *)(*(long *)(this + 0x40) + -8));
  }
  pvVar2 = *(void **)(this + 0x158);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x160) = pvVar2;
    operator_delete(pvVar2);
  }
  Graph::~Graph((Graph *)(this + 0x100));
  pvVar2 = *(void **)(this + 0xe0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xe8) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}


