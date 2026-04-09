// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateRandom
// Entry Point: 00caf7e4
// Size: 160 bytes
// Signature: undefined __cdecl GenerateRandom(RandomNumberGenerator * param_1, NameValuePairs * param_2)


/* CryptoPP::GeneratableCryptoMaterial::GenerateRandom(CryptoPP::RandomNumberGenerator&,
   CryptoPP::NameValuePairs const&) */

void CryptoPP::GeneratableCryptoMaterial::GenerateRandom
               (RandomNumberGenerator *param_1,NameValuePairs *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00caf800 to 00caf807 has its CatchHandler @ 00caf8cc */
  puVar2 = (undefined8 *)operator_new(0x60);
  puVar2[5] = 0x20746f6e2073656f;
  puVar2[4] = 0x64207463656a626f;
  puVar2[7] = 0x617261702f79656b;
  puVar2[6] = 0x2074726f70707573;
  puVar2[9] = 0x6e6f69746172656e;
  puVar2[8] = 0x656720726574656d;
  *(undefined *)(puVar2 + 10) = 0;
  puVar2[1] = 0x7470797243656c62;
  *puVar2 = 0x61746172656e6547;
  puVar2[3] = 0x2073696874203a6c;
  puVar2[2] = 0x6169726574614d6f;
  *puVar1 = &PTR__Exception_00fe0298;
  *(undefined4 *)(puVar1 + 1) = 0;
                    /* try { // try from 00caf854 to 00caf85b has its CatchHandler @ 00caf8a0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00caf86c to 00caf883 has its CatchHandler @ 00caf884 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


