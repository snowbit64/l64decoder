// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodePrivateKey
// Entry Point: 00ca95c4
// Size: 1176 bytes
// Signature: undefined __cdecl BERDecodePrivateKey(BufferedTransformation * param_1, bool param_2, ulong param_3)


/* CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>::BERDecodePrivateKey(CryptoPP::BufferedTransformation&,
   bool, unsigned long) */

void CryptoPP::DL_PrivateKey_EC<CryptoPP::ECP>::BERDecodePrivateKey
               (BufferedTransformation *param_1,bool param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint local_1e4;
  SecBlock aSStack_1e0 [8];
  ulong local_1d8;
  ulong local_1d0;
  void *local_1c8;
  uint uStack_1bc;
  byte local_1b8;
  undefined8 local_1b7;
  undefined7 uStack_1af;
  undefined uStack_1a8;
  undefined uStack_1a7;
  undefined6 uStack_1a6;
  BERGeneralDecoder local_1a0;
  undefined7 uStack_19f;
  Integer IStack_198;
  undefined7 uStack_197;
  undefined uStack_190;
  undefined uStack_18f;
  undefined6 uStack_18e;
  ulong local_188;
  ulong uStack_180;
  void *local_178;
  undefined **local_168 [2];
  ulong local_158;
  ulong uStack_150;
  void *local_148;
  undefined local_138;
  BERGeneralDecoder aBStack_130 [56];
  undefined **local_f8 [2];
  ulong local_e8;
  ulong uStack_e0;
  void *local_d8;
  BERGeneralDecoder aBStack_c8 [40];
  ulong local_a0;
  char local_97;
  undefined **local_90;
  undefined **ppuStack_88;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  BERGeneralDecoder::BERGeneralDecoder
            ((BERGeneralDecoder *)&local_90,(BufferedTransformation *)(ulong)param_2,'0');
  local_90 = &PTR__BERGeneralDecoder_01000a70;
  ppuStack_88 = &PTR__BERSequenceDecoder_01000c08;
                    /* try { // try from 00ca9618 to 00ca962f has its CatchHandler @ 00ca9b54 */
  BERDecodeUnsigned<unsigned_int>((BufferedTransformation *)&local_90,&uStack_1bc,'\x02',1,1);
                    /* try { // try from 00ca9630 to 00ca963f has its CatchHandler @ 00ca9b4c */
  BERGeneralDecoder::BERGeneralDecoder(aBStack_c8,(BERGeneralDecoder *)&local_90,'\x04');
  if (local_97 == '\0') {
    puVar4 = (undefined8 *)__cxa_allocate_exception(0x28);
    uStack_18f = 0;
    local_1a0 = (BERGeneralDecoder)0x20;
    uStack_197 = 0x6f727265206564;
    uStack_190 = 0x72;
    uStack_19f = 0x63656420524542;
    IStack_198 = (Integer)0x6f;
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &PTR__Exception_00fe0298;
                    /* try { // try from 00ca98e0 to 00ca98e7 has its CatchHandler @ 00ca9af0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar4 + 2));
    *puVar4 = &PTR__Exception_00fe9ee0;
    if (((byte)local_1a0 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_18e,CONCAT11(uStack_18f,uStack_190)));
    }
    *puVar4 = &PTR__Exception_01002700;
                    /* try { // try from 00ca9918 to 00ca992f has its CatchHandler @ 00ca9ae8 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
                    /* try { // try from 00ca9648 to 00ca964f has its CatchHandler @ 00ca9b44 */
  Integer::Integer((Integer *)local_f8);
                    /* try { // try from 00ca9654 to 00ca9697 has its CatchHandler @ 00ca9b5c */
  Integer::Decode((Integer *)local_f8,(BufferedTransformation *)aBStack_c8,local_a0,0);
  BERGeneralDecoder::MessageEnd();
  if (((param_3 & 1) == 0) && (cVar2 = BERGeneralDecoder::PeekByte(), cVar2 != -0x60)) {
    puVar4 = (undefined8 *)__cxa_allocate_exception(0x28);
    uStack_18f = 0;
    local_1a0 = (BERGeneralDecoder)0x20;
    uStack_197 = 0x6f727265206564;
    uStack_190 = 0x72;
    uStack_19f = 0x63656420524542;
    IStack_198 = (Integer)0x6f;
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &PTR__Exception_00fe0298;
                    /* try { // try from 00ca9a08 to 00ca9a0f has its CatchHandler @ 00ca9a60 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar4 + 2));
    *puVar4 = &PTR__Exception_00fe9ee0;
    if (((byte)local_1a0 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_18e,CONCAT11(uStack_18f,uStack_190)));
    }
    *puVar4 = &PTR__Exception_01002700;
                    /* try { // try from 00ca9a40 to 00ca9a57 has its CatchHandler @ 00ca9b5c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
  uVar3 = BERGeneralDecoder::EndReached();
  if (((uVar3 & 1) == 0) && (cVar2 = BERGeneralDecoder::PeekByte(), cVar2 == -0x60)) {
                    /* try { // try from 00ca96a4 to 00ca96b3 has its CatchHandler @ 00ca9a5c */
    BERGeneralDecoder::BERGeneralDecoder(&local_1a0,(BERGeneralDecoder *)&local_90,0xa0);
                    /* try { // try from 00ca96b8 to 00ca96c7 has its CatchHandler @ 00ca9ad0 */
    DL_GroupParameters_EC<CryptoPP::ECP>::BERDecode
              ((DL_GroupParameters_EC<CryptoPP::ECP> *)(param_1 + 0x60),
               (BufferedTransformation *)&local_1a0);
    BERGeneralDecoder::MessageEnd();
    BERGeneralDecoder::~BERGeneralDecoder(&local_1a0);
  }
                    /* try { // try from 00ca96d0 to 00ca96d7 has its CatchHandler @ 00ca9b5c */
  uVar3 = BERGeneralDecoder::EndReached();
  if ((uVar3 & 1) == 0) {
    local_1d0 = 0;
    local_1c8 = (void *)0x0;
    local_1d8 = 0xffffffffffffffff;
                    /* try { // try from 00ca96f0 to 00ca96ff has its CatchHandler @ 00ca9ae0 */
    BERGeneralDecoder::BERGeneralDecoder(aBStack_130,(BERGeneralDecoder *)&local_90,0xa1);
                    /* try { // try from 00ca9700 to 00ca9717 has its CatchHandler @ 00ca9b2c */
    BERDecodeBitString((BufferedTransformation *)aBStack_130,aSStack_1e0,&local_1e4);
    BERGeneralDecoder::MessageEnd();
    local_1a0 = (BERGeneralDecoder)0xd8;
    uStack_19f = 0xfe9f;
                    /* try { // try from 00ca9730 to 00ca9737 has its CatchHandler @ 00ca9acc */
    Integer::Integer(&IStack_198);
                    /* try { // try from 00ca973c to 00ca973f has its CatchHandler @ 00ca9abc */
    Integer::Integer((Integer *)local_168);
    local_138 = 1;
                    /* try { // try from 00ca9760 to 00ca9767 has its CatchHandler @ 00ca9b1c */
    if ((local_1e4 != 0) ||
       (uVar3 = (**(code **)(**(long **)(param_1 + 0x80) + 0x88))
                          (*(long **)(param_1 + 0x80),&local_1a0,local_1c8,local_1d0),
       (uVar3 & 1) == 0)) {
      puVar4 = (undefined8 *)__cxa_allocate_exception(0x28);
      uStack_1a7 = 0;
      local_1b8 = 0x20;
      uStack_1af = 0x6f727265206564;
      uStack_1a8 = 0x72;
      local_1b7._0_1_ = 'B';
      local_1b7._1_1_ = 'E';
      local_1b7._2_1_ = 'R';
      local_1b7._3_1_ = ' ';
      local_1b7._4_1_ = 'd';
      local_1b7._5_1_ = 'e';
      local_1b7._6_1_ = 'c';
      local_1b7._7_1_ = 'o';
      *(undefined4 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR__Exception_00fe0298;
                    /* try { // try from 00ca9974 to 00ca997b has its CatchHandler @ 00ca9a94 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(puVar4 + 2));
      *puVar4 = &PTR__Exception_00fe9ee0;
      if ((local_1b8 & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_1a6,CONCAT11(uStack_1a7,uStack_1a8)));
      }
      *puVar4 = &PTR__Exception_01002700;
                    /* try { // try from 00ca99ac to 00ca99c3 has its CatchHandler @ 00ca9b1c */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&BERDecodeErr::typeinfo,Exception::~Exception);
    }
    local_168[0] = &PTR__Integer_0100c890;
    local_1a0 = (BERGeneralDecoder)0xd8;
    uStack_19f = 0xfe9f;
    if (uStack_150 <= local_158) {
      local_158 = uStack_150;
    }
    for (; local_158 != 0; local_158 = local_158 - 1) {
      *(undefined4 *)((long)local_148 + local_158 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca97a4 to 00ca97a7 has its CatchHandler @ 00ca9a90 */
    UnalignedDeallocate(local_148);
    IStack_198 = (Integer)0x90;
    uStack_197 = 0x100c8;
    if (uStack_180 <= local_188) {
      local_188 = uStack_180;
    }
    for (; local_188 != 0; local_188 = local_188 - 1) {
      *(undefined4 *)((long)local_178 + local_188 * 4 + -4) = 0;
    }
                    /* try { // try from 00ca97d8 to 00ca97db has its CatchHandler @ 00ca9a8c */
    UnalignedDeallocate(local_178);
    BERGeneralDecoder::~BERGeneralDecoder(aBStack_130);
    uVar3 = local_1d8;
    if (local_1d0 <= local_1d8) {
      uVar3 = local_1d0;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)((long)local_1c8 + (uVar3 - 1)) = 0;
    }
                    /* try { // try from 00ca980c to 00ca980f has its CatchHandler @ 00ca9a88 */
    UnalignedDeallocate(local_1c8);
  }
                    /* try { // try from 00ca9810 to 00ca982b has its CatchHandler @ 00ca9b5c */
  BERGeneralDecoder::MessageEnd();
  (**(code **)(*(long *)param_1 + 0x28))(param_1,local_f8);
  local_f8[0] = &PTR__Integer_0100c890;
  if (uStack_e0 <= local_e8) {
    local_e8 = uStack_e0;
  }
  for (; local_e8 != 0; local_e8 = local_e8 - 1) {
    *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
  }
                    /* try { // try from 00ca985c to 00ca985f has its CatchHandler @ 00ca9b18 */
  UnalignedDeallocate(local_d8);
  BERGeneralDecoder::~BERGeneralDecoder(aBStack_c8);
  BERGeneralDecoder::~BERGeneralDecoder((BERGeneralDecoder *)&local_90);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


