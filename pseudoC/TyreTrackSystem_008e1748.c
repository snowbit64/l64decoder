// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TyreTrackSystem
// Entry Point: 008e1748
// Size: 68 bytes
// Signature: undefined __thiscall ~TyreTrackSystem(TyreTrackSystem * this)


/* TyreTrackSystem::~TyreTrackSystem() */

void __thiscall TyreTrackSystem::~TyreTrackSystem(TyreTrackSystem *this)

{
  *(undefined ***)this = &PTR__TyreTrackSystem_00fde5d8;
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  Entity::~Entity((Entity *)this);
  return;
}


