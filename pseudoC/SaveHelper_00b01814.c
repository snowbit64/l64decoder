// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SaveHelper
// Entry Point: 00b01814
// Size: 108 bytes
// Signature: undefined __thiscall ~SaveHelper(SaveHelper * this)


/* SaveHelper::~SaveHelper() */

void __thiscall SaveHelper::~SaveHelper(SaveHelper *this)

{
  Thread *this_00;
  
  this_00 = *(Thread **)(this + 0x48);
  *(undefined ***)this = &PTR__SaveHelper_00fe7110;
  if (this_00 != (Thread *)0x0) {
    Thread::~Thread(this_00);
    operator_delete(this_00);
  }
  if (((byte)this[0x20] & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}


