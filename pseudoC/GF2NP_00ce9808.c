// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GF2NP
// Entry Point: 00ce9808
// Size: 36 bytes
// Signature: undefined __thiscall ~GF2NP(GF2NP * this)


/* CryptoPP::GF2NP::~GF2NP() */

void __thiscall CryptoPP::GF2NP::~GF2NP(GF2NP *this)

{
  QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>::~QuotientRing
            ((QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> *)this);
  operator_delete(this);
  return;
}


