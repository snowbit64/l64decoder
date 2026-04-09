// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CullingGrid2D
// Entry Point: 008c06dc
// Size: 140 bytes
// Signature: undefined __thiscall ~CullingGrid2D(CullingGrid2D * this)


/* CullingGrid2D::~CullingGrid2D() */

void __thiscall CullingGrid2D::~CullingGrid2D(CullingGrid2D *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)this;
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + -8);
    if (lVar2 != 0) {
      lVar2 = lVar2 * 0x48;
      do {
        pvVar1 = *(void **)(lVar3 + lVar2 + -0x48);
        if (pvVar1 != (void *)0x0) {
          operator_delete__(pvVar1);
        }
        pvVar1 = *(void **)(lVar3 + lVar2 + -0x38);
        if (pvVar1 != (void *)0x0) {
          operator_delete__(pvVar1);
        }
        pvVar1 = *(void **)(lVar3 + lVar2 + -0x28);
        if (pvVar1 != (void *)0x0) {
          operator_delete__(pvVar1);
        }
        lVar2 = lVar2 + -0x48;
      } while (lVar2 != 0);
    }
    operator_delete__((long *)(lVar3 + -8));
    return;
  }
  return;
}


