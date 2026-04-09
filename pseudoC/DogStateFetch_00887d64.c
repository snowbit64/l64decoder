// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DogStateFetch
// Entry Point: 00887d64
// Size: 68 bytes
// Signature: undefined __thiscall ~DogStateFetch(DogStateFetch * this)


/* DogStateFetch::~DogStateFetch() */

void __thiscall DogStateFetch::~DogStateFetch(DogStateFetch *this)

{
  *(undefined ***)this = &PTR__DogStateFetch_00fdcad8;
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  operator_delete(this);
  return;
}


