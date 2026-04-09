// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_1
// Entry Point: 00d06134
// Size: 316 bytes
// Signature: undefined _INIT_1(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1(void)

{
  DataMemoryBarrier(2,3);
  if ((DAT_02120808 & 1) == 0) {
    DAT_02120978 = CryptoPP::Baseline_MultiplyTop2;
    DAT_02120980 = CryptoPP::Baseline_MultiplyTop4;
    DAT_021208a0 = CryptoPP::Baseline_Multiply2;
    DAT_021208a8 = CryptoPP::Baseline_Multiply4;
    DAT_021208b0 = CryptoPP::Baseline_Multiply8;
    DAT_02120930 = CryptoPP::Baseline_MultiplyBottom2;
    DAT_02120938 = CryptoPP::Baseline_MultiplyBottom4;
    DAT_02120940 = CryptoPP::Baseline_MultiplyBottom8;
    DAT_021208e8 = CryptoPP::Baseline_Square2;
    DAT_021208f0 = CryptoPP::Baseline_Square4;
    DAT_021208f8 = CryptoPP::Baseline_Square8;
    DAT_02120988 = CryptoPP::Baseline_MultiplyTop8;
    DAT_021208c0 = CryptoPP::Baseline_Multiply16;
    DAT_02120950 = CryptoPP::Baseline_MultiplyBottom16;
    DAT_02120908 = CryptoPP::Baseline_Square16;
    DAT_02120998 = CryptoPP::Baseline_MultiplyTop16;
    DAT_02120808 = 1;
    DataMemoryBarrier(2,3);
  }
  DAT_02120810 = &PTR__Integer_0100c890;
  uRam0000000002120828 = 2;
  _DAT_02120820 = 0x3fffffffffffffff;
  DAT_02120830 = (undefined8 *)CryptoPP::UnalignedAllocate(8);
  DAT_02120838 = 0;
  *DAT_02120830 = 0;
  __cxa_atexit(CryptoPP::Integer::~Integer,&DAT_02120810,&PTR_LOOP_00fd8de0);
  return;
}


