// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeBoolVarPtr
// Entry Point: 006d99fc
// Size: 1152 bytes
// Signature: undefined __thiscall executeBoolVarPtr(ConsoleCommand * this, vector * param_1, basic_string * param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsoleCommand::executeBoolVarPtr(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall
ConsoleCommand::executeBoolVarPtr(ConsoleCommand *this,vector *param_1,basic_string *param_2)

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
  bool bVar21;
  int iVar22;
  basic_ostream *pbVar23;
  char *pcVar24;
  long lVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined (*pauVar28) [16];
  byte *pbVar29;
  byte *pbVar30;
  ulong *puVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  ulong uVar39;
  undefined auVar40 [16];
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
  if ((ulong)((*(long *)(param_1 + 8) - *(long *)param_1 >> 3) * -0x5555555555555555) < 2) {
    pcVar24 = *(char **)(this + 0x40);
    bVar20 = *pcVar24 != '\0';
    if (this[0x48] != (ConsoleCommand)0x0) {
      bVar20 = *pcVar24 == '\0';
    }
    goto LAB_006d9ce8;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)&local_170);
  auVar40 = _DAT_004c4d70;
  auVar19 = _DAT_004c4a50;
  auVar18 = _DAT_004c37b0;
  ppuVar26 = (undefined **)(ulong)((byte)local_170 >> 1);
  pbVar2 = (byte *)((ulong)&local_170 | 1);
  ppuVar3 = ppuVar26;
  if (((ulong)local_170 & 1) != 0) {
    pbVar2 = local_160;
    ppuVar3 = local_168;
  }
  if (ppuVar3 != (undefined **)0x0) {
    pbVar29 = pbVar2;
    if (ppuVar3 < (undefined **)0x8) {
LAB_006d9c1c:
      do {
        bVar33 = *pbVar29;
        bVar32 = bVar33 | 0x20;
        if (0x19 < bVar33 - 0x41) {
          bVar32 = bVar33;
        }
        pbVar30 = pbVar29 + 1;
        *pbVar29 = bVar32;
        pbVar29 = pbVar30;
      } while (pbVar30 != pbVar2 + (long)ppuVar3);
    }
    else if (ppuVar3 < (undefined **)0x20) {
      ppuVar27 = (undefined **)0x0;
LAB_006d9bac:
      auVar18 = _DAT_004c4f40;
      auVar19 = _DAT_004c4d70;
      ppuVar26 = (undefined **)((ulong)ppuVar3 & 0xfffffffffffffff8);
      pbVar29 = pbVar2 + (long)ppuVar26;
      lVar25 = (long)ppuVar27 - (long)ppuVar26;
      puVar31 = (ulong *)(pbVar2 + (long)ppuVar27);
      do {
        uVar39 = *puVar31;
        lVar25 = lVar25 + 8;
        auVar40._8_8_ = 0;
        auVar40._0_8_ = uVar39;
        auVar40 = a64_TBL(ZEXT816(0),auVar40,ZEXT816(0),auVar19);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar39;
        auVar10._12_4_ = 0x10101003;
        auVar10._0_12_ = auVar18;
        auVar42 = a64_TBL(ZEXT816(0),auVar6,ZEXT816(0),auVar10);
        auVar41._0_4_ = auVar40._0_4_ + -0x41;
        auVar41._4_4_ = auVar40._4_4_ + -0x41;
        auVar41._8_4_ = auVar40._8_4_ + -0x41;
        auVar41._12_4_ = auVar40._12_4_ + -0x41;
        auVar43._0_4_ = auVar42._0_4_ + -0x41;
        auVar43._4_4_ = auVar42._4_4_ + -0x41;
        auVar43._8_4_ = auVar42._8_4_ + -0x41;
        auVar43._12_4_ = auVar42._12_4_ + -0x41;
        auVar8._8_4_ = 0x1a;
        auVar8._0_8_ = 0x1a0000001a;
        auVar8._12_4_ = 0x1a;
        auVar40 = NEON_cmhi(auVar8,auVar41,4);
        auVar9._8_4_ = 0x1a;
        auVar9._0_8_ = 0x1a0000001a;
        auVar9._12_4_ = 0x1a;
        auVar42 = NEON_cmhi(auVar9,auVar43,4);
        uVar39 = NEON_bsl(CONCAT17(auVar40[12],
                                   CONCAT16(auVar40[8],
                                            CONCAT15(auVar40[4],
                                                     CONCAT14(auVar40[0],
                                                              CONCAT13(auVar42[12],
                                                                       CONCAT12(auVar42[8],
                                                                                CONCAT11(auVar42[4],
                                                                                         auVar42[0])
                                                                               )))))),
                          uVar39 | 0x2020202020202020,uVar39,1);
        *puVar31 = uVar39;
        puVar31 = puVar31 + 1;
      } while (lVar25 != 0);
      if (ppuVar3 != ppuVar26) goto LAB_006d9c1c;
    }
    else {
      ppuVar27 = (undefined **)((ulong)ppuVar3 & 0xffffffffffffffe0);
      pauVar28 = (undefined (*) [16])(pbVar2 + 0x10);
      auVar42._12_4_ = _UNK_004c4f4c;
      auVar42._0_12_ = _DAT_004c4f40;
      ppuVar26 = ppuVar27;
      do {
        pauVar1 = pauVar28 + -1;
        uVar7 = *(undefined8 *)(pauVar28[-1] + 8);
        bVar32 = (byte)((ulong)uVar7 >> 8);
        bVar33 = (byte)((ulong)uVar7 >> 0x10);
        bVar34 = (byte)((ulong)uVar7 >> 0x18);
        bVar35 = (byte)((ulong)uVar7 >> 0x20);
        bVar36 = (byte)((ulong)uVar7 >> 0x28);
        bVar37 = (byte)((ulong)uVar7 >> 0x30);
        bVar38 = (byte)((ulong)uVar7 >> 0x38);
        auVar6 = *pauVar28;
        ppuVar26 = ppuVar26 + -4;
        auVar44[9] = bVar32;
        auVar44._0_9_ = *(unkbyte9 *)*pauVar1;
        auVar44[10] = bVar33;
        auVar44[11] = bVar34;
        auVar44[12] = bVar35;
        auVar44[13] = bVar36;
        auVar44[14] = bVar37;
        auVar44[15] = bVar38;
        auVar44 = a64_TBL(ZEXT816(0),auVar44,ZEXT816(0),auVar19);
        auVar47[9] = bVar32;
        auVar47._0_9_ = *(unkbyte9 *)*pauVar1;
        auVar47[10] = bVar33;
        auVar47[11] = bVar34;
        auVar47[12] = bVar35;
        auVar47[13] = bVar36;
        auVar47[14] = bVar37;
        auVar47[15] = bVar38;
        auVar58._12_4_ = 0x1010100b;
        auVar58._0_12_ = auVar18;
        auVar47 = a64_TBL(ZEXT816(0),auVar47,ZEXT816(0),auVar58);
        auVar50[9] = bVar32;
        auVar50._0_9_ = *(unkbyte9 *)*pauVar1;
        auVar50[10] = bVar33;
        auVar50[11] = bVar34;
        auVar50[12] = bVar35;
        auVar50[13] = bVar36;
        auVar50[14] = bVar37;
        auVar50[15] = bVar38;
        auVar50 = a64_TBL(ZEXT816(0),auVar50,ZEXT816(0),auVar40);
        auVar53[9] = bVar32;
        auVar53._0_9_ = *(unkbyte9 *)*pauVar1;
        auVar53[10] = bVar33;
        auVar53[11] = bVar34;
        auVar53[12] = bVar35;
        auVar53[13] = bVar36;
        auVar53[14] = bVar37;
        auVar53[15] = bVar38;
        auVar53 = a64_TBL(ZEXT816(0),auVar53,ZEXT816(0),auVar42);
        auVar56 = a64_TBL(ZEXT816(0),auVar6,ZEXT816(0),auVar19);
        auVar60._12_4_ = 0x1010100b;
        auVar60._0_12_ = auVar18;
        auVar58 = a64_TBL(ZEXT816(0),auVar6,ZEXT816(0),auVar60);
        auVar60 = a64_TBL(ZEXT816(0),auVar6,ZEXT816(0),auVar40);
        auVar62 = a64_TBL(ZEXT816(0),auVar6,ZEXT816(0),auVar42);
        auVar54._0_4_ = auVar53._0_4_ + -0x41;
        auVar54._4_4_ = auVar53._4_4_ + -0x41;
        auVar54._8_4_ = auVar53._8_4_ + -0x41;
        auVar54._12_4_ = auVar53._12_4_ + -0x41;
        auVar51._0_4_ = auVar50._0_4_ + -0x41;
        auVar51._4_4_ = auVar50._4_4_ + -0x41;
        auVar51._8_4_ = auVar50._8_4_ + -0x41;
        auVar51._12_4_ = auVar50._12_4_ + -0x41;
        auVar48._0_4_ = auVar47._0_4_ + -0x41;
        auVar48._4_4_ = auVar47._4_4_ + -0x41;
        auVar48._8_4_ = auVar47._8_4_ + -0x41;
        auVar48._12_4_ = auVar47._12_4_ + -0x41;
        auVar45._0_4_ = auVar44._0_4_ + -0x41;
        auVar45._4_4_ = auVar44._4_4_ + -0x41;
        auVar45._8_4_ = auVar44._8_4_ + -0x41;
        auVar45._12_4_ = auVar44._12_4_ + -0x41;
        auVar63._0_4_ = auVar62._0_4_ + -0x41;
        auVar63._4_4_ = auVar62._4_4_ + -0x41;
        auVar63._8_4_ = auVar62._8_4_ + -0x41;
        auVar63._12_4_ = auVar62._12_4_ + -0x41;
        auVar61._0_4_ = auVar60._0_4_ + -0x41;
        auVar61._4_4_ = auVar60._4_4_ + -0x41;
        auVar61._8_4_ = auVar60._8_4_ + -0x41;
        auVar61._12_4_ = auVar60._12_4_ + -0x41;
        auVar59._0_4_ = auVar58._0_4_ + -0x41;
        auVar59._4_4_ = auVar58._4_4_ + -0x41;
        auVar59._8_4_ = auVar58._8_4_ + -0x41;
        auVar59._12_4_ = auVar58._12_4_ + -0x41;
        auVar57._0_4_ = auVar56._0_4_ + -0x41;
        auVar57._4_4_ = auVar56._4_4_ + -0x41;
        auVar57._8_4_ = auVar56._8_4_ + -0x41;
        auVar57._12_4_ = auVar56._12_4_ + -0x41;
        auVar62._8_4_ = 0x1a;
        auVar62._0_8_ = 0x1a0000001a;
        auVar62._12_4_ = 0x1a;
        auVar44 = NEON_cmhi(auVar62,auVar45,4);
        auVar11._8_4_ = 0x1a;
        auVar11._0_8_ = 0x1a0000001a;
        auVar11._12_4_ = 0x1a;
        auVar47 = NEON_cmhi(auVar11,auVar48,4);
        auVar12._8_4_ = 0x1a;
        auVar12._0_8_ = 0x1a0000001a;
        auVar12._12_4_ = 0x1a;
        auVar50 = NEON_cmhi(auVar12,auVar51,4);
        auVar13._8_4_ = 0x1a;
        auVar13._0_8_ = 0x1a0000001a;
        auVar13._12_4_ = 0x1a;
        auVar53 = NEON_cmhi(auVar13,auVar54,4);
        auVar14._8_4_ = 0x1a;
        auVar14._0_8_ = 0x1a0000001a;
        auVar14._12_4_ = 0x1a;
        auVar56 = NEON_cmhi(auVar14,auVar57,4);
        auVar15._8_4_ = 0x1a;
        auVar15._0_8_ = 0x1a0000001a;
        auVar15._12_4_ = 0x1a;
        auVar58 = NEON_cmhi(auVar15,auVar59,4);
        auVar16._8_4_ = 0x1a;
        auVar16._0_8_ = 0x1a0000001a;
        auVar16._12_4_ = 0x1a;
        auVar60 = NEON_cmhi(auVar16,auVar61,4);
        auVar17._8_4_ = 0x1a;
        auVar17._0_8_ = 0x1a0000001a;
        auVar17._12_4_ = 0x1a;
        auVar62 = NEON_cmhi(auVar17,auVar63,4);
        auVar46[1] = auVar53[4];
        auVar46[0] = auVar53[0];
        auVar46[2] = auVar53[8];
        auVar46[3] = auVar53[12];
        auVar46[4] = auVar50[0];
        auVar46[5] = auVar50[4];
        auVar46[6] = auVar50[8];
        auVar46[7] = auVar50[12];
        auVar46[8] = auVar47[0];
        auVar46[9] = auVar47[4];
        auVar46[10] = auVar47[8];
        auVar46[11] = auVar47[12];
        auVar46[12] = auVar44[0];
        auVar46[13] = auVar44[4];
        auVar46[14] = auVar44[8];
        auVar46[15] = auVar44[12];
        auVar49[1] = auVar62[4];
        auVar49[0] = auVar62[0];
        auVar49[2] = auVar62[8];
        auVar49[3] = auVar62[12];
        auVar49[4] = auVar60[0];
        auVar49[5] = auVar60[4];
        auVar49[6] = auVar60[8];
        auVar49[7] = auVar60[12];
        auVar49[8] = auVar58[0];
        auVar49[9] = auVar58[4];
        auVar49[10] = auVar58[8];
        auVar49[11] = auVar58[12];
        auVar49[12] = auVar56[0];
        auVar49[13] = auVar56[4];
        auVar49[14] = auVar56[8];
        auVar49[15] = auVar56[12];
        auVar52._0_8_ = *(ulong *)*pauVar1 | 0x2020202020202020;
        auVar52[8] = (byte)uVar7 | 0x20;
        auVar52[9] = bVar32 | 0x20;
        auVar52[10] = bVar33 | 0x20;
        auVar52[11] = bVar34 | 0x20;
        auVar52[12] = bVar35 | 0x20;
        auVar52[13] = bVar36 | 0x20;
        auVar52[14] = bVar37 | 0x20;
        auVar52[15] = bVar38 | 0x20;
        auVar55._0_8_ = auVar6._0_8_ | 0x2020202020202020;
        auVar55[8] = auVar6[8] | 0x20;
        auVar55[9] = auVar6[9] | 0x20;
        auVar55[10] = auVar6[10] | 0x20;
        auVar55[11] = auVar6[11] | 0x20;
        auVar55[12] = auVar6[12] | 0x20;
        auVar55[13] = auVar6[13] | 0x20;
        auVar55[14] = auVar6[14] | 0x20;
        auVar55[15] = auVar6[15] | 0x20;
        auVar56[9] = bVar32;
        auVar56._0_9_ = *(unkbyte9 *)*pauVar1;
        auVar56[10] = bVar33;
        auVar56[11] = bVar34;
        auVar56[12] = bVar35;
        auVar56[13] = bVar36;
        auVar56[14] = bVar37;
        auVar56[15] = bVar38;
        auVar47 = NEON_bsl(auVar46,auVar52,auVar56,1);
        auVar44 = NEON_bit(auVar6,auVar55,auVar49,1);
        *(long *)(pauVar28[-1] + 8) = auVar47._8_8_;
        *(long *)pauVar28[-1] = auVar47._0_8_;
        *(long *)(*pauVar28 + 8) = auVar44._8_8_;
        *(long *)*pauVar28 = auVar44._0_8_;
        pauVar28 = pauVar28 + 2;
      } while (ppuVar26 != (undefined **)0x0);
      if (ppuVar3 != ppuVar27) {
        if (((ulong)ppuVar3 & 0x18) == 0) {
          pbVar29 = pbVar2 + (long)ppuVar27;
          goto LAB_006d9c1c;
        }
        goto LAB_006d9bac;
      }
    }
    ppuVar26 = (undefined **)(ulong)((byte)local_170 >> 1);
  }
  ppuVar3 = ppuVar26;
  if (((ulong)local_170 & 1) != 0) {
    ppuVar3 = local_168;
  }
  bVar32 = (byte)local_170;
  if (ppuVar3 == (undefined **)0x4) {
                    /* try { // try from 006d9c60 to 006d9c7b has its CatchHandler @ 006d9e80 */
    iVar22 = std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                       ((ulong)&local_170,0,(char *)0xffffffffffffffff,0x4ec5fc);
    if (iVar22 != 0) {
      ppuVar26 = (undefined **)(ulong)((byte)local_170 >> 1);
      bVar32 = (byte)local_170;
      goto LAB_006d9c90;
    }
    bVar20 = true;
joined_r0x006d9cd8:
    if (((ulong)local_170 & 1) != 0) {
LAB_006d9cdc:
      operator_delete(local_160);
    }
  }
  else {
LAB_006d9c90:
    if ((bVar32 & 1) != 0) {
      ppuVar26 = local_168;
    }
    if (ppuVar26 != (undefined **)0x1) {
      bVar20 = false;
      goto joined_r0x006d9cd8;
    }
                    /* try { // try from 006d9ca0 to 006d9cbb has its CatchHandler @ 006d9e7c */
    iVar22 = std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                       ((ulong)&local_170,0,(char *)0xffffffffffffffff,0x4fb2ee);
    bVar20 = iVar22 == 0;
    if (((byte)local_170 & 1) != 0) goto LAB_006d9cdc;
  }
  pcVar24 = *(char **)(this + 0x40);
LAB_006d9ce8:
  *pcVar24 = bVar20;
  local_170 = (undefined **)0xfd8f40;
  local_100[0] = (undefined **)0xfd8f68;
                    /* try { // try from 006d9d10 to 006d9d1b has its CatchHandler @ 006d9ea4 */
  std::__ndk1::ios_base::init(local_100);
  local_78 = 0;
  local_70 = 0xffffffff;
  local_170 = &PTR__basic_ostringstream_00fd8ed0;
  local_100[0] = &PTR__basic_ostringstream_00fd8ef8;
                    /* try { // try from 006d9d40 to 006d9d47 has its CatchHandler @ 006d9e88 */
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  uStack_120 = 0;
  local_128 = 0;
  local_168 = &PTR__basic_stringbuf_00fd8fa0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  bVar21 = ((byte)this[8] & 1) != 0;
  pCVar4 = this + 9;
  if (bVar21) {
    pCVar4 = *(ConsoleCommand **)(this + 0x18);
  }
  uVar39 = (ulong)((byte)this[8] >> 1);
  if (bVar21) {
    uVar39 = *(ulong *)(this + 0x10);
  }
  local_108 = 0x10;
                    /* try { // try from 006d9d88 to 006d9dc3 has its CatchHandler @ 006d9eb8 */
  pbVar23 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      ((basic_ostream *)&local_170,(char *)pCVar4,uVar39);
  pbVar23 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (pbVar23," = ",3);
  pcVar24 = "true";
  if (!bVar20) {
    pcVar24 = "false";
  }
  uVar39 = 4;
  if (!bVar20) {
    uVar39 = 5;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar23,pcVar24,uVar39)
  ;
                    /* try { // try from 006d9dc4 to 006d9dcf has its CatchHandler @ 006d9e84 */
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


