// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NavigationMesh
// Entry Point: 00af8848
// Size: 108 bytes
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
  *(undefined ***)this = &PTR__AtomicRefCounted_00fda810;
  return;
}


