// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DEREncodePublicKey
// Entry Point: 00c8d470
// Size: 52 bytes
// Signature: undefined __thiscall DEREncodePublicKey(DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA> * this, BufferedTransformation * param_1)


/* non-virtual thunk to
   CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>::DEREncodePublicKey(CryptoPP::BufferedTransformation&)
   const */

void __thiscall
CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>::DEREncodePublicKey
          (DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA> *this,BufferedTransformation *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)(this + -8) + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00c8d4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
  return;
}


