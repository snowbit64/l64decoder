// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator-=
// Entry Point: 00cfd980
// Size: 164 bytes
// Signature: undefined __thiscall operator-=(Integer * this, Integer * param_1)


/* CryptoPP::Integer::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::Integer const&) */

Integer * __thiscall CryptoPP::Integer::operator-=(Integer *this,Integer *param_1)

{
  Integer *pIVar1;
  Integer *pIVar2;
  
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
            ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)(this + 8),
             *(ulong *)(param_1 + 0x18));
  if (*(int *)(this + 0x28) == 1) {
    pIVar1 = param_1;
    pIVar2 = this;
    if (*(int *)(param_1 + 0x28) != 1) {
      PositiveAdd(this,this,param_1);
      *(undefined4 *)(this + 0x28) = 1;
      return this;
    }
  }
  else {
    pIVar1 = this;
    pIVar2 = param_1;
    if (*(int *)(param_1 + 0x28) == 1) {
      PositiveAdd(this,this,param_1);
      return this;
    }
  }
  PositiveSubtract(this,pIVar1,pIVar2);
  return this;
}


