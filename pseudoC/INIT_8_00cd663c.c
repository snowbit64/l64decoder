// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_8
// Entry Point: 00cd663c
// Size: 92 bytes
// Signature: undefined _INIT_8(void)


void _INIT_8(void)

{
  DAT_02120540 = &PTR__ECPPoint_00fe9fd8;
  CryptoPP::Integer::Integer((Integer *)&DAT_02120548);
                    /* try { // try from 00cd6668 to 00cd666f has its CatchHandler @ 00cd6698 */
  CryptoPP::Integer::Integer((Integer *)&DAT_02120578);
  DAT_021205a8 = 1;
  __cxa_atexit(CryptoPP::ECPPoint::~ECPPoint,&DAT_02120540,&PTR_LOOP_00fd8de0);
  return;
}


