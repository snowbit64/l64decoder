// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DivisionAlgorithm
// Entry Point: 00d05be8
// Size: 20 bytes
// Signature: undefined __thiscall DivisionAlgorithm(EuclideanDomainOf<CryptoPP::Integer> * this, Integer * param_1, Integer * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::DivisionAlgorithm(CryptoPP::Integer&,
   CryptoPP::Integer&, CryptoPP::Integer const&, CryptoPP::Integer const&) const */

void __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::DivisionAlgorithm
          (EuclideanDomainOf<CryptoPP::Integer> *this,Integer *param_1,Integer *param_2,
          Integer *param_3,Integer *param_4)

{
  Integer::Divide(param_1,param_2,param_3,param_4);
  return;
}


