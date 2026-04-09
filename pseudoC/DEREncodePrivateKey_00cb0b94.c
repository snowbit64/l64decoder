// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodePrivateKey
// Entry Point: 00cb0b94
// Size: 8 bytes
// Signature: undefined __thiscall DEREncodePrivateKey(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA>::DEREncodePrivateKey(CryptoPP::BufferedTransformation&)
   const */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA>::DEREncodePrivateKey
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA> *this,BufferedTransformation *param_1
          )

{
  Integer::DEREncode((Integer *)(this + 0x140),param_1);
  return;
}


