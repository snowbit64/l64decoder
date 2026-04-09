// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: astc_rank_ispc___un_3C_s_5B_unrgba_surface_5D__3E_uniuniun_3C_unu_3E_un_3C_s_5B_unastc_enc_settings_5D__3E_
// Entry Point: 00e55200
// Size: 2188 bytes
// Signature: undefined astc_rank_ispc___un_3C_s_5B_unrgba_surface_5D__3E_uniuniun_3C_unu_3E_un_3C_s_5B_unastc_enc_settings_5D__3E_(void)


/* WARNING: Type propagation algorithm not settling */

void astc_rank_ispc___un_3C_s_5B_unrgba_surface_5D__3E_uniuniun_3C_unu_3E_un_3C_s_5B_unastc_enc_settings_5D__3E_
               (undefined param_1 [16],long *param_2,int param_3,int param_4,long param_5,
               uint *param_6)

{
  float *pfVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined (*pauVar8) [16];
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  byte bVar18;
  uint uVar19;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined auVar20 [16];
  byte bVar24;
  undefined uVar25;
  byte bVar26;
  undefined uVar27;
  byte bVar28;
  undefined uVar29;
  byte bVar30;
  char cVar31;
  byte bVar32;
  undefined uVar33;
  byte bVar34;
  undefined uVar35;
  byte bVar36;
  undefined uVar37;
  byte bVar38;
  char cVar39;
  byte bVar40;
  undefined uVar41;
  byte bVar42;
  undefined uVar43;
  byte bVar44;
  undefined uVar45;
  byte bVar46;
  char cVar47;
  byte bVar48;
  undefined uVar49;
  byte bVar50;
  undefined uVar51;
  byte bVar52;
  undefined uVar53;
  byte bVar54;
  char cVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  uint uVar68;
  float fVar69;
  float fVar72;
  float fVar73;
  undefined auVar70 [16];
  float fVar74;
  undefined auVar71 [16];
  undefined auVar75 [12];
  undefined auVar76 [16];
  undefined auVar77 [16];
  byte bVar79;
  byte bVar87;
  byte bVar88;
  int iVar80;
  float fVar81;
  int iVar82;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  undefined auVar84 [16];
  byte bVar89;
  undefined auVar86 [16];
  int iVar94;
  uint uVar95;
  int iVar100;
  uint uVar101;
  uint uVar102;
  uint uVar103;
  undefined auVar97 [16];
  float fVar96;
  undefined auVar98 [16];
  undefined auVar99 [16];
  int iVar104;
  undefined8 uVar105;
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined auVar109 [16];
  undefined auVar110 [16];
  undefined auVar111 [16];
  byte bVar112;
  byte bVar113;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  int iVar115;
  byte bVar125;
  byte bVar126;
  byte bVar128;
  ushort uVar127;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  undefined auVar120 [16];
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
  undefined uVar154;
  undefined uVar155;
  short sVar156;
  short sVar157;
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
  undefined auVar78 [16];
  undefined auVar83 [12];
  undefined auVar85 [16];
  undefined auVar106 [12];
  undefined2 uVar114;
  undefined6 uVar116;
  undefined8 uVar117;
  undefined auVar118 [12];
  undefined auVar119 [14];
  undefined auVar121 [16];
  
  local_50 = *param_6;
  iVar12 = 0;
  if (local_50 != 0) {
    iVar12 = *(int *)(param_2 + 1) / (int)local_50;
  }
  uVar25 = (undefined)iVar12;
  uVar27 = (undefined)((uint)iVar12 >> 8);
  uVar29 = (undefined)((uint)iVar12 >> 0x10);
  uVar33 = (undefined)((uint)iVar12 >> 0x18);
  iVar16 = param_3 + 1;
  iVar82 = param_3 + 2;
  iVar115 = param_3 + 3;
  auVar20[4] = uVar25;
  auVar20._0_4_ = iVar12;
  auVar20[5] = uVar27;
  auVar20[6] = uVar29;
  auVar20[7] = uVar33;
  auVar20[8] = uVar25;
  auVar20[9] = uVar27;
  auVar20[10] = uVar29;
  auVar20[11] = uVar33;
  auVar20[12] = uVar25;
  auVar20[13] = uVar27;
  auVar20[14] = uVar29;
  auVar20[15] = uVar33;
  auVar107[4] = (char)iVar16;
  auVar107._0_4_ = param_3;
  auVar107[5] = (char)((uint)iVar16 >> 8);
  auVar107[6] = (char)((uint)iVar16 >> 0x10);
  auVar107[7] = (char)((uint)iVar16 >> 0x18);
  auVar107[8] = (char)iVar82;
  auVar107[9] = (char)((uint)iVar82 >> 8);
  auVar107[10] = (char)((uint)iVar82 >> 0x10);
  auVar107[11] = (char)((uint)iVar82 >> 0x18);
  auVar107[12] = (char)iVar115;
  auVar107[13] = (char)((uint)iVar115 >> 8);
  auVar107[14] = (char)((uint)iVar115 >> 0x10);
  auVar107[15] = (char)((uint)iVar115 >> 0x18);
  auVar20 = NEON_cmgt(auVar20,auVar107,4);
  bVar112 = param_1[0];
  bVar24 = bVar112 & ~auVar20[0];
  bVar122 = param_1[1];
  bVar123 = param_1[2];
  bVar124 = param_1[3];
  bVar125 = param_1[4];
  bVar32 = bVar125 & ~auVar20[4];
  bVar128 = param_1[5];
  bVar129 = param_1[6];
  bVar130 = param_1[7];
  bVar131 = param_1[8];
  bVar40 = bVar131 & ~auVar20[8];
  bVar133 = param_1[9];
  bVar134 = param_1[10];
  bVar135 = param_1[11];
  bVar136 = param_1[12];
  bVar48 = bVar136 & ~auVar20[12];
  bVar137 = param_1[13];
  bVar138 = param_1[14];
  bVar139 = param_1[15];
  if ((byte)((bVar112 & 1) + (bVar125 & 2) + (bVar131 & 4) + (bVar136 & 8)) !=
      (byte)((bVar24 & 1) + (bVar32 & 2) + (bVar40 & 4) + (bVar48 & 8))) {
    local_4c = param_6[1];
    local_44 = param_6[3];
    if (0x40 < (int)local_44) {
      puts("src/kernel_astc.ispc:1247:5: Assertion failed: state->fastSkipTreshold <= 64 \n");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    bVar18 = bVar24 ^ bVar112;
    bVar21 = bVar32 ^ bVar125;
    bVar22 = bVar40 ^ bVar131;
    bVar23 = bVar48 ^ bVar136;
    if (0 < (int)local_4c) {
      iVar12 = 0;
      uVar19 = 0;
      uVar68 = (uint)(bVar18 & 1) + (uint)(bVar21 & 2) + (uint)(bVar22 & 4) + (uint)(bVar23 & 8);
      do {
        if (0 < (int)local_50) {
          uVar14 = 0;
          iVar80 = *(int *)(param_2 + 2) * (uVar19 + local_4c * param_4);
          lVar15 = *param_2;
          do {
            iVar13 = (int)uVar14;
            iVar94 = iVar80 + (iVar13 + local_50 * param_3) * 4;
            iVar100 = iVar80 + (iVar13 + local_50 * iVar16) * 4;
            uVar10 = CONCAT44(iVar100 + ((uint)(iVar100 >> 0x1f) >> 0x1e),
                              iVar94 + ((uint)(iVar94 >> 0x1f) >> 0x1e)) & 0xfffffffcfffffffc;
            iVar94 = ((int)(iVar80 + (iVar13 + local_50 * iVar82) * 4) / 4) * 4;
            iVar100 = ((int)(iVar80 + (iVar13 + local_50 * iVar115) * 4) / 4) * 4;
            bVar56 = (byte)((int)((uint)CONCAT12(bVar21,(ushort)bVar18) << 0x1f) >> 0x1f);
            iVar104 = CONCAT13((byte)(uVar10 >> 0x18) & bVar56,
                               CONCAT12((byte)(uVar10 >> 0x10) & bVar56,
                                        CONCAT11((byte)(uVar10 >> 8) & bVar56,(byte)uVar10 & bVar56)
                                       ));
            bVar56 = (byte)((int)((uint)bVar21 << 0x1f) >> 0x1f);
            auVar106._0_8_ =
                 CONCAT17((byte)(uVar10 >> 0x38) & bVar56,
                          CONCAT16((byte)(uVar10 >> 0x30) & bVar56,
                                   CONCAT15((byte)(uVar10 >> 0x28) & bVar56,
                                            CONCAT14((byte)(uVar10 >> 0x20) & bVar56,iVar104))));
            bVar56 = (byte)((int)((uint)bVar22 << 0x1f) >> 0x1f);
            auVar106[8] = (byte)iVar94 & bVar56;
            auVar106[9] = (byte)((uint)iVar94 >> 8) & bVar56;
            auVar106[10] = (byte)((uint)iVar94 >> 0x10) & bVar56;
            auVar106[11] = (byte)((uint)iVar94 >> 0x18) & bVar56;
            bVar56 = (byte)((int)((uint)bVar23 << 0x1f) >> 0x1f);
            auVar111[12] = (byte)iVar100 & bVar56;
            auVar111._0_12_ = auVar106;
            auVar111[13] = (byte)((uint)iVar100 >> 8) & bVar56;
            auVar111[14] = (byte)((uint)iVar100 >> 0x10) & bVar56;
            auVar111[15] = (byte)((uint)iVar100 >> 0x18) & bVar56;
            uVar95 = *(uint *)(lVar15 + iVar104);
            uVar101 = *(uint *)(lVar15 + (int)((ulong)auVar106._0_8_ >> 0x20));
            uVar102 = *(uint *)(lVar15 + auVar106._8_4_);
            uVar103 = *(uint *)(lVar15 + auVar111._12_4_);
            auVar76._5_3_ = 0;
            auVar76._0_5_ = CONCAT14((char)uVar101,uVar95) & 0xff000000ff;
            auVar76[8] = (char)uVar102;
            auVar76._9_3_ = 0;
            auVar76[12] = (char)uVar103;
            auVar76._13_3_ = 0;
            auVar107 = NEON_scvtf(auVar76,4);
            lVar9 = (long)(iVar12 + iVar13);
            if ((uVar68 & 1) != 0) {
              local_1d40[lVar9 * 4] = auVar107._0_4_;
            }
            if ((uVar68 >> 1 & 1) != 0) {
              local_1d40[lVar9 * 4 + 1] = auVar107._4_4_;
            }
            if ((uVar68 >> 2 & 1) != 0) {
              local_1d40[lVar9 * 4 + 2] = auVar107._8_4_;
            }
            if ((uVar68 >> 3 & 1) != 0) {
              local_1d40[lVar9 * 4 + 3] = auVar107._12_4_;
            }
            auVar108._5_3_ = 0;
            auVar108._0_5_ = CONCAT14((char)(uVar101 >> 8),uVar95 >> 8) & 0xff000000ff;
            auVar108[8] = (undefined)(uVar102 >> 8);
            auVar108._9_3_ = 0;
            auVar108[12] = (char)(uVar103 >> 8);
            auVar108._13_3_ = 0;
            auVar107 = NEON_scvtf(auVar108,4);
            lVar9 = (long)(iVar12 + iVar13 + 0x40);
            if ((uVar68 & 1) != 0) {
              local_1d40[lVar9 * 4] = auVar107._0_4_;
            }
            if ((uVar68 >> 1 & 1) != 0) {
              local_1d40[lVar9 * 4 + 1] = auVar107._4_4_;
            }
            if ((uVar68 >> 2 & 1) != 0) {
              local_1d40[lVar9 * 4 + 2] = auVar107._8_4_;
            }
            if ((uVar68 >> 3 & 1) != 0) {
              local_1d40[lVar9 * 4 + 3] = auVar107._12_4_;
            }
            auVar109._5_3_ = 0;
            auVar109._0_5_ = CONCAT14((char)(uVar101 >> 0x10),uVar95 >> 0x10) & 0xff000000ff;
            auVar109[8] = (undefined)(uVar102 >> 0x10);
            auVar109._9_3_ = 0;
            auVar109[12] = (char)(uVar103 >> 0x10);
            auVar109._13_3_ = 0;
            auVar107 = NEON_scvtf(auVar109,4);
            lVar9 = (long)(iVar12 + iVar13 + 0x80);
            if ((uVar68 & 1) != 0) {
              local_1d40[lVar9 * 4] = auVar107._0_4_;
            }
            if ((uVar68 >> 1 & 1) != 0) {
              local_1d40[lVar9 * 4 + 1] = auVar107._4_4_;
            }
            if ((uVar68 >> 2 & 1) != 0) {
              local_1d40[lVar9 * 4 + 2] = auVar107._8_4_;
            }
            if ((uVar68 >> 3 & 1) != 0) {
              local_1d40[lVar9 * 4 + 3] = auVar107._12_4_;
            }
            auVar97._0_4_ = uVar95 >> 0x18;
            auVar97._4_4_ = uVar101 >> 0x18;
            auVar97._8_4_ = uVar102 >> 0x18;
            auVar97._12_4_ = uVar103 >> 0x18;
            auVar107 = NEON_scvtf(auVar97,4);
            lVar9 = (long)(iVar12 + iVar13 + 0xc0);
            if ((uVar68 & 1) != 0) {
              local_1d40[lVar9 * 4] = auVar107._0_4_;
            }
            if ((uVar68 >> 1 & 1) != 0) {
              local_1d40[lVar9 * 4 + 1] = auVar107._4_4_;
            }
            if ((uVar68 >> 2 & 1) != 0) {
              local_1d40[lVar9 * 4 + 2] = auVar107._8_4_;
            }
            if ((uVar68 >> 3 & 1) != 0) {
              local_1d40[lVar9 * 4 + 3] = auVar107._12_4_;
            }
            uVar14 = uVar14 + 1;
          } while (local_50 != uVar14);
        }
        uVar19 = uVar19 + 1;
        iVar12 = iVar12 + 8;
      } while (uVar19 != local_4c);
    }
    uVar19 = param_6[2];
    if ((uVar19 == 3) && (0 < (int)local_4c)) {
      uVar68 = 0;
      bVar18 = (bVar18 & 1) + (bVar21 & 2) + (bVar22 & 4) + (bVar23 & 8);
      uVar14 = (ulong)local_50;
      iVar12 = 0xc0;
      do {
        if (0 < (int)local_50) {
          uVar10 = uVar14;
          iVar16 = iVar12;
          if ((bVar18 & 1) == 0) {
            if ((bVar18 >> 1 & 1) == 0) {
              do {
                if ((bVar18 >> 2 & 1) != 0) {
                  local_1d40[(long)iVar16 * 4 + 2] = 0x437f0000;
                }
                if ((bVar18 >> 3 & 1) != 0) {
                  local_1d40[(long)iVar16 * 4 + 3] = 0x437f0000;
                }
                uVar10 = uVar10 - 1;
                iVar16 = iVar16 + 1;
              } while (uVar10 != 0);
            }
            else {
              do {
                lVar15 = (long)iVar16;
                local_1d40[lVar15 * 4 + 1] = 0x437f0000;
                if ((bVar18 >> 2 & 1) != 0) {
                  local_1d40[lVar15 * 4 + 2] = 0x437f0000;
                }
                if ((bVar18 >> 3 & 1) != 0) {
                  local_1d40[lVar15 * 4 + 3] = 0x437f0000;
                }
                iVar16 = iVar16 + 1;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
          }
          else {
            do {
              lVar15 = (long)iVar16;
              local_1d40[lVar15 * 4] = 0x437f0000;
              if ((bVar18 >> 1 & 1) != 0) {
                local_1d40[lVar15 * 4 + 1] = 0x437f0000;
              }
              if ((bVar18 >> 2 & 1) != 0) {
                local_1d40[lVar15 * 4 + 2] = 0x437f0000;
              }
              if ((bVar18 >> 3 & 1) != 0) {
                local_1d40[lVar15 * 4 + 3] = 0x437f0000;
              }
              iVar16 = iVar16 + 1;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
        uVar68 = uVar68 + 1;
        iVar12 = iVar12 + 8;
      } while (uVar68 != local_4c);
    }
    bVar26 = ~(bVar122 & ~auVar20[1]);
    bVar28 = ~(bVar123 & ~auVar20[2]);
    bVar30 = ~(bVar124 & ~auVar20[3]);
    bVar34 = ~(bVar128 & ~auVar20[5]);
    bVar36 = ~(bVar129 & ~auVar20[6]);
    bVar38 = ~(bVar130 & ~auVar20[7]);
    bVar42 = ~(bVar133 & ~auVar20[9]);
    bVar44 = ~(bVar134 & ~auVar20[10]);
    bVar46 = ~(bVar135 & ~auVar20[11]);
    bVar50 = ~(bVar137 & ~auVar20[13]);
    bVar52 = ~(bVar138 & ~auVar20[14]);
    bVar54 = ~(bVar139 & ~auVar20[15]);
    compute_metrics___un_3C_s_5B_vyastc_rank_state_5D__3E_(local_1d40);
    lVar15 = 0;
    uVar25 = 0xff;
    uVar27 = 0xff;
    uVar29 = 0xff;
    cVar31 = -1;
    uVar33 = 0xff;
    uVar35 = 0xff;
    uVar37 = 0xff;
    cVar39 = -1;
    uVar41 = 0xff;
    uVar43 = 0xff;
    uVar45 = 0xff;
    cVar47 = -1;
    uVar49 = 0xff;
    uVar51 = 0xff;
    uVar53 = 0xff;
    cVar55 = -1;
    iVar12 = -1;
    auVar20 = ZEXT816(0);
    iVar16 = -1;
    bVar18 = ~bVar24;
    bVar21 = bVar26;
    bVar22 = bVar28;
    bVar23 = bVar30;
    bVar56 = ~bVar32;
    bVar57 = bVar34;
    bVar58 = bVar36;
    bVar59 = bVar38;
    bVar60 = ~bVar40;
    bVar61 = bVar42;
    bVar62 = bVar44;
    bVar63 = bVar46;
    bVar64 = ~bVar48;
    bVar65 = bVar50;
    bVar66 = bVar52;
    bVar67 = bVar54;
    do {
      uVar68 = (&DAT_00560040)[lVar15];
      uVar14 = (ulong)(uVar68 >> 0x10) & 7;
      if ((int)uVar14 + 2 <= (int)local_4c) {
        uVar10 = (ulong)(uVar68 >> 0xd) & 7;
        uVar11 = (ulong)(uVar68 >> 5) & 6;
        uVar95 = (uint)uVar11;
        if (((int)uVar10 + 2 <= (int)local_50) && (uVar95 < 3 || uVar19 != 3)) {
          uVar11 = uVar11 + 2 >> 1 & 1;
          uVar17 = (ulong)((uVar68 >> 4 & 3) + 1 & (int)(uVar68 << 0xc) >> 0x1f);
          fVar69 = afStack_d40[uVar11 * 0x14 + uVar17 * 4];
          fVar72 = afStack_d40[uVar11 * 0x14 + uVar17 * 4 + 1];
          fVar73 = afStack_d40[uVar11 * 0x14 + uVar17 * 4 + 2];
          fVar74 = afStack_d40[uVar11 * 0x14 + uVar17 * 4 + 3];
          if (uVar95 < 3) {
            auVar107 = *(undefined (*) [16])(auStack_ca0 + uVar17 * 0x10 + uVar11 * 0x50);
            fVar69 = fVar69 + auVar107._0_4_;
            fVar72 = fVar72 + auVar107._4_4_;
            fVar73 = fVar73 + auVar107._8_4_;
            fVar74 = fVar74 + auVar107._12_4_;
          }
          iVar82 = CONCAT13(cVar31,CONCAT12(uVar29,CONCAT11(uVar27,uVar25))) + 1;
          uVar25 = (undefined)iVar82;
          uVar27 = (undefined)((uint)iVar82 >> 8);
          uVar29 = (undefined)((uint)iVar82 >> 0x10);
          cVar31 = (char)((uint)iVar82 >> 0x18);
          iVar115 = CONCAT13(cVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar33))) + 1;
          uVar33 = (undefined)iVar115;
          uVar35 = (undefined)((uint)iVar115 >> 8);
          uVar37 = (undefined)((uint)iVar115 >> 0x10);
          cVar39 = (char)((uint)iVar115 >> 0x18);
          iVar115 = CONCAT13(cVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41))) + 1;
          uVar41 = (undefined)iVar115;
          uVar43 = (undefined)((uint)iVar115 >> 8);
          uVar45 = (undefined)((uint)iVar115 >> 0x10);
          cVar47 = (char)((uint)iVar115 >> 0x18);
          iVar115 = CONCAT13(cVar55,CONCAT12(uVar53,CONCAT11(uVar51,uVar49))) + 1;
          uVar49 = (undefined)iVar115;
          uVar51 = (undefined)((uint)iVar115 >> 8);
          uVar53 = (undefined)((uint)iVar115 >> 0x10);
          cVar55 = (char)((uint)iVar115 >> 0x18);
          auVar107 = *(undefined (*) [16])(auStack_c00 + uVar17 * 0x10 + uVar11 * 0x50);
          auVar84._4_4_ = local_44;
          auVar84._0_4_ = local_44;
          auVar84._8_4_ = local_44;
          auVar84._12_4_ = local_44;
          auVar4[4] = uVar33;
          auVar4._0_4_ = iVar82;
          auVar4[5] = uVar35;
          auVar4[6] = uVar37;
          auVar4[7] = cVar39;
          auVar4[8] = uVar41;
          auVar4[9] = uVar43;
          auVar4[10] = uVar45;
          auVar4[11] = cVar47;
          auVar4[12] = uVar49;
          auVar4[13] = uVar51;
          auVar4[14] = uVar53;
          auVar4[15] = cVar55;
          auVar76 = NEON_cmgt(auVar84,auVar4,4);
          fVar81 = (float)(&DAT_005639f0)[(ulong)uVar68 & 0xf];
          fVar96 = (float)(&DAT_005639f0)[(ulong)(uVar68 >> 8) & 0x1f] *
                   (float)(local_4c * local_50 * 9000);
          auVar111 = *(undefined (*) [16])(auStack_b60 + uVar10 * 0x10 + uVar14 * 0x70);
          bVar79 = bVar18 & auVar76[0];
          bVar87 = bVar21 & auVar76[1];
          bVar88 = bVar22 & auVar76[2];
          bVar89 = bVar23 & auVar76[3];
          iVar82 = CONCAT13(bVar89,CONCAT12(bVar88,CONCAT11(bVar87,bVar79)));
          bVar90 = bVar56 & auVar76[4];
          bVar91 = bVar57 & auVar76[5];
          bVar92 = bVar58 & auVar76[6];
          bVar93 = bVar59 & auVar76[7];
          auVar83._0_8_ = CONCAT17(bVar93,CONCAT16(bVar92,CONCAT15(bVar91,CONCAT14(bVar90,iVar82))))
          ;
          auVar83[8] = bVar60 & auVar76[8];
          auVar83[9] = bVar61 & auVar76[9];
          auVar83[10] = bVar62 & auVar76[10];
          auVar83[11] = bVar63 & auVar76[11];
          auVar85[12] = bVar64 & auVar76[12];
          auVar85._0_12_ = auVar83;
          auVar85[13] = bVar65 & auVar76[13];
          auVar85[14] = bVar66 & auVar76[14];
          auVar85[15] = bVar67 & auVar76[15];
          auVar98[0] = bVar79 & bVar112;
          auVar98[1] = bVar87 & bVar122;
          auVar98[2] = bVar88 & bVar123;
          auVar98[3] = bVar89 & bVar124;
          auVar98[4] = bVar90 & bVar125;
          auVar98[5] = bVar91 & bVar128;
          auVar98[6] = bVar92 & bVar129;
          auVar98[7] = bVar93 & bVar130;
          auVar98[8] = auVar83[8] & bVar131;
          auVar98[9] = auVar83[9] & bVar133;
          auVar98[10] = auVar83[10] & bVar134;
          auVar98[11] = auVar83[11] & bVar135;
          auVar98[12] = auVar85[12] & bVar136;
          auVar98[13] = auVar85[13] & bVar137;
          auVar98[14] = auVar85[14] & bVar138;
          auVar98[15] = auVar85[15] & bVar139;
          iVar115 = NEON_umaxv(auVar98,4);
          auVar71._0_4_ =
               auVar111._0_4_ + 0.0 + fVar69 +
               (auVar107._0_4_ + auVar107._0_4_) * fVar81 + 0.0 + fVar96;
          auVar71._4_4_ =
               auVar111._4_4_ + 0.0 + fVar72 +
               (auVar107._4_4_ + auVar107._4_4_) * fVar81 + 0.0 + fVar96;
          auVar71._8_4_ =
               auVar111._8_4_ + 0.0 + fVar73 +
               (auVar107._8_4_ + auVar107._8_4_) * fVar81 + 0.0 + fVar96;
          auVar71._12_4_ =
               auVar111._12_4_ + 0.0 + fVar74 +
               (auVar107._12_4_ + auVar107._12_4_) * fVar81 + 0.0 + fVar96;
          if (iVar115 != 0) {
            uVar95 = (uint)(auVar98[0] & 1) + (uint)(auVar98[4] & 2) +
                     (uint)(auVar98[8] & 4) + (uint)(auVar98[12] & 8);
            lVar9 = (long)(iVar12 * 0x10 + 0x10);
            if ((uVar95 & 1) == 0) {
              if ((uVar95 >> 1 & 1) == 0) goto LAB_00e5577c;
LAB_00e558f4:
              *(uint *)((long)&local_450 + lVar9 + 4) = uVar68;
              if ((uVar95 >> 2 & 1) != 0) goto LAB_00e558fc;
LAB_00e55780:
              if ((uVar95 >> 3 & 1) == 0) goto LAB_00e55784;
LAB_00e55904:
              *(uint *)((long)&uStack_448 + lVar9 + 4) = uVar68;
              pfVar1 = (float *)(*(undefined (*) [16])&local_850 + (iVar16 * 0x10 + 0x10));
            }
            else {
              *(uint *)((long)&local_450 + lVar9) = uVar68;
              if ((uVar95 >> 1 & 1) != 0) goto LAB_00e558f4;
LAB_00e5577c:
              if ((uVar95 >> 2 & 1) == 0) goto LAB_00e55780;
LAB_00e558fc:
              *(uint *)((long)&uStack_448 + lVar9) = uVar68;
              if ((uVar95 >> 3 & 1) != 0) goto LAB_00e55904;
LAB_00e55784:
              pfVar1 = (float *)(*(undefined (*) [16])&local_850 + (iVar16 * 0x10 + 0x10));
            }
            if ((uVar95 & 1) != 0) {
              *pfVar1 = auVar71._0_4_;
            }
            if ((uVar95 >> 1 & 1) != 0) {
              *(float *)((long)pfVar1 + 4) = auVar71._4_4_;
            }
            if ((uVar95 >> 2 & 1) != 0) {
              *(float *)((long)pfVar1 + 8) = auVar71._8_4_;
            }
            if ((uVar95 >> 3 & 1) != 0) {
              *(float *)((long)pfVar1 + 0xc) = auVar71._12_4_;
            }
            auVar107 = NEON_fmax(auVar20,auVar71,4);
            auVar86._0_4_ = (iVar82 << 0x1f) >> 0x1f;
            auVar86._4_4_ = ((int)((ulong)auVar83._0_8_ >> 0x20) << 0x1f) >> 0x1f;
            auVar86._8_4_ = (auVar83._8_4_ << 0x1f) >> 0x1f;
            auVar86._12_4_ = (auVar85._12_4_ << 0x1f) >> 0x1f;
            auVar20 = NEON_bit(auVar20,auVar107,auVar86,1);
          }
          auVar77[0] = bVar18 & bVar112 & ~auVar76[0];
          auVar77[1] = bVar21 & bVar122 & ~auVar76[1];
          auVar77[2] = bVar22 & bVar123 & ~auVar76[2];
          auVar77[3] = bVar23 & bVar124 & ~auVar76[3];
          auVar77[4] = bVar56 & bVar125 & ~auVar76[4];
          auVar77[5] = bVar57 & bVar128 & ~auVar76[5];
          auVar77[6] = bVar58 & bVar129 & ~auVar76[6];
          auVar77[7] = bVar59 & bVar130 & ~auVar76[7];
          auVar77[8] = bVar60 & bVar131 & ~auVar76[8];
          auVar77[9] = bVar61 & bVar133 & ~auVar76[9];
          auVar77[10] = bVar62 & bVar134 & ~auVar76[10];
          auVar77[11] = bVar63 & bVar135 & ~auVar76[11];
          auVar77[12] = bVar64 & bVar136 & ~auVar76[12];
          auVar77[13] = bVar65 & bVar137 & ~auVar76[13];
          auVar77[14] = bVar66 & bVar138 & ~auVar76[14];
          auVar77[15] = bVar67 & bVar139 & ~auVar76[15];
          iVar82 = NEON_umaxv(auVar77,4);
          if (iVar82 != 0) {
            auVar107 = NEON_fcmgt(auVar20,auVar71,4);
            bVar79 = auVar77[0] & auVar107[0];
            bVar87 = auVar77[1] & auVar107[1];
            bVar88 = auVar77[2] & auVar107[2];
            bVar89 = auVar77[3] & auVar107[3];
            iVar82 = CONCAT13(bVar89,CONCAT12(bVar88,CONCAT11(bVar87,bVar79)));
            bVar90 = auVar77[4] & auVar107[4];
            bVar91 = auVar77[5] & auVar107[5];
            bVar92 = auVar77[6] & auVar107[6];
            bVar93 = auVar77[7] & auVar107[7];
            auVar75._0_8_ =
                 CONCAT17(bVar93,CONCAT16(bVar92,CONCAT15(bVar91,CONCAT14(bVar90,iVar82))));
            auVar75[8] = auVar77[8] & auVar107[8];
            auVar75[9] = auVar77[9] & auVar107[9];
            auVar75[10] = auVar77[10] & auVar107[10];
            auVar75[11] = auVar77[11] & auVar107[11];
            auVar78[12] = auVar77[12] & auVar107[12];
            auVar78._0_12_ = auVar75;
            auVar78[13] = auVar77[13] & auVar107[13];
            auVar78[14] = auVar77[14] & auVar107[14];
            auVar78[15] = auVar77[15] & auVar107[15];
            iVar115 = NEON_umaxv(auVar78,4);
            if (iVar115 != 0) {
              if ((int)local_44 < 1) {
                auVar107 = ZEXT816(0);
              }
              else {
                lVar9 = 0;
                auVar99._4_4_ = uVar68;
                auVar99._0_4_ = uVar68;
                auVar99._8_4_ = uVar68;
                auVar99._12_4_ = uVar68;
                auVar107 = ZEXT816(0);
                pauVar8 = (undefined (*) [16])&local_850;
                uVar68 = local_44;
                do {
                  uVar105 = *(undefined8 *)*pauVar8;
                  auVar111 = *pauVar8;
                  auVar76 = NEON_fcmgt(auVar111,auVar71,4);
                  bVar113 = bVar79 & auVar76[0];
                  uVar114 = CONCAT11(bVar87 & auVar76[1],bVar113);
                  iVar80 = CONCAT13(bVar89 & auVar76[3],CONCAT12(bVar88 & auVar76[2],uVar114));
                  bVar126 = bVar90 & auVar76[4];
                  uVar116 = CONCAT15(bVar91 & auVar76[5],CONCAT14(bVar126,iVar80));
                  uVar117 = CONCAT17(bVar93 & auVar76[7],CONCAT16(bVar92 & auVar76[6],uVar116));
                  bVar132 = auVar75[8] & auVar76[8];
                  auVar118._0_10_ = CONCAT19(auVar75[9] & auVar76[9],CONCAT18(bVar132,uVar117));
                  auVar118[10] = auVar75[10] & auVar76[10];
                  auVar118[11] = auVar75[11] & auVar76[11];
                  auVar119[12] = auVar78[12] & auVar76[12];
                  auVar119._0_12_ = auVar118;
                  auVar119[13] = auVar78[13] & auVar76[13];
                  auVar121[14] = auVar78[14] & auVar76[14];
                  auVar121._0_14_ = auVar119;
                  auVar121[15] = auVar78[15] & auVar76[15];
                  iVar115 = NEON_umaxv(auVar121,4);
                  if (iVar115 != 0) {
                    bVar113 = (bVar113 & 1) + (bVar126 & 2) + (bVar132 & 4) + (auVar119[12] & 8);
                    if ((bVar113 & 1) == 0) {
                      if ((bVar113 >> 1 & 1) == 0) goto LAB_00e55870;
LAB_00e55898:
                      *(int *)(*pauVar8 + 4) = auVar71._4_4_;
                      if ((bVar113 >> 2 & 1) != 0) goto LAB_00e558a4;
LAB_00e55874:
                      if ((bVar113 >> 3 & 1) == 0) goto LAB_00e55878;
LAB_00e558b0:
                      *(int *)(*pauVar8 + 0xc) = auVar71._12_4_;
                      uVar6 = *(undefined8 *)(pauVar8[0x40] + 8);
                      uVar148 = (undefined)uVar6;
                      uVar149 = (undefined)((ulong)uVar6 >> 8);
                      uVar150 = (undefined)((ulong)uVar6 >> 0x10);
                      uVar151 = (undefined)((ulong)uVar6 >> 0x18);
                      uVar152 = (undefined)((ulong)uVar6 >> 0x20);
                      uVar153 = (undefined)((ulong)uVar6 >> 0x28);
                      uVar154 = (undefined)((ulong)uVar6 >> 0x30);
                      uVar155 = (undefined)((ulong)uVar6 >> 0x38);
                      uVar6 = *(undefined8 *)pauVar8[0x40];
                      uVar140 = (undefined)uVar6;
                      uVar141 = (undefined)((ulong)uVar6 >> 8);
                      uVar142 = (undefined)((ulong)uVar6 >> 0x10);
                      uVar143 = (undefined)((ulong)uVar6 >> 0x18);
                      uVar144 = (undefined)((ulong)uVar6 >> 0x20);
                      uVar145 = (undefined)((ulong)uVar6 >> 0x28);
                      uVar146 = (undefined)((ulong)uVar6 >> 0x30);
                      uVar147 = (undefined)((ulong)uVar6 >> 0x38);
                    }
                    else {
                      *(int *)*pauVar8 = auVar71._0_4_;
                      if ((bVar113 >> 1 & 1) != 0) goto LAB_00e55898;
LAB_00e55870:
                      if ((bVar113 >> 2 & 1) == 0) goto LAB_00e55874;
LAB_00e558a4:
                      *(int *)(*pauVar8 + 8) = auVar71._8_4_;
                      if ((bVar113 >> 3 & 1) != 0) goto LAB_00e558b0;
LAB_00e55878:
                      uVar6 = *(undefined8 *)(pauVar8[0x40] + 8);
                      uVar148 = (undefined)uVar6;
                      uVar149 = (undefined)((ulong)uVar6 >> 8);
                      uVar150 = (undefined)((ulong)uVar6 >> 0x10);
                      uVar151 = (undefined)((ulong)uVar6 >> 0x18);
                      uVar152 = (undefined)((ulong)uVar6 >> 0x20);
                      uVar153 = (undefined)((ulong)uVar6 >> 0x28);
                      uVar154 = (undefined)((ulong)uVar6 >> 0x30);
                      uVar155 = (undefined)((ulong)uVar6 >> 0x38);
                      uVar6 = *(undefined8 *)pauVar8[0x40];
                      uVar140 = (undefined)uVar6;
                      uVar141 = (undefined)((ulong)uVar6 >> 8);
                      uVar142 = (undefined)((ulong)uVar6 >> 0x10);
                      uVar143 = (undefined)((ulong)uVar6 >> 0x18);
                      uVar144 = (undefined)((ulong)uVar6 >> 0x20);
                      uVar145 = (undefined)((ulong)uVar6 >> 0x28);
                      uVar146 = (undefined)((ulong)uVar6 >> 0x30);
                      uVar147 = (undefined)((ulong)uVar6 >> 0x38);
                    }
                    if ((bVar113 & 1) != 0) {
                      *(int *)pauVar8[0x40] = auVar99._0_4_;
                    }
                    if ((bVar113 >> 1 & 1) != 0) {
                      *(int *)(pauVar8[0x40] + 4) = auVar99._4_4_;
                    }
                    if ((bVar113 >> 2 & 1) != 0) {
                      *(int *)(pauVar8[0x40] + 8) = auVar99._8_4_;
                    }
                    if ((bVar113 >> 3 & 1) != 0) {
                      *(int *)(pauVar8[0x40] + 0xc) = auVar99._12_4_;
                    }
                    uVar127 = (ushort)((uint6)uVar116 >> 0x20);
                    auVar110._0_4_ = (int)(float)uVar105;
                    auVar110._4_4_ = (int)auVar111._4_4_;
                    auVar110._8_4_ = (int)auVar111._8_4_;
                    auVar110._12_4_ = (int)auVar111._12_4_;
                    auVar111 = NEON_scvtf(auVar110,4);
                    auVar120._0_4_ = (iVar80 << 0x1f) >> 0x1f;
                    auVar120._4_4_ = ((int)((ulong)uVar117 >> 0x20) << 0x1f) >> 0x1f;
                    auVar120._8_4_ = (auVar118._8_4_ << 0x1f) >> 0x1f;
                    auVar120._12_4_ = (auVar121._12_4_ << 0x1f) >> 0x1f;
                    sVar156 = (short)((CONCAT22(uVar127,uVar114) << 0x1f) >> 0x1f);
                    sVar157 = (short)((int)((uint)uVar127 << 0x1f) >> 0x1f);
                    auVar71 = NEON_bit(auVar71,auVar111,auVar120,1);
                    auVar5[1] = uVar141;
                    auVar5[0] = uVar140;
                    auVar5[2] = uVar142;
                    auVar5[3] = uVar143;
                    auVar5[4] = uVar144;
                    auVar5[5] = uVar145;
                    auVar5[6] = uVar146;
                    auVar5[7] = uVar147;
                    auVar5[8] = uVar148;
                    auVar5[9] = uVar149;
                    auVar5[10] = uVar150;
                    auVar5[11] = uVar151;
                    auVar5[12] = uVar152;
                    auVar5[13] = uVar153;
                    auVar5[14] = uVar154;
                    auVar5[15] = uVar155;
                    auVar7._2_2_ = sVar156;
                    auVar7._0_2_ = sVar156;
                    auVar7._4_2_ = sVar157;
                    auVar7._6_2_ = sVar157;
                    auVar7._8_4_ = (int)((uint)(ushort)((unkuint10)auVar118._0_10_ >> 0x40) << 0x1f)
                                   >> 0x1f;
                    auVar7._12_4_ = (int)((uint)auVar119._12_2_ << 0x1f) >> 0x1f;
                    auVar99 = NEON_bit(auVar99,auVar5,auVar7,1);
                    auVar111 = *pauVar8;
                    uVar68 = local_44;
                  }
                  auVar107 = NEON_fmax(auVar107,auVar111,4);
                  lVar9 = lVar9 + 1;
                  pauVar8 = pauVar8 + 1;
                } while (lVar9 < (int)uVar68);
              }
              auVar70._0_4_ = (iVar82 << 0x1f) >> 0x1f;
              auVar70._4_4_ = ((int)((ulong)auVar75._0_8_ >> 0x20) << 0x1f) >> 0x1f;
              auVar70._8_4_ = (auVar75._8_4_ << 0x1f) >> 0x1f;
              auVar70._12_4_ = (auVar78._12_4_ << 0x1f) >> 0x1f;
              auVar20 = NEON_bit(auVar20,auVar107,auVar70,1);
            }
          }
          bVar18 = bVar18 & ~bVar24;
          bVar21 = bVar21 & bVar26;
          bVar22 = bVar22 & bVar28;
          bVar23 = bVar23 & bVar30;
          bVar56 = bVar56 & ~bVar32;
          bVar57 = bVar57 & bVar34;
          bVar58 = bVar58 & bVar36;
          bVar59 = bVar59 & bVar38;
          bVar60 = bVar60 & ~bVar40;
          bVar61 = bVar61 & bVar42;
          bVar62 = bVar62 & bVar44;
          bVar63 = bVar63 & bVar46;
          bVar64 = bVar64 & ~bVar48;
          bVar65 = bVar65 & bVar50;
          bVar66 = bVar66 & bVar52;
          bVar67 = bVar67 & bVar54;
          iVar12 = iVar12 + 1;
          iVar16 = iVar16 + 1;
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0xd06);
    bVar24 = bVar60 & bVar131 & 4;
    bVar32 = bVar64 & bVar136 & 8;
    if ((byte)((bVar18 & bVar112 & 1 & cVar31 >> 7) + (bVar56 & bVar125 & 2 & cVar39 >> 7) +
              (bVar24 & cVar47 >> 7) + (bVar32 & cVar55 >> 7)) != '\0') {
      puts("src/kernel_astc.ispc:1286:5: Assertion failed: count >= 0 \n");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (0 < (int)local_44) {
      uVar19 = ((bVar18 & bVar112) & 0xffff01) + (uint)((bVar56 & bVar125) & 0xff02) +
               (uint)bVar24 + (uint)bVar32;
      lVar15 = 0;
      lVar9 = (ulong)local_44 * 0x10;
      if ((uVar19 & 1) == 0) {
        if ((uVar19 >> 1 & 1) == 0) {
          do {
            auVar20 = *(undefined (*) [16])((long)&local_450 + lVar15);
            lVar3 = param_5 + (int)lVar15;
            if ((uVar19 >> 2 & 1) != 0) {
              *(int *)(lVar3 + 8) = auVar20._8_4_;
            }
            if ((uVar19 >> 3 & 1) != 0) {
              *(int *)(lVar3 + 0xc) = auVar20._12_4_;
            }
            lVar15 = lVar15 + 0x10;
          } while (lVar9 - lVar15 != 0);
        }
        else {
          do {
            auVar20 = *(undefined (*) [16])((long)&local_450 + lVar15);
            lVar3 = param_5 + (int)lVar15;
            *(int *)(lVar3 + 4) = auVar20._4_4_;
            if ((uVar19 >> 2 & 1) != 0) {
              *(int *)(lVar3 + 8) = auVar20._8_4_;
            }
            if ((uVar19 >> 3 & 1) != 0) {
              *(int *)(lVar3 + 0xc) = auVar20._12_4_;
            }
            lVar15 = lVar15 + 0x10;
          } while (lVar9 - lVar15 != 0);
        }
      }
      else {
        do {
          auVar20 = *(undefined (*) [16])((long)&local_450 + lVar15);
          puVar2 = (undefined4 *)(param_5 + (int)lVar15);
          *puVar2 = auVar20._0_4_;
          if ((uVar19 >> 1 & 1) != 0) {
            puVar2[1] = auVar20._4_4_;
          }
          if ((uVar19 >> 2 & 1) != 0) {
            puVar2[2] = auVar20._8_4_;
          }
          if ((uVar19 >> 3 & 1) != 0) {
            puVar2[3] = auVar20._12_4_;
          }
          lVar15 = lVar15 + 0x10;
        } while (lVar9 - lVar15 != 0);
      }
    }
  }
  return;
}


