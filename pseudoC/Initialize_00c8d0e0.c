// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00c8d0e0
// Size: 56 bytes
// Signature: undefined __thiscall Initialize(DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA> * this, Integer * param_1, Integer * param_2, Integer * param_3)


/* CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>::Initialize(CryptoPP::Integer
   const&, CryptoPP::Integer const&, CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>::Initialize
          (DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA> *this,Integer *param_1,
          Integer *param_2,Integer *param_3)

{
  DL_GroupParameters_IntegerBased::Initialize((Integer *)(this + 0x18),param_1);
                    /* WARNING: Could not recover jumptable at 0x00c8d114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,param_3);
  return;
}


