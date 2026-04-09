// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00ca53cc
// Size: 140 bytes
// Signature: undefined __thiscall Initialize(DL_PublicKey_EC<CryptoPP::ECP> * this, ECP * param_1, ECPPoint * param_2, Integer * param_3, ECPPoint * param_4)


/* CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>::Initialize(CryptoPP::ECP const&, CryptoPP::ECPPoint
   const&, CryptoPP::Integer const&, CryptoPP::ECPPoint const&) */

void __thiscall
CryptoPP::DL_PublicKey_EC<CryptoPP::ECP>::Initialize
          (DL_PublicKey_EC<CryptoPP::ECP> *this,ECP *param_1,ECPPoint *param_2,Integer *param_3,
          ECPPoint *param_4)

{
  Integer *pIVar1;
  
  pIVar1 = (Integer *)Integer::Zero();
  EcPrecomputation<CryptoPP::ECP>::SetCurve
            ((EcPrecomputation<CryptoPP::ECP> *)(this + 0x28),param_1);
  (**(code **)(*(long *)(this + 0x18) + 0x70))(this + 0x18,param_2);
  Integer::operator=((Integer *)(this + 0x128),param_3);
  Integer::operator=((Integer *)(this + 0x158),pIVar1);
                    /* WARNING: Could not recover jumptable at 0x00ca5454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,param_4);
  return;
}


