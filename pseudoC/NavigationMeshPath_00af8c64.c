// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NavigationMeshPath
// Entry Point: 00af8c64
// Size: 60 bytes
// Signature: undefined __thiscall ~NavigationMeshPath(NavigationMeshPath * this)


/* NavigationMeshPath::~NavigationMeshPath() */

void __thiscall NavigationMeshPath::~NavigationMeshPath(NavigationMeshPath *this)

{
  *(undefined ***)this = &PTR__NavigationMeshPath_00fe7020;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
  operator_delete(this);
  return;
}


