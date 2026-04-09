// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MeshSplitGeometry
// Entry Point: 0097ae00
// Size: 244 bytes
// Signature: undefined __thiscall ~MeshSplitGeometry(MeshSplitGeometry * this)


/* MeshSplitGeometry::~MeshSplitGeometry() */

void __thiscall MeshSplitGeometry::~MeshSplitGeometry(MeshSplitGeometry *this)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(this + 0x170);
  *(undefined ***)this = &PTR__MeshSplitGeometry_00fe0800;
  *(undefined ***)(this + 0x10) = &PTR__MeshSplitGeometry_00fe0898;
  *(undefined ***)(this + 0x58) = &PTR__MeshSplitGeometry_00fe08b8;
  *(undefined ***)(this + 0x168) = &PTR_removeCollisionRef_00fe08e8;
  iVar1 = FUN_00f27700(0xffffffff,plVar5 + 1);
  if (iVar1 < 2) {
                    /* try { // try from 0097ae5c to 0097ae63 has its CatchHandler @ 0097aef4 */
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar3 = *(long *)(this + 0x178);
  uVar4 = *(long *)(this + 0x180) - lVar3;
  if ((int)(uVar4 >> 3) != 0) {
    lVar6 = 0;
    while( true ) {
      plVar5 = *(long **)(lVar3 + lVar6);
      iVar1 = FUN_00f27700(0xffffffff,plVar5 + 1);
      if (iVar1 < 2) {
                    /* try { // try from 0097aea4 to 0097aeab has its CatchHandler @ 0097aef8 */
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      if ((uVar4 >> 3 & 0xffffffff) * 8 + -8 == lVar6) break;
      lVar3 = *(long *)(this + 0x178);
      lVar6 = lVar6 + 8;
    }
  }
  pvVar2 = *(void **)(this + 400);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x198) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x178);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x180) = pvVar2;
    operator_delete(pvVar2);
  }
  IndexedTriangleSetGeometry::~IndexedTriangleSetGeometry((IndexedTriangleSetGeometry *)this);
  return;
}


