// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Reduce
// Entry Point: 00c90a20
// Size: 52 bytes
// Signature: undefined __cdecl Reduce(PolynomialMod2 * param_1, PolynomialMod2 * param_2)


/* CryptoPP::AbstractRing<CryptoPP::PolynomialMod2>::MultiplicativeGroupT::Reduce(CryptoPP::PolynomialMod2&,
   CryptoPP::PolynomialMod2 const&) const */

void CryptoPP::AbstractRing<CryptoPP::PolynomialMod2>::MultiplicativeGroupT::Reduce
               (PolynomialMod2 *param_1,PolynomialMod2 *param_2)

{
  PolynomialMod2 *pPVar1;
  
  pPVar1 = (PolynomialMod2 *)(**(code **)(**(long **)(param_1 + 8) + 0x98))();
  PolynomialMod2::operator=(param_2,pPVar1);
  return;
}


