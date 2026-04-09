// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DERGeneralEncoder
// Entry Point: 00cceab0
// Size: 84 bytes
// Signature: undefined __thiscall DERGeneralEncoder(DERGeneralEncoder * this, BufferedTransformation * param_1, uchar param_2)


/* CryptoPP::DERGeneralEncoder::DERGeneralEncoder(CryptoPP::BufferedTransformation&, unsigned char)
    */

void __thiscall
CryptoPP::DERGeneralEncoder::DERGeneralEncoder
          (DERGeneralEncoder *this,BufferedTransformation *param_1,uchar param_2)

{
  ByteQueue::ByteQueue((ByteQueue *)this,0);
  *(BufferedTransformation **)(this + 0x48) = param_1;
  this[0x50] = (DERGeneralEncoder)param_2;
  this[0x51] = (DERGeneralEncoder)0x0;
  *(undefined ***)this = &PTR__DERGeneralEncoder_01005270;
  *(undefined ***)(this + 8) = &PTR__DERGeneralEncoder_01005400;
  return;
}


