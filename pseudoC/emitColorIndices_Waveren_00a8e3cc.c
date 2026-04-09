// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emitColorIndices_Waveren
// Entry Point: 00a8e3cc
// Size: 824 bytes
// Signature: undefined __cdecl emitColorIndices_Waveren(uchar * param_1, uchar * param_2, uchar * param_3, uchar * param_4)


/* DXTUtil::emitColorIndices_Waveren(unsigned char const*, unsigned char const*, unsigned char
   const*, unsigned char*) */

void DXTUtil::emitColorIndices_Waveren(uchar *param_1,uchar *param_2,uchar *param_3,uchar *param_4)

{
  ulong *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ushort uVar6;
  ushort uVar7;
  undefined auVar8 [16];
  undefined uVar9;
  undefined uVar10;
  bool bVar11;
  undefined auVar12 [16];
  bool bVar13;
  long lVar14;
  byte bVar15;
  byte bVar16;
  undefined auVar18 [13];
  undefined8 uVar17;
  undefined auVar19 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  ushort uVar23;
  ushort uVar25;
  ushort uVar26;
  undefined auVar24 [16];
  undefined auVar27 [16];
  undefined in_q4 [16];
  undefined auVar28 [16];
  undefined in_q5 [16];
  undefined auVar29 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined uVar34;
  undefined uVar35;
  uint7 uVar36;
  ulong uVar37;
  undefined auVar38 [13];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  uint7 uVar43;
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  byte bVar56;
  byte bVar57;
  undefined in_q20 [16];
  undefined auVar51 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  uint uVar62;
  uint uVar67;
  undefined auVar63 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  undefined auVar81 [16];
  undefined auVar82 [16];
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined auVar85 [16];
  undefined auVar86 [16];
  undefined auVar87 [16];
  undefined auVar88 [16];
  undefined auVar89 [16];
  undefined auVar90 [16];
  undefined auVar91 [16];
  undefined local_40 [16];
  undefined auStack_30 [16];
  long local_18;
  undefined auVar20 [16];
  undefined auVar30 [16];
  undefined auVar50 [16];
  undefined auVar52 [16];
  undefined auVar64 [16];
  
  lVar5 = tpidr_el0;
  local_18 = *(long *)(lVar5 + 0x28);
  lVar14 = 0;
  uVar62 = *(uint *)param_3;
  uVar2 = uVar62 >> 5 & 0x70007 | uVar62 & 0xf8fcf8;
  uVar67 = *(uint *)param_2;
  bVar15 = (byte)((uVar62 & 0xf8fcf8) >> 8) | (byte)((uVar62 >> 6) >> 8) & 3;
  uVar62 = uVar67 >> 5 & 0x70007 | uVar67 & 0xf8fcf8;
  bVar16 = (byte)((uVar67 & 0xf8fcf8) >> 8) | (byte)((uVar67 >> 6) >> 8) & 3;
  auVar68._1_15_ = in_q4._1_15_;
  auVar68[0] = (char)uVar2;
  auVar78._3_13_ = in_q4._3_13_;
  auVar78._0_2_ = auVar68._0_2_;
  auVar78[2] = bVar15;
  bVar56 = (byte)(uVar2 >> 0x10);
  auVar58._5_11_ = in_q4._5_11_;
  auVar58._0_4_ = auVar78._0_4_;
  auVar58[4] = bVar56;
  auVar28._7_9_ = in_q4._7_9_;
  auVar28._0_6_ = auVar58._0_6_;
  auVar28[6] = 0;
  auVar73._2_14_ = auVar28._2_14_;
  auVar73._0_2_ = auVar78._0_2_ & 0xff;
  auVar63._4_12_ = auVar28._4_12_;
  auVar63._0_3_ = auVar73._0_3_;
  auVar63[3] = 0;
  auVar33._6_10_ = auVar28._6_10_;
  auVar33._0_5_ = auVar63._0_5_;
  auVar33[5] = 0;
  auVar82._0_8_ = CONCAT17(0,auVar33._0_7_);
  auVar81._1_15_ = in_q5._1_15_;
  auVar81[0] = (char)uVar62;
  auVar87._3_13_ = in_q5._3_13_;
  auVar87._0_2_ = auVar81._0_2_;
  auVar87[2] = bVar16;
  bVar57 = (byte)(uVar62 >> 0x10);
  auVar91._5_11_ = in_q5._5_11_;
  auVar91._0_4_ = auVar87._0_4_;
  auVar91[4] = bVar57;
  auVar30._7_9_ = in_q5._7_9_;
  auVar30._0_6_ = auVar91._0_6_;
  auVar30[6] = 0;
  auVar86._2_14_ = auVar30._2_14_;
  auVar86._0_2_ = auVar87._0_2_ & 0xff;
  auVar90._4_12_ = auVar30._4_12_;
  auVar90._0_3_ = auVar86._0_3_;
  auVar90[3] = 0;
  auVar29._6_10_ = auVar30._6_10_;
  auVar29._0_5_ = auVar90._0_5_;
  auVar29[5] = 0;
  auVar31._0_8_ = CONCAT17(0,auVar29._0_7_);
  auVar82._8_8_ = 0;
  auVar31._8_8_ = 0;
  uVar6 = (ushort)bVar15 * 2 + (ushort)bVar16;
  uVar7 = (ushort)bVar56 * 2 + (ushort)bVar57;
  uVar23 = auVar86._0_2_ * 2 + auVar73._0_2_;
  uVar25 = (ushort)bVar16 * 2 + (ushort)bVar15;
  uVar26 = (ushort)bVar57 * 2 + (ushort)bVar56;
  uVar34 = (undefined)((uint)((short)uVar6 * 0x5556) >> 0x10);
  uVar10 = (undefined)(uVar6 / 0x300);
  uVar35 = (undefined)((uint)((short)uVar7 * 0x5556) >> 0x10);
  uVar9 = (undefined)(uVar7 / 0x300);
  auVar24._0_8_ = NEON_sqxtun((ulong)CONCAT24(uVar26,CONCAT22(uVar25,uVar23)),auVar82,2);
  auVar24._8_8_ = 0;
  uVar6 = (ushort)(auVar73._0_2_ * 2 + auVar86._0_2_) / 3;
  auVar27._0_8_ = NEON_sqxtun(0x5556555655565556,auVar31,2);
  auVar27._8_8_ = 0;
  auVar33 = ZEXT616(CONCAT24(uVar26 / 3,CONCAT22(uVar25 / 3,uVar23 / 3)));
  auVar24 = NEON_sqxtun2(auVar24,auVar82,2);
  auVar70._0_8_ =
       NEON_sqxtun(auVar82._0_8_,
                   ZEXT616(CONCAT15(uVar9,CONCAT14(uVar35,CONCAT13(uVar10,CONCAT12(uVar34,uVar6)))))
                   ,2);
  auVar70._8_8_ = 0;
  auVar27 = NEON_sqxtun2(auVar27,auVar31,2);
  auVar32._0_8_ = NEON_sqxtun(auVar31._0_8_,auVar33,2);
  auVar32._8_8_ = 0;
  auVar28 = NEON_sqxtun2(auVar70,ZEXT616(CONCAT15(uVar9,CONCAT14(uVar35,CONCAT13(uVar10,CONCAT12(
                                                  uVar34,uVar6))))),2);
  auVar33 = NEON_sqxtun2(auVar32,auVar33,2);
  bVar13 = true;
  do {
    bVar11 = bVar13;
    uVar37 = *(ulong *)param_1;
    puVar3 = (ulong *)((long)param_1 + 8);
    puVar1 = (ulong *)((long)param_1 + 0x10);
    puVar4 = (ulong *)((long)param_1 + 0x18);
    param_1 = (uchar *)((long)param_1 + 0x20);
    auVar51._0_8_ = in_q20._4_8_ << 0x20;
    auVar51._12_4_ = in_q20._12_4_;
    auVar51._8_4_ = (int)(uVar37 >> 0x20);
    auVar50._8_8_ = auVar51._8_8_;
    auVar50._0_8_ = uVar37 & 0xffffffff;
    auVar52._0_12_ = auVar50._0_12_;
    auVar52._12_4_ = 0;
    auVar47._0_8_ = *puVar3 & 0xffffffff;
    auVar47._8_4_ = (int)(*puVar3 >> 0x20);
    auVar47._12_4_ = 0;
    auVar44._0_8_ = *puVar1 & 0xffffffff;
    auVar44._8_4_ = (int)(*puVar1 >> 0x20);
    auVar44._12_4_ = 0;
    auVar58 = NEON_uabd(auVar52,auVar24,1);
    auVar39._0_8_ = *puVar4 & 0xffffffff;
    auVar39._8_4_ = (int)(*puVar4 >> 0x20);
    auVar39._12_4_ = 0;
    auVar63 = NEON_uabd(auVar47,auVar24,1);
    auVar68 = NEON_uabd(auVar44,auVar24,1);
    auVar78 = NEON_uabd(auVar52,auVar27,1);
    auVar82 = NEON_uabd(auVar47,auVar27,1);
    auVar73 = NEON_uabd(auVar39,auVar24,1);
    uVar62 = (uint)(ushort)((ushort)auVar63[0] + (ushort)auVar63[1]) +
             (uint)(ushort)((ushort)auVar63[2] + (ushort)auVar63[3]);
    uVar67 = (uint)(ushort)((ushort)auVar63[4] + (ushort)auVar63[5]) +
             (uint)(ushort)((ushort)auVar63[6] + (ushort)auVar63[7]);
    auVar64._0_8_ = CONCAT44(uVar67,uVar62);
    auVar64._8_4_ =
         (uint)(ushort)((ushort)auVar63[8] + (ushort)auVar63[9]) +
         (uint)(ushort)((ushort)auVar63[10] + (ushort)auVar63[11]);
    auVar64._12_4_ =
         (uint)(ushort)((ushort)auVar63[12] + (ushort)auVar63[13]) +
         (uint)(ushort)((ushort)auVar63[14] + (ushort)auVar63[15]);
    auVar59._0_8_ =
         (ulong)((uint)(ushort)((ushort)auVar58[0] + (ushort)auVar58[1]) +
                (uint)(ushort)((ushort)auVar58[2] + (ushort)auVar58[3])) +
         (ulong)((uint)(ushort)((ushort)auVar58[4] + (ushort)auVar58[5]) +
                (uint)(ushort)((ushort)auVar58[6] + (ushort)auVar58[7]));
    auVar59._8_8_ =
         (ulong)((uint)(ushort)((ushort)auVar58[8] + (ushort)auVar58[9]) +
                (uint)(ushort)((ushort)auVar58[10] + (ushort)auVar58[11])) +
         (ulong)((uint)(ushort)((ushort)auVar58[12] + (ushort)auVar58[13]) +
                (uint)(ushort)((ushort)auVar58[14] + (ushort)auVar58[15]));
    auVar85._0_8_ = (ulong)uVar62 + (ulong)uVar67;
    auVar85._8_8_ = (ulong)auVar64._8_4_ + (ulong)auVar64._12_4_;
    auVar65._8_8_ = auVar64._8_8_;
    auVar65._0_8_ = NEON_sqxtn(auVar64._0_8_,auVar59,4);
    auVar60._0_8_ =
         (ulong)((uint)(ushort)((ushort)auVar68[0] + (ushort)auVar68[1]) +
                (uint)(ushort)((ushort)auVar68[2] + (ushort)auVar68[3])) +
         (ulong)((uint)(ushort)((ushort)auVar68[4] + (ushort)auVar68[5]) +
                (uint)(ushort)((ushort)auVar68[6] + (ushort)auVar68[7]));
    auVar60._8_8_ =
         (ulong)((uint)(ushort)((ushort)auVar68[8] + (ushort)auVar68[9]) +
                (uint)(ushort)((ushort)auVar68[10] + (ushort)auVar68[11])) +
         (ulong)((uint)(ushort)((ushort)auVar68[12] + (ushort)auVar68[13]) +
                (uint)(ushort)((ushort)auVar68[14] + (ushort)auVar68[15]));
    auVar79._0_8_ =
         (ulong)((uint)(ushort)((ushort)auVar78[0] + (ushort)auVar78[1]) +
                (uint)(ushort)((ushort)auVar78[2] + (ushort)auVar78[3])) +
         (ulong)((uint)(ushort)((ushort)auVar78[4] + (ushort)auVar78[5]) +
                (uint)(ushort)((ushort)auVar78[6] + (ushort)auVar78[7]));
    auVar79._8_8_ =
         (ulong)((uint)(ushort)((ushort)auVar78[8] + (ushort)auVar78[9]) +
                (uint)(ushort)((ushort)auVar78[10] + (ushort)auVar78[11])) +
         (ulong)((uint)(ushort)((ushort)auVar78[12] + (ushort)auVar78[13]) +
                (uint)(ushort)((ushort)auVar78[14] + (ushort)auVar78[15]));
    auVar58 = NEON_uabd(auVar44,auVar27,1);
    auVar69._0_8_ =
         (ulong)((uint)(ushort)((ushort)auVar82[0] + (ushort)auVar82[1]) +
                (uint)(ushort)((ushort)auVar82[2] + (ushort)auVar82[3])) +
         (ulong)((uint)(ushort)((ushort)auVar82[4] + (ushort)auVar82[5]) +
                (uint)(ushort)((ushort)auVar82[6] + (ushort)auVar82[7]));
    auVar69._8_8_ =
         (ulong)((uint)(ushort)((ushort)auVar82[8] + (ushort)auVar82[9]) +
                (uint)(ushort)((ushort)auVar82[10] + (ushort)auVar82[11])) +
         (ulong)((uint)(ushort)((ushort)auVar82[12] + (ushort)auVar82[13]) +
                (uint)(ushort)((ushort)auVar82[14] + (ushort)auVar82[15]));
    auVar80._0_8_ = NEON_sqxtn(auVar79._0_8_,auVar79,4);
    auVar80._8_8_ = auVar79._8_8_;
    auVar74._0_8_ =
         (ulong)((uint)(ushort)((ushort)auVar73[0] + (ushort)auVar73[1]) +
                (uint)(ushort)((ushort)auVar73[2] + (ushort)auVar73[3])) +
         (ulong)((uint)(ushort)((ushort)auVar73[4] + (ushort)auVar73[5]) +
                (uint)(ushort)((ushort)auVar73[6] + (ushort)auVar73[7]));
    auVar74._8_8_ =
         (ulong)((uint)(ushort)((ushort)auVar73[8] + (ushort)auVar73[9]) +
                (uint)(ushort)((ushort)auVar73[10] + (ushort)auVar73[11])) +
         (ulong)((uint)(ushort)((ushort)auVar73[12] + (ushort)auVar73[13]) +
                (uint)(ushort)((ushort)auVar73[14] + (ushort)auVar73[15]));
    auVar82 = NEON_sqxtn2(auVar65,auVar85,4);
    auVar61._0_8_ = NEON_sqxtn(auVar60._0_8_,auVar60,4);
    auVar61._8_8_ = auVar60._8_8_;
    auVar86 = NEON_uabd(auVar39,auVar27,1);
    auVar81 = NEON_sqxtn2(auVar80,auVar69,4);
    auVar70 = NEON_uabd(auVar52,auVar28,1);
    auVar73 = NEON_uabd(auVar52,auVar33,1);
    auVar78 = NEON_sqxtn2(auVar61,auVar74,4);
    auVar87 = NEON_uabd(auVar47,auVar28,1);
    auVar90 = NEON_uabd(auVar44,auVar28,1);
    auVar68 = NEON_uabd(auVar47,auVar33,1);
    auVar63 = NEON_uabd(auVar44,auVar33,1);
    auVar83._0_8_ =
         (ulong)((uint)(ushort)((ushort)auVar58[0] + (ushort)auVar58[1]) +
                (uint)(ushort)((ushort)auVar58[2] + (ushort)auVar58[3])) +
         (ulong)((uint)(ushort)((ushort)auVar58[4] + (ushort)auVar58[5]) +
                (uint)(ushort)((ushort)auVar58[6] + (ushort)auVar58[7]));
    auVar83._8_8_ =
         (ulong)((uint)(ushort)((ushort)auVar58[8] + (ushort)auVar58[9]) +
                (uint)(ushort)((ushort)auVar58[10] + (ushort)auVar58[11])) +
         (ulong)((uint)(ushort)((ushort)auVar58[12] + (ushort)auVar58[13]) +
                (uint)(ushort)((ushort)auVar58[14] + (ushort)auVar58[15]));
    auVar91 = NEON_uabd(auVar39,auVar28,1);
    auVar58 = NEON_uabd(auVar39,auVar33,1);
    auVar75._0_8_ =
         (ulong)((uint)(ushort)((ushort)auVar86[0] + (ushort)auVar86[1]) +
                (uint)(ushort)((ushort)auVar86[2] + (ushort)auVar86[3])) +
         (ulong)((uint)(ushort)((ushort)auVar86[4] + (ushort)auVar86[5]) +
                (uint)(ushort)((ushort)auVar86[6] + (ushort)auVar86[7]));
    auVar75._8_8_ =
         (ulong)((uint)(ushort)((ushort)auVar86[8] + (ushort)auVar86[9]) +
                (uint)(ushort)((ushort)auVar86[10] + (ushort)auVar86[11])) +
         (ulong)((uint)(ushort)((ushort)auVar86[12] + (ushort)auVar86[13]) +
                (uint)(ushort)((ushort)auVar86[14] + (ushort)auVar86[15]));
    auVar84._0_8_ = NEON_sqxtn(auVar83._0_8_,auVar83,4);
    auVar84._8_8_ = auVar83._8_8_;
    auVar71._0_8_ =
         (ulong)((uint)(ushort)((ushort)auVar70[0] + (ushort)auVar70[1]) +
                (uint)(ushort)((ushort)auVar70[2] + (ushort)auVar70[3])) +
         (ulong)((uint)(ushort)((ushort)auVar70[4] + (ushort)auVar70[5]) +
                (uint)(ushort)((ushort)auVar70[6] + (ushort)auVar70[7]));
    auVar71._8_8_ =
         (ulong)((uint)(ushort)((ushort)auVar70[8] + (ushort)auVar70[9]) +
                (uint)(ushort)((ushort)auVar70[10] + (ushort)auVar70[11])) +
         (ulong)((uint)(ushort)((ushort)auVar70[12] + (ushort)auVar70[13]) +
                (uint)(ushort)((ushort)auVar70[14] + (ushort)auVar70[15]));
    auVar53._0_8_ =
         (ulong)((uint)(ushort)((ushort)auVar73[0] + (ushort)auVar73[1]) +
                (uint)(ushort)((ushort)auVar73[2] + (ushort)auVar73[3])) +
         (ulong)((uint)(ushort)((ushort)auVar73[4] + (ushort)auVar73[5]) +
                (uint)(ushort)((ushort)auVar73[6] + (ushort)auVar73[7]));
    auVar53._8_8_ =
         (ulong)((uint)(ushort)((ushort)auVar73[8] + (ushort)auVar73[9]) +
                (uint)(ushort)((ushort)auVar73[10] + (ushort)auVar73[11])) +
         (ulong)((uint)(ushort)((ushort)auVar73[12] + (ushort)auVar73[13]) +
                (uint)(ushort)((ushort)auVar73[14] + (ushort)auVar73[15]));
    auVar88._0_8_ =
         (ulong)((uint)(ushort)((ushort)auVar87[0] + (ushort)auVar87[1]) +
                (uint)(ushort)((ushort)auVar87[2] + (ushort)auVar87[3])) +
         (ulong)((uint)(ushort)((ushort)auVar87[4] + (ushort)auVar87[5]) +
                (uint)(ushort)((ushort)auVar87[6] + (ushort)auVar87[7]));
    auVar88._8_8_ =
         (ulong)((uint)(ushort)((ushort)auVar87[8] + (ushort)auVar87[9]) +
                (uint)(ushort)((ushort)auVar87[10] + (ushort)auVar87[11])) +
         (ulong)((uint)(ushort)((ushort)auVar87[12] + (ushort)auVar87[13]) +
                (uint)(ushort)((ushort)auVar87[14] + (ushort)auVar87[15]));
    auVar72._0_8_ = NEON_sqxtn(auVar71._0_8_,auVar71,4);
    auVar72._8_8_ = auVar71._8_8_;
    auVar70 = NEON_sqxtn2(auVar84,auVar75,4);
    auVar76._0_8_ =
         (ulong)((uint)(ushort)((ushort)auVar90[0] + (ushort)auVar90[1]) +
                (uint)(ushort)((ushort)auVar90[2] + (ushort)auVar90[3])) +
         (ulong)((uint)(ushort)((ushort)auVar90[4] + (ushort)auVar90[5]) +
                (uint)(ushort)((ushort)auVar90[6] + (ushort)auVar90[7]));
    auVar76._8_8_ =
         (ulong)((uint)(ushort)((ushort)auVar90[8] + (ushort)auVar90[9]) +
                (uint)(ushort)((ushort)auVar90[10] + (ushort)auVar90[11])) +
         (ulong)((uint)(ushort)((ushort)auVar90[12] + (ushort)auVar90[13]) +
                (uint)(ushort)((ushort)auVar90[14] + (ushort)auVar90[15]));
    auVar48._0_8_ =
         (ulong)((uint)(ushort)((ushort)auVar68[0] + (ushort)auVar68[1]) +
                (uint)(ushort)((ushort)auVar68[2] + (ushort)auVar68[3])) +
         (ulong)((uint)(ushort)((ushort)auVar68[4] + (ushort)auVar68[5]) +
                (uint)(ushort)((ushort)auVar68[6] + (ushort)auVar68[7]));
    auVar48._8_8_ =
         (ulong)((uint)(ushort)((ushort)auVar68[8] + (ushort)auVar68[9]) +
                (uint)(ushort)((ushort)auVar68[10] + (ushort)auVar68[11])) +
         (ulong)((uint)(ushort)((ushort)auVar68[12] + (ushort)auVar68[13]) +
                (uint)(ushort)((ushort)auVar68[14] + (ushort)auVar68[15]));
    auVar45._0_8_ =
         (ulong)((uint)(ushort)((ushort)auVar63[0] + (ushort)auVar63[1]) +
                (uint)(ushort)((ushort)auVar63[2] + (ushort)auVar63[3])) +
         (ulong)((uint)(ushort)((ushort)auVar63[4] + (ushort)auVar63[5]) +
                (uint)(ushort)((ushort)auVar63[6] + (ushort)auVar63[7]));
    auVar45._8_8_ =
         (ulong)((uint)(ushort)((ushort)auVar63[8] + (ushort)auVar63[9]) +
                (uint)(ushort)((ushort)auVar63[10] + (ushort)auVar63[11])) +
         (ulong)((uint)(ushort)((ushort)auVar63[12] + (ushort)auVar63[13]) +
                (uint)(ushort)((ushort)auVar63[14] + (ushort)auVar63[15]));
    auVar54._0_8_ = NEON_sqxtn(auVar53._0_8_,auVar53,4);
    auVar54._8_8_ = auVar53._8_8_;
    auVar68 = NEON_sqxtn2(auVar72,auVar88,4);
    auVar89._0_8_ =
         (ulong)((uint)(ushort)((ushort)auVar91[0] + (ushort)auVar91[1]) +
                (uint)(ushort)((ushort)auVar91[2] + (ushort)auVar91[3])) +
         (ulong)((uint)(ushort)((ushort)auVar91[4] + (ushort)auVar91[5]) +
                (uint)(ushort)((ushort)auVar91[6] + (ushort)auVar91[7]));
    auVar89._8_8_ =
         (ulong)((uint)(ushort)((ushort)auVar91[8] + (ushort)auVar91[9]) +
                (uint)(ushort)((ushort)auVar91[10] + (ushort)auVar91[11])) +
         (ulong)((uint)(ushort)((ushort)auVar91[12] + (ushort)auVar91[13]) +
                (uint)(ushort)((ushort)auVar91[14] + (ushort)auVar91[15]));
    auVar77._0_8_ = NEON_sqxtn(auVar76._0_8_,auVar76,4);
    auVar77._8_8_ = auVar76._8_8_;
    auVar40._0_8_ =
         (ulong)((uint)(ushort)((ushort)auVar58[0] + (ushort)auVar58[1]) +
                (uint)(ushort)((ushort)auVar58[2] + (ushort)auVar58[3])) +
         (ulong)((uint)(ushort)((ushort)auVar58[4] + (ushort)auVar58[5]) +
                (uint)(ushort)((ushort)auVar58[6] + (ushort)auVar58[7]));
    auVar40._8_8_ =
         (ulong)((uint)(ushort)((ushort)auVar58[8] + (ushort)auVar58[9]) +
                (uint)(ushort)((ushort)auVar58[10] + (ushort)auVar58[11])) +
         (ulong)((uint)(ushort)((ushort)auVar58[12] + (ushort)auVar58[13]) +
                (uint)(ushort)((ushort)auVar58[14] + (ushort)auVar58[15]));
    auVar46._0_8_ = NEON_sqxtn(auVar45._0_8_,auVar45,4);
    auVar46._8_8_ = auVar45._8_8_;
    auVar63 = NEON_sqxtn2(auVar54,auVar48,4);
    auVar73 = NEON_sqxtn2(auVar77,auVar89,4);
    auVar49._0_8_ = NEON_sqxtn(auVar48._0_8_,auVar82,4);
    auVar49._8_8_ = auVar48._8_8_;
    auVar66._8_8_ = auVar82._8_8_;
    auVar66._0_8_ = NEON_sqxtn(auVar82._0_8_,auVar81,4);
    auVar58 = NEON_sqxtn2(auVar46,auVar40,4);
    auVar41._0_8_ = NEON_sqxtn(auVar40._0_8_,auVar63,4);
    auVar41._8_8_ = auVar40._8_8_;
    auVar55._8_8_ = auVar63._8_8_;
    auVar55._0_8_ = NEON_sqxtn(auVar63._0_8_,auVar68,4);
    auVar68 = NEON_sqxtn2(auVar49,auVar78,4);
    auVar82 = NEON_sqxtn2(auVar66,auVar70,4);
    auVar58 = NEON_sqxtn2(auVar41,auVar58,4);
    auVar73 = NEON_sqxtn2(auVar55,auVar73,4);
    auVar63 = NEON_cmgt(auVar68,auVar58,2);
    auVar78 = NEON_cmgt(auVar82,auVar73,2);
    auVar68 = NEON_cmgt(auVar68,auVar73,2);
    auVar82 = NEON_cmgt(auVar82,auVar58,2);
    auVar58 = NEON_cmgt(auVar73,auVar58,2);
    bVar15 = auVar82[8] & auVar63[8];
    auVar12[1] = bVar15;
    auVar12[0] = auVar82[7] & auVar63[7];
    auVar12[2] = auVar82[9] & auVar63[9];
    bVar16 = auVar82[10] & auVar63[10];
    auVar12[3] = bVar16;
    auVar12[4] = auVar82[11] & auVar63[11];
    bVar56 = auVar82[12] & auVar63[12];
    auVar12[5] = bVar56;
    auVar12[6] = auVar82[13] & auVar63[13];
    bVar57 = auVar82[14] & auVar63[14];
    auVar12[7] = bVar57;
    auVar12[8] = auVar82[15] & auVar63[15];
    auVar12._9_7_ = 0;
    in_q20 = auVar12 << 0x38;
    uVar36 = CONCAT16(auVar58[6] & auVar63[6],
                      (uint6)(CONCAT14(auVar58[4] & auVar63[4],
                                       (uint)(CONCAT12(auVar58[2] & auVar63[2],
                                                       (ushort)(auVar58[0] & auVar63[0] & 1)) &
                                             0x100ff)) & 0x100ffffff)) & 0x100ffffffffff;
    uVar43 = CONCAT16(auVar82[6] & auVar63[6] | auVar68[6] & auVar78[6],
                      (uint6)(CONCAT14(auVar82[4] & auVar63[4] | auVar68[4] & auVar78[4],
                                       (uint)(CONCAT12(auVar82[2] & auVar63[2] |
                                                       auVar68[2] & auVar78[2],
                                                       (ushort)((auVar82[0] & auVar63[0] |
                                                                auVar68[0] & auVar78[0]) & 2)) &
                                             0x2ffff)) & 0x2ffffffff)) & 0x2ffffffffffff;
    auVar42[0] = (byte)uVar43 | (byte)uVar36;
    auVar42[1] = 0;
    auVar42[2] = (byte)(uVar43 >> 0x10) | (byte)(uVar36 >> 0x10);
    auVar42[3] = 0;
    auVar42[4] = (byte)(uVar43 >> 0x20) | (byte)(uVar36 >> 0x20);
    auVar42[5] = 0;
    auVar42[6] = (byte)(uVar43 >> 0x30) | (byte)(uVar36 >> 0x30);
    auVar42[7] = 0;
    auVar42[8] = (bVar15 | auVar68[8] & auVar78[8]) & 2 | auVar58[8] & auVar63[8] & 1;
    auVar42[9] = 0;
    auVar42[10] = (bVar16 | auVar68[10] & auVar78[10]) & 2 | auVar58[10] & auVar63[10] & 1;
    auVar42[11] = 0;
    auVar42[12] = (bVar56 | auVar68[12] & auVar78[12]) & 2 | auVar58[12] & auVar63[12] & 1;
    auVar42[13] = 0;
    auVar42[14] = (bVar57 | auVar68[14] & auVar78[14]) & 2 | auVar58[14] & auVar63[14] & 1;
    auVar42[15] = 0;
    auVar8._8_2_ = 0xfff2;
    auVar8._0_8_ = 0xfffffff2fffffff2;
    auVar8._10_2_ = 0xffff;
    auVar8._12_2_ = 0xfff2;
    auVar8._14_2_ = 0xffff;
    auVar58 = NEON_ushl(auVar42,auVar8,4);
    auVar38._0_8_ =
         CONCAT35(0,CONCAT14(auVar42[4] | auVar58[4],(uint)(auVar42[0] | auVar58[0] & 0xf)) &
                    0xfffffffff);
    auVar38[8] = auVar42[8] | auVar58[8] & 0xf;
    auVar38._9_3_ = 0;
    auVar38[12] = auVar42[12] | auVar58[12] & 0xf;
    *(ulong *)(local_40 + lVar14 * 0x10 + 8) = (ulong)auVar38._8_5_;
    *(ulong *)(local_40 + lVar14 * 0x10) = auVar38._0_8_;
    lVar14 = 1;
    bVar13 = false;
  } while (bVar11);
  auVar19._8_8_ = local_40._8_8_;
  auVar19._0_8_ = NEON_sqxtn(local_40._0_8_,local_40,4);
  auVar24 = NEON_sqxtn2(auVar19,auStack_30,4);
  auVar22._8_4_ = 0xfffffff4;
  auVar22._0_8_ = 0xfffffff4fffffff4;
  auVar22._12_4_ = 0xfffffff4;
  auVar27 = NEON_ushl(auVar24,auVar22,4);
  auVar18[8] = auVar27[8] | auVar24[8];
  auVar18[12] = auVar27[12] | auVar24[12];
  uVar37 = CONCAT35(0,CONCAT14(auVar27[4] | auVar24[4],(uint)(byte)(auVar27[0] | auVar24[0])));
  auVar18._0_8_ = uVar37;
  auVar18._9_3_ = 0;
  auVar20._13_3_ = 0;
  auVar20._0_13_ = auVar18;
  auVar21._0_8_ = NEON_sqxtun(uVar37,auVar20,2);
  auVar21._8_5_ = auVar18._8_5_;
  auVar21._13_3_ = 0;
  uVar17 = NEON_sqxtun(auVar21._0_8_,auVar21,2);
  *(int *)param_4 = (int)uVar17;
  if (*(long *)(lVar5 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


