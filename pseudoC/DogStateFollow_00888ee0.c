// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DogStateFollow
// Entry Point: 00888ee0
// Size: 68 bytes
// Signature: undefined __thiscall ~DogStateFollow(DogStateFollow * this)


/* DogStateFollow::~DogStateFollow() */

void __thiscall DogStateFollow::~DogStateFollow(DogStateFollow *this)

{
  *(undefined ***)this = &PTR__DogStateFollow_00fdcbc8;
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  operator_delete(this);
  return;
}


