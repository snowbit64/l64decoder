// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodePrivateKey
// Entry Point: 00caa694
// Size: 8 bytes
// Signature: undefined __thiscall DEREncodePrivateKey(DL_PrivateKey_EC<CryptoPP::EC2N> * this, BufferedTransformation * param_1)


/* non-virtual thunk to
   CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>::DEREncodePrivateKey(CryptoPP::BufferedTransformation&)
   const */

void __thiscall
CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>::DEREncodePrivateKey
          (DL_PrivateKey_EC<CryptoPP::EC2N> *this,BufferedTransformation *param_1)

{
  DEREncodePrivateKey(this + -8,param_1);
  return;
}


