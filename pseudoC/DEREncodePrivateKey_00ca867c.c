// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodePrivateKey
// Entry Point: 00ca867c
// Size: 8 bytes
// Signature: undefined __thiscall DEREncodePrivateKey(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> * this, BufferedTransformation * param_1)


/* non-virtual thunk to CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   >::DEREncodePrivateKey(CryptoPP::BufferedTransformation&) const */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::DEREncodePrivateKey
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *this,
          BufferedTransformation *param_1)

{
  Integer::DEREncode((Integer *)(this + 0x1d0),param_1);
  return;
}


