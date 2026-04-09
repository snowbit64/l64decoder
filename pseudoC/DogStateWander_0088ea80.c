// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DogStateWander
// Entry Point: 0088ea80
// Size: 68 bytes
// Signature: undefined __thiscall ~DogStateWander(DogStateWander * this)


/* DogStateWander::~DogStateWander() */

void __thiscall DogStateWander::~DogStateWander(DogStateWander *this)

{
  *(undefined ***)this = &PTR__DogStateWander_00fdcf88;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this);
  return;
}


