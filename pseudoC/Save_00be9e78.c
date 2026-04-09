// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Save
// Entry Point: 00be9e78
// Size: 164 bytes
// Signature: undefined __cdecl Save(BufferedTransformation * param_1)


/* CryptoPP::CryptoMaterial::Save(CryptoPP::BufferedTransformation&) const */

void CryptoPP::CryptoMaterial::Save(BufferedTransformation *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00be9e94 to 00be9e9b has its CatchHandler @ 00be9f58 */
  puVar2 = (undefined8 *)operator_new(0x40);
  puVar2[1] = 0x203a6c6169726574;
  *puVar2 = 0x614d6f7470797243;
  puVar2[3] = 0x73656f6420746365;
  puVar2[2] = 0x6a626f2073696874;
  *(undefined4 *)((long)puVar2 + 0x2f) = 0x676e6976;
  puVar2[5] = 0x7661732074726f70;
  puVar2[4] = 0x70757320746f6e20;
  *(undefined *)((long)puVar2 + 0x33) = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR__Exception_00fe0298;
                    /* try { // try from 00be9eec to 00be9ef3 has its CatchHandler @ 00be9f38 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00be9f04 to 00be9f1b has its CatchHandler @ 00be9f1c */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


