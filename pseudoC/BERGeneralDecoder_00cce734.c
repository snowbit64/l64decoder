// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BERGeneralDecoder
// Entry Point: 00cce734
// Size: 56 bytes
// Signature: undefined __thiscall ~BERGeneralDecoder(BERGeneralDecoder * this)


/* non-virtual thunk to CryptoPP::BERGeneralDecoder::~BERGeneralDecoder() */

void __thiscall CryptoPP::BERGeneralDecoder::~BERGeneralDecoder(BERGeneralDecoder *this)

{
  *(undefined ***)this = &PTR__BERGeneralDecoder_01005240;
  *(undefined ***)(this + -8) = &PTR__BERGeneralDecoder_010050a8;
  if (this[0x28] == (BERGeneralDecoder)0x0) {
                    /* try { // try from 00cce760 to 00cce763 has its CatchHandler @ 00cce76c */
    MessageEnd();
  }
  return;
}


