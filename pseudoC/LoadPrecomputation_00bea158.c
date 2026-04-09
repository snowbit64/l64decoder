// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LoadPrecomputation
// Entry Point: 00bea158
// Size: 160 bytes
// Signature: undefined __cdecl LoadPrecomputation(BufferedTransformation * param_1)


/* CryptoPP::CryptoMaterial::LoadPrecomputation(CryptoPP::BufferedTransformation&) */

void CryptoPP::CryptoMaterial::LoadPrecomputation(BufferedTransformation *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00bea174 to 00bea17b has its CatchHandler @ 00bea234 */
  puVar2 = (undefined8 *)operator_new(0x40);
  puVar2[1] = 0x203a6c6169726574;
  *puVar2 = 0x614d6f7470797243;
  puVar2[3] = 0x73656f6420746365;
  puVar2[2] = 0x6a626f2073696874;
  puVar2[5] = 0x6572702074726f70;
  puVar2[4] = 0x70757320746f6e20;
  *(undefined8 *)((long)puVar2 + 0x33) = 0x6e6f697461747570;
  *(undefined8 *)((long)puVar2 + 0x2b) = 0x6d6f636572702074;
  *(undefined *)((long)puVar2 + 0x3b) = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR__Exception_00fe0298;
                    /* try { // try from 00bea1c8 to 00bea1cf has its CatchHandler @ 00bea214 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00bea1e0 to 00bea1f7 has its CatchHandler @ 00bea1f8 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


