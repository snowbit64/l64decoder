// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2D6Joint
// Entry Point: 0099438c
// Size: 36 bytes
// Signature: undefined __thiscall ~Bt2D6Joint(Bt2D6Joint * this)


/* Bt2D6Joint::~Bt2D6Joint() */

void __thiscall Bt2D6Joint::~Bt2D6Joint(Bt2D6Joint *this)

{
  *(undefined ***)this = &PTR__btTypedConstraint_00fe0e30;
                    /* try { // try from 009943a4 to 009943a7 has its CatchHandler @ 009943b0 */
  btAlignedFreeInternal(this);
  return;
}


