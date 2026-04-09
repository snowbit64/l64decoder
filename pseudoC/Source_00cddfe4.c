// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Source
// Entry Point: 00cddfe4
// Size: 48 bytes
// Signature: undefined __thiscall ~Source(Source * this)


/* non-virtual thunk to CryptoPP::Source::~Source() */

void __thiscall CryptoPP::Source::~Source(Source *this)

{
  *(undefined ***)(this + -8) = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cde00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


