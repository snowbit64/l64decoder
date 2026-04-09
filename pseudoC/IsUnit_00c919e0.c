// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsUnit
// Entry Point: 00c919e0
// Size: 56 bytes
// Signature: undefined __thiscall IsUnit(QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> * this, PolynomialMod2 * param_1)


/* CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>
   >::IsUnit(CryptoPP::PolynomialMod2 const&) const */

void __thiscall
CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>::IsUnit
          (QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> *this,
          PolynomialMod2 *param_1)

{
  PolynomialMod2 *this_00;
  PolynomialMod2 *pPVar1;
  
  this_00 = (PolynomialMod2 *)
            AbstractEuclideanDomain<CryptoPP::PolynomialMod2>::Gcd
                      ((AbstractEuclideanDomain<CryptoPP::PolynomialMod2> *)(this + 0x18),param_1,
                       (PolynomialMod2 *)(this + 0x70));
  pPVar1 = (PolynomialMod2 *)PolynomialMod2::One();
  PolynomialMod2::Equals(this_00,pPVar1);
  return;
}


