// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCollisionProxyMesh
// Entry Point: 008c5064
// Size: 100 bytes
// Signature: undefined __thiscall setCollisionProxyMesh(Geometry * this, IndexedTriangleSet * param_1)


/* Geometry::setCollisionProxyMesh(IndexedTriangleSet*) */

void __thiscall Geometry::setCollisionProxyMesh(Geometry *this,IndexedTriangleSet *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  *(IndexedTriangleSet **)(this + 0x48) = param_1;
  uVar3 = TriangleSet::getAttributes();
  uVar2 = *(uint *)(this + 0x34);
  uVar1 = uVar2 & 0xfffffffc;
  *(uint *)(this + 0x34) = uVar1;
  if (((uVar3 >> 6 & 1) != 0) && (*(uint *)(this + 0x34) = uVar1 | 1, (uVar3 >> 8 & 1) != 0)) {
    *(uint *)(this + 0x34) = uVar2 | 3;
  }
  return;
}


