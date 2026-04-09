// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RecoverMessageFromRepresentative
// Entry Point: 00cecc14
// Size: 164 bytes
// Signature: undefined __cdecl RecoverMessageFromRepresentative(HashTransformation * param_1, pair param_2, bool param_3, uchar * param_4, ulong param_5, uchar * param_6)


/* CryptoPP::PK_SignatureMessageEncodingMethod::RecoverMessageFromRepresentative(CryptoPP::HashTransformation&,
   std::__ndk1::pair<unsigned char const*, unsigned int>, bool, unsigned char*, unsigned long,
   unsigned char*) const */

void CryptoPP::PK_SignatureMessageEncodingMethod::RecoverMessageFromRepresentative
               (HashTransformation *param_1,pair param_2,bool param_3,uchar *param_4,ulong param_5,
               uchar *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28,param_2,param_3);
                    /* try { // try from 00cecc30 to 00cecc37 has its CatchHandler @ 00cecd00 */
  puVar2 = (undefined8 *)operator_new(0x60);
  *(undefined2 *)(puVar2 + 10) = 0x79;
  puVar2[5] = 0x20656d6568637320;
  puVar2[4] = 0x65727574616e6769;
  puVar2[7] = 0x74726f7070757320;
  puVar2[6] = 0x746f6e2073656f64;
  puVar2[9] = 0x7265766f63657220;
  puVar2[8] = 0x6567617373656d20;
  puVar2[1] = 0x69646f636e456567;
  *puVar2 = 0x617373654d5f4b50;
  puVar2[3] = 0x732073696874203a;
  puVar2[2] = 0x646f6874654d676e;
  *puVar1 = &PTR__Exception_00fe0298;
  *(undefined4 *)(puVar1 + 1) = 0;
                    /* try { // try from 00cecc88 to 00cecc8f has its CatchHandler @ 00ceccd4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00cecca0 to 00ceccb7 has its CatchHandler @ 00ceccb8 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


