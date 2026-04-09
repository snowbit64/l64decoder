// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00caa848
// Size: 140 bytes
// Signature: undefined __thiscall Initialize(DL_PrivateKey_ECGDSA<CryptoPP::ECP> * this, ECP * param_1, ECPPoint * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>::Initialize(CryptoPP::ECP const&,
   CryptoPP::ECPPoint const&, CryptoPP::Integer const&, CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_PrivateKey_ECGDSA<CryptoPP::ECP>::Initialize
          (DL_PrivateKey_ECGDSA<CryptoPP::ECP> *this,ECP *param_1,ECPPoint *param_2,Integer *param_3
          ,Integer *param_4)

{
  Integer *pIVar1;
  
  pIVar1 = (Integer *)Integer::Zero();
  EcPrecomputation<CryptoPP::ECP>::SetCurve
            ((EcPrecomputation<CryptoPP::ECP> *)(this + 0x70),param_1);
  (**(code **)(*(long *)(this + 0x60) + 0x70))(this + 0x60,param_2);
  Integer::operator=((Integer *)(this + 0x170),param_3);
  Integer::operator=((Integer *)(this + 0x1a0),pIVar1);
                    /* WARNING: Could not recover jumptable at 0x00caa8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,param_4);
  return;
}


