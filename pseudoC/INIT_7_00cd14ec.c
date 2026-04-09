// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_7
// Entry Point: 00cd14ec
// Size: 92 bytes
// Signature: undefined _INIT_7(void)


void _INIT_7(void)

{
  DAT_021204f0 = &PTR__EC2NPoint_010026a8;
  CryptoPP::PolynomialMod2::PolynomialMod2((PolynomialMod2 *)&DAT_021204f8);
                    /* try { // try from 00cd1518 to 00cd151f has its CatchHandler @ 00cd1548 */
  CryptoPP::PolynomialMod2::PolynomialMod2((PolynomialMod2 *)&DAT_02120518);
  DAT_02120538 = 1;
  __cxa_atexit(CryptoPP::EC2NPoint::~EC2NPoint,&DAT_021204f0,&PTR_LOOP_00fd8de0);
  return;
}


