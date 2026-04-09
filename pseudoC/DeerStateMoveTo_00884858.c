// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DeerStateMoveTo
// Entry Point: 00884858
// Size: 68 bytes
// Signature: undefined __thiscall ~DeerStateMoveTo(DeerStateMoveTo * this)


/* DeerStateMoveTo::~DeerStateMoveTo() */

void __thiscall DeerStateMoveTo::~DeerStateMoveTo(DeerStateMoveTo *this)

{
  *(undefined ***)this = &PTR__DeerStateMoveTo_00fdc778;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this);
  return;
}


