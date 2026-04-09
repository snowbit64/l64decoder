// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Accumulate
// Entry Point: 00d05734
// Size: 180 bytes
// Signature: undefined __thiscall Accumulate(EuclideanDomainOf<CryptoPP::Integer> * this, Integer * param_1, Integer * param_2)


/* CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::Accumulate(CryptoPP::Integer&, CryptoPP::Integer
   const&) const */

Integer * __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::Accumulate
          (EuclideanDomainOf<CryptoPP::Integer> *this,Integer *param_1,Integer *param_2)

{
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
            ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)
             (param_1 + 8),*(ulong *)(param_2 + 0x18));
  if (*(int *)(param_1 + 0x28) != 1) {
    if (*(int *)(param_2 + 0x28) == 1) {
      PositiveSubtract(param_1,param_1,param_2);
      return param_1;
    }
    PositiveAdd(param_1,param_1,param_2);
    return param_1;
  }
  if (*(int *)(param_2 + 0x28) == 1) {
    PositiveAdd(param_1,param_1,param_2);
    *(undefined4 *)(param_1 + 0x28) = 1;
    return param_1;
  }
  PositiveSubtract(param_1,param_2,param_1);
  return param_1;
}


