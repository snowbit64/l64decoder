// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Accumulate
// Entry Point: 00c8f5f8
// Size: 48 bytes
// Signature: undefined __cdecl Accumulate(PolynomialMod2 * param_1, PolynomialMod2 * param_2)


/* CryptoPP::AbstractGroup<CryptoPP::PolynomialMod2>::Accumulate(CryptoPP::PolynomialMod2&,
   CryptoPP::PolynomialMod2 const&) const */

void CryptoPP::AbstractGroup<CryptoPP::PolynomialMod2>::Accumulate
               (PolynomialMod2 *param_1,PolynomialMod2 *param_2)

{
  PolynomialMod2 *pPVar1;
  
  pPVar1 = (PolynomialMod2 *)(**(code **)(*(long *)param_1 + 0x20))();
  PolynomialMod2::operator=(param_2,pPVar1);
  return;
}


