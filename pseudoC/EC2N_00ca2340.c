// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EC2N
// Entry Point: 00ca2340
// Size: 128 bytes
// Signature: undefined __thiscall EC2N(EC2N * this)


/* CryptoPP::EC2N::EC2N() */

void __thiscall CryptoPP::EC2N::EC2N(EC2N *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__EC2N_01005c90;
  *(undefined ***)(this + 8) = &PTR__EC2N_01005d50;
                    /* try { // try from 00ca2370 to 00ca2377 has its CatchHandler @ 00ca23f4 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(this + 0x18));
                    /* try { // try from 00ca237c to 00ca2383 has its CatchHandler @ 00ca23e4 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(this + 0x38));
  *(undefined ***)(this + 0x58) = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00ca2398 to 00ca239f has its CatchHandler @ 00ca23d4 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(this + 0x60));
                    /* try { // try from 00ca23a4 to 00ca23a7 has its CatchHandler @ 00ca23c0 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(this + 0x80));
  this[0xa0] = (EC2N)0x1;
  return;
}


