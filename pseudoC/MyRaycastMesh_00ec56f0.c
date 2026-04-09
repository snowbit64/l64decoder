// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MyRaycastMesh
// Entry Point: 00ec56f0
// Size: 80 bytes
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
                    /* WARNING: Could not recover jumptable at 0x00ec573c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 8) + 0x10))();
  return;
}


