// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Sample
// Entry Point: 008b2ae4
// Size: 60 bytes
// Signature: undefined __thiscall ~Sample(Sample * this)


/* Sample::~Sample() */

void __thiscall Sample::~Sample(Sample *this)

{
  *(undefined ***)this = &PTR__Sample_00fdd6e8;
  *(undefined ***)(this + 0x20) = &PTR__Sample_00fdd7d0;
  Streamable::~Streamable((Streamable *)(this + 0x20));
  Entity::~Entity((Entity *)this);
  return;
}


