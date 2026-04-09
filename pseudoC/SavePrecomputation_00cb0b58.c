// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SavePrecomputation
// Entry Point: 00cb0b58
// Size: 52 bytes
// Signature: undefined __thiscall SavePrecomputation(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA> * this, BufferedTransformation * param_1)


/* CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA>::SavePrecomputation(CryptoPP::BufferedTransformation&)
   const */

void __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA>::SavePrecomputation
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_DSA> *this,BufferedTransformation *param_1
          )

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00cb0b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
  return;
}


