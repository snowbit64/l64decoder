// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BERGeneralDecoder
// Entry Point: 00ccef04
// Size: 48 bytes
// Signature: undefined __thiscall ~BERGeneralDecoder(BERGeneralDecoder * this)


/* CryptoPP::BERGeneralDecoder::~BERGeneralDecoder() */

void __thiscall CryptoPP::BERGeneralDecoder::~BERGeneralDecoder(BERGeneralDecoder *this)

{
  *(undefined ***)this = &PTR__BERGeneralDecoder_010050a8;
  *(undefined ***)(this + 8) = &PTR__BERGeneralDecoder_01005240;
  if (this[0x30] == (BERGeneralDecoder)0x0) {
                    /* try { // try from 00ccef28 to 00ccef2b has its CatchHandler @ 00ccef34 */
    MessageEnd();
  }
  return;
}


