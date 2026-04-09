// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator==
// Entry Point: 00ca4608
// Size: 180 bytes
// Signature: undefined __thiscall operator==(DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> * this, DL_PublicKeyImpl * param_1)


/* CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   >::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   > const&) const */

bool __thiscall
CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::operator==
          (DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *this,
          DL_PublicKeyImpl *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = DL_GroupParameters_EC<CryptoPP::ECP>::operator==
                    ((DL_GroupParameters_EC<CryptoPP::ECP> *)(this + 0x18),
                     (DL_GroupParameters_EC *)(param_1 + 0x18));
  if ((uVar2 & 1) != 0) {
    lVar3 = (**(code **)(*(long *)this + 0x20))(this);
    lVar4 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
    if ((*(byte *)(lVar3 + 0x68) != 0) && (*(byte *)(lVar4 + 0x68) != 0)) {
      return true;
    }
    if (((*(byte *)(lVar3 + 0x68) | *(byte *)(lVar4 + 0x68)) == 0) &&
       (iVar1 = Integer::Compare((Integer *)(lVar3 + 8),(Integer *)(lVar4 + 8)), iVar1 == 0)) {
      iVar1 = Integer::Compare((Integer *)(lVar3 + 0x38),(Integer *)(lVar4 + 0x38));
      return iVar1 == 0;
    }
  }
  return false;
}


