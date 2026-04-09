// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EuclideanDomainOf
// Entry Point: 00c90d60
// Size: 92 bytes
// Signature: undefined EuclideanDomainOf(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::EuclideanDomainOf() */

void CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>::EuclideanDomainOf(void)

{
  undefined8 *in_x0;
  
  in_x0[1] = &PTR__AbstractGroup_01002610;
  in_x0[2] = in_x0;
  *in_x0 = &PTR__AbstractEuclideanDomain_00ff9230;
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x0 + 3));
  *in_x0 = &PTR__EuclideanDomainOf_00ff3220;
                    /* try { // try from 00c90dac to 00c90daf has its CatchHandler @ 00c90dbc */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x0 + 7));
  return;
}


