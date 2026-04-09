// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CascadeExponentiate
// Entry Point: 00c908e4
// Size: 92 bytes
// Signature: undefined __cdecl CascadeExponentiate(PolynomialMod2 * param_1, Integer * param_2, PolynomialMod2 * param_3, Integer * param_4)


/* CryptoPP::AbstractRing<CryptoPP::PolynomialMod2>::CascadeExponentiate(CryptoPP::PolynomialMod2
   const&, CryptoPP::Integer const&, CryptoPP::PolynomialMod2 const&, CryptoPP::Integer const&)
   const */

void CryptoPP::AbstractRing<CryptoPP::PolynomialMod2>::CascadeExponentiate
               (PolynomialMod2 *param_1,Integer *param_2,PolynomialMod2 *param_3,Integer *param_4)

{
  PolynomialMod2 *pPVar1;
  
  pPVar1 = (PolynomialMod2 *)(**(code **)(*(long *)param_1 + 0xb8))();
  AbstractGroup<CryptoPP::PolynomialMod2>::CascadeScalarMultiply(pPVar1,param_2,param_3,param_4);
  return;
}


