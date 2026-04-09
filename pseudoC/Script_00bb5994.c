// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Script
// Entry Point: 00bb5994
// Size: 88 bytes
// Signature: undefined __thiscall ~Script(Script * this)


/* Script::~Script() */

void __thiscall Script::~Script(Script *this)

{
  *(undefined4 *)(this + 0x18) = 0;
  this[0x20] = (Script)0x0;
  *(undefined ***)this = &PTR__Script_00feb4f8;
  *(undefined ***)(this + 0x10) = &PTR__Script_00feb538;
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this);
  return;
}


