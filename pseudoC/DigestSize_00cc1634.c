// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DigestSize
// Entry Point: 00cc1634
// Size: 160 bytes
// Signature: undefined DigestSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::PK_MessageAccumulator::DigestSize() const */

void CryptoPP::PK_MessageAccumulator::DigestSize(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cc1650 to 00cc1657 has its CatchHandler @ 00cc171c */
  puVar2 = (undefined8 *)operator_new(0x40);
  puVar2[1] = 0x756d756363416567;
  *puVar2 = 0x617373654d5f4b50;
  puVar2[3] = 0x7a69537473656769;
  puVar2[2] = 0x44203a726f74616c;
  *(undefined *)(puVar2 + 7) = 0;
  puVar2[6] = 0x64656c6c61632065;
  puVar2[5] = 0x6220746f6e20646c;
  puVar2[4] = 0x756f687320292865;
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR__Exception_00fe0298;
                    /* try { // try from 00cc16a4 to 00cc16ab has its CatchHandler @ 00cc16f0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00cc16bc to 00cc16d3 has its CatchHandler @ 00cc16d4 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


