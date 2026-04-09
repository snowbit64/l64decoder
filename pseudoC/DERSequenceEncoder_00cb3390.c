// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DERSequenceEncoder
// Entry Point: 00cb3390
// Size: 40 bytes
// Signature: undefined __thiscall ~DERSequenceEncoder(DERSequenceEncoder * this)


/* non-virtual thunk to CryptoPP::DERSequenceEncoder::~DERSequenceEncoder() */

void __thiscall CryptoPP::DERSequenceEncoder::~DERSequenceEncoder(DERSequenceEncoder *this)

{
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)(this + -8));
  operator_delete((DERGeneralEncoder *)(this + -8));
  return;
}


