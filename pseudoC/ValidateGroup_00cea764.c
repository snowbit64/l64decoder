// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ValidateGroup
// Entry Point: 00cea764
// Size: 240 bytes
// Signature: undefined __thiscall ValidateGroup(DL_GroupParameters_DSA * this, RandomNumberGenerator * param_1, uint param_2)


/* CryptoPP::DL_GroupParameters_DSA::ValidateGroup(CryptoPP::RandomNumberGenerator&, unsigned int)
   const */

bool __thiscall
CryptoPP::DL_GroupParameters_DSA::ValidateGroup
          (DL_GroupParameters_DSA *this,RandomNumberGenerator *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = DL_GroupParameters_IntegerBased::ValidateGroup
                    ((DL_GroupParameters_IntegerBased *)this,param_1,param_2);
  (**(code **)(*(long *)this + 0xa0))(this);
  iVar1 = Integer::BitCount();
  (**(code **)(*(long *)this + 0x50))(this);
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


