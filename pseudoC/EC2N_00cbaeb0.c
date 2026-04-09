// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EC2N
// Entry Point: 00cbaeb0
// Size: 160 bytes
// Signature: undefined __thiscall EC2N(EC2N * this, GF2NP * param_1, PolynomialMod2 * param_2, PolynomialMod2 * param_3)


/* CryptoPP::EC2N::EC2N(CryptoPP::GF2NP const&, CryptoPP::PolynomialMod2 const&,
   CryptoPP::PolynomialMod2 const&) */

void __thiscall
CryptoPP::EC2N::EC2N(EC2N *this,GF2NP *param_1,PolynomialMod2 *param_2,PolynomialMod2 *param_3)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__EC2N_01005c90;
  *(undefined ***)(this + 8) = &PTR__EC2N_01005d50;
  uVar1 = (**(code **)(*(long *)param_1 + 0xc0))(param_1);
  *(undefined8 *)(this + 0x10) = uVar1;
                    /* try { // try from 00cbaef8 to 00cbaf03 has its CatchHandler @ 00cbaf84 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(this + 0x18),param_2);
                    /* try { // try from 00cbaf08 to 00cbaf13 has its CatchHandler @ 00cbaf74 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(this + 0x38),param_3);
  *(undefined ***)(this + 0x58) = &PTR__EC2NPoint_010026a8;
                    /* try { // try from 00cbaf28 to 00cbaf2f has its CatchHandler @ 00cbaf64 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(this + 0x60));
                    /* try { // try from 00cbaf34 to 00cbaf37 has its CatchHandler @ 00cbaf50 */
  PolynomialMod2::PolynomialMod2((PolynomialMod2 *)(this + 0x80));
  this[0xa0] = (EC2N)0x1;
  return;
}


