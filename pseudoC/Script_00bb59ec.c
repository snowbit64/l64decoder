// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Script
// Entry Point: 00bb59ec
// Size: 88 bytes
// Signature: undefined __thiscall ~Script(Script * this)


/* non-virtual thunk to Script::~Script() */

void __thiscall Script::~Script(Script *this)

{
  undefined8 *this_00;
  
  *(undefined4 *)(this + 8) = 0;
  this[0x10] = (Script)0x0;
  *(undefined ***)this = &PTR__Script_00feb538;
  this_00 = (undefined8 *)(this + -0x10);
  *this_00 = &PTR__Script_00feb4f8;
  if (((byte)this[0x38] & 1) != 0) {
    operator_delete(*(void **)(this + 0x48));
  }
  Resource::~Resource((Resource *)this_00);
  operator_delete(this_00);
  return;
}


