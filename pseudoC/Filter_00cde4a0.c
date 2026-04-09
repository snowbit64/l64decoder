// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Filter
// Entry Point: 00cde4a0
// Size: 48 bytes
// Signature: undefined __thiscall ~Filter(Filter * this)


/* CryptoPP::Filter::~Filter() */

void __thiscall CryptoPP::Filter::~Filter(Filter *this)

{
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cde4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}


