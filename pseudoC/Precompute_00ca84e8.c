// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Precompute
// Entry Point: 00ca84e8
// Size: 52 bytes
// Signature: undefined __thiscall Precompute(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> * this, uint param_1)


/* CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP> >::Precompute(unsigned
   int) */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::Precompute
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *this,uint param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00ca8518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1,param_1);
  return;
}


