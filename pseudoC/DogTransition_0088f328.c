// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DogTransition
// Entry Point: 0088f328
// Size: 68 bytes
// Signature: undefined __thiscall ~DogTransition(DogTransition * this)


/* DogTransition::~DogTransition() */

void __thiscall DogTransition::~DogTransition(DogTransition *this)

{
  *(undefined ***)this = &PTR__DogTransition_00fdcfd8;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this);
  return;
}


