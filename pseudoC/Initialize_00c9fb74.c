// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00c9fb74
// Size: 204 bytes
// Signature: undefined __thiscall Initialize(DL_GroupParameters_EC<CryptoPP::EC2N> * this, EC2N * param_1, EC2NPoint * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::Initialize(CryptoPP::EC2N const&,
   CryptoPP::EC2NPoint const&, CryptoPP::Integer const&, CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::Initialize
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this,EC2N *param_1,EC2NPoint *param_2,
          Integer *param_3,Integer *param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x10);
  plVar2 = *(long **)(this + 0x28);
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*plVar1 + 0xc0))();
  }
  *(long **)(this + 0x28) = plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x30),(PolynomialMod2 *)(param_1 + 0x18));
  PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x50),(PolynomialMod2 *)(param_1 + 0x38));
  PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x78),(PolynomialMod2 *)(param_1 + 0x60));
  PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x98),(PolynomialMod2 *)(param_1 + 0x80));
  this[0xb8] = *(DL_GroupParameters_EC<CryptoPP::EC2N> *)(param_1 + 0xa0);
  (**(code **)(*(long *)this + 0x70))(this,param_2);
  Integer::operator=((Integer *)(this + 0x188),param_3);
  Integer::operator=((Integer *)(this + 0x1b8),param_4);
  return;
}


