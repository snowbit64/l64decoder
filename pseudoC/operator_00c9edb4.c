// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator==
// Entry Point: 00c9edb4
// Size: 268 bytes
// Signature: undefined __thiscall operator==(DL_GroupParameters_EC<CryptoPP::ECP> * this, DL_GroupParameters_EC * param_1)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   const&) const */

bool __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::operator==
          (DL_GroupParameters_EC<CryptoPP::ECP> *this,DL_GroupParameters_EC *param_1)

{
  DL_GroupParameters_EC<CryptoPP::ECP> *pDVar1;
  DL_GroupParameters_EC *pDVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(this + 0x20);
  lVar6 = *(long *)(param_1 + 0x20);
  iVar3 = Integer::Compare((Integer *)(*(long *)(lVar5 + 0x10) + 0x18),
                           (Integer *)(*(long *)(lVar6 + 0x10) + 0x18));
  if (((iVar3 == 0) &&
      (iVar3 = Integer::Compare((Integer *)(lVar5 + 0x18),(Integer *)(lVar6 + 0x18)), iVar3 == 0))
     && (iVar3 = Integer::Compare((Integer *)(lVar5 + 0x48),(Integer *)(lVar6 + 0x48)), iVar3 == 0))
  {
    uVar4 = (**(code **)(*(long *)(this + 0x10) + 0x10))(this + 0x10);
    pDVar1 = this + 0x30;
    if ((uVar4 & 1) == 0) {
      pDVar1 = *(DL_GroupParameters_EC<CryptoPP::ECP> **)(this + 0xd8);
    }
    uVar4 = (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(param_1 + 0x10);
    pDVar2 = param_1 + 0x30;
    if ((uVar4 & 1) == 0) {
      pDVar2 = *(DL_GroupParameters_EC **)(param_1 + 0xd8);
    }
    if ((pDVar1[0x68] != (DL_GroupParameters_EC<CryptoPP::ECP>)0x0) &&
       (pDVar2[0x68] != (DL_GroupParameters_EC)0x0)) {
      return true;
    }
    if ((((byte)pDVar1[0x68] | (byte)pDVar2[0x68]) == 0) &&
       (iVar3 = Integer::Compare((Integer *)(pDVar1 + 8),(Integer *)(pDVar2 + 8)), iVar3 == 0)) {
      iVar3 = Integer::Compare((Integer *)(pDVar1 + 0x38),(Integer *)(pDVar2 + 0x38));
      return iVar3 == 0;
    }
  }
  return false;
}


