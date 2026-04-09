// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator==
// Entry Point: 00c9218c
// Size: 12 bytes
// Signature: undefined __thiscall operator==(QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> * this, QuotientRing * param_1)


/* CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>
   >::TEMPNAMEPLACEHOLDERVALUE(CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>
   > const&) const */

void __thiscall
CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>::operator==
          (QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> *this,
          QuotientRing *param_1)

{
  PolynomialMod2::Equals((PolynomialMod2 *)(this + 0x70),(PolynomialMod2 *)(param_1 + 0x70));
  return;
}


