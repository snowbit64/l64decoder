// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TruncatedFinal
// Entry Point: 00cc1730
// Size: 160 bytes
// Signature: undefined __cdecl TruncatedFinal(uchar * param_1, ulong param_2)


/* CryptoPP::PK_MessageAccumulator::TruncatedFinal(unsigned char*, unsigned long) */

void CryptoPP::PK_MessageAccumulator::TruncatedFinal(uchar *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cc174c to 00cc1753 has its CatchHandler @ 00cc1818 */
  puVar2 = (undefined8 *)operator_new(0x40);
  puVar2[1] = 0x756d756363416567;
  *puVar2 = 0x617373654d5f4b50;
  puVar2[3] = 0x64657461636e7572;
  puVar2[2] = 0x54203a726f74616c;
  puVar2[5] = 0x6e20646c756f6873;
  puVar2[4] = 0x2029286c616e6946;
  *(undefined8 *)((long)puVar2 + 0x34) = 0x64656c6c61632065;
  *(undefined8 *)((long)puVar2 + 0x2c) = 0x6220746f6e20646c;
  *(undefined *)((long)puVar2 + 0x3c) = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR__Exception_00fe0298;
                    /* try { // try from 00cc17a0 to 00cc17a7 has its CatchHandler @ 00cc17ec */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00cc17b8 to 00cc17cf has its CatchHandler @ 00cc17d0 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


