// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00c8d240
// Size: 92 bytes
// Signature: undefined __thiscall Initialize(DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA> * this, Integer * param_1, Integer * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>::Initialize(CryptoPP::Integer
   const&, CryptoPP::Integer const&, CryptoPP::Integer const&, CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>::Initialize
          (DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA> *this,Integer *param_1,
          Integer *param_2,Integer *param_3,Integer *param_4)

{
  (**(code **)(*(long *)(this + 0x18) + 0xa8))(this + 0x18,param_1,param_3);
  Integer::operator=((Integer *)(this + 0x30),param_2);
  *(undefined4 *)(this + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00c8d298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,param_4);
  return;
}


