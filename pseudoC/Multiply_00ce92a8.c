// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Multiply
// Entry Point: 00ce92a8
// Size: 4 bytes
// Signature: undefined __cdecl Multiply(PolynomialMod2 * param_1, PolynomialMod2 * param_2)


/* CryptoPP::GF2NT233::Multiply(CryptoPP::PolynomialMod2 const&, CryptoPP::PolynomialMod2 const&)
   const */

void CryptoPP::GF2NT233::Multiply(PolynomialMod2 *param_1,PolynomialMod2 *param_2)

{
  PolynomialMod2 *in_x2;
  
  GF2NT::Multiply((GF2NT *)param_1,param_2,in_x2);
  return;
}


