// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: QuotientRing
// Entry Point: 00c91468
// Size: 148 bytes
// Signature: undefined __thiscall QuotientRing(QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> * this, EuclideanDomainOf * param_1, PolynomialMod2 * param_2)


/* CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>
   >::QuotientRing(CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2> const&,
   CryptoPP::PolynomialMod2 const&) */

void __thiscall
CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>::QuotientRing
          (QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> *this,
          EuclideanDomainOf *param_1,PolynomialMod2 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(this + 0x18);
  *puVar1 = &PTR__AbstractEuclideanDomain_00ff9230;
  *(undefined ***)(this + 8) = &PTR__AbstractGroup_01002610;
  *(QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> **)(this + 0x10) = this;
  *(undefined ***)this = &PTR__QuotientRing_00ff3308;
  *(undefined ***)(this + 0x20) = &PTR__AbstractGroup_01002610;
  *(undefined8 **)(this + 0x28) = puVar1;
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(this + 0x30),(PolynomialMod2 *)(param_1 + 0x18))
  ;
  *puVar1 = &PTR__EuclideanDomainOf_00ff3220;
                    /* try { // try from 00c914dc to 00c914df has its CatchHandler @ 00c91510 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(this + 0x50),(PolynomialMod2 *)(param_1 + 0x38))
  ;
                    /* try { // try from 00c914e4 to 00c914eb has its CatchHandler @ 00c914fc */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(this + 0x70),param_2);
  return;
}


