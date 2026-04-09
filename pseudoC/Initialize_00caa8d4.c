// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00caa8d4
// Size: 24 bytes
// Signature: undefined __thiscall Initialize(DL_PrivateKey_ECGDSA<CryptoPP::ECP> * this, RandomNumberGenerator * param_1, DL_GroupParameters_EC * param_2)


/* CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>::Initialize(CryptoPP::RandomNumberGenerator&,
   CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP> const&) */

void __thiscall
CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>::Initialize
          (DL_PrivateKey_ECGDSA<CryptoPP::ECP> *this,RandomNumberGenerator *param_1,
          DL_GroupParameters_EC *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00caa8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x48))(this,param_1,param_2 + *(long *)(*(long *)param_2 + -0x70));
  return;
}


