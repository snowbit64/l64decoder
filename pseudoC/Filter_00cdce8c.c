// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Filter
// Entry Point: 00cdce8c
// Size: 48 bytes
// Signature: undefined __thiscall ~Filter(Filter * this)


/* non-virtual thunk to CryptoPP::Filter::~Filter() */

void __thiscall CryptoPP::Filter::~Filter(Filter *this)

{
  *(undefined ***)(this + -8) = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cdceb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


