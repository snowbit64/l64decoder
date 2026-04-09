// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Sample
// Entry Point: 008b2b20
// Size: 60 bytes
// Signature: undefined __thiscall ~Sample(Sample * this)


/* non-virtual thunk to Sample::~Sample() */

void __thiscall Sample::~Sample(Sample *this)

{
  *(undefined ***)(this + -0x20) = &PTR__Sample_00fdd6e8;
  *(undefined ***)this = &PTR__Sample_00fdd7d0;
  Streamable::~Streamable((Streamable *)this);
  Entity::~Entity((Entity *)(this + -0x20));
  return;
}


