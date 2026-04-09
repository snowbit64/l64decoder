// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NavigationMeshPath
// Entry Point: 00af8c40
// Size: 36 bytes
// Signature: undefined __thiscall ~NavigationMeshPath(NavigationMeshPath * this)


/* NavigationMeshPath::~NavigationMeshPath() */

void __thiscall NavigationMeshPath::~NavigationMeshPath(NavigationMeshPath *this)

{
  *(undefined ***)this = &PTR__NavigationMeshPath_00fe7020;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
    return;
  }
  return;
}


