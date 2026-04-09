// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeMaskedBitVarPtr
// Entry Point: 006d9ecc
// Size: 1184 bytes
// Signature: undefined __thiscall executeMaskedBitVarPtr(ConsoleCommand * this, vector * param_1, basic_string * param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsoleCommand::executeMaskedBitVarPtr(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall
ConsoleCommand::executeMaskedBitVarPtr(ConsoleCommand *this,vector *param_1,basic_string *param_2)

{
  undefined (*pauVar1) [16];
  byte *pbVar2;
  undefined **ppuVar3;
  ConsoleCommand *pCVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [12];
  undefined auVar19 [16];
  bool bVar20;
  int iVar21;
  basic_ostream *pbVar22;
  size_t sVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined (*pauVar29) [16];
  byte *pbVar30;
  byte *pbVar31;
  ulong *puVar32;
  char *__s;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  ulong uVar40;
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined **local_170;
  undefined **local_168;
  byte *local_160;
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined **local_100 [17];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar25 = **(uint **)(this + 0x40);
  if ((ulong)((*(long *)(param_1 + 8) - *(long *)param_1 >> 3) * -0x5555555555555555) < 2) {
    uVar24 = *(uint *)(this + 0x68);
    if (((uVar24 & uVar25) != 0) != (this[0x48] != (ConsoleCommand)0x0)) goto LAB_006d9f9c;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_170);
    auVar41 = _DAT_004c4d70;
    auVar19 = _DAT_004c4a50;
    auVar18 = _DAT_004c37b0;
    ppuVar27 = (undefined **)(ulong)((byte)local_170 >> 1);
    pbVar2 = (byte *)((ulong)&local_170 | 1);
    ppuVar3 = ppuVar27;
    if (((ulong)local_170 & 1) != 0) {
      pbVar2 = local_160;
      ppuVar3 = local_168;
    }
    if (ppuVar3 != (undefined **)0x0) {
      pbVar30 = pbVar2;
      if (ppuVar3 < (undefined **)0x8) {
LAB_006da100:
        do {
          bVar34 = *pbVar30;
          bVar33 = bVar34 | 0x20;
          if (0x19 < bVar34 - 0x41) {
            bVar33 = bVar34;
          }
          pbVar31 = pbVar30 + 1;
          *pbVar30 = bVar33;
          pbVar30 = pbVar31;
        } while (pbVar31 != pbVar2 + (long)ppuVar3);
      }
      else if (ppuVar3 < (undefined **)0x20) {
        ppuVar28 = (undefined **)0x0;
LAB_006da090:
        auVar18 = _DAT_004c4f40;
        auVar19 = _DAT_004c4d70;
        ppuVar27 = (undefined **)((ulong)ppuVar3 & 0xfffffffffffffff8);
        pbVar30 = pbVar2 + (long)ppuVar27;
        lVar26 = (long)ppuVar28 - (long)ppuVar27;
        puVar32 = (ulong *)(pbVar2 + (long)ppuVar28);
        do {
          uVar40 = *puVar32;
          lVar26 = lVar26 + 8;
          auVar41._8_8_ = 0;
          auVar41._0_8_ = uVar40;
          auVar41 = a64_TBL(ZEXT816(0),auVar41,ZEXT816(0),auVar19);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar40;
          auVar10._12_4_ = 0x10101003;
          auVar10._0_12_ = auVar18;
          auVar43 = a64_TBL(ZEXT816(0),auVar6,ZEXT816(0),auVar10);
          auVar42._0_4_ = auVar41._0_4_ + -0x41;
          auVar42._4_4_ = auVar41._4_4_ + -0x41;
          auVar42._8_4_ = auVar41._8_4_ + -0x41;
          auVar42._12_4_ = auVar41._12_4_ + -0x41;
          auVar44._0_4_ = auVar43._0_4_ + -0x41;
          auVar44._4_4_ = auVar43._4_4_ + -0x41;
          auVar44._8_4_ = auVar43._8_4_ + -0x41;
          auVar44._12_4_ = auVar43._12_4_ + -0x41;
          auVar8._8_4_ = 0x1a;
          auVar8._0_8_ = 0x1a0000001a;
          auVar8._12_4_ = 0x1a;
          auVar41 = NEON_cmhi(auVar8,auVar42,4);
          auVar9._8_4_ = 0x1a;
          auVar9._0_8_ = 0x1a0000001a;
          auVar9._12_4_ = 0x1a;
          auVar43 = NEON_cmhi(auVar9,auVar44,4);
          uVar40 = NEON_bsl(CONCAT17(auVar41[12],
                                     CONCAT16(auVar41[8],
                                              CONCAT15(auVar41[4],
                                                       CONCAT14(auVar41[0],
                                                                CONCAT13(auVar43[12],
                                                                         CONCAT12(auVar43[8],
                                                                                  CONCAT11(auVar43[4
                                                  ],auVar43[0]))))))),uVar40 | 0x2020202020202020,
                            uVar40,1);
          *puVar32 = uVar40;
          puVar32 = puVar32 + 1;
        } while (lVar26 != 0);
        if (ppuVar3 != ppuVar27) goto LAB_006da100;
      }
      else {
        ppuVar28 = (undefined **)((ulong)ppuVar3 & 0xffffffffffffffe0);
        pauVar29 = (undefined (*) [16])(pbVar2 + 0x10);
        auVar43._12_4_ = _UNK_004c4f4c;
        auVar43._0_12_ = _DAT_004c4f40;
        ppuVar27 = ppuVar28;
        do {
          pauVar1 = pauVar29 + -1;
          uVar7 = *(undefined8 *)(pauVar29[-1] + 8);
          bVar33 = (byte)((ulong)uVar7 >> 8);
          bVar34 = (byte)((ulong)uVar7 >> 0x10);
          bVar35 = (byte)((ulong)uVar7 >> 0x18);
          bVar36 = (byte)((ulong)uVar7 >> 0x20);
          bVar37 = (byte)((ulong)uVar7 >> 0x28);
          bVar38 = (byte)((ulong)uVar7 >> 0x30);
          bVar39 = (byte)((ulong)uVar7 >> 0x38);
          auVar6 = *pauVar29;
          ppuVar27 = ppuVar27 + -4;
          auVar45[9] = bVar33;
          auVar45._0_9_ = *(unkbyte9 *)*pauVar1;
          auVar45[10] = bVar34;
          auVar45[11] = bVar35;
          auVar45[12] = bVar36;
          auVar45[13] = bVar37;
          auVar45[14] = bVar38;
          auVar45[15] = bVar39;
          auVar45 = a64_TBL(ZEXT816(0),auVar45,ZEXT816(0),auVar19);
          auVar48[9] = bVar33;
          auVar48._0_9_ = *(unkbyte9 *)*pauVar1;
          auVar48[10] = bVar34;
          auVar48[11] = bVar35;
          auVar48[12] = bVar36;
          auVar48[13] = bVar37;
          auVar48[14] = bVar38;
          auVar48[15] = bVar39;
          auVar59._12_4_ = 0x1010100b;
          auVar59._0_12_ = auVar18;
          auVar48 = a64_TBL(ZEXT816(0),auVar48,ZEXT816(0),auVar59);
          auVar51[9] = bVar33;
          auVar51._0_9_ = *(unkbyte9 *)*pauVar1;
          auVar51[10] = bVar34;
          auVar51[11] = bVar35;
          auVar51[12] = bVar36;
          auVar51[13] = bVar37;
          auVar51[14] = bVar38;
          auVar51[15] = bVar39;
          auVar51 = a64_TBL(ZEXT816(0),auVar51,ZEXT816(0),auVar41);
          auVar54[9] = bVar33;
          auVar54._0_9_ = *(unkbyte9 *)*pauVar1;
          auVar54[10] = bVar34;
          auVar54[11] = bVar35;
          auVar54[12] = bVar36;
          auVar54[13] = bVar37;
          auVar54[14] = bVar38;
          auVar54[15] = bVar39;
          auVar54 = a64_TBL(ZEXT816(0),auVar54,ZEXT816(0),auVar43);
          auVar57 = a64_TBL(ZEXT816(0),auVar6,ZEXT816(0),auVar19);
          auVar61._12_4_ = 0x1010100b;
          auVar61._0_12_ = auVar18;
          auVar59 = a64_TBL(ZEXT816(0),auVar6,ZEXT816(0),auVar61);
          auVar61 = a64_TBL(ZEXT816(0),auVar6,ZEXT816(0),auVar41);
          auVar63 = a64_TBL(ZEXT816(0),auVar6,ZEXT816(0),auVar43);
          auVar55._0_4_ = auVar54._0_4_ + -0x41;
          auVar55._4_4_ = auVar54._4_4_ + -0x41;
          auVar55._8_4_ = auVar54._8_4_ + -0x41;
          auVar55._12_4_ = auVar54._12_4_ + -0x41;
          auVar52._0_4_ = auVar51._0_4_ + -0x41;
          auVar52._4_4_ = auVar51._4_4_ + -0x41;
          auVar52._8_4_ = auVar51._8_4_ + -0x41;
          auVar52._12_4_ = auVar51._12_4_ + -0x41;
          auVar49._0_4_ = auVar48._0_4_ + -0x41;
          auVar49._4_4_ = auVar48._4_4_ + -0x41;
          auVar49._8_4_ = auVar48._8_4_ + -0x41;
          auVar49._12_4_ = auVar48._12_4_ + -0x41;
          auVar46._0_4_ = auVar45._0_4_ + -0x41;
          auVar46._4_4_ = auVar45._4_4_ + -0x41;
          auVar46._8_4_ = auVar45._8_4_ + -0x41;
          auVar46._12_4_ = auVar45._12_4_ + -0x41;
          auVar64._0_4_ = auVar63._0_4_ + -0x41;
          auVar64._4_4_ = auVar63._4_4_ + -0x41;
          auVar64._8_4_ = auVar63._8_4_ + -0x41;
          auVar64._12_4_ = auVar63._12_4_ + -0x41;
          auVar62._0_4_ = auVar61._0_4_ + -0x41;
          auVar62._4_4_ = auVar61._4_4_ + -0x41;
          auVar62._8_4_ = auVar61._8_4_ + -0x41;
          auVar62._12_4_ = auVar61._12_4_ + -0x41;
          auVar60._0_4_ = auVar59._0_4_ + -0x41;
          auVar60._4_4_ = auVar59._4_4_ + -0x41;
          auVar60._8_4_ = auVar59._8_4_ + -0x41;
          auVar60._12_4_ = auVar59._12_4_ + -0x41;
          auVar58._0_4_ = auVar57._0_4_ + -0x41;
          auVar58._4_4_ = auVar57._4_4_ + -0x41;
          auVar58._8_4_ = auVar57._8_4_ + -0x41;
          auVar58._12_4_ = auVar57._12_4_ + -0x41;
          auVar63._8_4_ = 0x1a;
          auVar63._0_8_ = 0x1a0000001a;
          auVar63._12_4_ = 0x1a;
          auVar45 = NEON_cmhi(auVar63,auVar46,4);
          auVar11._8_4_ = 0x1a;
          auVar11._0_8_ = 0x1a0000001a;
          auVar11._12_4_ = 0x1a;
          auVar48 = NEON_cmhi(auVar11,auVar49,4);
          auVar12._8_4_ = 0x1a;
          auVar12._0_8_ = 0x1a0000001a;
          auVar12._12_4_ = 0x1a;
          auVar51 = NEON_cmhi(auVar12,auVar52,4);
          auVar13._8_4_ = 0x1a;
          auVar13._0_8_ = 0x1a0000001a;
          auVar13._12_4_ = 0x1a;
          auVar54 = NEON_cmhi(auVar13,auVar55,4);
          auVar14._8_4_ = 0x1a;
          auVar14._0_8_ = 0x1a0000001a;
          auVar14._12_4_ = 0x1a;
          auVar57 = NEON_cmhi(auVar14,auVar58,4);
          auVar15._8_4_ = 0x1a;
          auVar15._0_8_ = 0x1a0000001a;
          auVar15._12_4_ = 0x1a;
          auVar59 = NEON_cmhi(auVar15,auVar60,4);
          auVar16._8_4_ = 0x1a;
          auVar16._0_8_ = 0x1a0000001a;
          auVar16._12_4_ = 0x1a;
          auVar61 = NEON_cmhi(auVar16,auVar62,4);
          auVar17._8_4_ = 0x1a;
          auVar17._0_8_ = 0x1a0000001a;
          auVar17._12_4_ = 0x1a;
          auVar63 = NEON_cmhi(auVar17,auVar64,4);
          auVar47[1] = auVar54[4];
          auVar47[0] = auVar54[0];
          auVar47[2] = auVar54[8];
          auVar47[3] = auVar54[12];
          auVar47[4] = auVar51[0];
          auVar47[5] = auVar51[4];
          auVar47[6] = auVar51[8];
          auVar47[7] = auVar51[12];
          auVar47[8] = auVar48[0];
          auVar47[9] = auVar48[4];
          auVar47[10] = auVar48[8];
          auVar47[11] = auVar48[12];
          auVar47[12] = auVar45[0];
          auVar47[13] = auVar45[4];
          auVar47[14] = auVar45[8];
          auVar47[15] = auVar45[12];
          auVar50[1] = auVar63[4];
          auVar50[0] = auVar63[0];
          auVar50[2] = auVar63[8];
          auVar50[3] = auVar63[12];
          auVar50[4] = auVar61[0];
          auVar50[5] = auVar61[4];
          auVar50[6] = auVar61[8];
          auVar50[7] = auVar61[12];
          auVar50[8] = auVar59[0];
          auVar50[9] = auVar59[4];
          auVar50[10] = auVar59[8];
          auVar50[11] = auVar59[12];
          auVar50[12] = auVar57[0];
          auVar50[13] = auVar57[4];
          auVar50[14] = auVar57[8];
          auVar50[15] = auVar57[12];
          auVar53._0_8_ = *(ulong *)*pauVar1 | 0x2020202020202020;
          auVar53[8] = (byte)uVar7 | 0x20;
          auVar53[9] = bVar33 | 0x20;
          auVar53[10] = bVar34 | 0x20;
          auVar53[11] = bVar35 | 0x20;
          auVar53[12] = bVar36 | 0x20;
          auVar53[13] = bVar37 | 0x20;
          auVar53[14] = bVar38 | 0x20;
          auVar53[15] = bVar39 | 0x20;
          auVar56._0_8_ = auVar6._0_8_ | 0x2020202020202020;
          auVar56[8] = auVar6[8] | 0x20;
          auVar56[9] = auVar6[9] | 0x20;
          auVar56[10] = auVar6[10] | 0x20;
          auVar56[11] = auVar6[11] | 0x20;
          auVar56[12] = auVar6[12] | 0x20;
          auVar56[13] = auVar6[13] | 0x20;
          auVar56[14] = auVar6[14] | 0x20;
          auVar56[15] = auVar6[15] | 0x20;
          auVar57[9] = bVar33;
          auVar57._0_9_ = *(unkbyte9 *)*pauVar1;
          auVar57[10] = bVar34;
          auVar57[11] = bVar35;
          auVar57[12] = bVar36;
          auVar57[13] = bVar37;
          auVar57[14] = bVar38;
          auVar57[15] = bVar39;
          auVar48 = NEON_bsl(auVar47,auVar53,auVar57,1);
          auVar45 = NEON_bit(auVar6,auVar56,auVar50,1);
          *(long *)(pauVar29[-1] + 8) = auVar48._8_8_;
          *(long *)pauVar29[-1] = auVar48._0_8_;
          *(long *)(*pauVar29 + 8) = auVar45._8_8_;
          *(long *)*pauVar29 = auVar45._0_8_;
          pauVar29 = pauVar29 + 2;
        } while (ppuVar27 != (undefined **)0x0);
        if (ppuVar3 != ppuVar28) {
          if (((ulong)ppuVar3 & 0x18) == 0) {
            pbVar30 = pbVar2 + (long)ppuVar28;
            goto LAB_006da100;
          }
          goto LAB_006da090;
        }
      }
      ppuVar27 = (undefined **)(ulong)((byte)local_170 >> 1);
    }
    ppuVar3 = ppuVar27;
    if (((ulong)local_170 & 1) != 0) {
      ppuVar3 = local_168;
    }
    bVar33 = (byte)local_170;
    if (ppuVar3 == (undefined **)0x4) {
                    /* try { // try from 006da144 to 006da15f has its CatchHandler @ 006da370 */
      iVar21 = std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               compare((ulong)&local_170,0,(char *)0xffffffffffffffff,0x4ec5fc);
      if (iVar21 != 0) {
        ppuVar27 = (undefined **)(ulong)((byte)local_170 >> 1);
        bVar33 = (byte)local_170;
        goto LAB_006da174;
      }
      bVar20 = true;
joined_r0x006da1bc:
      if (((ulong)local_170 & 1) != 0) {
LAB_006da1c0:
        operator_delete(local_160);
      }
    }
    else {
LAB_006da174:
      if ((bVar33 & 1) != 0) {
        ppuVar27 = local_168;
      }
      if (ppuVar27 != (undefined **)0x1) {
        bVar20 = false;
        goto joined_r0x006da1bc;
      }
                    /* try { // try from 006da184 to 006da19f has its CatchHandler @ 006da36c */
      iVar21 = std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               compare((ulong)&local_170,0,(char *)0xffffffffffffffff,0x4fb2ee);
      bVar20 = iVar21 == 0;
      if (((byte)local_170 & 1) != 0) goto LAB_006da1c0;
    }
    uVar24 = *(uint *)(this + 0x68);
    if (bVar20) {
LAB_006d9f9c:
      uVar25 = uVar24 | uVar25;
      __s = "true";
      goto LAB_006da1dc;
    }
  }
  uVar25 = uVar25 & (uVar24 ^ 0xffffffff);
  __s = "false";
LAB_006da1dc:
  local_170 = (undefined **)0xfd8f40;
  local_100[0] = (undefined **)0xfd8f68;
  **(uint **)(this + 0x40) = uVar25;
                    /* try { // try from 006da208 to 006da213 has its CatchHandler @ 006da394 */
  std::__ndk1::ios_base::init(local_100);
  local_78 = 0;
  local_70 = 0xffffffff;
  local_170 = &PTR__basic_ostringstream_00fd8ed0;
  local_100[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 006da238 to 006da23f has its CatchHandler @ 006da378 */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  uStack_120 = 0;
  local_128 = 0;
  local_168 = &PTR__basic_stringbuf_00fd8fa0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  bVar20 = ((byte)this[8] & 1) != 0;
  pCVar4 = this + 9;
  if (bVar20) {
    pCVar4 = *(ConsoleCommand **)(this + 0x18);
  }
  uVar40 = (ulong)((byte)this[8] >> 1);
  if (bVar20) {
    uVar40 = *(ulong *)(this + 0x10);
  }
  local_108 = 0x10;
                    /* try { // try from 006da280 to 006da2b3 has its CatchHandler @ 006da3a8 */
  pbVar22 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      ((basic_ostream *)&local_170,(char *)pCVar4,uVar40);
  pbVar22 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (pbVar22," = ",3);
  sVar23 = strlen(__s);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar22,__s,sVar23);
                    /* try { // try from 006da2b4 to 006da2bf has its CatchHandler @ 006da374 */
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  if ((*(byte *)param_2 & 1) != 0) {
    operator_delete(*(void **)(param_2 + 4));
  }
  local_170 = &PTR__basic_ostringstream_00fd8ed0;
  local_100[0] = &PTR__basic_ostringstream_00fd8ef8;
  local_168 = &PTR__basic_stringbuf_00fd8fa0;
  *(undefined8 *)(param_2 + 2) = uStack_180;
  *(undefined8 *)param_2 = local_188;
  *(undefined8 *)(param_2 + 4) = local_178;
  if ((local_128 & 1) != 0) {
    operator_delete(local_118);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)&local_168);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_170);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_100);
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


