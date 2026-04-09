// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Mesh
// Entry Point: 00eb059c
// Size: 68 bytes
// Signature: undefined __thiscall ~Mesh(Mesh * this)


/* VHACD::Mesh::~Mesh() */

void __thiscall VHACD::Mesh::~Mesh(Mesh *this)

{
  if (*(long *)(this + 0x918) != 0) {
    operator_delete__((void *)(*(long *)(this + 0x918) + -8));
  }
  if (*(long *)(this + 0x600) != 0) {
    operator_delete__((void *)(*(long *)(this + 0x600) + -8));
    return;
  }
  return;
}


