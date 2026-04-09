// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SourceTemplate
// Entry Point: 00cb9644
// Size: 72 bytes
// Signature: undefined __thiscall ~SourceTemplate(SourceTemplate<CryptoPP::StringStore> * this)


/* CryptoPP::SourceTemplate<CryptoPP::StringStore>::~SourceTemplate() */

void __thiscall
CryptoPP::SourceTemplate<CryptoPP::StringStore>::~SourceTemplate
          (SourceTemplate<CryptoPP::StringStore> *this)

{
  *(undefined ***)this = &PTR__Filter_01005f60;
  *(undefined ***)(this + 8) = &PTR__Filter_01006108;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  operator_delete(this);
  return;
}


