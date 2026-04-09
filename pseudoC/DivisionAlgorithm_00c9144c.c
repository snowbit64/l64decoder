// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DivisionAlgorithm
// Entry Point: 00c9144c
// Size: 20 bytes
// Signature: undefined __thiscall DivisionAlgorithm(EuclideanDomainOf<CryptoPP::PolynomialMod2> * this, PolynomialMod2 * param_1, PolynomialMod2 * param_2, PolynomialMod2 * param_3, PolynomialMod2 * param_4)


/* CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::DivisionAlgorithm(CryptoPP::PolynomialMod2&,
   CryptoPP::PolynomialMod2&, CryptoPP::PolynomialMod2 const&, CryptoPP::PolynomialMod2 const&)
   const */

void __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::DivisionAlgorithm
          (EuclideanDomainOf<CryptoPP::PolynomialMod2> *this,PolynomialMod2 *param_1,
          PolynomialMod2 *param_2,PolynomialMod2 *param_3,PolynomialMod2 *param_4)

{
  PolynomialMod2::Divide(param_1,param_2,param_3,param_4);
  return;
}


