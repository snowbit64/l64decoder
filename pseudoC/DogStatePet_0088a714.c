// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DogStatePet
// Entry Point: 0088a714
// Size: 68 bytes
// Signature: undefined __thiscall ~DogStatePet(DogStatePet * this)


/* DogStatePet::~DogStatePet() */

void __thiscall DogStatePet::~DogStatePet(DogStatePet *this)

{
  *(undefined ***)this = &PTR__DogStatePet_00fdcdf8;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this);
  return;
}


