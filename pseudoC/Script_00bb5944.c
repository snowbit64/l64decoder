// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Script
// Entry Point: 00bb5944
// Size: 80 bytes
// Signature: undefined __thiscall ~Script(Script * this)


/* non-virtual thunk to Script::~Script() */

void __thiscall Script::~Script(Script *this)

{
  *(undefined4 *)(this + 8) = 0;
  this[0x10] = (Script)0x0;
  *(undefined ***)this = &PTR__Script_00feb538;
  *(undefined ***)(this + -0x10) = &PTR__Script_00feb4f8;
  if (((byte)this[0x38] & 1) != 0) {
    operator_delete(*(void **)(this + 0x48));
  }
  Resource::~Resource((Resource *)(this + -0x10));
  return;
}


