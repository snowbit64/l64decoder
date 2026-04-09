// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NavigationMesh
// Entry Point: 00af88b4
// Size: 96 bytes
// Signature: undefined __thiscall ~NavigationMesh(NavigationMesh * this)


/* NavigationMesh::~NavigationMesh() */

void __thiscall NavigationMesh::~NavigationMesh(NavigationMesh *this)

{
  *(undefined ***)this = &PTR__NavigationMesh_00fe6fe0;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
  }
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x38));
  }
  if (*(void **)(this + 0x40) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x40));
  }
  operator_delete(this);
  return;
}


