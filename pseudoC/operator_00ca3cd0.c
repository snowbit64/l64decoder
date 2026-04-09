// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator==
// Entry Point: 00ca3cd0
// Size: 232 bytes
// Signature: undefined __thiscall operator==(DL_GroupParameters_EC<CryptoPP::EC2N> * this, DL_GroupParameters_EC * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   const&) const */

undefined8 __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::operator==
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this,DL_GroupParameters_EC *param_1)

{
  DL_GroupParameters_EC<CryptoPP::EC2N> *pDVar1;
  DL_GroupParameters_EC *pDVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = PolynomialMod2::Equals
                    ((PolynomialMod2 *)(*(long *)(this + 0x28) + 0x70),
                     (PolynomialMod2 *)(*(long *)(param_1 + 0x28) + 0x70));
  if ((((uVar3 & 1) != 0) &&
      (uVar3 = PolynomialMod2::Equals
                         ((PolynomialMod2 *)(this + 0x30),(PolynomialMod2 *)(param_1 + 0x30)),
      (uVar3 & 1) != 0)) &&
     (uVar3 = PolynomialMod2::Equals
                        ((PolynomialMod2 *)(this + 0x50),(PolynomialMod2 *)(param_1 + 0x50)),
     (uVar3 & 1) != 0)) {
    uVar3 = (**(code **)(*(long *)(this + 0x10) + 0x10))(this + 0x10);
    pDVar1 = this + 200;
    if ((uVar3 & 1) == 0) {
      pDVar1 = *(DL_GroupParameters_EC<CryptoPP::EC2N> **)(this + 0x150);
    }
    uVar3 = (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(param_1 + 0x10);
    pDVar2 = param_1 + 200;
    if ((uVar3 & 1) == 0) {
      pDVar2 = *(DL_GroupParameters_EC **)(param_1 + 0x150);
    }
    if ((pDVar1[0x48] != (DL_GroupParameters_EC<CryptoPP::EC2N>)0x0) &&
       (pDVar2[0x48] != (DL_GroupParameters_EC)0x0)) {
      return 1;
    }
    if ((((byte)pDVar1[0x48] | (byte)pDVar2[0x48]) == 0) &&
       (uVar3 = PolynomialMod2::Equals
                          ((PolynomialMod2 *)(pDVar1 + 8),(PolynomialMod2 *)(pDVar2 + 8)),
       (uVar3 & 1) != 0)) {
      uVar4 = PolynomialMod2::Equals
                        ((PolynomialMod2 *)(pDVar1 + 0x28),(PolynomialMod2 *)(pDVar2 + 0x28));
      return uVar4;
    }
  }
  return 0;
}


