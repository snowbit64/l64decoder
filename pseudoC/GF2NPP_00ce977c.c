// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GF2NPP
// Entry Point: 00ce977c
// Size: 36 bytes
// Signature: undefined __thiscall ~GF2NPP(GF2NPP * this)


/* CryptoPP::GF2NPP::~GF2NPP() */

void __thiscall CryptoPP::GF2NPP::~GF2NPP(GF2NPP *this)

{
  QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>::~QuotientRing
            ((QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> *)this);
  operator_delete(this);
  return;
}


