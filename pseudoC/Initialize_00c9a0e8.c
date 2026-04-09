// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00c9a0e8
// Size: 96 bytes
// Signature: undefined __thiscall Initialize(DL_GroupParameters_EC<CryptoPP::ECP> * this, ECP * param_1, ECPPoint * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::Initialize(CryptoPP::ECP const&,
   CryptoPP::ECPPoint const&, CryptoPP::Integer const&, CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::Initialize
          (DL_GroupParameters_EC<CryptoPP::ECP> *this,ECP *param_1,ECPPoint *param_2,
          Integer *param_3,Integer *param_4)

{
  EcPrecomputation<CryptoPP::ECP>::SetCurve
            ((EcPrecomputation<CryptoPP::ECP> *)(this + 0x10),param_1);
  (**(code **)(*(long *)this + 0x70))(this,param_2);
  Integer::operator=((Integer *)(this + 0x110),param_3);
  Integer::operator=((Integer *)(this + 0x140),param_4);
  return;
}


