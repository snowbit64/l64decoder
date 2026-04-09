// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: amp2Log2
// Entry Point: 00e6f7f0
// Size: 3016 bytes
// Signature: undefined amp2Log2(void)


void amp2Log2(long param_1,uint param_2,int param_3,undefined (*param_4) [16],undefined8 *param_5,
             uint param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  short *psVar4;
  undefined auVar5 [16];
  undefined2 uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined auVar14 [12];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  ushort uVar19;
  ushort uVar20;
  uint6 uVar21;
  uint6 uVar22;
  uint6 uVar23;
  uint6 uVar24;
  uint6 uVar25;
  uint uVar26;
  uint6 uVar27;
  uint6 uVar28;
  undefined4 uVar29;
  undefined6 uVar30;
  ulong uVar31;
  undefined4 uVar32;
  undefined6 uVar33;
  undefined8 *puVar34;
  ulong uVar35;
  undefined (*pauVar36) [16];
  undefined8 *puVar37;
  undefined2 *puVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  undefined (*pauVar42) [16];
  long lVar43;
  undefined8 *puVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  undefined (*pauVar48) [16];
  short sVar49;
  long lVar50;
  long lVar51;
  ulong uVar52;
  undefined auVar53 [14];
  undefined auVar54 [16];
  undefined auVar55 [14];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  uint uVar59;
  undefined auVar61 [16];
  undefined auVar62 [14];
  uint uVar64;
  undefined auVar63 [16];
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  undefined auVar69 [14];
  undefined auVar70 [14];
  undefined auVar71 [16];
  uint uVar72;
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  int iVar78;
  int iVar83;
  int iVar84;
  undefined auVar79 [16];
  undefined auVar80 [16];
  undefined auVar81 [16];
  int iVar85;
  undefined auVar82 [16];
  int iVar86;
  int iVar92;
  undefined8 uVar87;
  int iVar93;
  undefined auVar88 [16];
  undefined auVar89 [16];
  undefined auVar90 [16];
  int iVar94;
  undefined auVar91 [16];
  undefined auVar95 [12];
  undefined auVar96 [12];
  int iVar101;
  int iVar109;
  undefined auVar102 [12];
  int iVar108;
  undefined auVar104 [16];
  undefined auVar105 [16];
  int iVar110;
  undefined auVar107 [16];
  int iVar111;
  int iVar121;
  undefined auVar112 [12];
  undefined auVar113 [12];
  int iVar122;
  undefined auVar115 [14];
  undefined auVar117 [14];
  undefined auVar119 [16];
  int iVar123;
  undefined auVar124 [12];
  uint uVar131;
  undefined auVar126 [14];
  undefined auVar127 [14];
  undefined auVar129 [16];
  undefined auVar130 [16];
  int iVar132;
  undefined auVar133 [14];
  int iVar138;
  int iVar139;
  undefined auVar134 [16];
  undefined auVar135 [16];
  int iVar140;
  undefined auVar136 [16];
  undefined auVar137 [16];
  int iVar141;
  undefined auVar142 [14];
  int iVar147;
  int iVar149;
  undefined auVar143 [16];
  undefined auVar144 [16];
  undefined auVar145 [16];
  int iVar148;
  uint uVar150;
  int iVar151;
  undefined auVar146 [16];
  int iVar152;
  int iVar157;
  int iVar158;
  int iVar159;
  undefined auVar153 [16];
  undefined auVar154 [16];
  int iVar160;
  undefined auVar155 [16];
  undefined auVar156 [16];
  int iVar161;
  int iVar162;
  int iVar166;
  uint uVar167;
  int iVar168;
  undefined auVar163 [16];
  undefined auVar164 [16];
  int iVar169;
  undefined auVar165 [16];
  int iVar170;
  undefined auVar60 [14];
  undefined auVar97 [14];
  undefined auVar98 [14];
  undefined auVar99 [16];
  undefined auVar100 [16];
  undefined auVar103 [14];
  undefined auVar106 [16];
  undefined auVar114 [14];
  undefined auVar116 [14];
  undefined auVar118 [16];
  undefined auVar120 [16];
  undefined auVar125 [14];
  undefined auVar128 [16];
  
  if ((int)param_2 < 1) {
    if ((int)param_2 < param_3) {
      iVar78 = *(int *)(param_1 + 8);
      lVar51 = (long)(int)param_2;
      uVar35 = param_3 - lVar51;
      uVar46 = uVar35 & 0xfffffffffffffff0;
      lVar50 = 0;
      uVar40 = 0;
      if ((int)param_6 < 2) {
        param_6 = 1;
      }
      puVar34 = (undefined8 *)((long)param_5 + (long)(int)param_2 * 2 + 0x10);
      do {
        puVar37 = puVar34;
        lVar39 = lVar51;
        uVar47 = uVar46;
        if (uVar35 < 0x10) {
LAB_00e6fe64:
          lVar43 = param_3 - lVar39;
          puVar38 = (undefined2 *)((long)param_5 + (lVar39 + lVar50) * 2);
          do {
            lVar43 = lVar43 + -1;
            *puVar38 = 0xc800;
            puVar38 = puVar38 + 1;
          } while (lVar43 != 0);
        }
        else {
          do {
            *(undefined2 *)puVar37 = 0xc800;
            *(undefined2 *)((long)puVar37 + 2) = 0xc800;
            *(undefined2 *)((long)puVar37 + 4) = 0xc800;
            *(undefined2 *)((long)puVar37 + 6) = 0xc800;
            puVar37[-2] = 0xc800c800c800c800;
            *(undefined2 *)(puVar37 + 2) = 0xc800;
            *(undefined2 *)((long)puVar37 + 0x12) = 0xc800;
            *(undefined2 *)((long)puVar37 + 0x14) = 0xc800;
            *(undefined2 *)((long)puVar37 + 0x16) = 0xc800;
            *puVar37 = 0xc800c800c800c800;
            uVar47 = uVar47 - 0x10;
            puVar37 = puVar37 + 4;
          } while (uVar47 != 0);
          lVar39 = uVar46 + lVar51;
          if (uVar35 != uVar46) goto LAB_00e6fe64;
        }
        uVar40 = uVar40 + 1;
        puVar34 = (undefined8 *)((long)puVar34 + (long)iVar78 * 2);
        lVar50 = lVar50 + iVar78;
      } while (uVar40 != param_6);
    }
  }
  else {
    lVar50 = (long)*(int *)(param_1 + 8);
    if ((int)param_2 < param_3) {
      uVar46 = (ulong)param_2;
      uVar47 = (long)param_3 - uVar46;
      uVar35 = uVar47 & 0xfffffffffffffff0;
      uVar40 = 0;
      if ((int)param_6 < 2) {
        param_6 = 1;
      }
      uVar41 = uVar46 & 0xfffffff0;
      puVar34 = (undefined8 *)((long)param_5 + (ulong)param_2 * 2 + 0x10);
      pauVar36 = param_4;
      puVar37 = param_5;
      do {
        if (param_2 < 8) {
          uVar45 = 0;
LAB_00e6fd74:
          do {
            iVar78 = *(int *)(*pauVar36 + uVar45 * 4);
            if (iVar78 == 0) {
              sVar49 = -0x7fff;
            }
            else {
              uVar3 = (uint)LZCOUNT(iVar78) ^ 0x1f;
              iVar83 = iVar78 >> (uVar3 - 0xf & 0x1f);
              if (uVar3 < 0xf || uVar3 - 0xf == 0) {
                iVar83 = iVar78 << (ulong)(0xf - uVar3 & 0x1f);
              }
              iVar78 = iVar83 * 0x10000 + 0x40000000;
              iVar83 = iVar78 >> 0x10;
              iVar78 = iVar78 >> 0xf;
              sVar49 = (short)uVar3 * 0x400 +
                       (short)((int)((((uint)((((iVar83 * -0x579 >> 0xf) + 0x9f1) * iVar78 +
                                               -0x14610000 >> 0x10) * iVar83) >> 0xf) + 0x3d82 &
                                     0xffff) * iVar78 + -0x1a890000) >> 0x14) + -0x3400;
            }
            *(short *)((long)puVar37 + uVar45 * 2) =
                 sVar49 + (char)(&eMeans)[uVar45] * -0x40 + 0x800;
            uVar45 = uVar45 + 1;
joined_r0x00e6fd0c:
          } while (uVar45 != uVar46);
        }
        else {
          lVar51 = uVar40 * lVar50;
          puVar1 = (undefined1 *)((long)param_5 + lVar51 * 2);
          puVar2 = (undefined1 *)((long)param_5 + (lVar51 + uVar46) * 2);
          uVar45 = 0;
          if ((puVar1 < *param_4 + (lVar51 + uVar46) * 4 && *param_4 + lVar51 * 4 < puVar2) ||
             (puVar1 < &eMeans + uVar46 && &eMeans < puVar2)) goto LAB_00e6fd74;
          pauVar42 = (undefined (*) [16])&eMeans;
          pauVar48 = pauVar36;
          puVar44 = puVar37;
          uVar45 = uVar41;
          if (param_2 < 0x10) {
            uVar45 = 0;
LAB_00e6fbd0:
            lVar43 = uVar45 << 1;
            lVar51 = uVar45 << 2;
            lVar39 = uVar45 - (uVar46 & 0xfffffff8);
            puVar44 = (undefined8 *)(&eMeans + uVar45);
            do {
              pauVar42 = (undefined (*) [16])(*pauVar36 + lVar51);
              lVar51 = lVar51 + 0x20;
              lVar39 = lVar39 + 8;
              auVar75 = *pauVar42;
              auVar57 = pauVar42[1];
              auVar89 = NEON_clz(auVar75,4);
              auVar80 = NEON_clz(auVar57,4);
              uVar22 = CONCAT15(auVar80[9],
                                CONCAT14(auVar80[8],
                                         CONCAT13(auVar80[5],CONCAT12(auVar80[4],auVar80._0_2_))));
              uVar21 = uVar22 ^ 0x1f001f001f;
              uVar19 = auVar89._0_2_;
              uVar24 = CONCAT15(auVar89[9],
                                CONCAT14(auVar89[8],CONCAT13(auVar89[5],CONCAT12(auVar89[4],uVar19))
                                        ));
              uVar23 = uVar24 ^ 0x1f001f001f;
              uVar29 = CONCAT13(auVar89[5],CONCAT12(auVar89[4],uVar19));
              uVar30 = CONCAT15(auVar89[9],CONCAT14(auVar89[8],uVar29));
              uVar45 = CONCAT17(auVar89[13],CONCAT16(auVar89[12],uVar30)) ^ 0x1f001f001f001f;
              auVar95._0_10_ = CONCAT19(auVar80[1],CONCAT18(auVar80[0] ^ 0x1f,uVar45));
              auVar95[10] = auVar80[4] ^ 0x1f;
              auVar95[11] = auVar80[5];
              auVar97[12] = auVar80[8] ^ 0x1f;
              auVar97._0_12_ = auVar95;
              auVar97[13] = auVar80[9];
              auVar99[14] = auVar80[12] ^ 0x1f;
              auVar99._0_14_ = auVar97;
              auVar99[15] = auVar80[13];
              auVar81._0_4_ = 0xf - (uint)(ushort)(auVar80._0_2_ ^ 0x1f);
              auVar81._4_4_ = 0xf - (uint)(ushort)(uVar21 >> 0x10);
              auVar81._8_4_ = 0xf - (uint)(ushort)(uVar21 >> 0x20);
              auVar81._12_4_ =
                   0xf - (uint)(ushort)((ushort)(CONCAT17(auVar80[13],CONCAT16(auVar80[12],uVar22))
                                                >> 0x30) ^ 0x1f);
              auVar90._0_4_ = 0xf - (uint)(uVar19 ^ 0x1f);
              auVar90._4_4_ = 0xf - (uint)(ushort)(uVar23 >> 0x10);
              auVar90._8_4_ = 0xf - (uint)(ushort)(uVar23 >> 0x20);
              auVar90._12_4_ =
                   0xf - (uint)(ushort)((ushort)(CONCAT17(auVar89[13],CONCAT16(auVar89[12],uVar24))
                                                >> 0x30) ^ 0x1f);
              auVar7[8] = 0xf;
              auVar7._0_8_ = 0xf000f000f000f;
              auVar7[9] = 0;
              auVar7[10] = 0xf;
              auVar7[11] = 0;
              auVar7[12] = 0xf;
              auVar7[13] = 0;
              auVar7[14] = 0xf;
              auVar7[15] = 0;
              auVar104 = NEON_cmhi(auVar99,auVar7,2);
              auVar119 = NEON_sshl(auVar57,auVar81,4);
              auVar80 = NEON_ushl(auVar57,auVar81,4);
              auVar129._0_4_ = (int)auVar104._8_2_;
              auVar129._4_4_ = (int)auVar104._10_2_;
              auVar129._8_4_ = (int)auVar104._12_2_;
              auVar129._12_4_ = (int)auVar104._14_2_;
              auVar136 = NEON_sshl(auVar75,auVar90,4);
              auVar89 = NEON_ushl(auVar75,auVar90,4);
              auVar105._0_4_ = (int)auVar104._0_2_;
              auVar105._4_4_ = (int)auVar104._2_2_;
              auVar105._8_4_ = (int)auVar104._4_2_;
              auVar105._12_4_ = (int)auVar104._6_2_;
              auVar80 = NEON_bit(auVar80,auVar119,auVar129,1);
              auVar57 = NEON_cmeq(auVar57,0,2);
              auVar75 = NEON_cmeq(auVar75,0,2);
              auVar89 = NEON_bit(auVar89,auVar136,auVar105,1);
              auVar58._2_2_ = auVar75._4_2_;
              auVar58._0_2_ = auVar75._0_2_;
              auVar58._4_2_ = auVar75._8_2_;
              auVar58._6_2_ = auVar75._12_2_;
              auVar58._8_2_ = auVar57._0_2_;
              auVar58._10_2_ = auVar57._4_2_;
              auVar58._12_2_ = auVar57._8_2_;
              auVar58._14_2_ = auVar57._12_2_;
              iVar78 = auVar80._0_4_ * 0x10000 + 0x40000000;
              iVar83 = auVar80._4_4_ * 0x10000 + 0x40000000;
              iVar84 = auVar80._8_4_ * 0x10000 + 0x40000000;
              iVar85 = auVar80._12_4_ * 0x10000 + 0x40000000;
              iVar86 = auVar89._0_4_ * 0x10000 + 0x40000000;
              iVar92 = auVar89._4_4_ * 0x10000 + 0x40000000;
              iVar93 = auVar89._8_4_ * 0x10000 + 0x40000000;
              iVar94 = auVar89._12_4_ * 0x10000 + 0x40000000;
              iVar101 = iVar78 >> 0x10;
              iVar108 = iVar83 >> 0x10;
              iVar109 = iVar84 >> 0x10;
              iVar110 = iVar85 >> 0x10;
              iVar78 = iVar78 >> 0xf;
              iVar83 = iVar83 >> 0xf;
              iVar84 = iVar84 >> 0xf;
              iVar85 = iVar85 >> 0xf;
              iVar111 = iVar86 >> 0x10;
              iVar121 = iVar92 >> 0x10;
              iVar122 = iVar93 >> 0x10;
              iVar123 = iVar94 >> 0x10;
              iVar86 = iVar86 >> 0xf;
              iVar92 = iVar92 >> 0xf;
              iVar93 = iVar93 >> 0xf;
              iVar94 = iVar94 >> 0xf;
              iVar148 = ((uint)((((iVar108 * -0x579 >> 0xf) + 0x9f1) * iVar83 + -0x14610000 >> 0x10)
                               * iVar108) >> 0xf) + 0x3d82;
              uVar150 = ((uint)((((iVar109 * -0x579 >> 0xf) + 0x9f1) * iVar84 + -0x14610000 >> 0x10)
                               * iVar109) >> 0xf) + 0x3d82;
              iVar110 = ((uint)((((iVar110 * -0x579 >> 0xf) + 0x9f1) * iVar85 + -0x14610000 >> 0x10)
                               * iVar110) >> 0xf) + 0x3d82;
              iVar108 = ((uint)((((iVar121 * -0x579 >> 0xf) + 0x9f1) * iVar92 + -0x14610000 >> 0x10)
                               * iVar121) >> 0xf) + 0x3d82;
              uVar131 = ((uint)((((iVar122 * -0x579 >> 0xf) + 0x9f1) * iVar93 + -0x14610000 >> 0x10)
                               * iVar122) >> 0xf) + 0x3d82;
              iVar109 = ((uint)((((iVar123 * -0x579 >> 0xf) + 0x9f1) * iVar94 + -0x14610000 >> 0x10)
                               * iVar123) >> 0xf) + 0x3d82;
              uVar3 = (uint)(ushort)((short)((uint)((((iVar101 * -0x579 >> 0xf) + 0x9f1) * iVar78 +
                                                     -0x14610000 >> 0x10) * iVar101) >> 0xf) +
                                    0x3d82);
              auVar115._0_12_ = ZEXT212((ushort)uVar150) << 0x40;
              auVar115[12] = (char)iVar110;
              auVar115[13] = (char)((uint)iVar110 >> 8);
              uVar26 = (uint)(ushort)((short)((uint)((((iVar111 * -0x579 >> 0xf) + 0x9f1) * iVar86 +
                                                      -0x14610000 >> 0x10) * iVar111) >> 0xf) +
                                     0x3d82);
              auVar126._0_12_ = ZEXT212((ushort)uVar131) << 0x40;
              auVar126[12] = (undefined)iVar109;
              auVar126[13] = (undefined)((uint)iVar109 >> 8);
              uVar87 = *puVar44;
              auVar76._0_2_ =
                   (uVar19 ^ 0x1f) * 0x400 + (short)((int)(uVar26 * iVar86 + -0x1a890000) >> 0x14) +
                   -0x2c00;
              auVar76._2_2_ =
                   ((ushort)((uint)uVar29 >> 0x10) ^ 0x1f) * 0x400 +
                   (short)((int)((uint)(ushort)(CONCAT15((char)((uint)iVar108 >> 8),
                                                         CONCAT14((char)iVar108,uVar26)) >> 0x20) *
                                 iVar92 + -0x1a890000) >> 0x14) + -0x2c00;
              auVar76._4_2_ =
                   ((ushort)((uint6)uVar30 >> 0x20) ^ 0x1f) * 0x400 +
                   (short)((int)((uVar131 & 0xffff) * iVar93 + -0x1a890000) >> 0x14) + -0x2c00;
              auVar76._6_2_ =
                   (short)(uVar45 >> 0x30) * 0x400 +
                   (short)((int)((uint)auVar126._12_2_ * iVar94 + -0x1a890000) >> 0x14) + -0x2c00;
              auVar76._8_2_ =
                   (short)((unkuint10)auVar95._0_10_ >> 0x40) * 0x400 +
                   (short)((int)(uVar3 * iVar78 + -0x1a890000) >> 0x14) + -0x2c00;
              auVar76._10_2_ =
                   auVar95._10_2_ * 0x400 +
                   (short)((int)((uint)(ushort)(CONCAT15((char)((uint)iVar148 >> 8),
                                                         CONCAT14((char)iVar148,uVar3)) >> 0x20) *
                                 iVar83 + -0x1a890000) >> 0x14) + -0x2c00;
              auVar76._12_2_ =
                   auVar97._12_2_ * 0x400 +
                   (short)((int)((uVar150 & 0xffff) * iVar84 + -0x1a890000) >> 0x14) + -0x2c00;
              auVar76._14_2_ =
                   auVar99._14_2_ * 0x400 +
                   (short)((int)((uint)auVar115._12_2_ * iVar85 + -0x1a890000) >> 0x14) + -0x2c00;
              auVar16._8_2_ = 0x8801;
              auVar16._0_8_ = 0x8801880188018801;
              auVar16._10_2_ = 0x8801;
              auVar16._12_2_ = 0x8801;
              auVar16._14_2_ = 0x8801;
              auVar57 = NEON_bsl(auVar58,auVar16,auVar76,1);
              psVar4 = (short *)((long)puVar37 + lVar43);
              psVar4[8] = auVar57._8_2_ + (char)((ulong)uVar87 >> 0x20) * -0x40;
              psVar4[9] = auVar57._10_2_ + (char)((ulong)uVar87 >> 0x28) * -0x40;
              psVar4[10] = auVar57._12_2_ + (char)((ulong)uVar87 >> 0x30) * -0x40;
              psVar4[0xb] = auVar57._14_2_ + (char)((ulong)uVar87 >> 0x38) * -0x40;
              *psVar4 = auVar57._0_2_ + (char)uVar87 * -0x40;
              psVar4[1] = auVar57._2_2_ + (char)((ulong)uVar87 >> 8) * -0x40;
              psVar4[2] = auVar57._4_2_ + (char)((ulong)uVar87 >> 0x10) * -0x40;
              psVar4[3] = auVar57._6_2_ + (char)((ulong)uVar87 >> 0x18) * -0x40;
              lVar43 = lVar43 + 0x10;
              puVar44 = puVar44 + 1;
              uVar45 = uVar46 & 0xfffffff8;
              if (lVar39 == 0) goto joined_r0x00e6fd0c;
            } while( true );
          }
          do {
            auVar57 = pauVar48[2];
            auVar75 = pauVar48[3];
            uVar45 = uVar45 - 0x10;
            auVar143 = NEON_clz(auVar57,4);
            auVar80 = *pauVar48;
            auVar89 = pauVar48[1];
            auVar136 = NEON_clz(auVar75,4);
            auVar104 = NEON_clz(auVar80,4);
            auVar119 = NEON_clz(auVar89,4);
            uVar20 = auVar143._0_2_;
            uVar21 = CONCAT15(auVar143[9],
                              CONCAT14(auVar143[8],
                                       CONCAT13(auVar143[5],CONCAT12(auVar143[4],uVar20))));
            uVar19 = auVar104._0_2_;
            uVar23 = CONCAT15(auVar104[9],
                              CONCAT14(auVar104[8],
                                       CONCAT13(auVar104[5],CONCAT12(auVar104[4],uVar19))));
            uVar22 = uVar23 ^ 0x1f001f0000;
            uVar25 = CONCAT15(auVar119[9],
                              CONCAT14(auVar119[8],
                                       CONCAT13(auVar119[5],CONCAT12(auVar119[4],auVar119._0_2_))));
            uVar24 = uVar25 ^ 0x1f001f001f;
            uVar29 = CONCAT13(auVar104[5],CONCAT12(auVar104[4],uVar19));
            uVar30 = CONCAT15(auVar104[9],CONCAT14(auVar104[8],uVar29));
            uVar52 = CONCAT17(auVar104[13],CONCAT16(auVar104[12],uVar30)) ^ 0x1f001f001f001f;
            auVar112._0_10_ = CONCAT19(auVar119[1],CONCAT18(auVar119[0] ^ 0x1f,uVar52));
            auVar112[10] = auVar119[4] ^ 0x1f;
            auVar112[11] = auVar119[5];
            auVar114[12] = auVar119[8] ^ 0x1f;
            auVar114._0_12_ = auVar112;
            auVar114[13] = auVar119[9];
            auVar118[14] = auVar119[12] ^ 0x1f;
            auVar118._0_14_ = auVar114;
            auVar118[15] = auVar119[13];
            uVar32 = CONCAT13(auVar143[5],CONCAT12(auVar143[4],uVar20));
            uVar33 = CONCAT15(auVar143[9],CONCAT14(auVar143[8],uVar32));
            uVar31 = CONCAT17(auVar143[13],CONCAT16(auVar143[12],uVar33)) ^ 0x1f001f001f001f;
            auVar124._0_10_ = CONCAT19(auVar136[1],CONCAT18(auVar136[0] ^ 0x1f,uVar31));
            auVar124[10] = auVar136[4] ^ 0x1f;
            auVar124[11] = auVar136[5];
            auVar125[12] = auVar136[8] ^ 0x1f;
            auVar125._0_12_ = auVar124;
            auVar125[13] = auVar136[9];
            auVar128[14] = auVar136[12] ^ 0x1f;
            auVar128._0_14_ = auVar125;
            auVar128[15] = auVar136[13];
            auVar134._0_4_ = 0xf - (uint)(uVar19 ^ 0x1f);
            auVar134._4_4_ = 0xf - (uint)(ushort)(uVar22 >> 0x10);
            auVar134._8_4_ = 0xf - (uint)(ushort)(uVar22 >> 0x20);
            auVar134._12_4_ =
                 0xf - (uint)(ushort)((ushort)(CONCAT17(auVar104[13],CONCAT16(auVar104[12],uVar23))
                                              >> 0x30) ^ 0x1f);
            auVar144._0_4_ = 0xf - (uint)(ushort)(uVar21 ^ 0x1f001f);
            auVar144._4_4_ = 0xf - (uint)(ushort)((uVar21 ^ 0x1f001f) >> 0x10);
            auVar144._8_4_ = 0xf - (uint)(ushort)((ushort)(uVar21 >> 0x20) ^ 0x1f);
            auVar144._12_4_ =
                 0xf - (uint)(ushort)((ushort)(CONCAT17(auVar143[13],CONCAT16(auVar143[12],uVar21))
                                              >> 0x30) ^ 0x1f);
            auVar8[8] = 0xf;
            auVar8._0_8_ = 0xf000f000f000f;
            auVar8[9] = 0;
            auVar8[10] = 0xf;
            auVar8[11] = 0;
            auVar8[12] = 0xf;
            auVar8[13] = 0;
            auVar8[14] = 0xf;
            auVar8[15] = 0;
            auVar163 = NEON_cmhi(auVar118,auVar8,2);
            auVar9[8] = 0xf;
            auVar9._0_8_ = 0xf000f000f000f;
            auVar9[9] = 0;
            auVar9[10] = 0xf;
            auVar9[11] = 0;
            auVar9[12] = 0xf;
            auVar9[13] = 0;
            auVar9[14] = 0xf;
            auVar9[15] = 0;
            auVar104 = NEON_cmhi(auVar128,auVar9,2);
            uVar22 = CONCAT15(auVar136[9],
                              CONCAT14(auVar136[8],
                                       CONCAT13(auVar136[5],CONCAT12(auVar136[4],auVar136._0_2_))));
            uVar21 = uVar22 ^ 0x1f001f001f;
            auVar61._0_4_ = 0xf - (uint)(ushort)(auVar119._0_2_ ^ 0x1f);
            auVar61._4_4_ = 0xf - (uint)(ushort)(uVar24 >> 0x10);
            auVar61._8_4_ = 0xf - (uint)(ushort)(uVar24 >> 0x20);
            auVar61._12_4_ =
                 0xf - (uint)(ushort)((ushort)(CONCAT17(auVar119[13],CONCAT16(auVar119[12],uVar25))
                                              >> 0x30) ^ 0x1f);
            cVar65 = (char)(auVar163._10_2_ >> 0xf);
            cVar66 = (char)(auVar163._12_2_ >> 0xf);
            cVar67 = (char)(auVar163._14_2_ >> 0xf);
            auVar164._0_4_ = (int)auVar163._0_2_;
            auVar164._4_4_ = (int)auVar163._2_2_;
            auVar164._8_4_ = (int)auVar163._4_2_;
            auVar164._12_4_ = (int)auVar163._6_2_;
            auVar71._0_4_ = (int)auVar104._0_2_;
            auVar71._4_4_ = (int)auVar104._2_2_;
            auVar71._8_4_ = (int)auVar104._4_2_;
            auVar71._12_4_ = (int)auVar104._6_2_;
            auVar119 = NEON_sshl(auVar80,auVar134,4);
            auVar153._0_4_ = 0xf - (uint)(ushort)(auVar136._0_2_ ^ 0x1f);
            auVar153._4_4_ = 0xf - (uint)(ushort)(uVar21 >> 0x10);
            auVar153._8_4_ = 0xf - (uint)(ushort)(uVar21 >> 0x20);
            auVar153._12_4_ =
                 0xf - (uint)(ushort)((ushort)(CONCAT17(auVar136[13],CONCAT16(auVar136[12],uVar22))
                                              >> 0x30) ^ 0x1f);
            auVar136 = NEON_sshl(auVar57,auVar144,4);
            auVar135 = NEON_ushl(auVar80,auVar134,4);
            auVar145 = NEON_ushl(auVar57,auVar144,4);
            auVar63._0_4_ = (int)auVar104._8_2_;
            auVar63._4_4_ = (int)auVar104._10_2_;
            auVar63._8_4_ = (int)auVar104._12_2_;
            auVar63._12_4_ = (int)auVar104._14_2_;
            auVar104 = NEON_sshl(auVar89,auVar61,4);
            auVar143 = NEON_sshl(auVar75,auVar153,4);
            auVar154 = NEON_ushl(auVar75,auVar153,4);
            auVar119 = NEON_bit(auVar135,auVar119,auVar164,1);
            auVar135 = NEON_ushl(auVar89,auVar61,4);
            auVar136 = NEON_bit(auVar145,auVar136,auVar71,1);
            auVar143 = NEON_bit(auVar154,auVar143,auVar63,1);
            auVar10[3] = (undefined)(auVar163._8_2_ >> 0xf);
            auVar10._0_3_ = (int3)auVar163._8_2_;
            auVar10[4] = auVar163[10];
            auVar10[5] = auVar163[11];
            auVar10[6] = cVar65;
            auVar10[7] = cVar65;
            auVar10[8] = auVar163[12];
            auVar10[9] = auVar163[13];
            auVar10[10] = cVar66;
            auVar10[11] = cVar66;
            auVar10[12] = auVar163[14];
            auVar10[13] = auVar163[15];
            auVar10[14] = cVar67;
            auVar10[15] = cVar67;
            auVar104 = NEON_bit(auVar135,auVar104,auVar10,1);
            iVar132 = auVar119._0_4_ * 0x10000 + 0x40000000;
            iVar138 = auVar119._4_4_ * 0x10000 + 0x40000000;
            iVar139 = auVar119._8_4_ * 0x10000 + 0x40000000;
            iVar140 = auVar119._12_4_ * 0x10000 + 0x40000000;
            iVar141 = auVar136._0_4_ * 0x10000 + 0x40000000;
            iVar147 = auVar136._4_4_ * 0x10000 + 0x40000000;
            iVar149 = auVar136._8_4_ * 0x10000 + 0x40000000;
            iVar151 = auVar136._12_4_ * 0x10000 + 0x40000000;
            iVar152 = auVar143._0_4_ * 0x10000 + 0x40000000;
            iVar157 = auVar143._4_4_ * 0x10000 + 0x40000000;
            iVar158 = auVar143._8_4_ * 0x10000 + 0x40000000;
            iVar160 = auVar143._12_4_ * 0x10000 + 0x40000000;
            iVar84 = iVar132 >> 0x10;
            iVar78 = iVar138 >> 0x10;
            iVar83 = iVar139 >> 0x10;
            iVar85 = iVar140 >> 0x10;
            iVar122 = auVar104._0_4_ * 0x10000 + 0x40000000;
            iVar123 = auVar104._4_4_ * 0x10000 + 0x40000000;
            iVar148 = auVar104._8_4_ * 0x10000 + 0x40000000;
            iVar169 = auVar104._12_4_ * 0x10000 + 0x40000000;
            iVar86 = iVar141 >> 0x10;
            iVar92 = iVar147 >> 0x10;
            iVar94 = iVar149 >> 0x10;
            iVar101 = iVar151 >> 0x10;
            cVar65 = (char)(iVar152 >> 0x1f);
            cVar66 = (char)(iVar157 >> 0x1f);
            cVar67 = (char)(iVar158 >> 0x1f);
            cVar68 = (char)(iVar160 >> 0x1f);
            iVar109 = iVar122 >> 0x10;
            iVar110 = iVar123 >> 0x10;
            iVar111 = iVar148 >> 0x10;
            iVar121 = iVar169 >> 0x10;
            uVar6 = (undefined2)((uint)iVar152 >> 0x10);
            uVar11 = (undefined2)((uint)iVar157 >> 0x10);
            uVar12 = (undefined2)((uint)iVar158 >> 0x10);
            uVar13 = (undefined2)((uint)iVar160 >> 0x10);
            iVar141 = iVar141 >> 0xf;
            iVar147 = iVar147 >> 0xf;
            iVar149 = iVar149 >> 0xf;
            iVar151 = iVar151 >> 0xf;
            iVar132 = iVar132 >> 0xf;
            iVar138 = iVar138 >> 0xf;
            iVar139 = iVar139 >> 0xf;
            iVar140 = iVar140 >> 0xf;
            iVar122 = iVar122 >> 0xf;
            iVar123 = iVar123 >> 0xf;
            iVar148 = iVar148 >> 0xf;
            iVar169 = iVar169 >> 0xf;
            auVar14._10_2_ = 0xeb9f;
            auVar14._0_10_ = (unkuint10)0xeb9f0000eb9f0000;
            iVar93 = ((uint)((((CONCAT13(cVar66,CONCAT12(cVar66,uVar11)) * -0x579 >> 0xf) + 0x9f1) *
                              (iVar157 >> 0xf) + -0x14610000 >> 0x10) *
                            CONCAT13(cVar66,CONCAT12(cVar66,uVar11))) >> 0xf) + 0x3d82;
            uVar64 = ((uint)((((CONCAT13(cVar67,CONCAT12(cVar67,uVar12)) * -0x579 >> 0xf) + 0x9f1) *
                              (iVar158 >> 0xf) + -0x14610000 >> 0x10) *
                            CONCAT13(cVar67,CONCAT12(cVar67,uVar12))) >> 0xf) + 0x3d82;
            iVar108 = ((uint)((((CONCAT13(cVar68,CONCAT12(cVar68,uVar13)) * -0x579 >> 0xf) + 0x9f1)
                               * (iVar160 >> 0xf) + -0x14610000 >> 0x10) *
                             CONCAT13(cVar68,CONCAT12(cVar68,uVar13))) >> 0xf) + 0x3d82;
            iVar92 = ((uint)((((iVar92 * -0x579 >> 0xf) + 0x9f1) * iVar147 + -0x14610000 >> 0x10) *
                            iVar92) >> 0xf) + 0x3d82;
            uVar72 = ((uint)((((iVar94 * -0x579 >> 0xf) + 0x9f1) * iVar149 + -0x14610000 >> 0x10) *
                            iVar94) >> 0xf) + 0x3d82;
            iVar94 = ((uint)((((iVar101 * -0x579 >> 0xf) + 0x9f1) * iVar151 + -0x14610000 >> 0x10) *
                            iVar101) >> 0xf) + 0x3d82;
            uVar59 = (uint)(ushort)((short)((uint)((((CONCAT13(cVar65,CONCAT12(cVar65,uVar6)) *
                                                      -0x579 >> 0xf) + 0x9f1) * (iVar152 >> 0xf) +
                                                    -0x14610000 >> 0x10) *
                                                  CONCAT13(cVar65,CONCAT12(cVar65,uVar6))) >> 0xf) +
                                   0x3d82);
            auVar62._0_12_ = ZEXT212((ushort)uVar64) << 0x40;
            auVar62[12] = (undefined)iVar108;
            auVar62[13] = (undefined)((uint)iVar108 >> 8);
            uVar26 = (uint)(ushort)((short)((uint)((((iVar86 * -0x579 >> 0xf) + 0x9f1) * iVar141 +
                                                    -0x14610000 >> 0x10) * iVar86) >> 0xf) + 0x3d82)
            ;
            auVar69._0_12_ = ZEXT212((ushort)uVar72) << 0x40;
            auVar69[12] = (char)iVar94;
            auVar69[13] = (char)((uint)iVar94 >> 8);
            iVar78 = ((uint)((((iVar78 * -0x579 >> 0xf) + 0x9f1) * iVar138 + -0x14610000 >> 0x10) *
                            iVar78) >> 0xf) + 0x3d82;
            uVar3 = ((uint)((((iVar83 * -0x579 >> 0xf) + 0x9f1) * iVar139 + -0x14610000 >> 0x10) *
                           iVar83) >> 0xf) + 0x3d82;
            iVar83 = ((uint)((((iVar85 * -0x579 >> 0xf) + 0x9f1) * iVar140 + -0x14610000 >> 0x10) *
                            iVar85) >> 0xf) + 0x3d82;
            iVar85 = ((uint)((((iVar110 * -0x579 >> 0xf) + 0x9f1) * iVar123 + -0x14610000 >> 0x10) *
                            iVar110) >> 0xf) + 0x3d82;
            uVar167 = ((uint)((auVar14._8_4_ + ((iVar111 * -0x579 >> 0xf) + 0x9f1) * iVar148 >> 0x10
                              ) * iVar111) >> 0xf) + 0x3d82;
            iVar86 = ((uint)((((iVar121 * -0x579 >> 0xf) + 0x9f1) * iVar169 + -0x14610000 >> 0x10) *
                            iVar121) >> 0xf) + 0x3d82;
            uVar131 = (uint)(ushort)((short)((uint)((((iVar84 * -0x579 >> 0xf) + 0x9f1) * iVar132 +
                                                     -0x14610000 >> 0x10) * iVar84) >> 0xf) + 0x3d82
                                    );
            auVar55._0_12_ = ZEXT212((ushort)uVar3) << 0x40;
            auVar55[12] = (char)iVar83;
            auVar55[13] = (char)((uint)iVar83 >> 8);
            uVar150 = (uint)(ushort)((short)((uint)((((iVar109 * -0x579 >> 0xf) + 0x9f1) * iVar122 +
                                                     -0x14610000 >> 0x10) * iVar109) >> 0xf) +
                                    0x3d82);
            auVar142._0_12_ = ZEXT212((ushort)uVar167) << 0x40;
            auVar142[12] = (char)iVar86;
            auVar142[13] = (char)((uint)iVar86 >> 8);
            auVar75 = NEON_cmeq(auVar75,0,2);
            auVar57 = NEON_cmeq(auVar57,0,2);
            auVar89 = NEON_cmeq(auVar89,0,2);
            auVar80 = NEON_cmeq(auVar80,0,2);
            auVar79._0_2_ = auVar57._0_2_;
            auVar79._2_2_ = auVar57._4_2_;
            auVar79._4_2_ = auVar57._8_2_;
            auVar79._6_2_ = auVar57._12_2_;
            auVar79._8_2_ = auVar75._0_2_;
            auVar79._10_2_ = auVar75._4_2_;
            auVar79._12_2_ = auVar75._8_2_;
            auVar79._14_2_ = auVar75._12_2_;
            auVar56._0_2_ =
                 (uVar20 ^ 0x1f) * 0x400 + (short)((int)(uVar26 * iVar141 + -0x1a890000) >> 0x14) +
                 -0x2c00;
            auVar56._2_2_ =
                 ((ushort)((uint)uVar32 >> 0x10) ^ 0x1f) * 0x400 +
                 (short)((int)((uint)(ushort)(CONCAT15((char)((uint)iVar92 >> 8),
                                                       CONCAT14((char)iVar92,uVar26)) >> 0x20) *
                               iVar147 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar56._4_2_ =
                 ((ushort)((uint6)uVar33 >> 0x20) ^ 0x1f) * 0x400 +
                 (short)((int)((uVar72 & 0xffff) * iVar149 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar56._6_2_ =
                 (short)(uVar31 >> 0x30) * 0x400 +
                 (short)((int)((uint)auVar69._12_2_ * iVar151 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar56._8_2_ =
                 (short)((unkuint10)auVar124._0_10_ >> 0x40) * 0x400 +
                 (short)((int)(uVar59 * (iVar152 >> 0xf) + -0x1a890000) >> 0x14) + -0x2c00;
            auVar56._10_2_ =
                 auVar124._10_2_ * 0x400 +
                 (short)((int)((uint)(ushort)(CONCAT15((char)((uint)iVar93 >> 8),
                                                       CONCAT14((char)iVar93,uVar59)) >> 0x20) *
                               (iVar157 >> 0xf) + -0x1a890000) >> 0x14) + -0x2c00;
            auVar56._12_2_ =
                 auVar125._12_2_ * 0x400 +
                 (short)((int)((uVar64 & 0xffff) * (iVar158 >> 0xf) + -0x1a890000) >> 0x14) +
                 -0x2c00;
            auVar56._14_2_ =
                 auVar128._14_2_ * 0x400 +
                 (short)((int)((uint)auVar62._12_2_ * (iVar160 >> 0xf) + -0x1a890000) >> 0x14) +
                 -0x2c00;
            auVar88._2_2_ = auVar80._4_2_;
            auVar88._0_2_ = auVar80._0_2_;
            auVar88._4_2_ = auVar80._8_2_;
            auVar88._6_2_ = auVar80._12_2_;
            auVar88._8_2_ = auVar89._0_2_;
            auVar88._10_2_ = auVar89._4_2_;
            auVar88._12_2_ = auVar89._8_2_;
            auVar88._14_2_ = auVar89._12_2_;
            auVar73._0_2_ =
                 (uVar19 ^ 0x1f) * 0x400 + (short)((int)(uVar131 * iVar132 + -0x1a890000) >> 0x14) +
                 -0x2c00;
            auVar73._2_2_ =
                 ((ushort)((uint)uVar29 >> 0x10) ^ 0x1f) * 0x400 +
                 (short)((int)((uint)(ushort)(CONCAT15((char)((uint)iVar78 >> 8),
                                                       CONCAT14((char)iVar78,uVar131)) >> 0x20) *
                               iVar138 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar73._4_2_ =
                 ((ushort)((uint6)uVar30 >> 0x20) ^ 0x1f) * 0x400 +
                 (short)((int)((uVar3 & 0xffff) * iVar139 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar73._6_2_ =
                 (short)(uVar52 >> 0x30) * 0x400 +
                 (short)((int)((uint)auVar55._12_2_ * iVar140 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar73._8_2_ =
                 (short)((unkuint10)auVar112._0_10_ >> 0x40) * 0x400 +
                 (short)((int)(uVar150 * iVar122 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar73._10_2_ =
                 auVar112._10_2_ * 0x400 +
                 (short)((int)((uint)(ushort)(CONCAT15((char)((uint)iVar85 >> 8),
                                                       CONCAT14((char)iVar85,uVar150)) >> 0x20) *
                               iVar123 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar73._12_2_ =
                 auVar114._12_2_ * 0x400 +
                 (short)((int)((uVar167 & 0xffff) * iVar148 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar73._14_2_ =
                 auVar118._14_2_ * 0x400 +
                 (short)((int)((uint)auVar142._12_2_ * iVar169 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar57 = *pauVar42;
            auVar17._8_2_ = 0x8801;
            auVar17._0_8_ = 0x8801880188018801;
            auVar17._10_2_ = 0x8801;
            auVar17._12_2_ = 0x8801;
            auVar17._14_2_ = 0x8801;
            auVar75 = NEON_bit(auVar56,auVar17,auVar79,1);
            auVar18._8_2_ = 0x8801;
            auVar18._0_8_ = 0x8801880188018801;
            auVar18._10_2_ = 0x8801;
            auVar18._12_2_ = 0x8801;
            auVar18._14_2_ = 0x8801;
            auVar80 = NEON_bit(auVar73,auVar18,auVar88,1);
            auVar74._0_8_ =
                 CONCAT26(auVar80._6_2_ + auVar57[3] * -0x40,
                          CONCAT24(auVar80._4_2_ + auVar57[2] * -0x40,
                                   CONCAT22(auVar80._2_2_ + auVar57[1] * -0x40,
                                            auVar80._0_2_ + auVar57[0] * -0x40)));
            auVar74._8_2_ = auVar80._8_2_ + auVar57[4] * -0x40;
            auVar74._10_2_ = auVar80._10_2_ + auVar57[5] * -0x40;
            auVar74._12_2_ = auVar80._12_2_ + auVar57[6] * -0x40;
            auVar74._14_2_ = auVar80._14_2_ + auVar57[7] * -0x40;
            puVar44[1] = auVar74._8_8_;
            *puVar44 = auVar74._0_8_;
            *(short *)(puVar44 + 4) = auVar75._8_2_ + auVar57[12] * -0x40;
            *(short *)((long)puVar44 + 0x22) = auVar75._10_2_ + auVar57[13] * -0x40;
            *(short *)((long)puVar44 + 0x24) = auVar75._12_2_ + auVar57[14] * -0x40;
            *(short *)((long)puVar44 + 0x26) = auVar75._14_2_ + auVar57[15] * -0x40;
            *(short *)(puVar44 + 2) = auVar75._0_2_ + auVar57[8] * -0x40;
            *(short *)((long)puVar44 + 0x12) = auVar75._2_2_ + auVar57[9] * -0x40;
            *(short *)((long)puVar44 + 0x14) = auVar75._4_2_ + auVar57[10] * -0x40;
            *(short *)((long)puVar44 + 0x16) = auVar75._6_2_ + auVar57[11] * -0x40;
            pauVar42 = pauVar42 + 1;
            pauVar48 = pauVar48 + 4;
            puVar44 = puVar44 + 4;
          } while (uVar45 != 0);
          if (uVar41 != uVar46) {
            uVar45 = uVar41;
            if ((param_2 >> 3 & 1) != 0) goto LAB_00e6fbd0;
            goto LAB_00e6fd74;
          }
        }
        uVar45 = uVar46;
        puVar44 = puVar34;
        uVar52 = uVar35;
        if (uVar47 < 0x10) {
LAB_00e6fd40:
          do {
            *(undefined2 *)((long)puVar37 + uVar45 * 2) = 0xc800;
            uVar45 = uVar45 + 1;
          } while ((long)param_3 != uVar45);
        }
        else {
          do {
            *(undefined2 *)puVar44 = 0xc800;
            *(undefined2 *)((long)puVar44 + 2) = 0xc800;
            *(undefined2 *)((long)puVar44 + 4) = 0xc800;
            *(undefined2 *)((long)puVar44 + 6) = 0xc800;
            puVar44[-2] = 0xc800c800c800c800;
            *(undefined2 *)(puVar44 + 2) = 0xc800;
            *(undefined2 *)((long)puVar44 + 0x12) = 0xc800;
            *(undefined2 *)((long)puVar44 + 0x14) = 0xc800;
            *(undefined2 *)((long)puVar44 + 0x16) = 0xc800;
            *puVar44 = 0xc800c800c800c800;
            uVar52 = uVar52 - 0x10;
            puVar44 = puVar44 + 4;
          } while (uVar52 != 0);
          uVar45 = uVar35 + uVar46;
          if (uVar47 != uVar35) goto LAB_00e6fd40;
        }
        uVar40 = uVar40 + 1;
        puVar37 = (undefined8 *)((long)puVar37 + lVar50 * 2);
        pauVar36 = (undefined (*) [16])(*pauVar36 + lVar50 * 4);
        puVar34 = (undefined8 *)((long)puVar34 + lVar50 * 2);
      } while (uVar40 != param_6);
    }
    else {
      uVar35 = (ulong)param_2;
      uVar40 = 0;
      if ((int)param_6 < 2) {
        param_6 = 1;
      }
      uVar46 = uVar35 & 0xfffffff0;
      pauVar36 = param_4;
      puVar34 = param_5;
      do {
        if (param_2 < 8) {
          uVar47 = 0;
LAB_00e70324:
          do {
            iVar78 = *(int *)(*pauVar36 + uVar47 * 4);
            if (iVar78 == 0) {
              sVar49 = -0x7fff;
            }
            else {
              uVar3 = (uint)LZCOUNT(iVar78) ^ 0x1f;
              iVar83 = iVar78 >> (uVar3 - 0xf & 0x1f);
              if (uVar3 < 0xf || uVar3 - 0xf == 0) {
                iVar83 = iVar78 << (ulong)(0xf - uVar3 & 0x1f);
              }
              iVar78 = iVar83 * 0x10000 + 0x40000000;
              iVar83 = iVar78 >> 0x10;
              iVar78 = iVar78 >> 0xf;
              sVar49 = (short)uVar3 * 0x400 +
                       (short)((int)((((uint)((((iVar83 * -0x579 >> 0xf) + 0x9f1) * iVar78 +
                                               -0x14610000 >> 0x10) * iVar83) >> 0xf) + 0x3d82 &
                                     0xffff) * iVar78 + -0x1a890000) >> 0x14) + -0x3400;
            }
            *(short *)((long)puVar34 + uVar47 * 2) =
                 sVar49 + (char)(&eMeans)[uVar47] * -0x40 + 0x800;
            uVar47 = uVar47 + 1;
joined_r0x00e702fc:
          } while (uVar47 != uVar35);
        }
        else {
          lVar51 = uVar40 * lVar50;
          puVar1 = (undefined1 *)((long)param_5 + lVar51 * 2);
          puVar2 = (undefined1 *)((long)param_5 + (lVar51 + uVar35) * 2);
          uVar47 = 0;
          if ((puVar1 < *param_4 + (lVar51 + uVar35) * 4 && *param_4 + lVar51 * 4 < puVar2) ||
             (puVar1 < &eMeans + uVar35 && &eMeans < puVar2)) goto LAB_00e70324;
          puVar37 = puVar34;
          uVar47 = uVar46;
          pauVar42 = (undefined (*) [16])&eMeans;
          pauVar48 = pauVar36;
          if (param_2 < 0x10) {
            uVar47 = 0;
LAB_00e701c8:
            lVar43 = uVar47 << 1;
            lVar51 = uVar47 << 2;
            lVar39 = uVar47 - (uVar35 & 0xfffffff8);
            puVar37 = (undefined8 *)(&eMeans + uVar47);
            do {
              pauVar42 = (undefined (*) [16])(*pauVar36 + lVar51);
              lVar51 = lVar51 + 0x20;
              lVar39 = lVar39 + 8;
              auVar75 = *pauVar42;
              auVar57 = pauVar42[1];
              auVar89 = NEON_clz(auVar75,4);
              auVar80 = NEON_clz(auVar57,4);
              uVar22 = CONCAT15(auVar80[9],
                                CONCAT14(auVar80[8],
                                         CONCAT13(auVar80[5],CONCAT12(auVar80[4],auVar80._0_2_))));
              uVar21 = uVar22 ^ 0x1f001f001f;
              uVar19 = auVar89._0_2_;
              uVar24 = CONCAT15(auVar89[9],
                                CONCAT14(auVar89[8],CONCAT13(auVar89[5],CONCAT12(auVar89[4],uVar19))
                                        ));
              uVar23 = uVar24 ^ 0x1f001f001f;
              uVar29 = CONCAT13(auVar89[5],CONCAT12(auVar89[4],uVar19));
              uVar30 = CONCAT15(auVar89[9],CONCAT14(auVar89[8],uVar29));
              uVar47 = CONCAT17(auVar89[13],CONCAT16(auVar89[12],uVar30)) ^ 0x1f001f001f001f;
              auVar96._0_10_ = CONCAT19(auVar80[1],CONCAT18(auVar80[0] ^ 0x1f,uVar47));
              auVar96[10] = auVar80[4] ^ 0x1f;
              auVar96[11] = auVar80[5];
              auVar98[12] = auVar80[8] ^ 0x1f;
              auVar98._0_12_ = auVar96;
              auVar98[13] = auVar80[9];
              auVar100[14] = auVar80[12] ^ 0x1f;
              auVar100._0_14_ = auVar98;
              auVar100[15] = auVar80[13];
              auVar82._0_4_ = 0xf - (uint)(ushort)(auVar80._0_2_ ^ 0x1f);
              auVar82._4_4_ = 0xf - (uint)(ushort)(uVar21 >> 0x10);
              auVar82._8_4_ = 0xf - (uint)(ushort)(uVar21 >> 0x20);
              auVar82._12_4_ =
                   0xf - (uint)(ushort)((ushort)(CONCAT17(auVar80[13],CONCAT16(auVar80[12],uVar22))
                                                >> 0x30) ^ 0x1f);
              auVar91._0_4_ = 0xf - (uint)(uVar19 ^ 0x1f);
              auVar91._4_4_ = 0xf - (uint)(ushort)(uVar23 >> 0x10);
              auVar91._8_4_ = 0xf - (uint)(ushort)(uVar23 >> 0x20);
              auVar91._12_4_ =
                   0xf - (uint)(ushort)((ushort)(CONCAT17(auVar89[13],CONCAT16(auVar89[12],uVar24))
                                                >> 0x30) ^ 0x1f);
              auVar5._8_2_ = 0xf;
              auVar5._0_8_ = 0xf000f000f000f;
              auVar5._10_2_ = 0xf;
              auVar5._12_2_ = 0xf;
              auVar5._14_2_ = 0xf;
              auVar104 = NEON_cmhi(auVar100,auVar5,2);
              auVar119 = NEON_sshl(auVar57,auVar82,4);
              auVar80 = NEON_ushl(auVar57,auVar82,4);
              auVar130._0_4_ = (int)auVar104._8_2_;
              auVar130._4_4_ = (int)auVar104._10_2_;
              auVar130._8_4_ = (int)auVar104._12_2_;
              auVar130._12_4_ = (int)auVar104._14_2_;
              auVar136 = NEON_sshl(auVar75,auVar91,4);
              auVar89 = NEON_ushl(auVar75,auVar91,4);
              auVar107._0_4_ = (int)auVar104._0_2_;
              auVar107._4_4_ = (int)auVar104._2_2_;
              auVar107._8_4_ = (int)auVar104._4_2_;
              auVar107._12_4_ = (int)auVar104._6_2_;
              auVar80 = NEON_bit(auVar80,auVar119,auVar130,1);
              auVar57 = NEON_cmeq(auVar57,0,2);
              auVar75 = NEON_cmeq(auVar75,0,2);
              auVar89 = NEON_bit(auVar89,auVar136,auVar107,1);
              auVar54._2_2_ = auVar75._4_2_;
              auVar54._0_2_ = auVar75._0_2_;
              auVar54._4_2_ = auVar75._8_2_;
              auVar54._6_2_ = auVar75._12_2_;
              auVar54._8_2_ = auVar57._0_2_;
              auVar54._10_2_ = auVar57._4_2_;
              auVar54._12_2_ = auVar57._8_2_;
              auVar54._14_2_ = auVar57._12_2_;
              iVar78 = auVar80._0_4_ * 0x10000 + 0x40000000;
              iVar83 = auVar80._4_4_ * 0x10000 + 0x40000000;
              iVar84 = auVar80._8_4_ * 0x10000 + 0x40000000;
              iVar85 = auVar80._12_4_ * 0x10000 + 0x40000000;
              iVar86 = auVar89._0_4_ * 0x10000 + 0x40000000;
              iVar92 = auVar89._4_4_ * 0x10000 + 0x40000000;
              iVar93 = auVar89._8_4_ * 0x10000 + 0x40000000;
              iVar94 = auVar89._12_4_ * 0x10000 + 0x40000000;
              iVar101 = iVar78 >> 0x10;
              iVar108 = iVar83 >> 0x10;
              iVar109 = iVar84 >> 0x10;
              iVar110 = iVar85 >> 0x10;
              iVar78 = iVar78 >> 0xf;
              iVar83 = iVar83 >> 0xf;
              iVar84 = iVar84 >> 0xf;
              iVar85 = iVar85 >> 0xf;
              iVar111 = iVar86 >> 0x10;
              iVar121 = iVar92 >> 0x10;
              iVar122 = iVar93 >> 0x10;
              iVar123 = iVar94 >> 0x10;
              iVar86 = iVar86 >> 0xf;
              iVar92 = iVar92 >> 0xf;
              iVar93 = iVar93 >> 0xf;
              iVar94 = iVar94 >> 0xf;
              iVar148 = ((uint)((((iVar108 * -0x579 >> 0xf) + 0x9f1) * iVar83 + -0x14610000 >> 0x10)
                               * iVar108) >> 0xf) + 0x3d82;
              uVar150 = ((uint)((((iVar109 * -0x579 >> 0xf) + 0x9f1) * iVar84 + -0x14610000 >> 0x10)
                               * iVar109) >> 0xf) + 0x3d82;
              iVar110 = ((uint)((((iVar110 * -0x579 >> 0xf) + 0x9f1) * iVar85 + -0x14610000 >> 0x10)
                               * iVar110) >> 0xf) + 0x3d82;
              iVar108 = ((uint)((((iVar121 * -0x579 >> 0xf) + 0x9f1) * iVar92 + -0x14610000 >> 0x10)
                               * iVar121) >> 0xf) + 0x3d82;
              uVar131 = ((uint)((((iVar122 * -0x579 >> 0xf) + 0x9f1) * iVar93 + -0x14610000 >> 0x10)
                               * iVar122) >> 0xf) + 0x3d82;
              iVar109 = ((uint)((((iVar123 * -0x579 >> 0xf) + 0x9f1) * iVar94 + -0x14610000 >> 0x10)
                               * iVar123) >> 0xf) + 0x3d82;
              uVar3 = (uint)(ushort)((short)((uint)((((iVar101 * -0x579 >> 0xf) + 0x9f1) * iVar78 +
                                                     -0x14610000 >> 0x10) * iVar101) >> 0xf) +
                                    0x3d82);
              auVar117._0_12_ = ZEXT212((ushort)uVar150) << 0x40;
              auVar117[12] = (char)iVar110;
              auVar117[13] = (char)((uint)iVar110 >> 8);
              uVar26 = (uint)(ushort)((short)((uint)((((iVar111 * -0x579 >> 0xf) + 0x9f1) * iVar86 +
                                                      -0x14610000 >> 0x10) * iVar111) >> 0xf) +
                                     0x3d82);
              auVar127._0_12_ = ZEXT212((ushort)uVar131) << 0x40;
              auVar127[12] = (undefined)iVar109;
              auVar127[13] = (undefined)((uint)iVar109 >> 8);
              uVar87 = *puVar37;
              auVar77._0_2_ =
                   (uVar19 ^ 0x1f) * 0x400 + (short)((int)(uVar26 * iVar86 + -0x1a890000) >> 0x14) +
                   -0x2c00;
              auVar77._2_2_ =
                   ((ushort)((uint)uVar29 >> 0x10) ^ 0x1f) * 0x400 +
                   (short)((int)((uint)(ushort)(CONCAT15((char)((uint)iVar108 >> 8),
                                                         CONCAT14((char)iVar108,uVar26)) >> 0x20) *
                                 iVar92 + -0x1a890000) >> 0x14) + -0x2c00;
              auVar77._4_2_ =
                   ((ushort)((uint6)uVar30 >> 0x20) ^ 0x1f) * 0x400 +
                   (short)((int)((uVar131 & 0xffff) * iVar93 + -0x1a890000) >> 0x14) + -0x2c00;
              auVar77._6_2_ =
                   (short)(uVar47 >> 0x30) * 0x400 +
                   (short)((int)((uint)auVar127._12_2_ * iVar94 + -0x1a890000) >> 0x14) + -0x2c00;
              auVar77._8_2_ =
                   (short)((unkuint10)auVar96._0_10_ >> 0x40) * 0x400 +
                   (short)((int)(uVar3 * iVar78 + -0x1a890000) >> 0x14) + -0x2c00;
              auVar77._10_2_ =
                   auVar96._10_2_ * 0x400 +
                   (short)((int)((uint)(ushort)(CONCAT15((char)((uint)iVar148 >> 8),
                                                         CONCAT14((char)iVar148,uVar3)) >> 0x20) *
                                 iVar83 + -0x1a890000) >> 0x14) + -0x2c00;
              auVar77._12_2_ =
                   auVar98._12_2_ * 0x400 +
                   (short)((int)((uVar150 & 0xffff) * iVar84 + -0x1a890000) >> 0x14) + -0x2c00;
              auVar77._14_2_ =
                   auVar100._14_2_ * 0x400 +
                   (short)((int)((uint)auVar117._12_2_ * iVar85 + -0x1a890000) >> 0x14) + -0x2c00;
              auVar15._8_2_ = 0x8801;
              auVar15._0_8_ = 0x8801880188018801;
              auVar15._10_2_ = 0x8801;
              auVar15._12_2_ = 0x8801;
              auVar15._14_2_ = 0x8801;
              auVar57 = NEON_bsl(auVar54,auVar15,auVar77,1);
              psVar4 = (short *)((long)puVar34 + lVar43);
              psVar4[8] = auVar57._8_2_ + (char)((ulong)uVar87 >> 0x20) * -0x40;
              psVar4[9] = auVar57._10_2_ + (char)((ulong)uVar87 >> 0x28) * -0x40;
              psVar4[10] = auVar57._12_2_ + (char)((ulong)uVar87 >> 0x30) * -0x40;
              psVar4[0xb] = auVar57._14_2_ + (char)((ulong)uVar87 >> 0x38) * -0x40;
              *psVar4 = auVar57._0_2_ + (char)uVar87 * -0x40;
              psVar4[1] = auVar57._2_2_ + (char)((ulong)uVar87 >> 8) * -0x40;
              psVar4[2] = auVar57._4_2_ + (char)((ulong)uVar87 >> 0x10) * -0x40;
              psVar4[3] = auVar57._6_2_ + (char)((ulong)uVar87 >> 0x18) * -0x40;
              lVar43 = lVar43 + 0x10;
              puVar37 = puVar37 + 1;
              uVar47 = uVar35 & 0xfffffff8;
              if (lVar39 == 0) goto joined_r0x00e702fc;
            } while( true );
          }
          do {
            auVar89 = *pauVar48;
            auVar104 = pauVar48[1];
            uVar47 = uVar47 - 0x10;
            auVar57 = NEON_clz(auVar89,4);
            auVar119 = pauVar48[2];
            auVar136 = pauVar48[3];
            auVar80 = NEON_clz(auVar104,4);
            auVar75 = NEON_clz(auVar119,4);
            auVar143 = NEON_clz(auVar136,4);
            uVar20 = auVar57._0_2_;
            uVar21 = CONCAT15(auVar57[9],
                              CONCAT14(auVar57[8],CONCAT13(auVar57[5],CONCAT12(auVar57[4],uVar20))))
            ;
            uVar29 = CONCAT13(auVar57[5],CONCAT12(auVar57[4],uVar20));
            uVar30 = CONCAT15(auVar57[9],CONCAT14(auVar57[8],uVar29));
            uVar41 = CONCAT17(auVar57[13],CONCAT16(auVar57[12],uVar30)) ^ 0x1f001f001f001f;
            auVar102._0_10_ = CONCAT19(auVar80[1],CONCAT18(auVar80[0] ^ 0x1f,uVar41));
            auVar102[10] = auVar80[4] ^ 0x1f;
            auVar102[11] = auVar80[5];
            auVar103[12] = auVar80[8] ^ 0x1f;
            auVar103._0_12_ = auVar102;
            auVar103[13] = auVar80[9];
            auVar106[14] = auVar80[12] ^ 0x1f;
            auVar106._0_14_ = auVar103;
            auVar106[15] = auVar80[13];
            uVar19 = auVar75._0_2_;
            uVar23 = CONCAT15(auVar75[9],
                              CONCAT14(auVar75[8],CONCAT13(auVar75[5],CONCAT12(auVar75[4],uVar19))))
            ;
            uVar22 = uVar23 ^ 0x1f001f0000;
            uVar25 = CONCAT15(auVar80[9],
                              CONCAT14(auVar80[8],
                                       CONCAT13(auVar80[5],CONCAT12(auVar80[4],auVar80._0_2_))));
            uVar24 = uVar25 ^ 0x1f001f001f;
            uVar32 = CONCAT13(auVar75[5],CONCAT12(auVar75[4],uVar19));
            uVar33 = CONCAT15(auVar75[9],CONCAT14(auVar75[8],uVar32));
            uVar45 = CONCAT17(auVar75[13],CONCAT16(auVar75[12],uVar33)) ^ 0x1f001f001f001f;
            auVar113._0_10_ = CONCAT19(auVar143[1],CONCAT18(auVar143[0] ^ 0x1f,uVar45));
            auVar113[10] = auVar143[4] ^ 0x1f;
            auVar113[11] = auVar143[5];
            auVar116[12] = auVar143[8] ^ 0x1f;
            auVar116._0_12_ = auVar113;
            auVar116[13] = auVar143[9];
            auVar120[14] = auVar143[12] ^ 0x1f;
            auVar120._0_14_ = auVar116;
            auVar120[15] = auVar143[13];
            uVar28 = CONCAT15(auVar143[9],
                              CONCAT14(auVar143[8],
                                       CONCAT13(auVar143[5],CONCAT12(auVar143[4],auVar143._0_2_))));
            uVar27 = uVar28 ^ 0x1f001f001f;
            auVar137._0_4_ = 0xf - (uint)(ushort)(uVar21 ^ 0x1f001f);
            auVar137._4_4_ = 0xf - (uint)(ushort)((uVar21 ^ 0x1f001f) >> 0x10);
            auVar137._8_4_ = 0xf - (uint)(ushort)((ushort)(uVar21 >> 0x20) ^ 0x1f);
            auVar137._12_4_ =
                 0xf - (uint)(ushort)((ushort)(CONCAT17(auVar57[13],CONCAT16(auVar57[12],uVar21)) >>
                                              0x30) ^ 0x1f);
            auVar57._8_2_ = 0xf;
            auVar57._0_8_ = 0xf000f000f000f;
            auVar57._10_2_ = 0xf;
            auVar57._12_2_ = 0xf;
            auVar57._14_2_ = 0xf;
            auVar145 = NEON_cmhi(auVar106,auVar57,2);
            auVar146._0_4_ = 0xf - (uint)(uVar19 ^ 0x1f);
            auVar146._4_4_ = 0xf - (uint)(ushort)(uVar22 >> 0x10);
            auVar146._8_4_ = 0xf - (uint)(ushort)(uVar22 >> 0x20);
            auVar146._12_4_ =
                 0xf - (uint)(ushort)((ushort)(CONCAT17(auVar75[13],CONCAT16(auVar75[12],uVar23)) >>
                                              0x30) ^ 0x1f);
            auVar75._8_2_ = 0xf;
            auVar75._0_8_ = 0xf000f000f000f;
            auVar75._10_2_ = 0xf;
            auVar75._12_2_ = 0xf;
            auVar75._14_2_ = 0xf;
            auVar57 = NEON_cmhi(auVar120,auVar75,2);
            auVar75 = NEON_sshl(auVar89,auVar137,4);
            auVar135._0_4_ = (int)auVar145._8_2_;
            auVar135._4_4_ = (int)auVar145._10_2_;
            auVar135._8_4_ = (int)auVar145._12_2_;
            auVar135._12_4_ = (int)auVar145._14_2_;
            auVar155._0_4_ = (int)auVar145._0_2_;
            auVar155._4_4_ = (int)auVar145._2_2_;
            auVar155._8_4_ = (int)auVar145._4_2_;
            auVar155._12_4_ = (int)auVar145._6_2_;
            auVar156._0_4_ = 0xf - (uint)(ushort)(auVar143._0_2_ ^ 0x1f);
            auVar156._4_4_ = 0xf - (uint)(ushort)(uVar27 >> 0x10);
            auVar156._8_4_ = 0xf - (uint)(ushort)(uVar27 >> 0x20);
            auVar156._12_4_ =
                 0xf - (uint)(ushort)((ushort)(CONCAT17(auVar143[13],CONCAT16(auVar143[12],uVar28))
                                              >> 0x30) ^ 0x1f);
            cVar65 = (char)(auVar57._2_2_ >> 0xf);
            cVar66 = (char)(auVar57._4_2_ >> 0xf);
            cVar67 = (char)(auVar57._6_2_ >> 0xf);
            auVar163 = NEON_ushl(auVar89,auVar137,4);
            auVar165._0_4_ = 0xf - (uint)(ushort)(auVar80._0_2_ ^ 0x1f);
            auVar165._4_4_ = 0xf - (uint)(ushort)(uVar24 >> 0x10);
            auVar165._8_4_ = 0xf - (uint)(ushort)(uVar24 >> 0x20);
            auVar165._12_4_ =
                 0xf - (uint)(ushort)((ushort)(CONCAT17(auVar80[13],CONCAT16(auVar80[12],uVar25)) >>
                                              0x30) ^ 0x1f);
            auVar143._0_4_ = (int)auVar57._8_2_;
            auVar143._4_4_ = (int)auVar57._10_2_;
            auVar143._8_4_ = (int)auVar57._12_2_;
            auVar143._12_4_ = (int)auVar57._14_2_;
            auVar145 = NEON_sshl(auVar119,auVar146,4);
            auVar154 = NEON_sshl(auVar136,auVar156,4);
            auVar137 = NEON_ushl(auVar119,auVar146,4);
            auVar146 = NEON_ushl(auVar136,auVar156,4);
            auVar163 = NEON_bit(auVar163,auVar75,auVar155,1);
            auVar75 = NEON_sshl(auVar104,auVar165,4);
            auVar156 = NEON_ushl(auVar104,auVar165,4);
            auVar80[3] = (undefined)(auVar57._0_2_ >> 0xf);
            auVar80._0_3_ = (int3)auVar57._0_2_;
            auVar80[4] = auVar57[2];
            auVar80[5] = auVar57[3];
            auVar80[6] = cVar65;
            auVar80[7] = cVar65;
            auVar80[8] = auVar57[4];
            auVar80[9] = auVar57[5];
            auVar80[10] = cVar66;
            auVar80[11] = cVar66;
            auVar80[12] = auVar57[6];
            auVar80[13] = auVar57[7];
            auVar80[14] = cVar67;
            auVar80[15] = cVar67;
            auVar57 = NEON_bit(auVar137,auVar145,auVar80,1);
            auVar80 = NEON_bit(auVar146,auVar154,auVar143,1);
            auVar75 = NEON_bit(auVar156,auVar75,auVar135,1);
            iVar148 = auVar163._0_4_ * 0x10000 + 0x40000000;
            iVar169 = auVar163._4_4_ * 0x10000 + 0x40000000;
            iVar132 = auVar163._8_4_ * 0x10000 + 0x40000000;
            iVar138 = auVar163._12_4_ * 0x10000 + 0x40000000;
            iVar139 = auVar57._0_4_ * 0x10000 + 0x40000000;
            iVar140 = auVar57._4_4_ * 0x10000 + 0x40000000;
            iVar141 = auVar57._8_4_ * 0x10000 + 0x40000000;
            iVar147 = auVar57._12_4_ * 0x10000 + 0x40000000;
            iVar149 = auVar80._0_4_ * 0x10000 + 0x40000000;
            iVar151 = auVar80._4_4_ * 0x10000 + 0x40000000;
            iVar152 = auVar80._8_4_ * 0x10000 + 0x40000000;
            iVar157 = auVar80._12_4_ * 0x10000 + 0x40000000;
            iVar162 = iVar148 >> 0x10;
            iVar166 = iVar169 >> 0x10;
            iVar168 = iVar132 >> 0x10;
            iVar170 = iVar138 >> 0x10;
            iVar158 = auVar75._0_4_ * 0x10000 + 0x40000000;
            iVar160 = auVar75._4_4_ * 0x10000 + 0x40000000;
            iVar159 = auVar75._8_4_ * 0x10000 + 0x40000000;
            iVar161 = auVar75._12_4_ * 0x10000 + 0x40000000;
            iVar86 = iVar139 >> 0x10;
            iVar92 = iVar140 >> 0x10;
            iVar94 = iVar141 >> 0x10;
            iVar101 = iVar147 >> 0x10;
            iVar109 = iVar149 >> 0x10;
            iVar93 = iVar151 >> 0x10;
            iVar108 = iVar152 >> 0x10;
            iVar110 = iVar157 >> 0x10;
            iVar111 = iVar158 >> 0x10;
            iVar121 = iVar160 >> 0x10;
            iVar122 = iVar159 >> 0x10;
            iVar123 = iVar161 >> 0x10;
            iVar149 = iVar149 >> 0xf;
            iVar151 = iVar151 >> 0xf;
            iVar152 = iVar152 >> 0xf;
            iVar157 = iVar157 >> 0xf;
            iVar139 = iVar139 >> 0xf;
            iVar140 = iVar140 >> 0xf;
            iVar141 = iVar141 >> 0xf;
            iVar147 = iVar147 >> 0xf;
            iVar148 = iVar148 >> 0xf;
            iVar169 = iVar169 >> 0xf;
            iVar132 = iVar132 >> 0xf;
            iVar138 = iVar138 >> 0xf;
            iVar158 = iVar158 >> 0xf;
            iVar160 = iVar160 >> 0xf;
            iVar159 = iVar159 >> 0xf;
            iVar161 = iVar161 >> 0xf;
            iVar78 = ((iVar162 * -0x579 >> 0xf) + 0x9f1) * iVar148 + -0x14610000;
            iVar83 = ((iVar166 * -0x579 >> 0xf) + 0x9f1) * iVar169 + -0x14610000;
            iVar84 = ((iVar168 * -0x579 >> 0xf) + 0x9f1) * iVar132 + -0x14610000;
            iVar85 = ((iVar170 * -0x579 >> 0xf) + 0x9f1) * iVar138 + -0x14610000;
            cVar65 = (char)(iVar78 >> 0x1f);
            cVar66 = (char)(iVar83 >> 0x1f);
            cVar67 = (char)(iVar84 >> 0x1f);
            cVar68 = (char)(iVar85 >> 0x1f);
            iVar93 = ((uint)((((iVar93 * -0x579 >> 0xf) + 0x9f1) * iVar151 + -0x14610000 >> 0x10) *
                            iVar93) >> 0xf) + 0x3d82;
            uVar64 = ((uint)((((iVar108 * -0x579 >> 0xf) + 0x9f1) * iVar152 + -0x14610000 >> 0x10) *
                            iVar108) >> 0xf) + 0x3d82;
            iVar108 = ((uint)((((iVar110 * -0x579 >> 0xf) + 0x9f1) * iVar157 + -0x14610000 >> 0x10)
                             * iVar110) >> 0xf) + 0x3d82;
            iVar92 = ((uint)((((iVar92 * -0x579 >> 0xf) + 0x9f1) * iVar140 + -0x14610000 >> 0x10) *
                            iVar92) >> 0xf) + 0x3d82;
            uVar167 = ((uint)((((iVar94 * -0x579 >> 0xf) + 0x9f1) * iVar141 + -0x14610000 >> 0x10) *
                             iVar94) >> 0xf) + 0x3d82;
            iVar94 = ((uint)((((iVar101 * -0x579 >> 0xf) + 0x9f1) * iVar147 + -0x14610000 >> 0x10) *
                            iVar101) >> 0xf) + 0x3d82;
            uVar59 = (uint)(ushort)((short)((uint)((((iVar109 * -0x579 >> 0xf) + 0x9f1) * iVar149 +
                                                    -0x14610000 >> 0x10) * iVar109) >> 0xf) + 0x3d82
                                   );
            auVar60._0_12_ = ZEXT212((ushort)uVar64) << 0x40;
            auVar60[12] = (undefined)iVar108;
            auVar60[13] = (undefined)((uint)iVar108 >> 8);
            uVar26 = (uint)(ushort)((short)((uint)((((iVar86 * -0x579 >> 0xf) + 0x9f1) * iVar139 +
                                                    -0x14610000 >> 0x10) * iVar86) >> 0xf) + 0x3d82)
            ;
            auVar70._0_12_ = ZEXT212((ushort)uVar167) << 0x40;
            auVar70[12] = (char)iVar94;
            auVar70[13] = (char)((uint)iVar94 >> 8);
            iVar83 = ((uint)(CONCAT13(cVar66,CONCAT12(cVar66,(short)((uint)iVar83 >> 0x10))) *
                            iVar166) >> 0xf) + 0x3d82;
            uVar3 = ((uint)(CONCAT13(cVar67,CONCAT12(cVar67,(short)((uint)iVar84 >> 0x10))) *
                           iVar168) >> 0xf) + 0x3d82;
            iVar84 = ((uint)(CONCAT13(cVar68,CONCAT12(cVar68,(short)((uint)iVar85 >> 0x10))) *
                            iVar170) >> 0xf) + 0x3d82;
            iVar85 = ((uint)((((iVar121 * -0x579 >> 0xf) + 0x9f1) * iVar160 + -0x14610000 >> 0x10) *
                            iVar121) >> 0xf) + 0x3d82;
            uVar72 = ((uint)((((iVar122 * -0x579 >> 0xf) + 0x9f1) * iVar159 + -0x14610000 >> 0x10) *
                            iVar122) >> 0xf) + 0x3d82;
            iVar86 = ((uint)((((iVar123 * -0x579 >> 0xf) + 0x9f1) * iVar161 + -0x14610000 >> 0x10) *
                            iVar123) >> 0xf) + 0x3d82;
            uVar131 = (uint)(ushort)((short)((uint)(CONCAT13(cVar65,CONCAT12(cVar65,(short)((uint)
                                                  iVar78 >> 0x10))) * iVar162) >> 0xf) + 0x3d82);
            auVar53._0_12_ = ZEXT212((ushort)uVar3) << 0x40;
            auVar53[12] = (char)iVar84;
            auVar53[13] = (char)((uint)iVar84 >> 8);
            uVar150 = (uint)(ushort)((short)((uint)((((iVar111 * -0x579 >> 0xf) + 0x9f1) * iVar158 +
                                                     -0x14610000 >> 0x10) * iVar111) >> 0xf) +
                                    0x3d82);
            auVar133._0_12_ = ZEXT212((ushort)uVar72) << 0x40;
            auVar133[12] = (char)iVar86;
            auVar133[13] = (char)((uint)iVar86 >> 8);
            auVar75 = NEON_cmeq(auVar136,0,2);
            auVar57 = NEON_cmeq(auVar119,0,2);
            auVar104 = NEON_cmeq(auVar104,0,2);
            auVar80 = NEON_cmeq(auVar89,0,2);
            auVar136._0_2_ = auVar57._0_2_;
            auVar136._2_2_ = auVar57._4_2_;
            auVar136._4_2_ = auVar57._8_2_;
            auVar136._6_2_ = auVar57._12_2_;
            auVar136._8_2_ = auVar75._0_2_;
            auVar136._10_2_ = auVar75._4_2_;
            auVar136._12_2_ = auVar75._8_2_;
            auVar136._14_2_ = auVar75._12_2_;
            auVar119._0_2_ =
                 (uVar19 ^ 0x1f) * 0x400 + (short)((int)(uVar26 * iVar139 + -0x1a890000) >> 0x14) +
                 -0x2c00;
            auVar119._2_2_ =
                 ((ushort)((uint)uVar32 >> 0x10) ^ 0x1f) * 0x400 +
                 (short)((int)((uint)(ushort)(CONCAT15((char)((uint)iVar92 >> 8),
                                                       CONCAT14((char)iVar92,uVar26)) >> 0x20) *
                               iVar140 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar119._4_2_ =
                 ((ushort)((uint6)uVar33 >> 0x20) ^ 0x1f) * 0x400 +
                 (short)((int)((uVar167 & 0xffff) * iVar141 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar119._6_2_ =
                 (short)(uVar45 >> 0x30) * 0x400 +
                 (short)((int)((uint)auVar70._12_2_ * iVar147 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar119._8_2_ =
                 (short)((unkuint10)auVar113._0_10_ >> 0x40) * 0x400 +
                 (short)((int)(uVar59 * iVar149 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar119._10_2_ =
                 auVar113._10_2_ * 0x400 +
                 (short)((int)((uint)(ushort)(CONCAT15((char)((uint)iVar93 >> 8),
                                                       CONCAT14((char)iVar93,uVar59)) >> 0x20) *
                               iVar151 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar119._12_2_ =
                 auVar116._12_2_ * 0x400 +
                 (short)((int)((uVar64 & 0xffff) * iVar152 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar119._14_2_ =
                 auVar120._14_2_ * 0x400 +
                 (short)((int)((uint)auVar60._12_2_ * iVar157 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar163._0_2_ = auVar80._0_2_;
            auVar163._2_2_ = auVar80._4_2_;
            auVar163._4_2_ = auVar80._8_2_;
            auVar163._6_2_ = auVar80._12_2_;
            auVar163._8_2_ = auVar104._0_2_;
            auVar163._10_2_ = auVar104._4_2_;
            auVar163._12_2_ = auVar104._8_2_;
            auVar163._14_2_ = auVar104._12_2_;
            auVar57 = *pauVar42;
            auVar154._0_2_ =
                 (uVar20 ^ 0x1f) * 0x400 + (short)((int)(uVar131 * iVar148 + -0x1a890000) >> 0x14) +
                 -0x2c00;
            auVar154._2_2_ =
                 ((ushort)((uint)uVar29 >> 0x10) ^ 0x1f) * 0x400 +
                 (short)((int)((uint)(ushort)(CONCAT15((char)((uint)iVar83 >> 8),
                                                       CONCAT14((char)iVar83,uVar131)) >> 0x20) *
                               iVar169 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar154._4_2_ =
                 ((ushort)((uint6)uVar30 >> 0x20) ^ 0x1f) * 0x400 +
                 (short)((int)((uVar3 & 0xffff) * iVar132 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar154._6_2_ =
                 (short)(uVar41 >> 0x30) * 0x400 +
                 (short)((int)((uint)auVar53._12_2_ * iVar138 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar154._8_2_ =
                 (short)((unkuint10)auVar102._0_10_ >> 0x40) * 0x400 +
                 (short)((int)(uVar150 * iVar158 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar154._10_2_ =
                 auVar102._10_2_ * 0x400 +
                 (short)((int)((uint)(ushort)(CONCAT15((char)((uint)iVar85 >> 8),
                                                       CONCAT14((char)iVar85,uVar150)) >> 0x20) *
                               iVar160 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar154._12_2_ =
                 auVar103._12_2_ * 0x400 +
                 (short)((int)((uVar72 & 0xffff) * iVar159 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar154._14_2_ =
                 auVar106._14_2_ * 0x400 +
                 (short)((int)((uint)auVar133._12_2_ * iVar161 + -0x1a890000) >> 0x14) + -0x2c00;
            auVar89._8_2_ = 0x8801;
            auVar89._0_8_ = 0x8801880188018801;
            auVar89._10_2_ = 0x8801;
            auVar89._12_2_ = 0x8801;
            auVar89._14_2_ = 0x8801;
            auVar75 = NEON_bit(auVar119,auVar89,auVar136,1);
            auVar104._8_2_ = 0x8801;
            auVar104._0_8_ = 0x8801880188018801;
            auVar104._10_2_ = 0x8801;
            auVar104._12_2_ = 0x8801;
            auVar104._14_2_ = 0x8801;
            auVar80 = NEON_bit(auVar154,auVar104,auVar163,1);
            auVar145._0_8_ =
                 CONCAT26(auVar80._6_2_ + auVar57[3] * -0x40,
                          CONCAT24(auVar80._4_2_ + auVar57[2] * -0x40,
                                   CONCAT22(auVar80._2_2_ + auVar57[1] * -0x40,
                                            auVar80._0_2_ + auVar57[0] * -0x40)));
            auVar145._8_2_ = auVar80._8_2_ + auVar57[4] * -0x40;
            auVar145._10_2_ = auVar80._10_2_ + auVar57[5] * -0x40;
            auVar145._12_2_ = auVar80._12_2_ + auVar57[6] * -0x40;
            auVar145._14_2_ = auVar80._14_2_ + auVar57[7] * -0x40;
            puVar37[1] = auVar145._8_8_;
            *puVar37 = auVar145._0_8_;
            *(short *)(puVar37 + 4) = auVar75._8_2_ + auVar57[12] * -0x40;
            *(short *)((long)puVar37 + 0x22) = auVar75._10_2_ + auVar57[13] * -0x40;
            *(short *)((long)puVar37 + 0x24) = auVar75._12_2_ + auVar57[14] * -0x40;
            *(short *)((long)puVar37 + 0x26) = auVar75._14_2_ + auVar57[15] * -0x40;
            *(short *)(puVar37 + 2) = auVar75._0_2_ + auVar57[8] * -0x40;
            *(short *)((long)puVar37 + 0x12) = auVar75._2_2_ + auVar57[9] * -0x40;
            *(short *)((long)puVar37 + 0x14) = auVar75._4_2_ + auVar57[10] * -0x40;
            *(short *)((long)puVar37 + 0x16) = auVar75._6_2_ + auVar57[11] * -0x40;
            puVar37 = puVar37 + 4;
            pauVar42 = pauVar42 + 1;
            pauVar48 = pauVar48 + 4;
          } while (uVar47 != 0);
          if (uVar46 != uVar35) {
            uVar47 = uVar46;
            if ((param_2 >> 3 & 1) != 0) goto LAB_00e701c8;
            goto LAB_00e70324;
          }
        }
        uVar40 = uVar40 + 1;
        puVar34 = (undefined8 *)((long)puVar34 + lVar50 * 2);
        pauVar36 = (undefined (*) [16])(*pauVar36 + lVar50 * 4);
      } while (uVar40 != param_6);
    }
  }
  return;
}


