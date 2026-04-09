// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RecoverPresignature
// Entry Point: 00cafbc8
// Size: 168 bytes
// Signature: undefined __cdecl RecoverPresignature(DL_GroupParameters * param_1, DL_PublicKey * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::DL_ElgamalLikeSignatureAlgorithm<CryptoPP::Integer>::RecoverPresignature(CryptoPP::DL_GroupParameters<CryptoPP::Integer>
   const&, CryptoPP::DL_PublicKey<CryptoPP::Integer> const&, CryptoPP::Integer const&,
   CryptoPP::Integer const&) const */

void CryptoPP::DL_ElgamalLikeSignatureAlgorithm<CryptoPP::Integer>::RecoverPresignature
               (DL_GroupParameters *param_1,DL_PublicKey *param_2,Integer *param_3,Integer *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x28);
                    /* try { // try from 00cafbe4 to 00cafbeb has its CatchHandler @ 00cafcb8 */
  puVar2 = (undefined8 *)operator_new(0x60);
  puVar2[5] = 0x65727574616e6769;
  puVar2[4] = 0x732073696874203a;
  puVar2[7] = 0x746f6e2073656f64;
  puVar2[6] = 0x20656d6568637320;
  puVar2[9] = 0x6567617373656d20;
  puVar2[8] = 0x74726f7070757320;
  *(undefined8 *)((long)puVar2 + 0x51) = 0x797265766f636572;
  *(undefined8 *)((long)puVar2 + 0x49) = 0x206567617373656d;
  *(undefined *)((long)puVar2 + 0x59) = 0;
  puVar2[1] = 0x6953656b694c6c61;
  *puVar2 = 0x6d61676c455f4c44;
  puVar2[3] = 0x6d687469726f676c;
  puVar2[2] = 0x4165727574616e67;
  *puVar1 = &PTR__Exception_00fe0298;
  *(undefined4 *)(puVar1 + 1) = 0;
                    /* try { // try from 00cafc40 to 00cafc47 has its CatchHandler @ 00cafc8c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 2));
  *puVar1 = &PTR__Exception_00fe0270;
                    /* try { // try from 00cafc58 to 00cafc6f has its CatchHandler @ 00cafc70 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&NotImplemented::typeinfo,Exception::~Exception);
}


