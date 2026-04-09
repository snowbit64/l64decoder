// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DERSequenceEncoder
// Entry Point: 00cb333c
// Size: 36 bytes
// Signature: undefined __thiscall ~DERSequenceEncoder(DERSequenceEncoder * this)


/* CryptoPP::DERSequenceEncoder::~DERSequenceEncoder() */

void __thiscall CryptoPP::DERSequenceEncoder::~DERSequenceEncoder(DERSequenceEncoder *this)

{
  DERGeneralEncoder::~DERGeneralEncoder((DERGeneralEncoder *)this);
  operator_delete(this);
  return;
}


