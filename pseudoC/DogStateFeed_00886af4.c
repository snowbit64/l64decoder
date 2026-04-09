// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DogStateFeed
// Entry Point: 00886af4
// Size: 68 bytes
// Signature: undefined __thiscall ~DogStateFeed(DogStateFeed * this)


/* DogStateFeed::~DogStateFeed() */

void __thiscall DogStateFeed::~DogStateFeed(DogStateFeed *this)

{
  *(undefined ***)this = &PTR__DogStateFeed_00fdc948;
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  operator_delete(this);
  return;
}


