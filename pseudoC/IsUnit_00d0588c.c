// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsUnit
// Entry Point: 00d0588c
// Size: 56 bytes
// Signature: undefined __thiscall IsUnit(EuclideanDomainOf<CryptoPP::Integer> * this, Integer * param_1)


/* CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::IsUnit(CryptoPP::Integer const&) const */

bool __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::IsUnit
          (EuclideanDomainOf<CryptoPP::Integer> *this,Integer *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  do {
    if (lVar2 == 0) {
      return false;
    }
    lVar3 = lVar2 + -1;
    lVar1 = lVar2 + -1;
    lVar2 = lVar3;
  } while ((*(int **)(param_1 + 0x20))[lVar1] == 0);
  if ((int)lVar3 != 0) {
    return false;
  }
  return **(int **)(param_1 + 0x20) == 1;
}


