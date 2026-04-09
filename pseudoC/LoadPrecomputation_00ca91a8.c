// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LoadPrecomputation
// Entry Point: 00ca91a8
// Size: 64 bytes
// Signature: undefined __thiscall LoadPrecomputation(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * this, BufferedTransformation * param_1)


/* virtual thunk to CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::LoadPrecomputation(CryptoPP::BufferedTransformation&) */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::LoadPrecomputation
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *this,
          BufferedTransformation *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + *(long *)(*(long *)this + -0x60)) + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00ca91e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(plVar1,param_1);
  return;
}


