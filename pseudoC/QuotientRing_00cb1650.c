// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~QuotientRing
// Entry Point: 00cb1650
// Size: 36 bytes
// Signature: undefined __thiscall ~QuotientRing(QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> * this)


/* CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2> >::~QuotientRing()
    */

void __thiscall
CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>::~QuotientRing
          (QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> *this)

{
  ~QuotientRing(this);
  operator_delete(this);
  return;
}


