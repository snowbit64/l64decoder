// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Equal
// Entry Point: 00c90dd0
// Size: 12 bytes
// Signature: undefined __thiscall Equal(EuclideanDomainOf<CryptoPP::PolynomialMod2> * this, PolynomialMod2 * param_1, PolynomialMod2 * param_2)


/* CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::Equal(CryptoPP::PolynomialMod2 const&,
   CryptoPP::PolynomialMod2 const&) const */

void __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::Equal
          (EuclideanDomainOf<CryptoPP::PolynomialMod2> *this,PolynomialMod2 *param_1,
          PolynomialMod2 *param_2)

{
  PolynomialMod2::Equals(param_1,param_2);
  return;
}


