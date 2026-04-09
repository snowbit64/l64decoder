// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SourceTemplate
// Entry Point: 00cb96bc
// Size: 80 bytes
// Signature: undefined __thiscall ~SourceTemplate(SourceTemplate<CryptoPP::StringStore> * this)


/* non-virtual thunk to CryptoPP::SourceTemplate<CryptoPP::StringStore>::~SourceTemplate() */

void __thiscall
CryptoPP::SourceTemplate<CryptoPP::StringStore>::~SourceTemplate
          (SourceTemplate<CryptoPP::StringStore> *this)

{
  *(undefined ***)this = &PTR__Filter_01006108;
  *(undefined ***)(this + -8) = &PTR__Filter_01005f60;
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  operator_delete(this + -8);
  return;
}


