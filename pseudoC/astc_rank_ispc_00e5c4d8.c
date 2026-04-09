// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: astc_rank_ispc
// Entry Point: 00e5c4d8
// Size: 2144 bytes
// Signature: undefined astc_rank_ispc(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void astc_rank_ispc(long *param_1,int param_2,int param_3,long param_4,uint *param_5)

{
  float *pfVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined auVar4 [16];
  uint3 uVar5;
  undefined5 uVar6;
  undefined7 uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined8 uVar10;
  undefined auVar11 [16];
  undefined (*pauVar12) [16];
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  byte bVar22;
  byte bVar23;
  byte bVar32;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  uint uVar26;
  byte bVar31;
  byte bVar33;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined auVar28 [16];
  undefined8 uVar45;
  undefined uVar46;
  undefined uVar47;
  undefined uVar48;
  char cVar49;
  undefined uVar50;
  undefined uVar51;
  undefined uVar52;
  char cVar53;
  undefined uVar54;
  undefined uVar55;
  undefined uVar56;
  char cVar57;
  undefined uVar58;
  undefined uVar59;
  undefined uVar60;
  char cVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  int iVar78;
  float fVar79;
  float fVar82;
  float fVar83;
  undefined auVar80 [16];
  float fVar84;
  undefined auVar81 [16];
  int iVar85;
  uint uVar86;
  undefined auVar87 [12];
  int iVar94;
  uint uVar95;
  uint uVar99;
  uint uVar100;
  undefined auVar88 [16];
  undefined auVar89 [16];
  undefined auVar90 [16];
  byte bVar101;
  int iVar102;
  float fVar103;
  int iVar104;
  byte bVar111;
  byte bVar112;
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined auVar110 [16];
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  undefined auVar113 [12];
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  undefined auVar115 [16];
  undefined auVar116 [16];
  int iVar125;
  undefined auVar126 [16];
  undefined auVar127 [16];
  byte bVar128;
  float fVar129;
  byte bVar135;
  ushort uVar136;
  byte bVar137;
  undefined auVar133 [16];
  undefined uVar138;
  undefined uVar139;
  undefined uVar140;
  undefined uVar141;
  undefined uVar142;
  undefined uVar143;
  undefined uVar144;
  undefined uVar145;
  undefined uVar146;
  undefined uVar147;
  undefined uVar148;
  undefined uVar149;
  undefined uVar150;
  undefined uVar151;
  undefined uVar152;
  undefined uVar153;
  short sVar154;
  short sVar155;
  undefined4 local_1d40 [1024];
  float afStack_d40 [40];
  undefined auStack_ca0 [160];
  undefined auStack_c00 [160];
  undefined auStack_b60 [784];
  undefined8 local_850;
  float afStack_848 [254];
  undefined8 local_450;
  undefined8 uStack_448;
  uint local_50;
  uint local_4c;
  uint local_44;
  undefined2 uVar24;
  int iVar25;
  undefined auVar29 [16];
  undefined auVar27 [12];
  undefined auVar30 [16];
  undefined auVar91 [16];
  byte bVar92;
  byte bVar93;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  undefined auVar105 [12];
  undefined auVar106 [12];
  undefined auVar109 [16];
  undefined auVar114 [16];
  undefined6 uVar130;
  undefined auVar131 [12];
  undefined auVar132 [14];
  undefined auVar134 [16];
  
  local_50 = *param_5;
  iVar25 = 0;
  if (local_50 != 0) {
    iVar25 = *(int *)(param_1 + 1) / (int)local_50;
  }
  uVar46 = (undefined)iVar25;
  uVar47 = (undefined)((uint)iVar25 >> 8);
  uVar48 = (undefined)((uint)iVar25 >> 0x10);
  uVar50 = (undefined)((uint)iVar25 >> 0x18);
  iVar20 = param_2 + 1;
  iVar104 = param_2 + 2;
  iVar125 = param_2 + 3;
  auVar28[4] = (char)iVar20;
  auVar28._0_4_ = param_2;
  auVar28[5] = (char)((uint)iVar20 >> 8);
  auVar28[6] = (char)((uint)iVar20 >> 0x10);
  auVar28[7] = (char)((uint)iVar20 >> 0x18);
  auVar28[8] = (char)iVar104;
  auVar28[9] = (char)((uint)iVar104 >> 8);
  auVar28[10] = (char)((uint)iVar104 >> 0x10);
  auVar28[11] = (char)((uint)iVar104 >> 0x18);
  auVar28[12] = (char)iVar125;
  auVar28[13] = (char)((uint)iVar125 >> 8);
  auVar28[14] = (char)((uint)iVar125 >> 0x10);
  auVar28[15] = (char)((uint)iVar125 >> 0x18);
  auVar115[4] = uVar46;
  auVar115._0_4_ = iVar25;
  auVar115[5] = uVar47;
  auVar115[6] = uVar48;
  auVar115[7] = uVar50;
  auVar115[8] = uVar46;
  auVar115[9] = uVar47;
  auVar115[10] = uVar48;
  auVar115[11] = uVar50;
  auVar115[12] = uVar46;
  auVar115[13] = uVar47;
  auVar115[14] = uVar48;
  auVar115[15] = uVar50;
  auVar28 = NEON_cmge(auVar28,auVar115,4);
  bVar23 = SUB161(_DAT_004c4480,0);
  bVar32 = SUB161(_DAT_004c4480,1);
  bVar34 = SUB161(_DAT_004c4480,2);
  bVar36 = SUB161(_DAT_004c4480,3);
  bVar38 = SUB161(_DAT_004c4480,4);
  bVar40 = SUB161(_DAT_004c4480,5);
  bVar42 = SUB161(_DAT_004c4480,6);
  bVar44 = SUB161(_DAT_004c4480,7);
  bVar117 = SUB161(_DAT_004c4480,8);
  bVar118 = SUB161(_DAT_004c4480,9);
  bVar119 = SUB161(_DAT_004c4480,10);
  bVar120 = SUB161(_DAT_004c4480,0xb);
  bVar121 = SUB161(_DAT_004c4480,0xc);
  bVar122 = SUB161(_DAT_004c4480,0xd);
  bVar123 = SUB161(_DAT_004c4480,0xe);
  bVar124 = SUB161(_DAT_004c4480,0xf);
  if (CONCAT13(auVar28[3] & bVar36,
               CONCAT12(auVar28[2] & bVar34,CONCAT11(auVar28[1] & bVar32,auVar28[0] & bVar23))) +
      CONCAT13(auVar28[7] & bVar44,
               CONCAT12(auVar28[6] & bVar42,CONCAT11(auVar28[5] & bVar40,auVar28[4] & bVar38))) +
      CONCAT13(auVar28[11] & bVar120,
               CONCAT12(auVar28[10] & bVar119,CONCAT11(auVar28[9] & bVar118,auVar28[8] & bVar117)))
      + CONCAT13(auVar28[15] & bVar124,
                 CONCAT12(auVar28[14] & bVar123,
                          CONCAT11(auVar28[13] & bVar122,auVar28[12] & bVar121))) != 0xf) {
    local_4c = param_5[1];
    local_44 = param_5[3];
    if (0x40 < (int)local_44) {
      puts("src/kernel_astc.ispc:1247:5: Assertion failed: state->fastSkipTreshold <= 64 \n");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    bVar22 = ~auVar28[0];
    bVar31 = ~auVar28[1];
    uVar24 = CONCAT11(bVar31,bVar22);
    bVar33 = ~auVar28[2];
    bVar35 = ~auVar28[3];
    bVar37 = ~auVar28[4];
    bVar39 = ~auVar28[5];
    bVar41 = ~auVar28[6];
    bVar43 = ~auVar28[7];
    auVar29._0_8_ =
         CONCAT17(bVar43,CONCAT16(bVar41,CONCAT15(bVar39,CONCAT14(bVar37,CONCAT13(bVar35,CONCAT12(
                                                  bVar33,uVar24))))));
    auVar29[8] = ~auVar28[8];
    auVar29[9] = ~auVar28[9];
    auVar29[10] = ~auVar28[10];
    auVar29[11] = ~auVar28[11];
    auVar29[12] = ~auVar28[12];
    auVar29[13] = ~auVar28[13];
    auVar29[14] = ~auVar28[14];
    auVar29[15] = ~auVar28[15];
    if (0 < (int)local_4c) {
      iVar25 = 0;
      uVar26 = 0;
      uVar5 = CONCAT12(bVar37,uVar24);
      uVar16 = CONCAT13(bVar39,uVar5);
      uVar6 = CONCAT14(auVar29[8],uVar16);
      uVar130 = CONCAT15(auVar29[9],uVar6);
      uVar7 = CONCAT16(auVar29[12],uVar130);
      uVar45 = CONCAT17(auVar29[13],uVar7);
      bVar62 = (bVar22 & bVar23) + (bVar37 & bVar38) +
               (auVar29[8] & bVar117) + (auVar29[12] & bVar121);
      do {
        if (0 < (int)local_50) {
          uVar18 = 0;
          iVar78 = *(int *)(param_1 + 2) * (uVar26 + local_4c * param_3);
          lVar19 = *param_1;
          do {
            iVar17 = (int)uVar18;
            iVar85 = iVar78 + (iVar17 + local_50 * param_2) * 4;
            iVar94 = iVar78 + (iVar17 + local_50 * iVar20) * 4;
            uVar14 = CONCAT44(iVar94 + ((uint)(iVar94 >> 0x1f) >> 0x1e),
                              iVar85 + ((uint)(iVar85 >> 0x1f) >> 0x1e)) & 0xfffffffcfffffffc;
            iVar85 = ((int)(iVar78 + (iVar17 + local_50 * iVar104) * 4) / 4) * 4;
            iVar94 = ((int)(iVar78 + (iVar17 + local_50 * iVar125) * 4) / 4) * 4;
            bVar63 = (byte)((int)((uint)uVar5 << 0x1f) >> 0x1f);
            iVar102 = CONCAT13((byte)(uVar14 >> 0x18) & bVar63,
                               CONCAT12((byte)(uVar14 >> 0x10) & bVar63,
                                        CONCAT11((byte)(uVar14 >> 8) & bVar63,(byte)uVar14 & bVar63)
                                       ));
            bVar63 = (byte)((int)((uVar16 >> 0x10) << 0x1f) >> 0x1f);
            auVar105._0_8_ =
                 CONCAT17((byte)(uVar14 >> 0x38) & bVar63,
                          CONCAT16((byte)(uVar14 >> 0x30) & bVar63,
                                   CONCAT15((byte)(uVar14 >> 0x28) & bVar63,
                                            CONCAT14((byte)(uVar14 >> 0x20) & bVar63,iVar102))));
            bVar63 = (byte)((int)((uint)(ushort)((uint6)uVar130 >> 0x20) << 0x1f) >> 0x1f);
            auVar105[8] = (byte)iVar85 & bVar63;
            auVar105[9] = (byte)((uint)iVar85 >> 8) & bVar63;
            auVar105[10] = (byte)((uint)iVar85 >> 0x10) & bVar63;
            auVar105[11] = (byte)((uint)iVar85 >> 0x18) & bVar63;
            bVar63 = (byte)((int)((uint)(ushort)((ulong)uVar45 >> 0x30) << 0x1f) >> 0x1f);
            auVar127[12] = (byte)iVar94 & bVar63;
            auVar127._0_12_ = auVar105;
            auVar127[13] = (byte)((uint)iVar94 >> 8) & bVar63;
            auVar127[14] = (byte)((uint)iVar94 >> 0x10) & bVar63;
            auVar127[15] = (byte)((uint)iVar94 >> 0x18) & bVar63;
            uVar86 = *(uint *)(lVar19 + iVar102);
            uVar95 = *(uint *)(lVar19 + (int)((ulong)auVar105._0_8_ >> 0x20));
            uVar99 = *(uint *)(lVar19 + auVar105._8_4_);
            uVar100 = *(uint *)(lVar19 + auVar127._12_4_);
            auVar89._5_3_ = 0;
            auVar89._0_5_ = CONCAT14((char)uVar95,uVar86) & 0xff000000ff;
            auVar89[8] = (char)uVar99;
            auVar89._9_3_ = 0;
            auVar89[12] = (char)uVar100;
            auVar89._13_3_ = 0;
            auVar28 = NEON_scvtf(auVar89,4);
            lVar13 = (long)(iVar25 + iVar17);
            if ((bVar62 & 1) != 0) {
              local_1d40[lVar13 * 4] = auVar28._0_4_;
            }
            if ((bVar62 >> 1 & 1) != 0) {
              local_1d40[lVar13 * 4 + 1] = auVar28._4_4_;
            }
            if ((bVar62 >> 2 & 1) != 0) {
              local_1d40[lVar13 * 4 + 2] = auVar28._8_4_;
            }
            if ((bVar62 >> 3 & 1) != 0) {
              local_1d40[lVar13 * 4 + 3] = auVar28._12_4_;
            }
            auVar107._5_3_ = 0;
            auVar107._0_5_ = CONCAT14((char)(uVar95 >> 8),uVar86 >> 8) & 0xff000000ff;
            auVar107[8] = (undefined)(uVar99 >> 8);
            auVar107._9_3_ = 0;
            auVar107[12] = (char)(uVar100 >> 8);
            auVar107._13_3_ = 0;
            auVar28 = NEON_scvtf(auVar107,4);
            lVar13 = (long)(iVar25 + iVar17 + 0x40);
            if ((bVar62 & 1) != 0) {
              local_1d40[lVar13 * 4] = auVar28._0_4_;
            }
            if ((bVar62 >> 1 & 1) != 0) {
              local_1d40[lVar13 * 4 + 1] = auVar28._4_4_;
            }
            if ((bVar62 >> 2 & 1) != 0) {
              local_1d40[lVar13 * 4 + 2] = auVar28._8_4_;
            }
            if ((bVar62 >> 3 & 1) != 0) {
              local_1d40[lVar13 * 4 + 3] = auVar28._12_4_;
            }
            auVar108._5_3_ = 0;
            auVar108._0_5_ = CONCAT14((char)(uVar95 >> 0x10),uVar86 >> 0x10) & 0xff000000ff;
            auVar108[8] = (undefined)(uVar99 >> 0x10);
            auVar108._9_3_ = 0;
            auVar108[12] = (char)(uVar100 >> 0x10);
            auVar108._13_3_ = 0;
            auVar28 = NEON_scvtf(auVar108,4);
            lVar13 = (long)(iVar25 + iVar17 + 0x80);
            if ((bVar62 & 1) != 0) {
              local_1d40[lVar13 * 4] = auVar28._0_4_;
            }
            if ((bVar62 >> 1 & 1) != 0) {
              local_1d40[lVar13 * 4 + 1] = auVar28._4_4_;
            }
            if ((bVar62 >> 2 & 1) != 0) {
              local_1d40[lVar13 * 4 + 2] = auVar28._8_4_;
            }
            if ((bVar62 >> 3 & 1) != 0) {
              local_1d40[lVar13 * 4 + 3] = auVar28._12_4_;
            }
            auVar88._0_4_ = uVar86 >> 0x18;
            auVar88._4_4_ = uVar95 >> 0x18;
            auVar88._8_4_ = uVar99 >> 0x18;
            auVar88._12_4_ = uVar100 >> 0x18;
            auVar28 = NEON_scvtf(auVar88,4);
            lVar13 = (long)(iVar25 + iVar17 + 0xc0);
            if ((bVar62 & 1) != 0) {
              local_1d40[lVar13 * 4] = auVar28._0_4_;
            }
            if ((bVar62 >> 1 & 1) != 0) {
              local_1d40[lVar13 * 4 + 1] = auVar28._4_4_;
            }
            if ((bVar62 >> 2 & 1) != 0) {
              local_1d40[lVar13 * 4 + 2] = auVar28._8_4_;
            }
            if ((bVar62 >> 3 & 1) != 0) {
              local_1d40[lVar13 * 4 + 3] = auVar28._12_4_;
            }
            uVar18 = uVar18 + 1;
          } while (local_50 != uVar18);
        }
        uVar26 = uVar26 + 1;
        iVar25 = iVar25 + 8;
      } while (uVar26 != local_4c);
    }
    uVar26 = param_5[2];
    if ((uVar26 == 3) && (0 < (int)local_4c)) {
      uVar16 = 0;
      bVar62 = (bVar22 & bVar23) + (bVar37 & bVar38) +
               (auVar29[8] & bVar117) + (auVar29[12] & bVar121);
      uVar18 = (ulong)local_50;
      iVar25 = 0xc0;
      do {
        if (0 < (int)local_50) {
          uVar14 = uVar18;
          iVar20 = iVar25;
          if ((bVar62 & 1) == 0) {
            if ((bVar62 >> 1 & 1) == 0) {
              do {
                if ((bVar62 >> 2 & 1) != 0) {
                  local_1d40[(long)iVar20 * 4 + 2] = 0x437f0000;
                }
                if ((bVar62 >> 3 & 1) != 0) {
                  local_1d40[(long)iVar20 * 4 + 3] = 0x437f0000;
                }
                uVar14 = uVar14 - 1;
                iVar20 = iVar20 + 1;
              } while (uVar14 != 0);
            }
            else {
              do {
                lVar19 = (long)iVar20;
                local_1d40[lVar19 * 4 + 1] = 0x437f0000;
                if ((bVar62 >> 2 & 1) != 0) {
                  local_1d40[lVar19 * 4 + 2] = 0x437f0000;
                }
                if ((bVar62 >> 3 & 1) != 0) {
                  local_1d40[lVar19 * 4 + 3] = 0x437f0000;
                }
                iVar20 = iVar20 + 1;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
          }
          else {
            do {
              lVar19 = (long)iVar20;
              local_1d40[lVar19 * 4] = 0x437f0000;
              if ((bVar62 >> 1 & 1) != 0) {
                local_1d40[lVar19 * 4 + 1] = 0x437f0000;
              }
              if ((bVar62 >> 2 & 1) != 0) {
                local_1d40[lVar19 * 4 + 2] = 0x437f0000;
              }
              if ((bVar62 >> 3 & 1) != 0) {
                local_1d40[lVar19 * 4 + 3] = 0x437f0000;
              }
              iVar20 = iVar20 + 1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
        }
        uVar16 = uVar16 + 1;
        iVar25 = iVar25 + 8;
      } while (uVar16 != local_4c);
    }
    uVar45 = auVar29._8_8_;
    compute_metrics___un_3C_s_5B_vyastc_rank_state_5D__3E_(local_1d40);
    lVar19 = 0;
    uVar46 = 0xff;
    uVar47 = 0xff;
    uVar48 = 0xff;
    cVar49 = -1;
    uVar50 = 0xff;
    uVar51 = 0xff;
    uVar52 = 0xff;
    cVar53 = -1;
    uVar54 = 0xff;
    uVar55 = 0xff;
    uVar56 = 0xff;
    cVar57 = -1;
    uVar58 = 0xff;
    uVar59 = 0xff;
    uVar60 = 0xff;
    cVar61 = -1;
    iVar25 = -1;
    auVar28 = ZEXT816(0);
    iVar20 = -1;
    do {
      uVar16 = (&DAT_00560040)[lVar19];
      uVar18 = (ulong)(uVar16 >> 0x10) & 7;
      if ((int)uVar18 + 2 <= (int)local_4c) {
        uVar14 = (ulong)(uVar16 >> 0xd) & 7;
        uVar15 = (ulong)(uVar16 >> 5) & 6;
        uVar86 = (uint)uVar15;
        if (((int)uVar14 + 2 <= (int)local_50) && (uVar86 < 3 || uVar26 != 3)) {
          uVar15 = uVar15 + 2 >> 1 & 1;
          uVar21 = (ulong)((uVar16 >> 4 & 3) + 1 & (int)(uVar16 << 0xc) >> 0x1f);
          fVar79 = afStack_d40[uVar15 * 0x14 + uVar21 * 4];
          fVar82 = afStack_d40[uVar15 * 0x14 + uVar21 * 4 + 1];
          fVar83 = afStack_d40[uVar15 * 0x14 + uVar21 * 4 + 2];
          fVar84 = afStack_d40[uVar15 * 0x14 + uVar21 * 4 + 3];
          if (uVar86 < 3) {
            auVar115 = *(undefined (*) [16])(auStack_ca0 + uVar21 * 0x10 + uVar15 * 0x50);
            fVar79 = fVar79 + auVar115._0_4_;
            fVar82 = fVar82 + auVar115._4_4_;
            fVar83 = fVar83 + auVar115._8_4_;
            fVar84 = fVar84 + auVar115._12_4_;
          }
          auVar115 = *(undefined (*) [16])(auStack_c00 + uVar21 * 0x10 + uVar15 * 0x50);
          iVar104 = CONCAT13(cVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46))) + 1;
          uVar46 = (undefined)iVar104;
          uVar47 = (undefined)((uint)iVar104 >> 8);
          uVar48 = (undefined)((uint)iVar104 >> 0x10);
          cVar49 = (char)((uint)iVar104 >> 0x18);
          iVar125 = CONCAT13(cVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50))) + 1;
          uVar50 = (undefined)iVar125;
          uVar51 = (undefined)((uint)iVar125 >> 8);
          uVar52 = (undefined)((uint)iVar125 >> 0x10);
          cVar53 = (char)((uint)iVar125 >> 0x18);
          iVar125 = CONCAT13(cVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54))) + 1;
          uVar54 = (undefined)iVar125;
          uVar55 = (undefined)((uint)iVar125 >> 8);
          uVar56 = (undefined)((uint)iVar125 >> 0x10);
          cVar57 = (char)((uint)iVar125 >> 0x18);
          iVar125 = CONCAT13(cVar61,CONCAT12(uVar60,CONCAT11(uVar59,uVar58))) + 1;
          uVar58 = (undefined)iVar125;
          uVar59 = (undefined)((uint)iVar125 >> 8);
          uVar60 = (undefined)((uint)iVar125 >> 0x10);
          cVar61 = (char)((uint)iVar125 >> 0x18);
          fVar129 = (float)(&DAT_005639f0)[(ulong)uVar16 & 0xf];
          uVar138 = (undefined)local_44;
          uVar139 = (undefined)(local_44 >> 8);
          uVar140 = (undefined)(local_44 >> 0x10);
          uVar141 = (undefined)(local_44 >> 0x18);
          fVar103 = (float)(&DAT_005639f0)[(ulong)(uVar16 >> 8) & 0x1f] *
                    (float)(local_4c * local_50 * 9000);
          auVar127 = *(undefined (*) [16])(auStack_b60 + uVar14 * 0x10 + uVar18 * 0x70);
          auVar4[4] = uVar50;
          auVar4._0_4_ = iVar104;
          auVar4[5] = uVar51;
          auVar4[6] = uVar52;
          auVar4[7] = cVar53;
          auVar4[8] = uVar54;
          auVar4[9] = uVar55;
          auVar4[10] = uVar56;
          auVar4[11] = cVar57;
          auVar4[12] = uVar58;
          auVar4[13] = uVar59;
          auVar4[14] = uVar60;
          auVar4[15] = cVar61;
          auVar8[4] = uVar138;
          auVar8._0_4_ = local_44;
          auVar8[5] = uVar139;
          auVar8[6] = uVar140;
          auVar8[7] = uVar141;
          auVar8[8] = uVar138;
          auVar8[9] = uVar139;
          auVar8[10] = uVar140;
          auVar8[11] = uVar141;
          auVar8[12] = uVar138;
          auVar8[13] = uVar139;
          auVar8[14] = uVar140;
          auVar8[15] = uVar141;
          auVar89 = NEON_cmgt(auVar8,auVar4,4);
          bVar62 = (byte)auVar29._0_8_;
          bVar101 = bVar62 & auVar89[0];
          bVar63 = (byte)((ulong)auVar29._0_8_ >> 8);
          bVar64 = (byte)((ulong)auVar29._0_8_ >> 0x10);
          bVar65 = (byte)((ulong)auVar29._0_8_ >> 0x18);
          iVar104 = CONCAT13(bVar65 & auVar89[3],
                             CONCAT12(bVar64 & auVar89[2],CONCAT11(bVar63 & auVar89[1],bVar101)));
          bVar66 = (byte)((ulong)auVar29._0_8_ >> 0x20);
          bVar111 = bVar66 & auVar89[4];
          bVar67 = (byte)((ulong)auVar29._0_8_ >> 0x28);
          bVar68 = (byte)((ulong)auVar29._0_8_ >> 0x30);
          bVar69 = (byte)((ulong)auVar29._0_8_ >> 0x38);
          bVar112 = bVar69 & auVar89[7];
          auVar106._0_8_ =
               CONCAT17(bVar112,CONCAT16(bVar68 & auVar89[6],
                                         CONCAT15(bVar67 & auVar89[5],CONCAT14(bVar111,iVar104))));
          bVar70 = (byte)uVar45;
          auVar106[8] = bVar70 & auVar89[8];
          bVar71 = (byte)((ulong)uVar45 >> 8);
          auVar106[9] = bVar71 & auVar89[9];
          bVar72 = (byte)((ulong)uVar45 >> 0x10);
          auVar106[10] = bVar72 & auVar89[10];
          bVar73 = (byte)((ulong)uVar45 >> 0x18);
          auVar106[11] = bVar73 & auVar89[11];
          bVar74 = (byte)((ulong)uVar45 >> 0x20);
          auVar109[12] = bVar74 & auVar89[12];
          auVar109._0_12_ = auVar106;
          bVar75 = (byte)((ulong)uVar45 >> 0x28);
          auVar109[13] = bVar75 & auVar89[13];
          bVar76 = (byte)((ulong)uVar45 >> 0x30);
          auVar109[14] = bVar76 & auVar89[14];
          bVar77 = (byte)((ulong)uVar45 >> 0x38);
          auVar109[15] = bVar77 & auVar89[15];
          iVar125 = NEON_umaxv(auVar109,4);
          auVar81._0_4_ =
               auVar127._0_4_ + 0.0 + fVar79 +
               (auVar115._0_4_ + auVar115._0_4_) * fVar129 + 0.0 + fVar103;
          auVar81._4_4_ =
               auVar127._4_4_ + 0.0 + fVar82 +
               (auVar115._4_4_ + auVar115._4_4_) * fVar129 + 0.0 + fVar103;
          auVar81._8_4_ =
               auVar127._8_4_ + 0.0 + fVar83 +
               (auVar115._8_4_ + auVar115._8_4_) * fVar129 + 0.0 + fVar103;
          auVar81._12_4_ =
               auVar127._12_4_ + 0.0 + fVar84 +
               (auVar115._12_4_ + auVar115._12_4_) * fVar129 + 0.0 + fVar103;
          if (iVar125 != 0) {
            uVar86 = (uint)(bVar101 & bVar23);
            auVar113._0_8_ = CONCAT17(bVar112 & bVar44,(uint7)CONCAT14(bVar111 & bVar38,uVar86));
            auVar113[8] = auVar106[8] & bVar117;
            auVar113[9] = auVar106[9] & bVar118;
            auVar113[10] = auVar106[10] & bVar119;
            auVar113[11] = auVar106[11] & bVar120;
            auVar114[12] = auVar109[12] & bVar121;
            auVar114._0_12_ = auVar113;
            auVar114[13] = auVar109[13] & bVar122;
            auVar114[14] = auVar109[14] & bVar123;
            auVar114[15] = auVar109[15] & bVar124;
            uVar86 = uVar86 + (int)((ulong)auVar113._0_8_ >> 0x20) +
                     auVar113._8_4_ + auVar114._12_4_;
            lVar13 = (long)(iVar25 * 0x10 + 0x10);
            if ((uVar86 & 1) == 0) {
              if ((uVar86 >> 1 & 1) == 0) goto LAB_00e5ca30;
LAB_00e5cba4:
              *(uint *)((long)&local_450 + lVar13 + 4) = uVar16;
              if ((uVar86 >> 2 & 1) != 0) goto LAB_00e5cbac;
LAB_00e5ca34:
              if ((uVar86 >> 3 & 1) == 0) goto LAB_00e5ca38;
LAB_00e5cbb4:
              *(uint *)((long)&uStack_448 + lVar13 + 4) = uVar16;
              pfVar1 = (float *)(*(undefined (*) [16])&local_850 + (iVar20 * 0x10 + 0x10));
            }
            else {
              *(uint *)((long)&local_450 + lVar13) = uVar16;
              if ((uVar86 >> 1 & 1) != 0) goto LAB_00e5cba4;
LAB_00e5ca30:
              if ((uVar86 >> 2 & 1) == 0) goto LAB_00e5ca34;
LAB_00e5cbac:
              *(uint *)((long)&uStack_448 + lVar13) = uVar16;
              if ((uVar86 >> 3 & 1) != 0) goto LAB_00e5cbb4;
LAB_00e5ca38:
              pfVar1 = (float *)(*(undefined (*) [16])&local_850 + (iVar20 * 0x10 + 0x10));
            }
            if ((uVar86 & 1) != 0) {
              *pfVar1 = auVar81._0_4_;
            }
            if ((uVar86 >> 1 & 1) != 0) {
              *(float *)((long)pfVar1 + 4) = auVar81._4_4_;
            }
            if ((uVar86 >> 2 & 1) != 0) {
              *(float *)((long)pfVar1 + 8) = auVar81._8_4_;
            }
            if ((uVar86 >> 3 & 1) != 0) {
              *(float *)((long)pfVar1 + 0xc) = auVar81._12_4_;
            }
            auVar115 = NEON_fmax(auVar28,auVar81,4);
            auVar110._0_4_ = (iVar104 << 0x1f) >> 0x1f;
            auVar110._4_4_ = ((int)((ulong)auVar106._0_8_ >> 0x20) << 0x1f) >> 0x1f;
            auVar110._8_4_ = (auVar106._8_4_ << 0x1f) >> 0x1f;
            auVar110._12_4_ = (auVar109._12_4_ << 0x1f) >> 0x1f;
            auVar28 = NEON_bit(auVar28,auVar115,auVar110,1);
          }
          auVar90[0] = bVar62 & ~auVar89[0];
          auVar90[1] = bVar63 & ~auVar89[1];
          auVar90[2] = bVar64 & ~auVar89[2];
          auVar90[3] = bVar65 & ~auVar89[3];
          auVar90[4] = bVar66 & ~auVar89[4];
          auVar90[5] = bVar67 & ~auVar89[5];
          auVar90[6] = bVar68 & ~auVar89[6];
          auVar90[7] = bVar69 & ~auVar89[7];
          auVar90[8] = bVar70 & ~auVar89[8];
          auVar90[9] = bVar71 & ~auVar89[9];
          auVar90[10] = bVar72 & ~auVar89[10];
          auVar90[11] = bVar73 & ~auVar89[11];
          auVar90[12] = bVar74 & ~auVar89[12];
          auVar90[13] = bVar75 & ~auVar89[13];
          auVar90[14] = bVar76 & ~auVar89[14];
          auVar90[15] = bVar77 & ~auVar89[15];
          iVar104 = NEON_umaxv(auVar90,4);
          if (iVar104 != 0) {
            auVar115 = NEON_fcmgt(auVar28,auVar81,4);
            bVar101 = auVar90[0] & auVar115[0];
            bVar111 = auVar90[1] & auVar115[1];
            bVar112 = auVar90[2] & auVar115[2];
            bVar92 = auVar90[3] & auVar115[3];
            iVar104 = CONCAT13(bVar92,CONCAT12(bVar112,CONCAT11(bVar111,bVar101)));
            bVar93 = auVar90[4] & auVar115[4];
            bVar96 = auVar90[5] & auVar115[5];
            bVar97 = auVar90[6] & auVar115[6];
            bVar98 = auVar90[7] & auVar115[7];
            auVar87._0_8_ =
                 CONCAT17(bVar98,CONCAT16(bVar97,CONCAT15(bVar96,CONCAT14(bVar93,iVar104))));
            auVar87[8] = auVar90[8] & auVar115[8];
            auVar87[9] = auVar90[9] & auVar115[9];
            auVar87[10] = auVar90[10] & auVar115[10];
            auVar87[11] = auVar90[11] & auVar115[11];
            auVar91[12] = auVar90[12] & auVar115[12];
            auVar91._0_12_ = auVar87;
            auVar91[13] = auVar90[13] & auVar115[13];
            auVar91[14] = auVar90[14] & auVar115[14];
            auVar91[15] = auVar90[15] & auVar115[15];
            iVar125 = NEON_umaxv(auVar91,4);
            if (iVar125 != 0) {
              if ((int)local_44 < 1) {
                auVar115 = ZEXT816(0);
              }
              else {
                lVar13 = 0;
                auVar116._4_4_ = uVar16;
                auVar116._0_4_ = uVar16;
                auVar116._8_4_ = uVar16;
                auVar116._12_4_ = uVar16;
                auVar115 = ZEXT816(0);
                pauVar12 = (undefined (*) [16])&local_850;
                uVar16 = local_44;
                do {
                  auVar29._0_8_ = *(undefined8 *)*pauVar12;
                  auVar127 = *pauVar12;
                  auVar89 = NEON_fcmgt(auVar127,auVar81,4);
                  bVar128 = bVar101 & auVar89[0];
                  uVar24 = CONCAT11(bVar111 & auVar89[1],bVar128);
                  iVar78 = CONCAT13(bVar92 & auVar89[3],CONCAT12(bVar112 & auVar89[2],uVar24));
                  bVar135 = bVar93 & auVar89[4];
                  uVar130 = CONCAT15(bVar96 & auVar89[5],CONCAT14(bVar135,iVar78));
                  uVar45 = CONCAT17(bVar98 & auVar89[7],CONCAT16(bVar97 & auVar89[6],uVar130));
                  bVar137 = auVar87[8] & auVar89[8];
                  auVar131._0_10_ = CONCAT19(auVar87[9] & auVar89[9],CONCAT18(bVar137,uVar45));
                  auVar131[10] = auVar87[10] & auVar89[10];
                  auVar131[11] = auVar87[11] & auVar89[11];
                  auVar132[12] = auVar91[12] & auVar89[12];
                  auVar132._0_12_ = auVar131;
                  auVar132[13] = auVar91[13] & auVar89[13];
                  auVar134[14] = auVar91[14] & auVar89[14];
                  auVar134._0_14_ = auVar132;
                  auVar134[15] = auVar91[15] & auVar89[15];
                  iVar125 = NEON_umaxv(auVar134,4);
                  if (iVar125 != 0) {
                    bVar128 = (bVar128 & bVar23) + (bVar135 & bVar38) +
                              (bVar137 & bVar117) + (auVar132[12] & bVar121);
                    if ((bVar128 & 1) == 0) {
                      if ((bVar128 >> 1 & 1) == 0) goto LAB_00e5cb20;
LAB_00e5cb48:
                      *(int *)(*pauVar12 + 4) = auVar81._4_4_;
                      if ((bVar128 >> 2 & 1) != 0) goto LAB_00e5cb54;
LAB_00e5cb24:
                      if ((bVar128 >> 3 & 1) == 0) goto LAB_00e5cb28;
LAB_00e5cb60:
                      *(int *)(*pauVar12 + 0xc) = auVar81._12_4_;
                      uVar10 = *(undefined8 *)(pauVar12[0x40] + 8);
                      uVar146 = (undefined)uVar10;
                      uVar147 = (undefined)((ulong)uVar10 >> 8);
                      uVar148 = (undefined)((ulong)uVar10 >> 0x10);
                      uVar149 = (undefined)((ulong)uVar10 >> 0x18);
                      uVar150 = (undefined)((ulong)uVar10 >> 0x20);
                      uVar151 = (undefined)((ulong)uVar10 >> 0x28);
                      uVar152 = (undefined)((ulong)uVar10 >> 0x30);
                      uVar153 = (undefined)((ulong)uVar10 >> 0x38);
                      uVar10 = *(undefined8 *)pauVar12[0x40];
                      uVar138 = (undefined)uVar10;
                      uVar139 = (undefined)((ulong)uVar10 >> 8);
                      uVar140 = (undefined)((ulong)uVar10 >> 0x10);
                      uVar141 = (undefined)((ulong)uVar10 >> 0x18);
                      uVar142 = (undefined)((ulong)uVar10 >> 0x20);
                      uVar143 = (undefined)((ulong)uVar10 >> 0x28);
                      uVar144 = (undefined)((ulong)uVar10 >> 0x30);
                      uVar145 = (undefined)((ulong)uVar10 >> 0x38);
                    }
                    else {
                      *(int *)*pauVar12 = auVar81._0_4_;
                      if ((bVar128 >> 1 & 1) != 0) goto LAB_00e5cb48;
LAB_00e5cb20:
                      if ((bVar128 >> 2 & 1) == 0) goto LAB_00e5cb24;
LAB_00e5cb54:
                      *(int *)(*pauVar12 + 8) = auVar81._8_4_;
                      if ((bVar128 >> 3 & 1) != 0) goto LAB_00e5cb60;
LAB_00e5cb28:
                      uVar10 = *(undefined8 *)(pauVar12[0x40] + 8);
                      uVar146 = (undefined)uVar10;
                      uVar147 = (undefined)((ulong)uVar10 >> 8);
                      uVar148 = (undefined)((ulong)uVar10 >> 0x10);
                      uVar149 = (undefined)((ulong)uVar10 >> 0x18);
                      uVar150 = (undefined)((ulong)uVar10 >> 0x20);
                      uVar151 = (undefined)((ulong)uVar10 >> 0x28);
                      uVar152 = (undefined)((ulong)uVar10 >> 0x30);
                      uVar153 = (undefined)((ulong)uVar10 >> 0x38);
                      uVar10 = *(undefined8 *)pauVar12[0x40];
                      uVar138 = (undefined)uVar10;
                      uVar139 = (undefined)((ulong)uVar10 >> 8);
                      uVar140 = (undefined)((ulong)uVar10 >> 0x10);
                      uVar141 = (undefined)((ulong)uVar10 >> 0x18);
                      uVar142 = (undefined)((ulong)uVar10 >> 0x20);
                      uVar143 = (undefined)((ulong)uVar10 >> 0x28);
                      uVar144 = (undefined)((ulong)uVar10 >> 0x30);
                      uVar145 = (undefined)((ulong)uVar10 >> 0x38);
                    }
                    if ((bVar128 & 1) != 0) {
                      *(int *)pauVar12[0x40] = auVar116._0_4_;
                    }
                    if ((bVar128 >> 1 & 1) != 0) {
                      *(int *)(pauVar12[0x40] + 4) = auVar116._4_4_;
                    }
                    if ((bVar128 >> 2 & 1) != 0) {
                      *(int *)(pauVar12[0x40] + 8) = auVar116._8_4_;
                    }
                    if ((bVar128 >> 3 & 1) != 0) {
                      *(int *)(pauVar12[0x40] + 0xc) = auVar116._12_4_;
                    }
                    uVar136 = (ushort)((uint6)uVar130 >> 0x20);
                    auVar126._0_4_ = (int)(float)auVar29._0_8_;
                    auVar126._4_4_ = (int)auVar127._4_4_;
                    auVar126._8_4_ = (int)auVar127._8_4_;
                    auVar126._12_4_ = (int)auVar127._12_4_;
                    auVar127 = NEON_scvtf(auVar126,4);
                    auVar133._0_4_ = (iVar78 << 0x1f) >> 0x1f;
                    auVar133._4_4_ = ((int)((ulong)uVar45 >> 0x20) << 0x1f) >> 0x1f;
                    auVar133._8_4_ = (auVar131._8_4_ << 0x1f) >> 0x1f;
                    auVar133._12_4_ = (auVar134._12_4_ << 0x1f) >> 0x1f;
                    sVar154 = (short)((CONCAT22(uVar136,uVar24) << 0x1f) >> 0x1f);
                    sVar155 = (short)((int)((uint)uVar136 << 0x1f) >> 0x1f);
                    auVar81 = NEON_bit(auVar81,auVar127,auVar133,1);
                    auVar9[1] = uVar139;
                    auVar9[0] = uVar138;
                    auVar9[2] = uVar140;
                    auVar9[3] = uVar141;
                    auVar9[4] = uVar142;
                    auVar9[5] = uVar143;
                    auVar9[6] = uVar144;
                    auVar9[7] = uVar145;
                    auVar9[8] = uVar146;
                    auVar9[9] = uVar147;
                    auVar9[10] = uVar148;
                    auVar9[11] = uVar149;
                    auVar9[12] = uVar150;
                    auVar9[13] = uVar151;
                    auVar9[14] = uVar152;
                    auVar9[15] = uVar153;
                    auVar11._2_2_ = sVar154;
                    auVar11._0_2_ = sVar154;
                    auVar11._4_2_ = sVar155;
                    auVar11._6_2_ = sVar155;
                    auVar11._8_4_ =
                         (int)((uint)(ushort)((unkuint10)auVar131._0_10_ >> 0x40) << 0x1f) >> 0x1f;
                    auVar11._12_4_ = (int)((uint)auVar132._12_2_ << 0x1f) >> 0x1f;
                    auVar116 = NEON_bit(auVar116,auVar9,auVar11,1);
                    auVar127 = *pauVar12;
                    uVar16 = local_44;
                  }
                  auVar115 = NEON_fmax(auVar115,auVar127,4);
                  lVar13 = lVar13 + 1;
                  pauVar12 = pauVar12 + 1;
                } while (lVar13 < (int)uVar16);
              }
              auVar80._0_4_ = (iVar104 << 0x1f) >> 0x1f;
              auVar80._4_4_ = ((int)((ulong)auVar87._0_8_ >> 0x20) << 0x1f) >> 0x1f;
              auVar80._8_4_ = (auVar87._8_4_ << 0x1f) >> 0x1f;
              auVar80._12_4_ = (auVar91._12_4_ << 0x1f) >> 0x1f;
              auVar28 = NEON_bit(auVar28,auVar115,auVar80,1);
            }
          }
          auVar29._0_8_ =
               CONCAT17(bVar69 & bVar43,
                        CONCAT16(bVar68 & bVar41,
                                 CONCAT15(bVar67 & bVar39,
                                          CONCAT14(bVar66 & bVar37,
                                                   CONCAT13(bVar65 & bVar35,
                                                            CONCAT12(bVar64 & bVar33,
                                                                     CONCAT11(bVar63 & bVar31,
                                                                              bVar62 & bVar22)))))))
          ;
          uVar45 = CONCAT17(bVar77 & auVar29[15],
                            CONCAT16(bVar76 & auVar29[14],
                                     CONCAT15(bVar75 & auVar29[13],
                                              CONCAT14(bVar74 & auVar29[12],
                                                       CONCAT13(bVar73 & auVar29[11],
                                                                CONCAT12(bVar72 & auVar29[10],
                                                                         CONCAT11(bVar71 & auVar29[9
                                                  ],bVar70 & auVar29[8])))))));
          iVar25 = iVar25 + 1;
          iVar20 = iVar20 + 1;
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0xd06);
    bVar22 = cVar49 >> 7;
    bVar31 = cVar53 >> 7;
    bVar33 = cVar57 >> 7;
    bVar35 = cVar61 >> 7;
    bVar23 = (byte)auVar29._0_8_ & bVar23;
    bVar32 = (byte)((ulong)auVar29._0_8_ >> 8) & bVar32;
    bVar34 = (byte)((ulong)auVar29._0_8_ >> 0x10) & bVar34;
    bVar36 = (byte)((ulong)auVar29._0_8_ >> 0x18) & bVar36;
    iVar25 = CONCAT13(bVar36,CONCAT12(bVar34,CONCAT11(bVar32,bVar23)));
    bVar38 = (byte)((ulong)auVar29._0_8_ >> 0x20) & bVar38;
    bVar40 = (byte)((ulong)auVar29._0_8_ >> 0x28) & bVar40;
    bVar42 = (byte)((ulong)auVar29._0_8_ >> 0x30) & bVar42;
    bVar44 = (byte)((ulong)auVar29._0_8_ >> 0x38) & bVar44;
    auVar27._0_8_ = CONCAT17(bVar44,CONCAT16(bVar42,CONCAT15(bVar40,CONCAT14(bVar38,iVar25))));
    auVar27[8] = (byte)uVar45 & bVar117;
    auVar27[9] = (byte)((ulong)uVar45 >> 8) & bVar118;
    auVar27[10] = (byte)((ulong)uVar45 >> 0x10) & bVar119;
    auVar27[11] = (byte)((ulong)uVar45 >> 0x18) & bVar120;
    auVar30[12] = (byte)((ulong)uVar45 >> 0x20) & bVar121;
    auVar30._0_12_ = auVar27;
    auVar30[13] = (byte)((ulong)uVar45 >> 0x28) & bVar122;
    auVar30[14] = (byte)((ulong)uVar45 >> 0x30) & bVar123;
    auVar30[15] = (byte)((ulong)uVar45 >> 0x38) & bVar124;
    if (CONCAT13(bVar36 & bVar22,CONCAT12(bVar34 & bVar22,CONCAT11(bVar32 & bVar22,bVar23 & bVar22))
                ) +
        CONCAT13(bVar44 & bVar31,CONCAT12(bVar42 & bVar31,CONCAT11(bVar40 & bVar31,bVar38 & bVar31))
                ) +
        CONCAT13(auVar27[11] & bVar33,
                 CONCAT12(auVar27[10] & bVar33,CONCAT11(auVar27[9] & bVar33,auVar27[8] & bVar33))) +
        CONCAT13(auVar30[15] & bVar35,
                 CONCAT12(auVar30[14] & bVar35,CONCAT11(auVar30[13] & bVar35,auVar30[12] & bVar35)))
        != 0) {
      puts("src/kernel_astc.ispc:1286:5: Assertion failed: count >= 0 \n");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (0 < (int)local_44) {
      uVar26 = iVar25 + (int)((ulong)auVar27._0_8_ >> 0x20) + auVar27._8_4_ + auVar30._12_4_;
      lVar19 = 0;
      lVar13 = (ulong)local_44 * 0x10;
      if ((uVar26 & 1) == 0) {
        if ((uVar26 >> 1 & 1) == 0) {
          do {
            auVar28 = *(undefined (*) [16])((long)&local_450 + lVar19);
            lVar3 = param_4 + (int)lVar19;
            if ((uVar26 >> 2 & 1) != 0) {
              *(int *)(lVar3 + 8) = auVar28._8_4_;
            }
            if ((uVar26 >> 3 & 1) != 0) {
              *(int *)(lVar3 + 0xc) = auVar28._12_4_;
            }
            lVar19 = lVar19 + 0x10;
          } while (lVar13 - lVar19 != 0);
        }
        else {
          do {
            auVar28 = *(undefined (*) [16])((long)&local_450 + lVar19);
            lVar3 = param_4 + (int)lVar19;
            *(int *)(lVar3 + 4) = auVar28._4_4_;
            if ((uVar26 >> 2 & 1) != 0) {
              *(int *)(lVar3 + 8) = auVar28._8_4_;
            }
            if ((uVar26 >> 3 & 1) != 0) {
              *(int *)(lVar3 + 0xc) = auVar28._12_4_;
            }
            lVar19 = lVar19 + 0x10;
          } while (lVar13 - lVar19 != 0);
        }
      }
      else {
        do {
          auVar28 = *(undefined (*) [16])((long)&local_450 + lVar19);
          puVar2 = (undefined4 *)(param_4 + (int)lVar19);
          *puVar2 = auVar28._0_4_;
          if ((uVar26 >> 1 & 1) != 0) {
            puVar2[1] = auVar28._4_4_;
          }
          if ((uVar26 >> 2 & 1) != 0) {
            puVar2[2] = auVar28._8_4_;
          }
          if ((uVar26 >> 3 & 1) != 0) {
            puVar2[3] = auVar28._12_4_;
          }
          lVar19 = lVar19 + 0x10;
        } while (lVar13 - lVar19 != 0);
      }
    }
  }
  return;
}


