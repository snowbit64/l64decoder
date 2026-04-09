// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LoadPrecomputation
// Entry Point: 00ca855c
// Size: 52 bytes
// Signature: undefined __thiscall LoadPrecomputation(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   >::LoadPrecomputation(CryptoPP::BufferedTransformation&) */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::LoadPrecomputation
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *this,
          BufferedTransformation *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00ca858c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(plVar1,param_1);
  return;
}


