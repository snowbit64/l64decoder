// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ShaHash
// Entry Point: 00be5cfc
// Size: 88 bytes
// Signature: undefined __thiscall ~ShaHash(ShaHash * this)


/* ShaHash::~ShaHash() */

void __thiscall ShaHash::~ShaHash(ShaHash *this)

{
  *(undefined ***)this = &PTR__ShaHash_00fec210;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  operator_delete(this);
  return;
}


