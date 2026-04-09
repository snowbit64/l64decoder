// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DeerStateFlee
// Entry Point: 00882e3c
// Size: 68 bytes
// Signature: undefined __thiscall ~DeerStateFlee(DeerStateFlee * this)


/* DeerStateFlee::~DeerStateFlee() */

void __thiscall DeerStateFlee::~DeerStateFlee(DeerStateFlee *this)

{
  *(undefined ***)this = &PTR__DeerStateFlee_00fdc448;
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  *(undefined8 *)(this + 0x20) = 0;
  return;
}


