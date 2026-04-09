// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00c8d9d8
// Size: 8 bytes
// Signature: undefined __cdecl Initialize(RandomNumberGenerator * param_1, uint param_2)


/* CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>::Initialize(CryptoPP::RandomNumberGenerator&,
   unsigned int) */

void CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>::Initialize
               (RandomNumberGenerator *param_1,uint param_2)

{
  GeneratableCryptoMaterial::GenerateRandomWithKeySize(param_1 + 0x10,param_2);
  return;
}


