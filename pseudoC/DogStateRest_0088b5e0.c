// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DogStateRest
// Entry Point: 0088b5e0
// Size: 68 bytes
// Signature: undefined __thiscall ~DogStateRest(DogStateRest * this)


/* DogStateRest::~DogStateRest() */

void __thiscall DogStateRest::~DogStateRest(DogStateRest *this)

{
  *(undefined ***)this = &PTR__DogStateRest_00fdce48;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


