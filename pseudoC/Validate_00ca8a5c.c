// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Validate
// Entry Point: 00ca8a5c
// Size: 16 bytes
// Signature: undefined __thiscall Validate(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * this, RandomNumberGenerator * param_1, uint param_2)


/* virtual thunk to CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::Validate(CryptoPP::RandomNumberGenerator&, unsigned int) const */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::Validate
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *this,
          RandomNumberGenerator *param_1,uint param_2)

{
  Validate(this + *(long *)(*(long *)this + -0x30),param_1,param_2);
  return;
}


