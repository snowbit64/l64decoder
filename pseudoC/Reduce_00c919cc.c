// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Reduce
// Entry Point: 00c919cc
// Size: 12 bytes
// Signature: undefined __thiscall Reduce(QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> * this, PolynomialMod2 * param_1, PolynomialMod2 * param_2)


/* CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>
   >::Reduce(CryptoPP::PolynomialMod2&, CryptoPP::PolynomialMod2 const&) const */

void __thiscall
CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>::Reduce
          (QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> *this,
          PolynomialMod2 *param_1,PolynomialMod2 *param_2)

{
  PolynomialMod2::operator^=(param_1,param_2);
  return;
}


