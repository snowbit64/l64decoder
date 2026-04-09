// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsUnit
// Entry Point: 00c911f8
// Size: 40 bytes
// Signature: undefined __thiscall IsUnit(EuclideanDomainOf<CryptoPP::PolynomialMod2> * this, PolynomialMod2 * param_1)


/* CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::IsUnit(CryptoPP::PolynomialMod2 const&)
   const */

void __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::IsUnit
          (EuclideanDomainOf<CryptoPP::PolynomialMod2> *this,PolynomialMod2 *param_1)

{
  PolynomialMod2 *pPVar1;
  
  pPVar1 = (PolynomialMod2 *)PolynomialMod2::One();
  PolynomialMod2::Equals(param_1,pPVar1);
  return;
}


