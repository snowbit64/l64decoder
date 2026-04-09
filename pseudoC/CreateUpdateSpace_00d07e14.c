// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateUpdateSpace
// Entry Point: 00d07e14
// Size: 96 bytes
// Signature: undefined __thiscall CreateUpdateSpace(IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> * this, ulong * param_1)


/* CryptoPP::IteratedHashBase<unsigned int,
   CryptoPP::HashTransformation>::CreateUpdateSpace(unsigned long&) */

long __thiscall
CryptoPP::IteratedHashBase<unsigned_int,CryptoPP::HashTransformation>::CreateUpdateSpace
          (IteratedHashBase<unsigned_int,CryptoPP::HashTransformation> *this,ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = (**(code **)(*(long *)this + 0x50))();
  uVar2 = *(uint *)(this + 8);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = iVar3 - 1;
  }
  lVar4 = *(long *)this;
  *param_1 = (ulong)(iVar3 - (uVar1 & uVar2));
  lVar4 = (**(code **)(lVar4 + 0xc0))(this);
  return lVar4 + (ulong)(uVar1 & uVar2);
}


