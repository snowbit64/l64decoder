// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2World
// Entry Point: 00bb2a34
// Size: 40 bytes
// Signature: undefined __thiscall ~Bt2World(Bt2World * this)


/* Bt2World::~Bt2World() */

void __thiscall Bt2World::~Bt2World(Bt2World *this)

{
  ~Bt2World(this);
                    /* try { // try from 00bb2a48 to 00bb2a4f has its CatchHandler @ 00bb2a5c */
  btAlignedFreeInternal(this);
  return;
}


