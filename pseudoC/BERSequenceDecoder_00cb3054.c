// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BERSequenceDecoder
// Entry Point: 00cb3054
// Size: 36 bytes
// Signature: undefined __thiscall ~BERSequenceDecoder(BERSequenceDecoder * this)


/* CryptoPP::BERSequenceDecoder::~BERSequenceDecoder() */

void __thiscall CryptoPP::BERSequenceDecoder::~BERSequenceDecoder(BERSequenceDecoder *this)

{
  BERGeneralDecoder::~BERGeneralDecoder((BERGeneralDecoder *)this);
  operator_delete(this);
  return;
}


