// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ScalarMultiply
// Entry Point: 00c93ee0
// Size: 136 bytes
// Signature: undefined __cdecl ScalarMultiply(EC2NPoint * param_1, Integer * param_2)


/* CryptoPP::AbstractGroup<CryptoPP::EC2NPoint>::ScalarMultiply(CryptoPP::EC2NPoint const&,
   CryptoPP::Integer const&) const */

void CryptoPP::AbstractGroup<CryptoPP::EC2NPoint>::ScalarMultiply
               (EC2NPoint *param_1,Integer *param_2)

{
  undefined8 *in_x8;
  long lVar1;
  
  *in_x8 = &PTR__EC2NPoint_010026a8;
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 1));
                    /* try { // try from 00c93f24 to 00c93f2b has its CatchHandler @ 00c93f7c */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(in_x8 + 5));
  lVar1 = *(long *)param_1;
  *(undefined *)(in_x8 + 9) = 1;
                    /* try { // try from 00c93f3c to 00c93f53 has its CatchHandler @ 00c93f68 */
  (**(code **)(lVar1 + 0x68))(param_1);
  return;
}


