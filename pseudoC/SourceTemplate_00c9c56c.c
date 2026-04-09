// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SourceTemplate
// Entry Point: 00c9c56c
// Size: 48 bytes
// Signature: undefined __thiscall ~SourceTemplate(SourceTemplate<CryptoPP::StringStore> * this)


/* CryptoPP::SourceTemplate<CryptoPP::StringStore>::~SourceTemplate() */

void __thiscall
CryptoPP::SourceTemplate<CryptoPP::StringStore>::~SourceTemplate
          (SourceTemplate<CryptoPP::StringStore> *this)

{
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c9c594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x18) + 8))();
    return;
  }
  return;
}


