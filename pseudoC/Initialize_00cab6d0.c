// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00cab6d0
// Size: 24 bytes
// Signature: undefined __thiscall Initialize(DL_PrivateKey_ECGDSA<CryptoPP::EC2N> * this, RandomNumberGenerator * param_1, DL_GroupParameters_EC * param_2)


/* CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::EC2N>::Initialize(CryptoPP::RandomNumberGenerator&,
   CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N> const&) */

void __thiscall
CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::EC2N>::Initialize
          (DL_PrivateKey_ECGDSA<CryptoPP::EC2N> *this,RandomNumberGenerator *param_1,
          DL_GroupParameters_EC *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00cab6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x48))(this,param_1,param_2 + *(long *)(*(long *)param_2 + -0x70));
  return;
}


