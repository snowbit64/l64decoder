// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VoxelSet
// Entry Point: 00eca0b4
// Size: 76 bytes
// Signature: undefined __thiscall ~VoxelSet(VoxelSet * this)


/* VHACD::VoxelSet::~VoxelSet() */

void __thiscall VHACD::VoxelSet::~VoxelSet(VoxelSet *this)

{
  *(undefined ***)this = &PTR__VoxelSet_010147e0;
  if (*(void **)(this + 0xa00) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xa00));
  }
  *(undefined ***)this = &PTR__PrimitiveSet_010148a8;
  Mesh::~Mesh((Mesh *)(this + 0x10));
  return;
}


