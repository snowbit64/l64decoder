// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IncorporateEntropy
// Entry Point: 00be97f8
// Size: 160 bytes
// Signature: undefined __cdecl IncorporateEntropy(uchar * param_1, ulong param_2)


/* CryptoPP::RandomNumberGenerator::IncorporateEntropy(unsigned char const*, unsigned long) */

void CryptoPP::RandomNumberGenerator::IncorporateEntropy(uchar *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00be9814 to 00be981b has its CatchHandler @ 00be98d4 */
  puVar2 = (undefined8 *)operator_new(0x40);
  puVar2[1] = 0x656e65477265626d;
  *puVar2 = 0x754e6d6f646e6152;
  puVar2[3] = 0x61726f70726f636e;
  puVar2[2] = 0x49203a726f746172;
  puVar2[5] = 0x6d6920746f6e2079;
  puVar2[4] = 0x706f72746e456574;
  *(undefined8 *)((long)puVar2 + 0x31) = 0x6465746e656d656c;
  *(undefined8 *)((long)puVar2 + 0x29) = 0x706d6920746f6e20;
  *(undefined *)((long)puVar2 + 0x39) = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR__Exception_00fe0298;
                    /* try { // try from 00be9868 to 00be986f has its CatchHandler @ 00be98b4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00be9880 to 00be9897 has its CatchHandler @ 00be9898 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


