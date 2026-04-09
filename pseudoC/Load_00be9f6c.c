// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Load
// Entry Point: 00be9f6c
// Size: 164 bytes
// Signature: undefined __cdecl Load(BufferedTransformation * param_1)


/* CryptoPP::CryptoMaterial::Load(CryptoPP::BufferedTransformation&) */

void CryptoPP::CryptoMaterial::Load(BufferedTransformation *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00be9f88 to 00be9f8f has its CatchHandler @ 00bea04c */
  puVar2 = (undefined8 *)operator_new(0x40);
  puVar2[1] = 0x203a6c6169726574;
  *puVar2 = 0x614d6f7470797243;
  puVar2[3] = 0x73656f6420746365;
  puVar2[2] = 0x6a626f2073696874;
  *(undefined4 *)(puVar2 + 6) = 0x676e6964;
  puVar2[5] = 0x616f6c2074726f70;
  puVar2[4] = 0x70757320746f6e20;
  *(undefined *)((long)puVar2 + 0x34) = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR__Exception_00fe0298;
                    /* try { // try from 00be9fe0 to 00be9fe7 has its CatchHandler @ 00bea02c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00be9ff8 to 00bea00f has its CatchHandler @ 00bea010 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


