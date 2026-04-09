// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BERGeneralDecoder
// Entry Point: 00cce784
// Size: 68 bytes
// Signature: undefined __thiscall ~BERGeneralDecoder(BERGeneralDecoder * this)


/* CryptoPP::BERGeneralDecoder::~BERGeneralDecoder() */

void __thiscall CryptoPP::BERGeneralDecoder::~BERGeneralDecoder(BERGeneralDecoder *this)

{
  *(undefined ***)this = &PTR__BERGeneralDecoder_010050a8;
  *(undefined ***)(this + 8) = &PTR__BERGeneralDecoder_01005240;
  if (this[0x30] == (BERGeneralDecoder)0x0) {
                    /* try { // try from 00cce7b0 to 00cce7b7 has its CatchHandler @ 00cce7c8 */
    MessageEnd();
  }
  operator_delete(this);
  return;
}


