// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ValidateGroup
// Entry Point: 00ceaae4
// Size: 248 bytes
// Signature: undefined __thiscall ValidateGroup(DL_GroupParameters_DSA * this, RandomNumberGenerator * param_1, uint param_2)


/* non-virtual thunk to
   CryptoPP::DL_GroupParameters_DSA::ValidateGroup(CryptoPP::RandomNumberGenerator&, unsigned int)
   const */

bool __thiscall
CryptoPP::DL_GroupParameters_DSA::ValidateGroup
          (DL_GroupParameters_DSA *this,RandomNumberGenerator *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  DL_GroupParameters_IntegerBased *this_00;
  
  this_00 = (DL_GroupParameters_IntegerBased *)(this + -8);
  uVar3 = DL_GroupParameters_IntegerBased::ValidateGroup(this_00,param_1,param_2);
  (**(code **)(*(long *)(this + -8) + 0xa0))(this_00);
  iVar1 = Integer::BitCount();
  (**(code **)(*(long *)(this + -8) + 0x50))(this_00);
  iVar2 = Integer::BitCount();
  if ((uVar3 & 1) == 0) {
    return false;
  }
  if ((iVar1 == 0x400) && (iVar2 == 0xa0)) {
    return true;
  }
  if ((iVar1 == 0x800) && (iVar2 == 0xe0)) {
    return true;
  }
  if ((iVar1 == 0x800) && (iVar2 == 0x100)) {
    return true;
  }
  return iVar1 == 0xc00 && iVar2 == 0x100;
}


