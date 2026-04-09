// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetPrivateExponent
// Entry Point: 00ca865c
// Size: 8 bytes
// Signature: undefined __thiscall SetPrivateExponent(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> * this, Integer * param_1)


/* CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   >::SetPrivateExponent(CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::SetPrivateExponent
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *this,Integer *param_1)

{
  Integer::operator=((Integer *)(this + 0x1d8),param_1);
  return;
}


