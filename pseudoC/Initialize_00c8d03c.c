// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00c8d03c
// Size: 164 bytes
// Signature: undefined __thiscall Initialize(DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA> * this, DL_GroupParameters_IntegerBased * param_1, Integer * param_2)


/* CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>::Initialize(CryptoPP::DL_GroupParameters_IntegerBased
   const&, CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>::Initialize
          (DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA> *this,
          DL_GroupParameters_IntegerBased *param_1,Integer *param_2)

{
  undefined8 uVar1;
  Integer *pIVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0xa0))(param_1);
  pIVar2 = (Integer *)(**(code **)(*(long *)param_1 + 0x50))(param_1);
  uVar3 = (**(code **)(*(long *)(param_1 + 8) + 0x68))(param_1 + 8);
  (**(code **)(*(long *)(this + 0x18) + 0xa8))(this + 0x18,uVar1,uVar3);
  Integer::operator=((Integer *)(this + 0x30),pIVar2);
  *(undefined4 *)(this + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00c8d0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,param_2);
  return;
}


