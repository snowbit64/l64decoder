// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MyRaycastMesh
// Entry Point: 00ec5740
// Size: 88 bytes
// Signature: undefined __thiscall ~MyRaycastMesh(MyRaycastMesh * this)


/* RAYCAST_MESH::MyRaycastMesh::~MyRaycastMesh() */

void __thiscall RAYCAST_MESH::MyRaycastMesh::~MyRaycastMesh(MyRaycastMesh *this)

{
  *(undefined ***)this = &PTR_raycast_01014718;
  if (*(void **)(this + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x18));
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
  (**(code **)(**(long **)(this + 8) + 0x10))();
  operator_delete(this);
  return;
}


