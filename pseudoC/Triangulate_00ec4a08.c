// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Triangulate
// Entry Point: 00ec4a08
// Size: 64 bytes
// Signature: undefined __thiscall ~Triangulate(Triangulate * this)


/* FLOAT_MATH::Triangulate::~Triangulate() */

void __thiscall FLOAT_MATH::Triangulate::~Triangulate(Triangulate *this)

{
  *(undefined ***)this = &PTR_triangulate3d_010146c0;
  free(*(void **)(this + 8));
  free(*(void **)(this + 0x10));
  operator_delete(this);
  return;
}


