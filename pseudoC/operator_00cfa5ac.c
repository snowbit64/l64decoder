// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator+=
// Entry Point: 00cfa5ac
// Size: 180 bytes
// Signature: undefined __thiscall operator+=(Integer * this, Integer * param_1)


/* CryptoPP::Integer::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::Integer const&) */

Integer * __thiscall CryptoPP::Integer::operator+=(Integer *this,Integer *param_1)

{
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
            ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)(this + 8),
             *(ulong *)(param_1 + 0x18));
  if (*(int *)(this + 0x28) != 1) {
    if (*(int *)(param_1 + 0x28) == 1) {
      PositiveSubtract(this,this,param_1);
      return this;
    }
    PositiveAdd(this,this,param_1);
    return this;
  }
  if (*(int *)(param_1 + 0x28) == 1) {
    PositiveAdd(this,this,param_1);
    *(undefined4 *)(this + 0x28) = 1;
    return this;
  }
  PositiveSubtract(this,param_1,this);
  return this;
}


