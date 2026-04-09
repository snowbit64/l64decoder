// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IncorporateEntropy
// Entry Point: 00cae2c4
// Size: 16 bytes
// Signature: undefined __thiscall IncorporateEntropy(AutoSeededX917RNG<CryptoPP::Rijndael> * this, uchar * param_1, ulong param_2)


/* CryptoPP::AutoSeededX917RNG<CryptoPP::Rijndael>::IncorporateEntropy(unsigned char const*,
   unsigned long) */

void __thiscall
CryptoPP::AutoSeededX917RNG<CryptoPP::Rijndael>::IncorporateEntropy
          (AutoSeededX917RNG<CryptoPP::Rijndael> *this,uchar *param_1,ulong param_2)

{
  Reseed(this,false,param_1,param_2);
  return;
}


