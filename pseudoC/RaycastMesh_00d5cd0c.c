// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RaycastMesh
// Entry Point: 00d5cd0c
// Size: 112 bytes
// Signature: undefined __thiscall ~RaycastMesh(RaycastMesh * this)


/* HACD::RaycastMesh::~RaycastMesh() */

void __thiscall HACD::RaycastMesh::~RaycastMesh(RaycastMesh *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(this + 0x20);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + -8);
    if (lVar3 != 0) {
      lVar3 = lVar3 * 0xf0;
      do {
        pvVar1 = *(void **)(lVar2 + -0x28 + lVar3);
        if (pvVar1 != (void *)0x0) {
          operator_delete__(pvVar1);
        }
        lVar3 = lVar3 + -0xf0;
      } while (lVar3 != 0);
    }
    operator_delete__((long *)(lVar2 + -8));
    return;
  }
  return;
}


