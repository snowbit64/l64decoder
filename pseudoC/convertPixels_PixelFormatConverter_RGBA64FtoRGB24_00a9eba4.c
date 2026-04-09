// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixels<PixelFormatConverter::RGBA64FtoRGB24>
// Entry Point: 00a9eba4
// Size: 904 bytes
// Signature: void __cdecl convertPixels<PixelFormatConverter::RGBA64FtoRGB24>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA64FtoRGB24>(void const*,
   unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixels<PixelFormatConverter::RGBA64FtoRGB24>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  ushort *puVar1;
  uint uVar2;
  undefined auVar3 [12];
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  unkbyte9 Var7;
  uint3 uVar8;
  uint3 uVar9;
  uint3 uVar10;
  uint3 uVar11;
  unkbyte9 *pVar12;
  void *pvVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined2 *puVar18;
  ulong uVar19;
  long lVar20;
  unkbyte9 *pVar21;
  undefined8 uVar22;
  undefined2 *puVar23;
  uint uVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  byte bVar28;
  byte bVar29;
  uint uVar30;
  float fVar31;
  undefined uVar37;
  int iVar36;
  undefined uVar38;
  int iVar39;
  byte bVar40;
  undefined auVar32 [12];
  int iVar41;
  byte bVar42;
  undefined auVar34 [16];
  float fVar43;
  int iVar44;
  undefined uVar48;
  int iVar47;
  undefined uVar49;
  byte bVar51;
  int iVar50;
  byte bVar52;
  byte bVar54;
  int iVar53;
  byte bVar55;
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar56 [12];
  undefined auVar58 [16];
  byte bVar63;
  undefined auVar59 [16];
  byte bVar64;
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar33 [12];
  undefined auVar35 [16];
  undefined auVar57 [16];
  
  if (param_2 == param_4) {
    uVar2 = param_6;
    param_6 = 1;
  }
  else {
    uVar2 = 1;
  }
  if (param_6 != 0) {
    uVar2 = uVar2 * param_5;
    uVar15 = (ulong)uVar2;
    lVar14 = 0;
    uVar16 = (ulong)param_4;
    uVar17 = uVar15 & 0xfffffffc;
    puVar18 = (undefined2 *)((long)param_3 + 6);
    pVar12 = (unkbyte9 *)param_1;
    pvVar13 = param_3;
    do {
      if (uVar2 != 0) {
        if ((uVar2 < 4) ||
           ((uVar19 = uVar17, pVar21 = pVar12, puVar23 = puVar18,
            pvVar13 < (void *)((long)param_1 + uVar15 * 8 + lVar14 * (ulong)param_2) &&
            (pVar12 < (unkbyte9 *)((long)param_3 + uVar15 * 3 + lVar14 * uVar16))))) {
          uVar19 = 0;
        }
        else {
          do {
            uVar4 = *(undefined8 *)((long)pVar21 + 8);
            bVar28 = (byte)((ulong)uVar4 >> 8);
            bVar29 = (byte)((ulong)uVar4 >> 0x18);
            uVar22 = *(undefined8 *)pVar21;
            Var7 = *pVar21;
            auVar6 = *(undefined (*) [16])(pVar21 + 1);
            uVar19 = uVar19 - 4;
            auVar3[9] = bVar28;
            auVar3._0_9_ = Var7;
            auVar3[10] = (char)((ulong)uVar4 >> 0x10);
            auVar3[11] = bVar29;
            iVar44 = (int)Var7 << 0xd;
            iVar47 = auVar3._8_4_ << 0xd;
            iVar50 = auVar6._0_4_ << 0xd;
            iVar53 = auVar6._8_4_ << 0xd;
            uVar30 = (int)((ulong)uVar22 >> 0x10) << 0xd;
            iVar36 = (int)((ulong)uVar4 >> 0x10) << 0xd;
            iVar39 = auVar6._2_4_ << 0xd;
            iVar41 = auVar6._10_4_ << 0xd;
            auVar59._0_4_ = (int)((ulong)uVar22 >> 0x20) << 0xd;
            auVar59._4_4_ = (int)((ulong)uVar4 >> 0x20) << 0xd;
            auVar59._8_4_ = auVar6._4_4_ << 0xd;
            auVar59._12_4_ = auVar6._12_4_ << 0xd;
            uVar48 = (undefined)((uint)iVar47 >> 0x10);
            uVar49 = (undefined)((uint)iVar47 >> 0x18);
            auVar56._0_8_ =
                 CONCAT17(uVar49,CONCAT16(uVar48,CONCAT15((char)((uint)iVar47 >> 8),
                                                          (uint5)((uint3)((uint)iVar44 >> 8) &
                                                                 0xfffe0) << 8))) &
                 0xfffe0ffffffffff;
            auVar56[8] = 0;
            auVar56[9] = (char)((uint)iVar50 >> 8);
            bVar51 = (byte)((uint)iVar50 >> 0x10);
            auVar56[10] = bVar51;
            bVar52 = (byte)((uint)iVar50 >> 0x18);
            auVar56[11] = bVar52 & 0xf;
            auVar57[12] = 0;
            auVar57._0_12_ = auVar56;
            auVar57[13] = (char)((uint)iVar53 >> 8);
            bVar54 = (byte)((uint)iVar53 >> 0x10);
            auVar57[14] = bVar54;
            bVar55 = (byte)((uint)iVar53 >> 0x18);
            auVar57[15] = bVar55 & 0xf;
            uVar37 = (undefined)((uint)iVar36 >> 0x10);
            uVar38 = (undefined)((uint)iVar36 >> 0x18);
            auVar65._0_8_ =
                 CONCAT17(uVar38,CONCAT16(uVar37,(uint6)((((ushort)(uVar30 >> 0x10) & 0xff80) &
                                                         0xfff) << 0x10))) & 0xf80ffffffffffff;
            auVar65._8_2_ = 0;
            auVar32[10] = (byte)((uint)iVar39 >> 0x10);
            auVar65[10] = auVar32[10] & 0x80;
            bVar40 = (byte)((uint)iVar39 >> 0x18);
            auVar65[11] = bVar40 & 0xf;
            auVar65._12_2_ = 0;
            auVar69[14] = (byte)((uint)iVar41 >> 0x10);
            auVar65[14] = auVar69[14] & 0x80;
            bVar42 = (byte)((uint)iVar41 >> 0x18);
            auVar65[15] = bVar42 & 0xf;
            auVar32._0_8_ =
                 CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15((char)((uint)iVar36 >> 8),
                                                          (uint5)((uVar30 >> 8 & 0xfffff) << 8)))) &
                 0xfffe0ffffffffff;
            auVar32[8] = 0;
            auVar32[9] = (undefined)((uint)iVar39 >> 8);
            auVar32[11] = bVar40 & 0xf;
            auVar69[12] = 0;
            auVar69._0_12_ = auVar32;
            auVar69[13] = (undefined)((uint)iVar41 >> 8);
            auVar69[15] = bVar42 & 0xf;
            uVar37 = (undefined)((uint)auVar59._4_4_ >> 0x10);
            uVar38 = (undefined)((uint)auVar59._4_4_ >> 0x18);
            bVar40 = (byte)((uint)auVar59._8_4_ >> 0x10);
            bVar42 = (byte)((uint)auVar59._8_4_ >> 0x18);
            bVar63 = (byte)((uint)auVar59._12_4_ >> 0x10);
            bVar64 = (byte)((uint)auVar59._12_4_ >> 0x18);
            auVar45._0_8_ =
                 CONCAT17(uVar49,CONCAT16(uVar48,(uint6)((((ushort)((uint)iVar44 >> 0x10) & 0xff80)
                                                         & 0xfff) << 0x10))) & 0xf80ffffffffffff;
            auVar45._8_2_ = 0;
            auVar45[10] = bVar51 & 0x80;
            auVar45[11] = bVar52 & 0xf;
            auVar45._12_2_ = 0;
            auVar45[14] = bVar54 & 0x80;
            auVar45[15] = bVar55 & 0xf;
            auVar66[10] = 0x80;
            auVar66._0_10_ = (unkuint10)0xf8000000f800000;
            auVar66[11] = 0xf;
            auVar66._12_2_ = 0;
            auVar66[14] = 0x80;
            auVar66[15] = 0xf;
            auVar70 = NEON_cmeq(auVar65,auVar66,4);
            iVar36 = (int)(auVar32._0_8_ >> 0x20);
            uVar30 = auVar32._8_4_;
            uVar26 = auVar69._12_4_;
            auVar76._0_4_ = (int)auVar32._0_8_ + 0x38000000;
            auVar76._4_4_ = iVar36 + 0x38000000;
            auVar76._8_4_ = uVar30 + 0x38000000;
            auVar76._12_4_ = uVar26 + 0x38000000;
            auVar66 = NEON_cmeq(auVar65,0,2);
            auVar34._0_8_ = auVar32._0_8_ | 0x7000000070000000;
            auVar34._8_4_ = uVar30 | 0x70000000;
            auVar34._12_4_ = uVar26 | 0x70000000;
            auVar73._0_4_ = (float)((int)auVar32._0_8_ + 0x38800000) + -6.103516e-05;
            auVar73._4_4_ = (float)(iVar36 + 0x38800000) + -6.103516e-05;
            auVar73._8_4_ = (float)(uVar30 + 0x38800000) + -6.103516e-05;
            auVar73._12_4_ = (float)(uVar26 + 0x38800000) + -6.103516e-05;
            iVar36 = (int)(auVar56._0_8_ >> 0x20);
            uVar30 = auVar56._8_4_;
            uVar26 = auVar57._12_4_;
            auVar71[0] = auVar66[0] ^ auVar70[0];
            auVar71[1] = auVar66[1] ^ auVar70[1];
            auVar71[2] = auVar66[2] ^ auVar70[2];
            auVar71[3] = auVar66[3] ^ auVar70[3];
            auVar71[4] = auVar66[4] ^ auVar70[4];
            auVar71[5] = auVar66[5] ^ auVar70[5];
            auVar71[6] = auVar66[6] ^ auVar70[6];
            auVar71[7] = auVar66[7] ^ auVar70[7];
            auVar71[8] = auVar66[8] ^ auVar70[8];
            auVar71[9] = auVar66[9] ^ auVar70[9];
            auVar71[10] = auVar66[10] ^ auVar70[10];
            auVar71[11] = auVar66[11] ^ auVar70[11];
            auVar71[12] = auVar66[12] ^ auVar70[12];
            auVar71[13] = auVar66[13] ^ auVar70[13];
            auVar71[14] = auVar66[14] ^ auVar70[14];
            auVar71[15] = auVar66[15] ^ auVar70[15];
            auVar66 = NEON_bit(auVar34,auVar73,auVar66,1);
            auVar67._0_8_ =
                 CONCAT17(uVar38,CONCAT16(uVar37,(uint6)((((ushort)((uint)auVar59._0_4_ >> 0x10) &
                                                          0xff80) & 0xfff) << 0x10))) &
                 0xf80ffffffffffff;
            auVar67._8_2_ = 0;
            auVar67[10] = bVar40 & 0x80;
            auVar67[11] = bVar42 & 0xf;
            auVar67._12_2_ = 0;
            auVar67[14] = bVar63 & 0x80;
            auVar67[15] = bVar64 & 0xf;
            uVar8 = (uint3)((uint)auVar59._0_4_ >> 8);
            uVar9 = (uint3)((uint)auVar59._4_4_ >> 8);
            uVar10 = (uint3)((uint)auVar59._8_4_ >> 8);
            uVar11 = (uint3)((uint)auVar59._12_4_ >> 8);
            auVar70[10] = 0x80;
            auVar70._0_10_ = (unkuint10)0xf8000000f800000;
            auVar70[11] = 0xf;
            auVar70._12_2_ = 0;
            auVar70[14] = 0x80;
            auVar70[15] = 0xf;
            auVar60 = NEON_cmtst(auVar59,auVar70,4);
            auVar66 = NEON_bif(auVar66,auVar76,auVar71,1);
            auVar72._0_4_ = (uint)(uVar8 & 0xfffe0) * 0x100 + 0x38000000;
            auVar72._4_4_ = (uint)(uVar9 & 0xfffe0) * 0x100 + 0x38000000;
            auVar72._8_4_ = (uint)(uVar10 & 0xfffe0) * 0x100 + 0x38000000;
            auVar72._12_4_ = (uint)(uVar11 & 0xfffe0) * 0x100 + 0x38000000;
            auVar70 = NEON_cmeq(auVar67,0,2);
            auVar74._0_4_ = (float)((uint)(uVar8 & 0xfffe0) * 0x100 + 0x38800000) + -6.103516e-05;
            auVar74._4_4_ = (float)((uint)(uVar9 & 0xfffe0) * 0x100 + 0x38800000) + -6.103516e-05;
            auVar74._8_4_ = (float)((uint)(uVar10 & 0xfffe0) * 0x100 + 0x38800000) + -6.103516e-05;
            auVar74._12_4_ = (float)((uint)(uVar11 & 0xfffe0) * 0x100 + 0x38800000) + -6.103516e-05;
            auVar68[10] = 0x80;
            auVar68._0_10_ = (unkuint10)0xf8000000f800000;
            auVar68[11] = 0xf;
            auVar68._12_2_ = 0;
            auVar68[14] = 0x80;
            auVar68[15] = 0xf;
            auVar68 = NEON_cmeq(auVar67,auVar68,4);
            auVar69 = NEON_cmeq(auVar45,0,2);
            auVar58._0_8_ = auVar56._0_8_ | 0x7000000070000000;
            auVar58._8_4_ = uVar30 | 0x70000000;
            auVar58._12_4_ = uVar26 | 0x70000000;
            auVar75[8] = 0;
            auVar75._0_8_ =
                 CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15((char)((uint)auVar59._4_4_ >> 8),
                                                          (uint5)(uVar8 & 0xfffe0 | 0x700000) << 8))
                         ) & 0xfffe0ffffffffff | 0x7000000000000000;
            auVar75[9] = (char)((uint)auVar59._8_4_ >> 8);
            auVar75[10] = bVar40;
            auVar75[11] = bVar42 & 0xf | 0x70;
            auVar75[12] = 0;
            auVar75[13] = (char)((uint)auVar59._12_4_ >> 8);
            auVar75[14] = bVar63;
            auVar75[15] = bVar64 & 0xf | 0x70;
            auVar75 = NEON_bif(auVar74,auVar75,auVar70,1);
            auVar62[10] = 0x80;
            auVar62._0_10_ = (unkuint10)0xf8000000f800000;
            auVar62[11] = 0xf;
            auVar62._12_2_ = 0;
            auVar62[14] = 0x80;
            auVar62[15] = 0xf;
            auVar70 = NEON_cmeq(auVar45,auVar62,4);
            auVar61[0] = auVar60[0] & ~auVar68[0];
            auVar61[1] = auVar60[1] & ~auVar68[1];
            auVar61[2] = auVar60[2] & ~auVar68[2];
            auVar61[3] = auVar60[3] & ~auVar68[3];
            auVar61[4] = auVar60[4] & ~auVar68[4];
            auVar61[5] = auVar60[5] & ~auVar68[5];
            auVar61[6] = auVar60[6] & ~auVar68[6];
            auVar61[7] = auVar60[7] & ~auVar68[7];
            auVar61[8] = auVar60[8] & ~auVar68[8];
            auVar61[9] = auVar60[9] & ~auVar68[9];
            auVar61[10] = auVar60[10] & ~auVar68[10];
            auVar61[11] = auVar60[11] & ~auVar68[11];
            auVar61[12] = auVar60[12] & ~auVar68[12];
            auVar61[13] = auVar60[13] & ~auVar68[13];
            auVar61[14] = auVar60[14] & ~auVar68[14];
            auVar61[15] = auVar60[15] & ~auVar68[15];
            auVar5._4_4_ = (float)(iVar36 + 0x38800000) + -6.103516e-05;
            auVar5._0_4_ = (float)((int)auVar56._0_8_ + 0x38800000) + -6.103516e-05;
            auVar5._8_4_ = (float)(uVar30 + 0x38800000) + -6.103516e-05;
            auVar5._12_4_ = (float)(uVar26 + 0x38800000) + -6.103516e-05;
            auVar68 = NEON_bit(auVar58,auVar5,auVar69,1);
            auVar46[0] = auVar69[0] ^ auVar70[0];
            auVar46[1] = auVar69[1] ^ auVar70[1];
            auVar46[2] = auVar69[2] ^ auVar70[2];
            auVar46[3] = auVar69[3] ^ auVar70[3];
            auVar46[4] = auVar69[4] ^ auVar70[4];
            auVar46[5] = auVar69[5] ^ auVar70[5];
            auVar46[6] = auVar69[6] ^ auVar70[6];
            auVar46[7] = auVar69[7] ^ auVar70[7];
            auVar46[8] = auVar69[8] ^ auVar70[8];
            auVar46[9] = auVar69[9] ^ auVar70[9];
            auVar46[10] = auVar69[10] ^ auVar70[10];
            auVar46[11] = auVar69[11] ^ auVar70[11];
            auVar46[12] = auVar69[12] ^ auVar70[12];
            auVar46[13] = auVar69[13] ^ auVar70[13];
            auVar46[14] = auVar69[14] ^ auVar70[14];
            auVar46[15] = auVar69[15] ^ auVar70[15];
            auVar62 = NEON_bsl(auVar61,auVar72,auVar75,1);
            auVar60._4_4_ = iVar36 + 0x38000000;
            auVar60._0_4_ = (int)auVar56._0_8_ + 0x38000000;
            auVar60._8_4_ = uVar30 + 0x38000000;
            auVar60._12_4_ = uVar26 + 0x38000000;
            auVar70 = NEON_bsl(auVar46,auVar68,auVar60,1);
            fVar31 = (float)CONCAT13(auVar66[3] | (byte)((ulong)uVar22 >> 0x18) & 0x80,auVar66._0_3_
                                    );
            auVar33._0_8_ =
                 CONCAT17(auVar66[7] | bVar29 & 0x80,
                          CONCAT16(auVar66[6],CONCAT15(auVar66[5],CONCAT14(auVar66[4],fVar31))));
            auVar33[8] = auVar66[8];
            auVar33[9] = auVar66[9];
            auVar33[10] = auVar66[10];
            auVar33[11] = auVar66[11] | auVar6[3] & 0x80;
            auVar35[12] = auVar66[12];
            auVar35._0_12_ = auVar33;
            auVar35[13] = auVar66[13];
            auVar35[14] = auVar66[14];
            auVar35[15] = auVar66[15] | auVar6[11] & 0x80;
            fVar43 = (float)CONCAT13(auVar70[11] | auVar6[1] & 0x80,auVar70._8_3_);
            iVar41 = (int)((float)((ulong)auVar33._0_8_ >> 0x20) * 255.0);
            iVar36 = (int)((float)CONCAT13(auVar70[3] | (byte)((unkuint9)Var7 >> 8) & 0x80,
                                           auVar70._0_3_) * 255.0);
            iVar39 = (int)((float)CONCAT13(auVar70[7] | bVar28 & 0x80,auVar70._4_3_) * 255.0);
            iVar44 = (int)(fVar43 * 255.0);
            iVar47 = (int)((float)(CONCAT17(auVar70[15] | auVar6[9] & 0x80,
                                            CONCAT16(auVar70[14],
                                                     CONCAT15(auVar70[13],
                                                              CONCAT14(auVar70[12],fVar43)))) >>
                                  0x20) * 255.0);
            uVar30 = (int)(fVar31 * 255.0) & 0xffff;
            uVar27 = (int)(auVar35._12_4_ * 255.0) & 0xffff;
            uVar26 = (int)(auVar33._8_4_ * 255.0) & 0xffff;
            puVar23[-3] = CONCAT11((byte)uVar30 | (byte)((uint)iVar36 >> 8),(char)iVar36);
            *(ushort *)((long)puVar23 + -3) =
                 CONCAT11((byte)iVar41 | (byte)((uint)iVar39 >> 8),(char)iVar39);
            *puVar23 = CONCAT11((byte)uVar26 | (byte)((uint)iVar44 >> 8),(char)iVar44);
            *(byte *)(puVar23 + -2) =
                 (byte)(int)((float)CONCAT13(auVar62[3] | (byte)((ulong)uVar22 >> 0x28) & 0x80,
                                             auVar62._0_3_) * 255.0) | (byte)(uVar30 >> 8);
            *(ushort *)((long)puVar23 + 3) =
                 CONCAT11((byte)uVar27 | (byte)((uint)iVar47 >> 8),(char)iVar47);
            *(byte *)((long)puVar23 + -1) =
                 (byte)(int)((float)CONCAT13(auVar62[7] | (byte)((ulong)uVar4 >> 0x28) & 0x80,
                                             auVar62._4_3_) * 255.0) | (byte)((uint)iVar41 >> 8);
            *(byte *)(puVar23 + 1) =
                 (byte)(int)((float)CONCAT13(auVar62[11] | auVar6[5] & 0x80,auVar62._8_3_) * 255.0)
                 | (byte)(uVar26 >> 8);
            *(byte *)((long)puVar23 + 5) =
                 (byte)(int)((float)CONCAT13(auVar62[15] | auVar6[13] & 0x80,auVar62._12_3_) * 255.0
                            ) | (byte)(uVar27 >> 8);
            pVar21 = pVar21 + 2;
            puVar23 = puVar23 + 6;
          } while (uVar19 != 0);
          uVar19 = uVar17;
          if (uVar17 == uVar15) goto LAB_00a9ec28;
        }
        lVar20 = uVar19 * 3;
        do {
          uVar22 = *(undefined8 *)((long)pVar12 + uVar19 * 8);
          uVar26 = (uint)uVar22 << 0xd;
          uVar30 = uVar26 & 0xfffe000;
          uVar26 = uVar26 & 0xf800000;
          if (uVar26 == 0xf800000) {
            fVar31 = (float)(uVar30 | 0x70000000);
          }
          else if (uVar26 == 0) {
            fVar31 = (float)(uVar30 + 0x38800000) + -6.103516e-05;
          }
          else {
            fVar31 = (float)(uVar30 + 0x38000000);
          }
          uVar27 = (uint)((ulong)uVar22 >> 0x10);
          uVar26 = uVar27 << 0xd;
          uVar30 = uVar26 & 0xfffe000;
          uVar26 = uVar26 & 0xf800000;
          if (uVar26 == 0xf800000) {
            fVar43 = (float)(uVar30 | 0x70000000);
          }
          else if (uVar26 == 0) {
            fVar43 = (float)(uVar30 + 0x38800000) + -6.103516e-05;
          }
          else {
            fVar43 = (float)(uVar30 + 0x38000000);
          }
          uVar24 = (uint)((ulong)uVar22 >> 0x20);
          uVar26 = uVar24 << 0xd;
          uVar30 = uVar26 & 0xfffe000;
          uVar26 = uVar26 & 0xf800000;
          if (uVar26 == 0xf800000) {
            fVar25 = (float)(uVar30 | 0x70000000);
          }
          else if (uVar26 == 0) {
            fVar25 = (float)(uVar30 + 0x38800000) + -6.103516e-05;
          }
          else {
            fVar25 = (float)(uVar30 + 0x38000000);
          }
          puVar1 = (ushort *)((long)pvVar13 + lVar20);
          uVar19 = uVar19 + 1;
          lVar20 = lVar20 + 3;
          *(char *)(puVar1 + 1) =
               (char)(int)((float)((uint)fVar25 | (uVar24 & 0x8000) << 0x10) * 255.0);
          *puVar1 = (ushort)(int)((float)((uint)fVar31 | ((uint)uVar22 & 0x8000) << 0x10) * 255.0) &
                    0xff | (ushort)(((int)((float)((uint)fVar43 | (uVar27 & 0x8000) << 0x10) * 255.0
                                          ) & 0xffU) << 8);
        } while (uVar15 != uVar19);
      }
LAB_00a9ec28:
      pVar12 = (unkbyte9 *)((long)pVar12 + (ulong)param_2);
      pvVar13 = (void *)((long)pvVar13 + uVar16);
      lVar14 = lVar14 + 1;
      puVar18 = (undefined2 *)((long)puVar18 + uVar16);
    } while ((uint)lVar14 != param_6);
  }
  return;
}


