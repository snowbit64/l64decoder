// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ClippingMesh
// Entry Point: 00a2a3cc
// Size: 96 bytes
// Signature: undefined __thiscall ~ClippingMesh(ClippingMesh * this)


/* ClippingMesh::~ClippingMesh() */

void __thiscall ClippingMesh::~ClippingMesh(ClippingMesh *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
    return;
  }
  return;
}


