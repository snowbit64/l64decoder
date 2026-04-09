// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Reduce
// Entry Point: 00d057e8
// Size: 164 bytes
// Signature: undefined __thiscall Reduce(EuclideanDomainOf<CryptoPP::Integer> * this, Integer * param_1, Integer * param_2)


/* CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::Reduce(CryptoPP::Integer&, CryptoPP::Integer
   const&) const */

Integer * __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::Reduce
          (EuclideanDomainOf<CryptoPP::Integer> *this,Integer *param_1,Integer *param_2)

{
  Integer *pIVar1;
  Integer *pIVar2;
  
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
            ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)
             (param_1 + 8),*(ulong *)(param_2 + 0x18));
  if (*(int *)(param_1 + 0x28) == 1) {
    pIVar1 = param_2;
    pIVar2 = param_1;
    if (*(int *)(param_2 + 0x28) != 1) {
      PositiveAdd(param_1,param_1,param_2);
      *(undefined4 *)(param_1 + 0x28) = 1;
      return param_1;
    }
  }
  else {
    pIVar1 = param_1;
    pIVar2 = param_2;
    if (*(int *)(param_2 + 0x28) == 1) {
      PositiveAdd(param_1,param_1,param_2);
      return param_1;
    }
  }
  PositiveSubtract(param_1,pIVar1,pIVar2);
  return param_1;
}


