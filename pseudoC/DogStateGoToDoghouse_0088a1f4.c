// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DogStateGoToDoghouse
// Entry Point: 0088a1f4
// Size: 68 bytes
// Signature: undefined __thiscall ~DogStateGoToDoghouse(DogStateGoToDoghouse * this)


/* DogStateGoToDoghouse::~DogStateGoToDoghouse() */

void __thiscall DogStateGoToDoghouse::~DogStateGoToDoghouse(DogStateGoToDoghouse *this)

{
  *(undefined ***)this = &PTR__DogStateGoToDoghouse_00fdcda8;
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  operator_delete(this);
  return;
}


