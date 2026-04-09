// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodePrivateKey
// Entry Point: 00ca9fbc
// Size: 1160 bytes
// Signature: undefined __cdecl BERDecodePrivateKey(BufferedTransformation * param_1, bool param_2, ulong param_3)


/* CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>::BERDecodePrivateKey(CryptoPP::BufferedTransformation&,
   bool, unsigned long) */

void CryptoPP::DL_PrivateKey_EC<CryptoPP::EC2N>::BERDecodePrivateKey
               (BufferedTransformation *param_1,bool param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint local_1c4;
  SecBlock aSStack_1c0 [8];
  ulong local_1b8;
  ulong local_1b0;
  void *local_1a8;
  uint uStack_19c;
  byte local_198;
  undefined8 local_197;
  undefined7 uStack_18f;
  undefined uStack_188;
  undefined uStack_187;
  undefined6 uStack_186;
  BERGeneralDecoder local_180;
  undefined7 uStack_17f;
  PolynomialMod2 PStack_178;
  undefined7 uStack_177;
  undefined uStack_170;
  undefined uStack_16f;
  undefined6 uStack_16e;
  ulong uStack_168;
  void *local_160;
  PolynomialMod2 aPStack_158 [8];
  ulong local_150;
  ulong uStack_148;
  void *local_140;
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
                    /* try { // try from 00caa010 to 00caa027 has its CatchHandler @ 00caa53c */
  BERDecodeUnsigned<unsigned_int>((BufferedTransformation *)&local_90,&uStack_19c,'\x02',1,1);
                    /* try { // try from 00caa028 to 00caa037 has its CatchHandler @ 00caa534 */
  BERGeneralDecoder::BERGeneralDecoder(aBStack_c8,(BERGeneralDecoder *)&local_90,'\x04');
  if (local_97 == '\0') {
    puVar4 = (undefined8 *)__cxa_allocate_exception(0x28);
    uStack_16f = 0;
    local_180 = (BERGeneralDecoder)0x20;
    uStack_177 = 0x6f727265206564;
    uStack_170 = 0x72;
    uStack_17f = 0x63656420524542;
    PStack_178 = (PolynomialMod2)0x6f;
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &PTR__Exception_00fe0298;
                    /* try { // try from 00caa2c8 to 00caa2cf has its CatchHandler @ 00caa4d8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar4 + 2));
    *puVar4 = &PTR__Exception_00fe9ee0;
    if (((byte)local_180 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_16e,CONCAT11(uStack_16f,uStack_170)));
    }
    *puVar4 = &PTR__Exception_01002700;
                    /* try { // try from 00caa300 to 00caa317 has its CatchHandler @ 00caa4d0 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
                    /* try { // try from 00caa040 to 00caa047 has its CatchHandler @ 00caa52c */
  Integer::Integer((Integer *)local_f8);
                    /* try { // try from 00caa04c to 00caa08f has its CatchHandler @ 00caa544 */
  Integer::Decode((Integer *)local_f8,(BufferedTransformation *)aBStack_c8,local_a0,0);
  BERGeneralDecoder::MessageEnd();
  if (((param_3 & 1) == 0) && (cVar2 = BERGeneralDecoder::PeekByte(), cVar2 != -0x60)) {
    puVar4 = (undefined8 *)__cxa_allocate_exception(0x28);
    uStack_16f = 0;
    local_180 = (BERGeneralDecoder)0x20;
    uStack_177 = 0x6f727265206564;
    uStack_170 = 0x72;
    uStack_17f = 0x63656420524542;
    PStack_178 = (PolynomialMod2)0x6f;
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &PTR__Exception_00fe0298;
                    /* try { // try from 00caa3f0 to 00caa3f7 has its CatchHandler @ 00caa448 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar4 + 2));
    *puVar4 = &PTR__Exception_00fe9ee0;
    if (((byte)local_180 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_16e,CONCAT11(uStack_16f,uStack_170)));
    }
    *puVar4 = &PTR__Exception_01002700;
                    /* try { // try from 00caa428 to 00caa43f has its CatchHandler @ 00caa544 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
  uVar3 = BERGeneralDecoder::EndReached();
  if (((uVar3 & 1) == 0) && (cVar2 = BERGeneralDecoder::PeekByte(), cVar2 == -0x60)) {
                    /* try { // try from 00caa09c to 00caa0ab has its CatchHandler @ 00caa444 */
    BERGeneralDecoder::BERGeneralDecoder(&local_180,(BERGeneralDecoder *)&local_90,0xa0);
                    /* try { // try from 00caa0b0 to 00caa0bf has its CatchHandler @ 00caa4b8 */
    DL_GroupParameters_EC<CryptoPP::EC2N>::BERDecode
              ((DL_GroupParameters_EC<CryptoPP::EC2N> *)(param_1 + 0x60),
               (BufferedTransformation *)&local_180);
    BERGeneralDecoder::MessageEnd();
    BERGeneralDecoder::~BERGeneralDecoder(&local_180);
  }
                    /* try { // try from 00caa0c8 to 00caa0cf has its CatchHandler @ 00caa544 */
  uVar3 = BERGeneralDecoder::EndReached();
  if ((uVar3 & 1) == 0) {
    local_1b0 = 0;
    local_1a8 = (void *)0x0;
    local_1b8 = 0xffffffffffffffff;
                    /* try { // try from 00caa0e0 to 00caa0ef has its CatchHandler @ 00caa4c8 */
    BERGeneralDecoder::BERGeneralDecoder(aBStack_130,(BERGeneralDecoder *)&local_90,0xa1);
                    /* try { // try from 00caa0f0 to 00caa107 has its CatchHandler @ 00caa514 */
    BERDecodeBitString((BufferedTransformation *)aBStack_130,aSStack_1c0,&local_1c4);
    BERGeneralDecoder::MessageEnd();
    local_180 = (BERGeneralDecoder)0xa8;
    uStack_17f = 0x10026;
                    /* try { // try from 00caa120 to 00caa127 has its CatchHandler @ 00caa4b4 */
    PolynomialMod2::PolynomialMod2(&PStack_178);
                    /* try { // try from 00caa12c to 00caa12f has its CatchHandler @ 00caa4a4 */
    PolynomialMod2::PolynomialMod2(aPStack_158);
    local_138 = 1;
                    /* try { // try from 00caa150 to 00caa157 has its CatchHandler @ 00caa504 */
    if ((local_1c4 != 0) ||
       (uVar3 = (**(code **)(*(long *)(param_1 + 0x78) + 0x88))
                          (param_1 + 0x78,&local_180,local_1a8,local_1b0), (uVar3 & 1) == 0)) {
      puVar4 = (undefined8 *)__cxa_allocate_exception(0x28);
      uStack_187 = 0;
      local_198 = 0x20;
      uStack_18f = 0x6f727265206564;
      uStack_188 = 0x72;
      local_197._0_1_ = 'B';
      local_197._1_1_ = 'E';
      local_197._2_1_ = 'R';
      local_197._3_1_ = ' ';
      local_197._4_1_ = 'd';
      local_197._5_1_ = 'e';
      local_197._6_1_ = 'c';
      local_197._7_1_ = 'o';
      *(undefined4 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR__Exception_00fe0298;
                    /* try { // try from 00caa35c to 00caa363 has its CatchHandler @ 00caa47c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(puVar4 + 2));
      *puVar4 = &PTR__Exception_00fe9ee0;
      if ((local_198 & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_186,CONCAT11(uStack_187,uStack_188)));
      }
      *puVar4 = &PTR__Exception_01002700;
                    /* try { // try from 00caa394 to 00caa3ab has its CatchHandler @ 00caa504 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&BERDecodeErr::typeinfo,Exception::~Exception);
    }
    local_180 = (BERGeneralDecoder)0xa8;
    uStack_17f = 0x10026;
    if (uStack_148 <= local_150) {
      local_150 = uStack_148;
    }
    for (; local_150 != 0; local_150 = local_150 - 1) {
      *(undefined4 *)((long)local_140 + local_150 * 4 + -4) = 0;
    }
                    /* try { // try from 00caa18c to 00caa18f has its CatchHandler @ 00caa478 */
    UnalignedDeallocate(local_140);
    uVar3 = CONCAT62(uStack_16e,CONCAT11(uStack_16f,uStack_170));
    if (uStack_168 <= uVar3) {
      uVar3 = uStack_168;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)((long)local_160 + uVar3 * 4 + -4) = 0;
    }
                    /* try { // try from 00caa1b8 to 00caa1bb has its CatchHandler @ 00caa474 */
    UnalignedDeallocate(local_160);
    BERGeneralDecoder::~BERGeneralDecoder(aBStack_130);
    uVar3 = local_1b8;
    if (local_1b0 <= local_1b8) {
      uVar3 = local_1b0;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)((long)local_1a8 + (uVar3 - 1)) = 0;
    }
                    /* try { // try from 00caa1ec to 00caa1ef has its CatchHandler @ 00caa470 */
    UnalignedDeallocate(local_1a8);
  }
                    /* try { // try from 00caa1f0 to 00caa20b has its CatchHandler @ 00caa544 */
  BERGeneralDecoder::MessageEnd();
  (**(code **)(*(long *)param_1 + 0x28))(param_1,local_f8);
  if (uStack_e0 <= local_e8) {
    local_e8 = uStack_e0;
  }
  local_f8[0] = &PTR__Integer_0100c890;
  for (; local_e8 != 0; local_e8 = local_e8 - 1) {
    *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
  }
                    /* try { // try from 00caa244 to 00caa247 has its CatchHandler @ 00caa500 */
  UnalignedDeallocate(local_d8);
  BERGeneralDecoder::~BERGeneralDecoder(aBStack_c8);
  BERGeneralDecoder::~BERGeneralDecoder((BERGeneralDecoder *)&local_90);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


