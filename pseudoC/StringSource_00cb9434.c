// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~StringSource
// Entry Point: 00cb9434
// Size: 48 bytes
// Signature: undefined __thiscall ~StringSource(StringSource * this)


/* non-virtual thunk to CryptoPP::StringSource::~StringSource() */

void __thiscall CryptoPP::StringSource::~StringSource(StringSource *this)

{
  *(undefined ***)(this + -8) = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cb945c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


