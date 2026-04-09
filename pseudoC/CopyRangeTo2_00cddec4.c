// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CopyRangeTo2
// Entry Point: 00cddec4
// Size: 152 bytes
// Signature: undefined __cdecl CopyRangeTo2(BufferedTransformation * param_1, ulong * param_2, ulong param_3, basic_string * param_4, bool param_5)


/* CryptoPP::RandomNumberStore::CopyRangeTo2(CryptoPP::BufferedTransformation&, unsigned long&,
   unsigned long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) const */

void CryptoPP::RandomNumberStore::CopyRangeTo2
               (BufferedTransformation *param_1,ulong *param_2,ulong param_3,basic_string *param_4,
               bool param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cddee0 to 00cddee7 has its CatchHandler @ 00cddfa4 */
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar2[1] = 0x726f74537265626d;
  *puVar2 = 0x754e6d6f646e6152;
  puVar2[3] = 0x28326f5465676e61;
  puVar2[2] = 0x5279706f43203a65;
  *(undefined *)(puVar2 + 8) = 0;
  puVar2[5] = 0x74726f7070757320;
  puVar2[4] = 0x746f6e2073692029;
  puVar2[7] = 0x65726f7473207369;
  puVar2[6] = 0x6874207962206465;
  *puVar1 = &PTR__Exception_00fe0298;
  *(undefined4 *)(puVar1 + 1) = 0;
                    /* try { // try from 00cddf2c to 00cddf33 has its CatchHandler @ 00cddf78 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00cddf44 to 00cddf5b has its CatchHandler @ 00cddf5c */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


