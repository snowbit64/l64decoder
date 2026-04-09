// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Equal
// Entry Point: 00d053d4
// Size: 36 bytes
// Signature: undefined __thiscall Equal(EuclideanDomainOf<CryptoPP::Integer> * this, Integer * param_1, Integer * param_2)


/* CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::Equal(CryptoPP::Integer const&, CryptoPP::Integer
   const&) const */

bool __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::Equal
          (EuclideanDomainOf<CryptoPP::Integer> *this,Integer *param_1,Integer *param_2)

{
  int iVar1;
  
  iVar1 = Integer::Compare(param_1,param_2);
  return iVar1 == 0;
}


