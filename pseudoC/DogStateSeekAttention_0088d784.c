// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DogStateSeekAttention
// Entry Point: 0088d784
// Size: 68 bytes
// Signature: undefined __thiscall ~DogStateSeekAttention(DogStateSeekAttention * this)


/* DogStateSeekAttention::~DogStateSeekAttention() */

void __thiscall DogStateSeekAttention::~DogStateSeekAttention(DogStateSeekAttention *this)

{
  *(undefined ***)this = &PTR__DogStateSeekAttention_00fdcee8;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this);
  return;
}


