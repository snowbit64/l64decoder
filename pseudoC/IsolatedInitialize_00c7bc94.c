// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00c7bc94
// Size: 160 bytes
// Signature: undefined __cdecl IsolatedInitialize(NameValuePairs * param_1)


/* CryptoPP::BufferedTransformation::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void CryptoPP::BufferedTransformation::IsolatedInitialize(NameValuePairs *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c7bcb0 to 00c7bcb7 has its CatchHandler @ 00c7bd7c */
  puVar2 = (undefined8 *)operator_new(0x40);
  puVar2[1] = 0x726f66736e617254;
  *puVar2 = 0x6465726566667542;
  puVar2[3] = 0x6a626f2073696874;
  puVar2[2] = 0x203a6e6f6974616d;
  puVar2[5] = 0x6965722065622074;
  puVar2[4] = 0x276e616320746365;
  *(undefined8 *)((long)puVar2 + 0x32) = 0x64657a696c616974;
  *(undefined8 *)((long)puVar2 + 0x2a) = 0x696e696572206562;
  *(undefined *)((long)puVar2 + 0x3a) = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR__Exception_00fe0298;
                    /* try { // try from 00c7bd04 to 00c7bd0b has its CatchHandler @ 00c7bd50 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00c7bd1c to 00c7bd33 has its CatchHandler @ 00c7bd34 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


