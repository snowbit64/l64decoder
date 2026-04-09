// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StringSource
// Entry Point: 00cb9464
// Size: 80 bytes
// Signature: undefined __thiscall ~StringSource(StringSource * this)


/* non-virtual thunk to CryptoPP::StringSource::~StringSource() */

void __thiscall CryptoPP::StringSource::~StringSource(StringSource *this)

{
  *(undefined ***)this = &PTR__Filter_01006108;
  *(undefined ***)(this + -8) = &PTR__Filter_01005f60;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  operator_delete(this + -8);
  return;
}


