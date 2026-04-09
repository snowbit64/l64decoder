// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RecoverablePartFirst
// Entry Point: 00cecb04
// Size: 164 bytes
// Signature: undefined RecoverablePartFirst(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::PK_SignatureMessageEncodingMethod::RecoverablePartFirst() const */

void CryptoPP::PK_SignatureMessageEncodingMethod::RecoverablePartFirst(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cecb20 to 00cecb27 has its CatchHandler @ 00cecbf0 */
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
                    /* try { // try from 00cecb78 to 00cecb7f has its CatchHandler @ 00cecbc4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00cecb90 to 00cecba7 has its CatchHandler @ 00cecba8 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


