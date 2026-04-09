// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERGeneralDecoder
// Entry Point: 00cce6d0
// Size: 100 bytes
// Signature: undefined __thiscall BERGeneralDecoder(BERGeneralDecoder * this, BERGeneralDecoder * param_1, uchar param_2)


/* CryptoPP::BERGeneralDecoder::BERGeneralDecoder(CryptoPP::BERGeneralDecoder&, unsigned char) */

void __thiscall
CryptoPP::BERGeneralDecoder::BERGeneralDecoder
          (BERGeneralDecoder *this,BERGeneralDecoder *param_1,uchar param_2)

{
  Algorithm::Algorithm((Algorithm *)this,false);
  *(BERGeneralDecoder **)(this + 0x20) = param_1;
  this[0x18] = (BERGeneralDecoder)0x0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  this[0x30] = (BERGeneralDecoder)0x0;
  *(undefined ***)this = &PTR__BERGeneralDecoder_010050a8;
  *(undefined ***)(this + 8) = &PTR__BERGeneralDecoder_01005240;
  Init(this,param_2);
  return;
}


