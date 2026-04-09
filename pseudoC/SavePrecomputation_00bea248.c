// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SavePrecomputation
// Entry Point: 00bea248
// Size: 160 bytes
// Signature: undefined __cdecl SavePrecomputation(BufferedTransformation * param_1)


/* CryptoPP::CryptoMaterial::SavePrecomputation(CryptoPP::BufferedTransformation&) const */

void CryptoPP::CryptoMaterial::SavePrecomputation(BufferedTransformation *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00bea264 to 00bea26b has its CatchHandler @ 00bea324 */
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
                    /* try { // try from 00bea2b8 to 00bea2bf has its CatchHandler @ 00bea304 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00bea2d0 to 00bea2e7 has its CatchHandler @ 00bea2e8 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


