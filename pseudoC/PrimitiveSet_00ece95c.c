// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PrimitiveSet
// Entry Point: 00ece95c
// Size: 20 bytes
// Signature: undefined __thiscall ~PrimitiveSet(PrimitiveSet * this)


/* VHACD::PrimitiveSet::~PrimitiveSet() */

void __thiscall VHACD::PrimitiveSet::~PrimitiveSet(PrimitiveSet *this)

{
  *(undefined ***)this = &PTR__PrimitiveSet_010148a8;
  Mesh::~Mesh((Mesh *)(this + 0x10));
  return;
}


