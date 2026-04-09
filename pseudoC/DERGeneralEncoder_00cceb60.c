// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DERGeneralEncoder
// Entry Point: 00cceb60
// Size: 36 bytes
// Signature: undefined __thiscall ~DERGeneralEncoder(DERGeneralEncoder * this)


/* CryptoPP::DERGeneralEncoder::~DERGeneralEncoder() */

void __thiscall CryptoPP::DERGeneralEncoder::~DERGeneralEncoder(DERGeneralEncoder *this)

{
  ~DERGeneralEncoder(this);
  operator_delete(this);
  return;
}


