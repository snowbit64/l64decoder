// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetPrivateExponent
// Entry Point: 00cb0828
// Size: 8 bytes
// Signature: undefined __thiscall SetPrivateExponent(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA> * this, Integer * param_1)


/* CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA>::SetPrivateExponent(CryptoPP::Integer
   const&) */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA>::SetPrivateExponent
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA> *this,Integer *param_1)

{
  Integer::operator=((Integer *)(this + 0x140),param_1);
  return;
}


