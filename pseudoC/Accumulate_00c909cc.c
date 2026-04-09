// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Accumulate
// Entry Point: 00c909cc
// Size: 52 bytes
// Signature: undefined __cdecl Accumulate(PolynomialMod2 * param_1, PolynomialMod2 * param_2)


/* CryptoPP::AbstractRing<CryptoPP::PolynomialMod2>::MultiplicativeGroupT::Accumulate(CryptoPP::PolynomialMod2&,
   CryptoPP::PolynomialMod2 const&) const */

void CryptoPP::AbstractRing<CryptoPP::PolynomialMod2>::MultiplicativeGroupT::Accumulate
               (PolynomialMod2 *param_1,PolynomialMod2 *param_2)

{
  PolynomialMod2 *pPVar1;
  
  pPVar1 = (PolynomialMod2 *)(**(code **)(**(long **)(param_1 + 8) + 0x80))();
  PolynomialMod2::operator=(param_2,pPVar1);
  return;
}


