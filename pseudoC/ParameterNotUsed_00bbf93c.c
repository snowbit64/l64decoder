// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ParameterNotUsed
// Entry Point: 00bbf93c
// Size: 72 bytes
// Signature: undefined __thiscall ~ParameterNotUsed(ParameterNotUsed * this)


/* CryptoPP::AlgorithmParametersBase::ParameterNotUsed::~ParameterNotUsed() */

void __thiscall
CryptoPP::AlgorithmParametersBase::ParameterNotUsed::~ParameterNotUsed(ParameterNotUsed *this)

{
  *(undefined ***)this = &PTR__Exception_00fe0298;
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


