// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConvertOut
// Entry Point: 00c97420
// Size: 92 bytes
// Signature: undefined __cdecl ConvertOut(EC2NPoint * param_1)


/* CryptoPP::DL_GroupPrecomputation<CryptoPP::EC2NPoint>::ConvertOut(CryptoPP::EC2NPoint const&)
   const */

void CryptoPP::DL_GroupPrecomputation<CryptoPP::EC2NPoint>::ConvertOut(EC2NPoint *param_1)

{
  long in_x1;
  undefined8 *in_x8;
  
  *in_x8 = &PTR__EC2NPoint_010026a8;
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 1),(PolynomialMod2 *)(in_x1 + 8));
                    /* try { // try from 00c9745c to 00c97463 has its CatchHandler @ 00c9747c */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 5),(PolynomialMod2 *)(in_x1 + 0x28));
  *(undefined *)(in_x8 + 9) = *(undefined *)(in_x1 + 0x48);
  return;
}


