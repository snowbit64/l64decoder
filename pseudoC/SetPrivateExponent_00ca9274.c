// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetPrivateExponent
// Entry Point: 00ca9274
// Size: 8 bytes
// Signature: undefined __thiscall SetPrivateExponent(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * this, Integer * param_1)


/* CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::SetPrivateExponent(CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::SetPrivateExponent
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *this,Integer *param_1
          )

{
  Integer::operator=((Integer *)(this + 0x250),param_1);
  return;
}


