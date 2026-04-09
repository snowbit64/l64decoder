// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Accumulate
// Entry Point: 00c90e8c
// Size: 12 bytes
// Signature: undefined __thiscall Accumulate(EuclideanDomainOf<CryptoPP::PolynomialMod2> * this, PolynomialMod2 * param_1, PolynomialMod2 * param_2)


/* CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::Accumulate(CryptoPP::PolynomialMod2&,
   CryptoPP::PolynomialMod2 const&) const */

void __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::Accumulate
          (EuclideanDomainOf<CryptoPP::PolynomialMod2> *this,PolynomialMod2 *param_1,
          PolynomialMod2 *param_2)

{
  PolynomialMod2::operator^=(param_1,param_2);
  return;
}


