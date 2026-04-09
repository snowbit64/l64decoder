// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SourceTemplate
// Entry Point: 00cb968c
// Size: 48 bytes
// Signature: undefined __thiscall ~SourceTemplate(SourceTemplate<CryptoPP::StringStore> * this)


/* non-virtual thunk to CryptoPP::SourceTemplate<CryptoPP::StringStore>::~SourceTemplate() */

void __thiscall
CryptoPP::SourceTemplate<CryptoPP::StringStore>::~SourceTemplate
          (SourceTemplate<CryptoPP::StringStore> *this)

{
  *(undefined ***)(this + -8) = &PTR__Filter_01005f60;
  *(undefined ***)this = &PTR__Filter_01006108;
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cb96b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 8))();
    return;
  }
  return;
}


