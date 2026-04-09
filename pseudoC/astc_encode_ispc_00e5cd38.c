// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: astc_encode_ispc
// Entry Point: 00e5cd38
// Size: 2396 bytes
// Signature: undefined astc_encode_ispc(void)


/* WARNING: Type propagation algorithm not settling */

void astc_encode_ispc(long *param_1,long param_2,long param_3,undefined8 *param_4,uint *param_5,
                     uint *param_6)

{
  long lVar1;
  undefined auVar2 [16];
  undefined8 uVar3;
  ushort uVar4;
  undefined auVar5 [12];
  undefined auVar6 [12];
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  uint5 uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  byte bVar18;
  uint uVar21;
  uint uVar22;
  byte bVar33;
  ushort uVar34;
  undefined4 uVar35;
  byte bVar36;
  undefined4 uVar37;
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined4 uVar39;
  undefined auVar31 [16];
  undefined8 uVar38;
  undefined auVar32 [16];
  byte bVar40;
  uint uVar41;
  int iVar42;
  undefined5 uVar44;
  undefined8 uVar45;
  undefined4 uVar46;
  byte bVar49;
  uint uVar50;
  undefined5 uVar51;
  undefined8 uVar52;
  undefined4 uVar53;
  int iVar56;
  int iVar58;
  int iVar59;
  undefined auVar57 [16];
  uint uVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  uint uVar65;
  int iVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  undefined auVar66 [16];
  undefined auVar71 [12];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined uVar76;
  undefined uVar77;
  undefined8 uStack_22c8;
  uint local_22b0;
  uint uStack_22ac;
  uint uStack_22a8;
  uint uStack_22a4;
  undefined4 *local_2290;
  uint local_2288;
  uint uStack_2284;
  uint local_2280;
  uint local_227c;
  byte local_2278;
  uint local_2270;
  uint local_226c;
  uint local_2268;
  uint local_2264;
  undefined4 local_2160;
  undefined4 uStack_215c;
  undefined4 uStack_2158;
  undefined4 uStack_2154;
  uint local_2150;
  undefined4 local_2140;
  undefined4 local_213c;
  undefined4 local_2138;
  undefined4 local_2134;
  uint local_2130;
  uint local_212c;
  int local_2120;
  int local_211c;
  int local_2118;
  int local_2114;
  undefined4 local_20e0;
  undefined4 local_20dc;
  undefined4 local_20d8;
  undefined4 local_20d4;
  undefined4 local_2080 [1024];
  undefined4 auStack_1080 [1024];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  uint local_3c;
  uint local_34;
  undefined2 uVar19;
  int iVar20;
  undefined6 uVar23;
  undefined auVar24 [12];
  undefined auVar25 [14];
  undefined auVar26 [16];
  uint5 uVar43;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar54;
  undefined4 uVar55;
  
  uVar52 = param_4[1];
  uVar45 = *param_4;
  uVar3 = param_4[3];
  uVar38 = param_4[2];
  uVar21 = (uint)uVar45;
  uVar76 = (undefined)((ulong)uVar52 >> 8);
  bVar40 = (byte)((ulong)uVar38 >> 8);
  uVar77 = (undefined)((ulong)uVar3 >> 8);
  auVar57[4] = (byte)uVar52;
  auVar57._0_4_ = uVar21;
  auVar57[5] = uVar76;
  auVar57[6] = (char)((ulong)uVar52 >> 0x10);
  auVar57[7] = (char)((ulong)uVar52 >> 0x18);
  auVar57[8] = (byte)uVar38;
  auVar57[9] = bVar40;
  auVar57[10] = (char)((ulong)uVar38 >> 0x10);
  auVar57[11] = (char)((ulong)uVar38 >> 0x18);
  auVar57[12] = (byte)uVar3;
  auVar57[13] = uVar77;
  auVar57[14] = (char)((ulong)uVar3 >> 0x10);
  auVar57[15] = (char)((ulong)uVar3 >> 0x18);
  auVar57 = NEON_cmeq(auVar57,0,2);
  if ((byte)((auVar57[0] & 1) + (auVar57[4] & 2) + (auVar57[8] & 4) + (auVar57[12] & 8)) == '\x0f')
  {
    return;
  }
  uVar22 = (uint)(ushort)((ulong)uVar38 >> 0x30);
  uVar4 = (ushort)((ulong)uVar3 >> 0x30);
  bVar18 = ~auVar57[0];
  uVar19 = CONCAT11(~auVar57[1],bVar18);
  iVar20 = CONCAT13(~auVar57[3],CONCAT12(~auVar57[2],uVar19));
  bVar33 = ~auVar57[4];
  uVar23 = CONCAT15(~auVar57[5],CONCAT14(bVar33,iVar20));
  auVar27._0_8_ = CONCAT17(~auVar57[7],CONCAT16(~auVar57[6],uVar23));
  bVar36 = ~auVar57[8];
  auVar24._0_10_ = CONCAT19(~auVar57[9],CONCAT18(bVar36,auVar27._0_8_));
  auVar24[10] = ~auVar57[10];
  auVar24[11] = ~auVar57[11];
  auVar25[12] = ~auVar57[12];
  auVar25._0_12_ = auVar24;
  auVar25[13] = ~auVar57[13];
  auVar26[14] = ~auVar57[14];
  auVar26._0_14_ = auVar25;
  auVar26[15] = ~auVar57[15];
  local_40 = *param_6;
  local_3c = param_6[1];
  local_34 = param_6[4];
  iVar42 = *(int *)(param_1 + 1);
  uVar7 = (ushort)((ulong)uVar45 >> 0x20);
  uVar9 = (ushort)((ulong)uVar38 >> 0x20);
  uVar8 = (ushort)((ulong)uVar52 >> 0x20);
  uVar10 = (ushort)((ulong)uVar3 >> 0x20);
  if ((int)local_3c < 1) {
    uVar41 = (uint)(bVar18 & 1);
    uVar50 = (uint)(bVar36 & 4);
  }
  else {
    iVar58 = 0;
    uVar14 = 0;
    uVar34 = (ushort)((uint6)uVar23 >> 0x20);
    uVar41 = (uint)(bVar18 & 1);
    uVar50 = (uint)(bVar36 & 4);
    uVar60 = uVar41 + (bVar33 & 2) + uVar50 + (auVar25[12] & 8);
    do {
      if (0 < (int)local_40) {
        uVar15 = 0;
        iVar56 = *(int *)(param_1 + 2);
        lVar17 = *param_1;
        do {
          iVar59 = (int)uVar15;
          iVar64 = iVar56 * (uVar14 + local_3c * (ushort)((ulong)uVar45 >> 0x30)) +
                   (iVar59 + local_40 * uVar7) * 4;
          iVar67 = iVar56 * (uVar14 + local_3c * (ushort)((ulong)uVar52 >> 0x30)) +
                   (iVar59 + local_40 * uVar8) * 4;
          uVar16 = CONCAT44(iVar67 + ((uint)(iVar67 >> 0x1f) >> 0x1e),
                            iVar64 + ((uint)(iVar64 >> 0x1f) >> 0x1e)) & 0xfffffffcfffffffc;
          iVar64 = ((int)(iVar56 * (uVar14 + local_3c * uVar22) + (iVar59 + local_40 * uVar9) * 4) /
                   4) * 4;
          iVar67 = ((int)(iVar56 * (uVar14 + local_3c * uVar4) + (iVar59 + local_40 * uVar10) * 4) /
                   4) * 4;
          bVar49 = (byte)((CONCAT22(uVar34,uVar19) << 0x1f) >> 0x1f);
          iVar61 = CONCAT13((byte)(uVar16 >> 0x18) & bVar49,
                            CONCAT12((byte)(uVar16 >> 0x10) & bVar49,
                                     CONCAT11((byte)(uVar16 >> 8) & bVar49,(byte)uVar16 & bVar49)));
          bVar49 = (byte)((int)((uint)uVar34 << 0x1f) >> 0x1f);
          auVar71._0_8_ =
               CONCAT17((byte)(uVar16 >> 0x38) & bVar49,
                        CONCAT16((byte)(uVar16 >> 0x30) & bVar49,
                                 CONCAT15((byte)(uVar16 >> 0x28) & bVar49,
                                          CONCAT14((byte)(uVar16 >> 0x20) & bVar49,iVar61))));
          bVar49 = (byte)((int)((uint)(ushort)((unkuint10)auVar24._0_10_ >> 0x40) << 0x1f) >> 0x1f);
          auVar71[8] = (byte)iVar64 & bVar49;
          auVar71[9] = (byte)((uint)iVar64 >> 8) & bVar49;
          auVar71[10] = (byte)((uint)iVar64 >> 0x10) & bVar49;
          auVar71[11] = (byte)((uint)iVar64 >> 0x18) & bVar49;
          bVar49 = (byte)((int)((uint)auVar25._12_2_ << 0x1f) >> 0x1f);
          auVar73[12] = (byte)iVar67 & bVar49;
          auVar73._0_12_ = auVar71;
          auVar73[13] = (byte)((uint)iVar67 >> 8) & bVar49;
          auVar73[14] = (byte)((uint)iVar67 >> 0x10) & bVar49;
          auVar73[15] = (byte)((uint)iVar67 >> 0x18) & bVar49;
          uVar65 = *(uint *)(lVar17 + iVar61);
          uVar68 = *(uint *)(lVar17 + (int)((ulong)auVar71._0_8_ >> 0x20));
          uVar69 = *(uint *)(lVar17 + auVar71._8_4_);
          uVar70 = *(uint *)(lVar17 + auVar73._12_4_);
          auVar72._0_5_ = CONCAT14((char)uVar68,uVar65) & 0xff000000ff;
          auVar72._5_3_ = 0;
          auVar72[8] = (char)uVar69;
          auVar72._9_3_ = 0;
          auVar72[12] = (char)uVar70;
          auVar72._13_3_ = 0;
          auVar73 = NEON_scvtf(auVar72,4);
          lVar1 = (long)(iVar58 + iVar59);
          if ((uVar60 & 1) != 0) {
            local_2080[lVar1 * 4] = auVar73._0_4_;
          }
          if ((uVar60 >> 1 & 1) != 0) {
            local_2080[lVar1 * 4 + 1] = auVar73._4_4_;
          }
          if ((uVar60 >> 2 & 1) != 0) {
            local_2080[lVar1 * 4 + 2] = auVar73._8_4_;
          }
          if ((uVar60 >> 3 & 1) != 0) {
            local_2080[lVar1 * 4 + 3] = auVar73._12_4_;
          }
          auVar74._0_5_ = CONCAT14((char)(uVar68 >> 8),uVar65 >> 8) & 0xff000000ff;
          auVar74._5_3_ = 0;
          auVar74[8] = (undefined)(uVar69 >> 8);
          auVar74._9_3_ = 0;
          auVar74[12] = (undefined)(uVar70 >> 8);
          auVar74._13_3_ = 0;
          auVar73 = NEON_scvtf(auVar74,4);
          lVar1 = (long)(iVar58 + iVar59 + 0x40);
          if ((uVar60 & 1) != 0) {
            local_2080[lVar1 * 4] = auVar73._0_4_;
          }
          if ((uVar60 >> 1 & 1) != 0) {
            local_2080[lVar1 * 4 + 1] = auVar73._4_4_;
          }
          if ((uVar60 >> 2 & 1) != 0) {
            local_2080[lVar1 * 4 + 2] = auVar73._8_4_;
          }
          if ((uVar60 >> 3 & 1) != 0) {
            local_2080[lVar1 * 4 + 3] = auVar73._12_4_;
          }
          auVar75._0_5_ = CONCAT14((char)(uVar68 >> 0x10),uVar65 >> 0x10) & 0xff000000ff;
          auVar75._5_3_ = 0;
          auVar75[8] = (undefined)(uVar69 >> 0x10);
          auVar75._9_3_ = 0;
          auVar75[12] = (undefined)(uVar70 >> 0x10);
          auVar75._13_3_ = 0;
          auVar73 = NEON_scvtf(auVar75,4);
          lVar1 = (long)(iVar58 + iVar59 + 0x80);
          if ((uVar60 & 1) != 0) {
            local_2080[lVar1 * 4] = auVar73._0_4_;
          }
          if ((uVar60 >> 1 & 1) != 0) {
            local_2080[lVar1 * 4 + 1] = auVar73._4_4_;
          }
          if ((uVar60 >> 2 & 1) != 0) {
            local_2080[lVar1 * 4 + 2] = auVar73._8_4_;
          }
          if ((uVar60 >> 3 & 1) != 0) {
            local_2080[lVar1 * 4 + 3] = auVar73._12_4_;
          }
          auVar66._0_4_ = uVar65 >> 0x18;
          auVar66._4_4_ = uVar68 >> 0x18;
          auVar66._8_4_ = uVar69 >> 0x18;
          auVar66._12_4_ = uVar70 >> 0x18;
          auVar73 = NEON_scvtf(auVar66,4);
          lVar1 = (long)(iVar58 + iVar59 + 0xc0);
          if ((uVar60 & 1) != 0) {
            local_2080[lVar1 * 4] = auVar73._0_4_;
          }
          if ((uVar60 >> 1 & 1) != 0) {
            local_2080[lVar1 * 4 + 1] = auVar73._4_4_;
          }
          if ((uVar60 >> 2 & 1) != 0) {
            local_2080[lVar1 * 4 + 2] = auVar73._8_4_;
          }
          if ((uVar60 >> 3 & 1) != 0) {
            local_2080[lVar1 * 4 + 3] = auVar73._12_4_;
          }
          uVar15 = uVar15 + 1;
        } while (local_40 != uVar15);
      }
      uVar14 = uVar14 + 1;
      iVar58 = iVar58 + 8;
    } while (uVar14 != local_3c);
  }
  uVar11 = CONCAT14(auVar25[12],uVar50);
  uVar43 = CONCAT14(bVar33,uVar41) & 0x2ffffffff;
  local_2280 = *param_5;
  local_227c = param_5[1];
  uVar65 = (int)uVar43 + (uint)(byte)(uVar43 >> 0x20) +
           (int)(uVar11 & 0x8ffffffff) + (uint)(byte)((uVar11 & 0x8ffffffff) >> 0x20);
  local_2278 = *(byte *)(param_5 + 3) & 1;
  local_2150 = param_5[4];
  local_2130 = param_5[5];
  local_212c = param_5[2];
  uVar41 = (uint)uVar52;
  uVar50 = (uint)uVar38;
  uVar14 = (uint)uVar3;
  uVar60 = (uint)((byte)uVar45 & 0xf);
  if ((uVar65 & 1) == 0) {
    uVar60 = local_2270;
  }
  local_2270 = uVar60;
  if ((uVar65 >> 1 & 1) != 0) {
    local_226c = (uint)((byte)uVar52 & 0xf);
  }
  uVar60 = (uint)((byte)uVar38 & 0xf);
  if ((uVar65 >> 2 & 1) == 0) {
    uVar60 = local_2268;
  }
  local_2268 = uVar60;
  if ((uVar65 >> 3 & 1) == 0) {
    uVar11 = CONCAT14((char)(uVar41 >> 4),(uint)((byte)(uVar21 >> 4) & 3));
    uVar43 = CONCAT14((char)(uVar14 >> 4),(uint)((byte)(uVar50 >> 4) & 3));
  }
  else {
    local_2264 = (uint)((byte)uVar3 & 0xf);
    uVar11 = CONCAT14((char)(uVar41 >> 4),(uint)((byte)(uVar21 >> 4) & 3));
    uVar43 = CONCAT14((char)(uVar14 >> 4),(uint)((byte)(uVar50 >> 4) & 3));
  }
  if ((uVar65 & 1) != 0) {
    local_2160 = (undefined4)(uVar11 & 0x3ffffffff);
  }
  if ((uVar65 >> 1 & 1) != 0) {
    uStack_215c = ZEXT14((byte)(char)((uVar11 & 0x3ffffffff) >> 0x20));
  }
  if ((uVar65 >> 2 & 1) != 0) {
    uStack_2158 = (undefined4)(uVar43 & 0x3ffffffff);
  }
  if ((uVar65 >> 3 & 1) != 0) {
    uStack_2154 = ZEXT14((byte)(char)((uVar43 & 0x3ffffffff) >> 0x20));
  }
  if ((uVar65 & 1) != 0) {
    local_2140 = 0;
  }
  if ((uVar65 >> 1 & 1) != 0) {
    local_213c = 0;
  }
  if ((uVar65 >> 2 & 1) != 0) {
    local_2138 = 0;
  }
  if ((uVar65 >> 3 & 1) != 0) {
    local_2134 = 0;
  }
  iVar58 = ((byte)(uVar21 >> 5) & 6) + 6;
  if ((uVar65 & 1) == 0) {
    iVar58 = local_2120;
  }
  local_2120 = iVar58;
  if ((uVar65 >> 1 & 1) != 0) {
    local_211c = ((byte)(uVar41 >> 5) & 6) + 6;
  }
  iVar58 = ((byte)(uVar50 >> 5) & 6) + 6;
  if ((uVar65 >> 2 & 1) == 0) {
    iVar58 = local_2118;
  }
  local_2118 = iVar58;
  if ((uVar65 >> 3 & 1) != 0) {
    local_2114 = ((byte)(uVar14 >> 5) & 6) + 6;
  }
  uVar51 = CONCAT14(uVar77,(uint)(bVar40 & 0x1f)) & 0x1fffffffff;
  uVar44 = CONCAT14(uVar76,(uint)((byte)((ulong)uVar45 >> 8) & 0x1f)) & 0x1fffffffff;
  if ((uVar65 & 1) != 0) {
    local_20e0 = (undefined4)uVar44;
  }
  if ((uVar65 >> 1 & 1) != 0) {
    local_20dc = ZEXT14((byte)(char)((uint5)uVar44 >> 0x20));
  }
  if ((uVar65 >> 2 & 1) != 0) {
    local_20d8 = (undefined4)uVar51;
  }
  if ((uVar65 >> 3 & 1) != 0) {
    local_20d4 = ZEXT14((byte)(char)((uint5)uVar51 >> 0x20));
  }
  uStack_22a4 = (uint)uVar10;
  uStack_22ac = (uint)uVar8;
  uStack_22a8 = (uint)uVar9;
  local_22b0 = (uint)uVar7;
  iVar58 = 0;
  if (local_40 != 0) {
    iVar58 = iVar42 / (int)local_40;
  }
  auVar27._8_8_ = auVar26._8_8_;
  scale_pixels___un_3C_s_5B_vyastc_enc_state_5D__3E_un_3C_s_5B_unastc_enc_context_5D__3E_
            (local_2080,param_5);
  if (((local_212c == 3) && (0 < (int)local_227c)) &&
     (uVar15 = (ulong)local_2280, 0 < (int)local_2280)) {
    uVar21 = 0;
    iVar42 = 0xc0;
    do {
      uVar16 = uVar15;
      iVar56 = iVar42;
      if ((uVar65 & 1) == 0) {
        if ((uVar65 >> 1 & 1) == 0) {
          if ((uVar65 >> 2 & 1) == 0) {
            if ((uVar65 >> 3 & 1) != 0) {
              do {
                uVar16 = uVar16 - 1;
                auStack_1080[(long)iVar56 * 4 + 3] = 0x437f0000;
                iVar56 = iVar56 + 1;
              } while (uVar16 != 0);
            }
          }
          else {
            do {
              auStack_1080[(long)iVar56 * 4 + 2] = 0x437f0000;
              if ((uVar65 >> 3 & 1) != 0) {
                auStack_1080[(long)iVar56 * 4 + 3] = 0x437f0000;
              }
              iVar56 = iVar56 + 1;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
        }
        else {
          do {
            lVar17 = (long)iVar56;
            auStack_1080[lVar17 * 4 + 1] = 0x437f0000;
            if ((uVar65 >> 2 & 1) != 0) {
              auStack_1080[lVar17 * 4 + 2] = 0x437f0000;
            }
            if ((uVar65 >> 3 & 1) != 0) {
              auStack_1080[lVar17 * 4 + 3] = 0x437f0000;
            }
            iVar56 = iVar56 + 1;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
      }
      else {
        do {
          lVar17 = (long)iVar56;
          auStack_1080[lVar17 * 4] = 0x437f0000;
          if ((uVar65 >> 1 & 1) != 0) {
            auStack_1080[lVar17 * 4 + 1] = 0x437f0000;
          }
          if ((uVar65 >> 2 & 1) != 0) {
            auStack_1080[lVar17 * 4 + 2] = 0x437f0000;
          }
          if ((uVar65 >> 3 & 1) != 0) {
            auStack_1080[lVar17 * 4 + 3] = 0x437f0000;
          }
          iVar56 = iVar56 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      uVar21 = uVar21 + 1;
      iVar42 = iVar42 + 8;
    } while (uVar21 != local_227c);
  }
  if (local_2278 != 0) {
    local_2290 = auStack_1080;
    auVar13._4_4_ = uStack_215c;
    auVar13._0_4_ = local_2160;
    auVar13._8_4_ = uStack_2158;
    auVar13._12_4_ = uStack_2154;
    local_2288 = local_2280;
    uStack_2284 = local_227c;
    rotate_plane___un_3C_s_5B_vypixel_set_5D__3E_vyi(auVar13,auVar27._0_8_,&local_2290);
  }
  optimize_block___un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_un_3C_s_5B_vyastc_enc_state_5D__3E_
            (auVar27,auStack_1080,&local_2280,local_2080);
  auVar12._8_8_ = auVar27._8_8_;
  auVar12._0_8_ = auVar27._0_8_;
  auVar73 = measure_error___un_3C_s_5B_vyastc_block_5D__3E_un_3C_s_5B_vyastc_enc_state_5D__3E_
                      (auVar12,&local_2280,local_2080);
  iVar56 = local_22b0 + iVar58 * iVar58;
  iVar58 = uStack_22ac + iVar58 * iVar58;
  iVar59 = uStack_22a8 + (int)uStack_22c8 * uVar22;
  iVar64 = uStack_22a4 + (int)((ulong)uStack_22c8 >> 0x20) * (uint)uVar4;
  iVar67 = iVar56 * 4;
  iVar61 = iVar58 * 4;
  iVar62 = iVar59 * 4;
  iVar63 = iVar64 * 4;
  bVar40 = (byte)((iVar20 << 0x1f) >> 0x1f);
  iVar42 = CONCAT13((byte)((uint)iVar67 >> 0x18) & bVar40,
                    CONCAT12((byte)((uint)iVar67 >> 0x10) & bVar40,
                             CONCAT11((byte)((uint)iVar67 >> 8) & bVar40,(byte)iVar67 & bVar40)));
  bVar40 = (byte)(((int)((ulong)auVar27._0_8_ >> 0x20) << 0x1f) >> 0x1f);
  bVar49 = (byte)((auVar24._8_4_ << 0x1f) >> 0x1f);
  iVar20 = CONCAT13((byte)((uint)iVar62 >> 0x18) & bVar49,
                    CONCAT12((byte)((uint)iVar62 >> 0x10) & bVar49,
                             CONCAT11((byte)((uint)iVar62 >> 8) & bVar49,(byte)iVar62 & bVar49)));
  bVar49 = (byte)((auVar26._12_4_ << 0x1f) >> 0x1f);
  uVar46 = *(undefined4 *)
            (param_2 +
            (int)(CONCAT17((byte)((uint)iVar61 >> 0x18) & bVar40,
                           CONCAT16((byte)((uint)iVar61 >> 0x10) & bVar40,
                                    CONCAT15((byte)((uint)iVar61 >> 8) & bVar40,
                                             CONCAT14((byte)iVar61 & bVar40,iVar42)))) >> 0x20));
  uVar47 = *(undefined4 *)(param_2 + iVar20);
  uVar48 = *(undefined4 *)
            (param_2 +
            (int)(CONCAT17((byte)((uint)iVar63 >> 0x18) & bVar49,
                           CONCAT16((byte)((uint)iVar63 >> 0x10) & bVar49,
                                    CONCAT15((byte)((uint)iVar63 >> 8) & bVar49,
                                             CONCAT14((byte)iVar63 & bVar49,iVar20)))) >> 0x20));
  auVar2[4] = (char)uVar46;
  auVar2._0_4_ = *(undefined4 *)(param_2 + iVar42);
  auVar2[5] = (char)((uint)uVar46 >> 8);
  auVar2[6] = (char)((uint)uVar46 >> 0x10);
  auVar2[7] = (char)((uint)uVar46 >> 0x18);
  auVar2[8] = (char)uVar47;
  auVar2[9] = (char)((uint)uVar47 >> 8);
  auVar2[10] = (char)((uint)uVar47 >> 0x10);
  auVar2[11] = (char)((uint)uVar47 >> 0x18);
  auVar2[12] = (char)uVar48;
  auVar2[13] = (char)((uint)uVar48 >> 8);
  auVar2[14] = (char)((uint)uVar48 >> 0x10);
  auVar2[15] = (char)((uint)uVar48 >> 0x18);
  auVar27 = NEON_fcmgt(auVar2,auVar73,4);
  auVar28[0] = bVar18 & auVar27[0];
  auVar28[1] = ~auVar57[1] & auVar27[1];
  auVar28[2] = ~auVar57[2] & auVar27[2];
  auVar28[3] = ~auVar57[3] & auVar27[3];
  auVar28[4] = bVar33 & auVar27[4];
  auVar28[5] = ~auVar57[5] & auVar27[5];
  auVar28[6] = ~auVar57[6] & auVar27[6];
  auVar28[7] = ~auVar57[7] & auVar27[7];
  auVar28[8] = bVar36 & auVar27[8];
  auVar28[9] = ~auVar57[9] & auVar27[9];
  auVar28[10] = auVar24[10] & auVar27[10];
  auVar28[11] = auVar24[11] & auVar27[11];
  auVar28[12] = auVar25[12] & auVar27[12];
  auVar28[13] = auVar25[13] & auVar27[13];
  auVar28[14] = auVar26[14] & auVar27[14];
  auVar28[15] = auVar26[15] & auVar27[15];
  iVar42 = NEON_umaxv(auVar28,4);
  if (iVar42 != 0) {
    pack_block___un_3C_s_5B_vyastc_block_5D__3E_un_3C_s_5B_vyastc_enc_state_5D__3E_
              (&local_2280,local_2080);
    uVar21 = (uint)(auVar28[0] & 1) + (uint)(auVar28[4] & 2) +
             (uint)(auVar28[8] & 4) + (uint)(auVar28[12] & 8);
    uVar46 = (undefined4)((ulong)local_80 >> 0x20);
    uVar53 = (undefined4)((ulong)uStack_78 >> 0x20);
    uVar47 = (undefined4)((ulong)local_70 >> 0x20);
    uVar54 = (undefined4)((ulong)uStack_68 >> 0x20);
    uVar48 = (undefined4)((ulong)local_60 >> 0x20);
    uVar55 = (undefined4)((ulong)uStack_58 >> 0x20);
    if ((uVar21 & 1) != 0) {
      *(int *)(param_2 + iVar67) = auVar73._0_4_;
    }
    if ((uVar21 >> 1 & 1) != 0) {
      *(int *)(param_2 + iVar61) = auVar73._4_4_;
    }
    if ((uVar21 >> 2 & 1) != 0) {
      *(int *)(param_2 + iVar62) = auVar73._8_4_;
    }
    if ((uVar21 >> 3 & 1) == 0) {
      auVar29._0_4_ = iVar56 * 0x10;
      auVar29._4_4_ = iVar58 * 0x10;
      auVar29._8_4_ = iVar59 * 0x10;
      auVar29._12_4_ = iVar64 * 0x10;
    }
    else {
      *(int *)(param_2 + iVar63) = auVar73._12_4_;
      auVar29._0_4_ = iVar56 * 0x10;
      auVar29._4_4_ = iVar58 * 0x10;
      auVar29._8_4_ = iVar59 * 0x10;
      auVar29._12_4_ = iVar64 * 0x10;
    }
    uVar35 = auVar29._4_4_;
    uVar37 = auVar29._8_4_;
    uVar39 = auVar29._12_4_;
    if ((uVar21 & 1) == 0) {
      if ((uVar21 >> 1 & 1) != 0) {
        *(undefined4 *)(param_3 + (int)uVar35) = uVar46;
      }
      if ((uVar21 >> 2 & 1) != 0) {
        *(int *)(param_3 + (int)uVar37) = (int)uStack_78;
      }
      if ((uVar21 >> 3 & 1) != 0) {
        *(undefined4 *)(param_3 + (int)uVar39) = uVar53;
      }
      if ((uVar21 >> 1 & 1) != 0) {
        *(undefined4 *)(param_3 + (int)(uVar35 | 4)) = uVar47;
      }
      if ((uVar21 >> 2 & 1) != 0) {
        *(int *)(param_3 + (int)(uVar37 | 4)) = (int)uStack_68;
      }
      if ((uVar21 >> 3 & 1) != 0) {
        *(undefined4 *)(param_3 + (int)(uVar39 | 4)) = uVar54;
      }
      if ((uVar21 >> 1 & 1) != 0) {
        *(undefined4 *)(param_3 + (int)(uVar35 | 8)) = uVar48;
      }
      if ((uVar21 >> 2 & 1) != 0) {
        *(int *)(param_3 + (int)(uVar37 | 8)) = (int)uStack_58;
      }
      if ((uVar21 >> 3 & 1) == 0) {
        auVar5._4_8_ = auVar29._8_8_;
        auVar5._0_4_ = uVar35 | 0xc;
        auVar30._0_8_ = auVar5._0_8_ << 0x20;
        auVar30._8_4_ = uVar37 | 0xc;
        auVar30._12_4_ = uVar39 | 0xc;
        auVar24 = auVar30._4_12_;
        uVar38 = auVar30._8_8_;
      }
      else {
        *(undefined4 *)(param_3 + (int)(uVar39 | 8)) = uVar55;
        auVar6._4_8_ = auVar29._8_8_;
        auVar6._0_4_ = uVar35 | 0xc;
        auVar32._0_8_ = auVar6._0_8_ << 0x20;
        auVar32._8_4_ = uVar37 | 0xc;
        auVar32._12_4_ = uVar39 | 0xc;
        auVar24 = auVar32._4_12_;
        uVar38 = auVar32._8_8_;
      }
    }
    else {
      uVar22 = auVar29._0_4_;
      *(int *)(param_3 + (int)uVar22) = (int)local_80;
      if ((uVar21 >> 1 & 1) != 0) {
        *(undefined4 *)(param_3 + (int)uVar35) = uVar46;
      }
      if ((uVar21 >> 2 & 1) != 0) {
        *(int *)(param_3 + (int)uVar37) = (int)uStack_78;
      }
      if ((uVar21 >> 3 & 1) != 0) {
        *(undefined4 *)(param_3 + (int)uVar39) = uVar53;
      }
      *(int *)(param_3 + (int)(uVar22 | 4)) = (int)local_70;
      if ((uVar21 >> 1 & 1) != 0) {
        *(undefined4 *)(param_3 + (int)(uVar35 | 4)) = uVar47;
      }
      if ((uVar21 >> 2 & 1) != 0) {
        *(int *)(param_3 + (int)(uVar37 | 4)) = (int)uStack_68;
      }
      if ((uVar21 >> 3 & 1) != 0) {
        *(undefined4 *)(param_3 + (int)(uVar39 | 4)) = uVar54;
      }
      *(int *)(param_3 + (int)(uVar22 | 8)) = (int)local_60;
      if ((uVar21 >> 1 & 1) != 0) {
        *(undefined4 *)(param_3 + (int)(uVar35 | 8)) = uVar48;
      }
      if ((uVar21 >> 2 & 1) != 0) {
        *(int *)(param_3 + (int)(uVar37 | 8)) = (int)uStack_58;
      }
      if ((uVar21 >> 3 & 1) != 0) {
        *(undefined4 *)(param_3 + (int)(uVar39 | 8)) = uVar55;
      }
      auVar31._0_8_ = auVar29._0_8_ | 0xc0000000c;
      auVar31._8_4_ = uVar37 | 0xc;
      auVar31._12_4_ = uVar39 | 0xc;
      auVar24 = auVar31._4_12_;
      uVar38 = auVar31._8_8_;
      *(int *)(param_3 + (int)auVar31._0_8_) = (int)local_50;
    }
    if ((uVar21 >> 1 & 1) == 0) {
      iVar42 = (int)((ulong)uVar38 >> 0x20);
    }
    else {
      iVar42 = auVar24._8_4_;
      uVar38 = auVar24._4_8_;
      *(int *)(param_3 + auVar24._0_4_) = (int)((ulong)local_50 >> 0x20);
    }
    if ((uVar21 >> 2 & 1) != 0) {
      iVar42 = (int)((ulong)uVar38 >> 0x20);
      *(int *)(param_3 + (int)uVar38) = (int)uStack_48;
    }
    if ((uVar21 >> 3 & 1) != 0) {
      *(int *)(param_3 + iVar42) = (int)((ulong)uStack_48 >> 0x20);
    }
    return;
  }
  return;
}


