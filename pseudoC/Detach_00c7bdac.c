// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Detach
// Entry Point: 00c7bdac
// Size: 160 bytes
// Signature: undefined __cdecl Detach(BufferedTransformation * param_1)


/* CryptoPP::BufferedTransformation::Detach(CryptoPP::BufferedTransformation*) */

void CryptoPP::BufferedTransformation::Detach(BufferedTransformation *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00c7bdc8 to 00c7bdcf has its CatchHandler @ 00c7be94 */
  puVar2 = (undefined8 *)operator_new(0x40);
  puVar2[5] = 0x636174746120746f;
  puVar2[4] = 0x6e20736920746365;
  *(undefined8 *)((long)puVar2 + 0x2d) = 0x656c626168636174;
  *(undefined *)((long)puVar2 + 0x35) = 0;
  puVar2[1] = 0x726f66736e617254;
  *puVar2 = 0x6465726566667542;
  puVar2[3] = 0x6a626f2073696874;
  puVar2[2] = 0x203a6e6f6974616d;
  *puVar1 = &PTR__Exception_00fe0298;
  *(undefined4 *)(puVar1 + 1) = 0;
                    /* try { // try from 00c7be1c to 00c7be23 has its CatchHandler @ 00c7be68 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00c7be34 to 00c7be4b has its CatchHandler @ 00c7be4c */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


