// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsIdentity
// Entry Point: 00cb5708
// Size: 52 bytes
// Signature: undefined __thiscall IsIdentity(DL_GroupParameters_GFP * this, Integer * param_1)


/* non-virtual thunk to CryptoPP::DL_GroupParameters_GFP::IsIdentity(CryptoPP::Integer const&) const
    */

bool __thiscall
CryptoPP::DL_GroupParameters_GFP::IsIdentity(DL_GroupParameters_GFP *this,Integer *param_1)

{
  int iVar1;
  Integer *pIVar2;
  
  pIVar2 = (Integer *)Integer::One();
  iVar1 = Integer::Compare(param_1,pIVar2);
  return iVar1 == 0;
}


