// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator==
// Entry Point: 00ca4ef0
// Size: 168 bytes
// Signature: undefined __thiscall operator==(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> * this, DL_PublicKeyImpl * param_1)


/* CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   >::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>
   > const&) const */

undefined8 __thiscall
CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>>::operator==
          (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>> *this,
          DL_PublicKeyImpl *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = DL_GroupParameters_EC<CryptoPP::EC2N>::operator==
                    ((DL_GroupParameters_EC<CryptoPP::EC2N> *)(this + 0x18),
                     (DL_GroupParameters_EC *)(param_1 + 0x18));
  if ((uVar1 & 1) != 0) {
    lVar2 = (**(code **)(*(long *)this + 0x20))(this);
    lVar3 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
    if ((*(byte *)(lVar2 + 0x48) != 0) && (*(byte *)(lVar3 + 0x48) != 0)) {
      return 1;
    }
    if (((*(byte *)(lVar2 + 0x48) | *(byte *)(lVar3 + 0x48)) == 0) &&
       (uVar1 = PolynomialMod2::Equals((PolynomialMod2 *)(lVar2 + 8),(PolynomialMod2 *)(lVar3 + 8)),
       (uVar1 & 1) != 0)) {
      uVar4 = PolynomialMod2::Equals
                        ((PolynomialMod2 *)(lVar2 + 0x28),(PolynomialMod2 *)(lVar3 + 0x28));
      return uVar4;
    }
  }
  return 0;
}


