// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateRandom
// Entry Point: 00cb109c
// Size: 8 bytes
// Signature: undefined __thiscall GenerateRandom(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA> * this, RandomNumberGenerator * param_1, NameValuePairs * param_2)


/* non-virtual thunk to
   CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA>::GenerateRandom(CryptoPP::RandomNumberGenerator&,
   CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA>::GenerateRandom
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA> *this,RandomNumberGenerator *param_1,
          NameValuePairs *param_2)

{
  GenerateRandom(this + -0x10,param_1,param_2);
  return;
}


