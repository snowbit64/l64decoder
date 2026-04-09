// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodeGF2NP
// Entry Point: 00ce8b04
// Size: 1448 bytes
// Signature: undefined __cdecl BERDecodeGF2NP(BufferedTransformation * param_1)


/* CryptoPP::BERDecodeGF2NP(CryptoPP::BufferedTransformation&) */

undefined8 * CryptoPP::BERDecodeGF2NP(BufferedTransformation *param_1)

{
  long lVar1;
  bool bVar2;
  int *piVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong in_x5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint local_154;
  uint uStack_150;
  uint local_14c;
  undefined **local_148;
  int *local_140;
  int *local_138;
  undefined8 uStack_130;
  uint local_124;
  undefined **local_120;
  int *local_118;
  int *local_110;
  void *local_108;
  uint local_100;
  undefined4 uStack_fc;
  undefined uStack_f8;
  undefined7 uStack_f7;
  undefined uStack_f0;
  undefined uStack_ef;
  undefined6 uStack_ee;
  undefined8 uStack_e8;
  CryptoPP local_c8;
  undefined7 uStack_c7;
  undefined uStack_c0;
  undefined7 uStack_bf;
  undefined uStack_b8;
  undefined uStack_b7;
  undefined6 uStack_b6;
  undefined **local_90;
  undefined **ppuStack_88;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar5 = 0x30;
  BERGeneralDecoder::BERGeneralDecoder((BERGeneralDecoder *)&local_90,param_1,'0');
  uStack_f0 = 0;
  uStack_ef = 0;
  uStack_ee = 0;
  uStack_e8 = 0;
  local_90 = &PTR__BERGeneralDecoder_01000a70;
  ppuStack_88 = &PTR__BERSequenceDecoder_01000c08;
  local_100 = 0xfecd98;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f7 = 0;
                    /* try { // try from 00ce8b68 to 00ce8b73 has its CatchHandler @ 00ce920c */
  OID::BERDecode((OID *)&local_100,(BufferedTransformation *)&local_90);
                    /* try { // try from 00ce8b74 to 00ce8b7b has its CatchHandler @ 00ce91dc */
  ASN1::id_fieldType();
                    /* try { // try from 00ce8b7c to 00ce8b8b has its CatchHandler @ 00ce91b8 */
  operator+(&local_c8,(OID *)0x2,uVar5);
  local_c8 = (CryptoPP)0x98;
  uStack_c7 = 0xfecd;
  if ((void *)CONCAT71(uStack_bf,uStack_c0) != (void *)0x0) {
    uStack_b7 = (undefined)uStack_bf;
    uStack_b6 = (undefined6)((uint7)uStack_bf >> 8);
    operator_delete((void *)CONCAT71(uStack_bf,uStack_c0));
  }
  piVar3 = (int *)CONCAT71(uStack_f7,uStack_f8);
  piVar8 = (int *)CONCAT62(uStack_ee,CONCAT11(uStack_ef,uStack_f0));
  if ((long)piVar8 - (long)piVar3 == (long)local_110 - (long)local_118) {
    piVar9 = local_118;
    piVar6 = piVar3;
    if (piVar3 == piVar8) {
      bVar2 = false;
    }
    else {
      do {
        piVar7 = piVar6 + 1;
        bVar2 = *piVar6 != *piVar9;
        if (bVar2) break;
        piVar9 = piVar9 + 1;
        piVar6 = piVar7;
      } while (piVar7 != piVar8);
    }
  }
  else {
    bVar2 = true;
  }
  local_120 = &PTR__OID_00fecd98;
  if (local_118 != (int *)0x0) {
    local_120 = &PTR__OID_00fecd98;
    local_110 = local_118;
    operator_delete(local_118);
    piVar3 = (int *)CONCAT71(uStack_f7,uStack_f8);
  }
  local_100 = 0xfecd98;
  uStack_fc = 0;
  if (piVar3 != (int *)0x0) {
    uStack_f0 = SUB81(piVar3,0);
    uStack_ef = (undefined)((ulong)piVar3 >> 8);
    uStack_ee = (undefined6)((ulong)piVar3 >> 0x10);
    operator_delete(piVar3);
  }
  if (bVar2) {
    puVar4 = (undefined8 *)__cxa_allocate_exception(0x28);
    uStack_b7 = 0;
    local_c8 = (CryptoPP)0x20;
    uStack_bf = 0x6f727265206564;
    uStack_b8 = 0x72;
    uStack_c7 = 0x63656420524542;
    uStack_c0 = 0x6f;
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &PTR__Exception_00fe0298;
                    /* try { // try from 00ce8fc0 to 00ce8fc7 has its CatchHandler @ 00ce9134 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(puVar4 + 2));
    *puVar4 = &PTR__Exception_00fe9ee0;
    if (((byte)local_c8 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_b6,CONCAT11(uStack_b7,uStack_b8)));
    }
    *puVar4 = &PTR__Exception_01002700;
                    /* try { // try from 00ce8ff8 to 00ce900f has its CatchHandler @ 00ce9130 */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&BERDecodeErr::typeinfo,Exception::~Exception);
  }
                    /* try { // try from 00ce8c28 to 00ce8c37 has its CatchHandler @ 00ce91b0 */
  BERGeneralDecoder::BERGeneralDecoder
            ((BERGeneralDecoder *)&local_c8,(BERGeneralDecoder *)&local_90,'0');
  local_c8 = (CryptoPP)0x70;
  uStack_c7 = 0x1000a;
  uStack_c0 = 8;
  uStack_bf = 0x1000c;
                    /* try { // try from 00ce8c44 to 00ce8c5b has its CatchHandler @ 00ce91a4 */
  uVar5 = 2;
  BERDecodeUnsigned<unsigned_int>
            ((BufferedTransformation *)&local_c8,&local_124,'\x02',0,0xffffffff);
  local_148 = &PTR__OID_00fecd98;
  local_138 = (int *)0x0;
  uStack_130 = 0;
  local_140 = (int *)0x0;
                    /* try { // try from 00ce8c68 to 00ce8c73 has its CatchHandler @ 00ce9190 */
  OID::BERDecode((OID *)&local_148,(BufferedTransformation *)&local_c8);
                    /* try { // try from 00ce8c74 to 00ce8c7b has its CatchHandler @ 00ce9188 */
  ASN1::id_characteristic_two_basis();
                    /* try { // try from 00ce8c7c to 00ce8c8b has its CatchHandler @ 00ce9164 */
  operator+((CryptoPP *)&local_100,(OID *)0x2,uVar5);
  local_100 = 0xfecd98;
  uStack_fc = 0;
  if ((void *)CONCAT71(uStack_f7,uStack_f8) != (void *)0x0) {
    uStack_f0 = uStack_f8;
    uStack_ef = (undefined)uStack_f7;
    uStack_ee = (undefined6)((uint7)uStack_f7 >> 8);
    operator_delete((void *)CONCAT71(uStack_f7,uStack_f8));
  }
  if ((long)local_138 - (long)local_140 == (long)local_110 - (long)local_118) {
    piVar8 = local_118;
    piVar3 = local_140;
    if (local_140 == local_138) {
      bVar2 = true;
    }
    else {
      do {
        piVar6 = piVar3 + 1;
        bVar2 = *piVar3 == *piVar8;
        if (!bVar2) break;
        piVar8 = piVar8 + 1;
        piVar3 = piVar6;
      } while (piVar6 != local_138);
    }
  }
  else {
    bVar2 = false;
  }
  local_120 = &PTR__OID_00fecd98;
  if (local_118 != (int *)0x0) {
    local_120 = &PTR__OID_00fecd98;
    local_110 = local_118;
    operator_delete(local_118);
  }
  if (bVar2) {
                    /* try { // try from 00ce8d10 to 00ce8d2f has its CatchHandler @ 00ce915c */
    BERDecodeUnsigned<unsigned_int>
              ((BufferedTransformation *)&local_c8,&local_100,'\x02',0,0xffffffff);
    puVar4 = (undefined8 *)operator_new(0xc0);
                    /* try { // try from 00ce8d3c to 00ce8d43 has its CatchHandler @ 00ce9100 */
    GF2NT::GF2NT((GF2NT *)puVar4,local_124,local_100,0);
  }
  else {
                    /* try { // try from 00ce8d48 to 00ce8d4f has its CatchHandler @ 00ce9128 */
    ASN1::id_characteristic_two_basis();
                    /* try { // try from 00ce8d50 to 00ce8d5f has its CatchHandler @ 00ce9110 */
    operator+((CryptoPP *)&local_100,(OID *)0x3,uVar5);
    local_100 = 0xfecd98;
    uStack_fc = 0;
    if ((void *)CONCAT71(uStack_f7,uStack_f8) != (void *)0x0) {
      uStack_f0 = uStack_f8;
      uStack_ef = (undefined)uStack_f7;
      uStack_ee = (undefined6)((uint7)uStack_f7 >> 8);
      operator_delete((void *)CONCAT71(uStack_f7,uStack_f8));
    }
    if ((long)local_138 - (long)local_140 == (long)local_110 - (long)local_118) {
      piVar8 = local_118;
      piVar3 = local_140;
      if (local_140 == local_138) {
        bVar2 = true;
      }
      else {
        do {
          piVar6 = piVar3 + 1;
          bVar2 = *piVar3 == *piVar8;
          if (!bVar2) break;
          piVar8 = piVar8 + 1;
          piVar3 = piVar6;
        } while (piVar6 != local_138);
      }
    }
    else {
      bVar2 = false;
    }
    local_120 = &PTR__OID_00fecd98;
    if (local_118 != (int *)0x0) {
      local_120 = &PTR__OID_00fecd98;
      local_110 = local_118;
      operator_delete(local_118);
    }
    if (!bVar2) {
      puVar4 = (undefined8 *)__cxa_allocate_exception(0x28);
      uStack_ef = 0;
      uStack_f7 = 0x6f727265206564;
      uStack_f0 = 0x72;
      local_100 = 0x52454220;
      uStack_fc = 0x63656420;
      uStack_f8 = 0x6f;
      *(undefined4 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR__Exception_00fe0298;
                    /* try { // try from 00ce9054 to 00ce905b has its CatchHandler @ 00ce90ac */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(puVar4 + 2));
      *puVar4 = &PTR__Exception_00fe9ee0;
      if ((local_100 & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_ee,CONCAT11(uStack_ef,uStack_f0)));
      }
      *puVar4 = &PTR__Exception_01002700;
                    /* try { // try from 00ce908c to 00ce90a7 has its CatchHandler @ 00ce921c */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&BERDecodeErr::typeinfo,Exception::~Exception);
    }
                    /* try { // try from 00ce8de4 to 00ce8df3 has its CatchHandler @ 00ce90f8 */
    BERGeneralDecoder::BERGeneralDecoder
              ((BERGeneralDecoder *)&local_100,(BERGeneralDecoder *)&local_c8,'0');
    local_100 = 0x1000a70;
    uStack_fc = 0;
    uStack_f8 = 8;
    uStack_f7 = 0x1000c;
                    /* try { // try from 00ce8e00 to 00ce8e57 has its CatchHandler @ 00ce9224 */
    BERDecodeUnsigned<unsigned_int>
              ((BufferedTransformation *)&local_100,&local_154,'\x02',0,0xffffffff);
    BERDecodeUnsigned<unsigned_int>
              ((BufferedTransformation *)&local_100,&uStack_150,'\x02',0,0xffffffff);
    BERDecodeUnsigned<unsigned_int>
              ((BufferedTransformation *)&local_100,&local_14c,'\x02',0,0xffffffff);
    BERGeneralDecoder::MessageEnd();
    puVar4 = (undefined8 *)operator_new(0xa0);
                    /* try { // try from 00ce8e68 to 00ce8e7f has its CatchHandler @ 00ce90e8 */
    PolynomialMod2::Pentanomial
              ((PolynomialMod2 *)(ulong)local_124,(ulong)local_154,(ulong)uStack_150,
               (ulong)local_14c,0,in_x5);
                    /* try { // try from 00ce8e80 to 00ce8e8b has its CatchHandler @ 00ce90d8 */
    GF2NP::GF2NP((GF2NP *)puVar4,(PolynomialMod2 *)&local_120);
    if (local_110 <= local_118) {
      local_118 = local_110;
    }
    for (; local_118 != (int *)0x0; local_118 = (int *)((long)local_118 + -1)) {
      *(undefined4 *)((long)local_108 + (long)local_118 * 4 + -4) = 0;
    }
                    /* try { // try from 00ce8eb4 to 00ce8eb7 has its CatchHandler @ 00ce90d4 */
    UnalignedDeallocate(local_108);
    *(uint *)((long)puVar4 + 0x94) = local_154;
    *(uint *)(puVar4 + 0x13) = uStack_150;
    *(uint *)((long)puVar4 + 0x9c) = local_14c;
    *puVar4 = &PTR__QuotientRing_01009690;
    BERGeneralDecoder::~BERGeneralDecoder((BERGeneralDecoder *)&local_100);
  }
                    /* try { // try from 00ce8ed8 to 00ce8ee7 has its CatchHandler @ 00ce921c */
  BERGeneralDecoder::MessageEnd();
  BERGeneralDecoder::MessageEnd();
  local_148 = &PTR__OID_00fecd98;
  if (local_140 != (int *)0x0) {
    local_138 = local_140;
    operator_delete(local_140);
  }
  BERGeneralDecoder::~BERGeneralDecoder((BERGeneralDecoder *)&local_c8);
  BERGeneralDecoder::~BERGeneralDecoder((BERGeneralDecoder *)&local_90);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}


