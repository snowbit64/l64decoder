// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateRandom
// Entry Point: 00cea75c
// Size: 8 bytes
// Signature: undefined __thiscall GenerateRandom(DL_GroupParameters_DSA * this, RandomNumberGenerator * param_1, NameValuePairs * param_2)


/* non-virtual thunk to
   CryptoPP::DL_GroupParameters_DSA::GenerateRandom(CryptoPP::RandomNumberGenerator&,
   CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::DL_GroupParameters_DSA::GenerateRandom
          (DL_GroupParameters_DSA *this,RandomNumberGenerator *param_1,NameValuePairs *param_2)

{
  GenerateRandom(this + -8,param_1,param_2);
  return;
}


