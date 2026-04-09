// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateUpdateSpace
// Entry Point: 00d088f8
// Size: 96 bytes
// Signature: undefined __thiscall CreateUpdateSpace(IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode> * this, ulong * param_1)


/* non-virtual thunk to CryptoPP::IteratedHashBase<unsigned int,
   CryptoPP::MessageAuthenticationCode>::CreateUpdateSpace(unsigned long&) */

long __thiscall
CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode>::CreateUpdateSpace
          (IteratedHashBase<unsigned_int,CryptoPP::MessageAuthenticationCode> *this,ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = (**(code **)(*(long *)this + 0x50))();
  lVar4 = *(long *)(this + -8);
  uVar2 = *(uint *)(this + 8);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = iVar3 - 1;
  }
  *param_1 = (ulong)(iVar3 - (uVar1 & uVar2));
  lVar4 = (**(code **)(lVar4 + 0xd8))(this + -8);
  return lVar4 + (ulong)(uVar1 & uVar2);
}


