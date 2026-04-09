// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Precompute
// Entry Point: 00ca9134
// Size: 64 bytes
// Signature: undefined __thiscall Precompute(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * this, uint param_1)


/* virtual thunk to CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::Precompute(unsigned int) */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::Precompute
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *this,uint param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + *(long *)(*(long *)this + -0x58)) + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00ca9170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1,param_1);
  return;
}


