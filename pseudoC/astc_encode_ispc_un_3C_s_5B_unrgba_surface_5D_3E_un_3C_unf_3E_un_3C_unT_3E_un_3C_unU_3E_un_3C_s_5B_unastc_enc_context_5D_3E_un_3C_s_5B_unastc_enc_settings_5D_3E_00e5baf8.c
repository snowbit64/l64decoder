// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: astc_encode_ispc___un_3C_s_5B_unrgba_surface_5D__3E_un_3C_unf_3E_un_3C_unT_3E_un_3C_unU_3E_un_3C_s_5B_unastc_enc_context_5D__3E_un_3C_s_5B_unastc_enc_settings_5D__3E_
// Entry Point: 00e5baf8
// Size: 2520 bytes
// Signature: undefined astc_encode_ispc___un_3C_s_5B_unrgba_surface_5D__3E_un_3C_unf_3E_un_3C_unT_3E_un_3C_unU_3E_un_3C_s_5B_unastc_enc_context_5D__3E_un_3C_s_5B_unastc_enc_settings_5D__3E_(void)


/* WARNING: Type propagation algorithm not settling */

void astc_encode_ispc___un_3C_s_5B_unrgba_surface_5D__3E_un_3C_unf_3E_un_3C_unT_3E_un_3C_unU_3E_un_3C_s_5B_unastc_enc_context_5D__3E_un_3C_s_5B_unastc_enc_settings_5D__3E_
               (undefined param_1 [16],long *param_2,long param_3,long param_4,undefined8 *param_5,
               uint *param_6,uint *param_7)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined3 uVar6;
  undefined auVar7 [16];
  undefined2 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined auVar13 [12];
  undefined auVar14 [12];
  ushort uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  ushort uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  undefined auVar25 [13];
  uint5 uVar24;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined auVar26 [13];
  undefined auVar27 [13];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined4 uVar38;
  undefined auVar34 [16];
  int iVar39;
  undefined auVar35 [16];
  byte bVar40;
  byte bVar41;
  undefined uVar42;
  byte bVar43;
  byte bVar44;
  undefined uVar45;
  undefined uVar46;
  undefined uVar47;
  undefined uVar48;
  undefined uVar49;
  undefined uVar50;
  undefined uVar51;
  undefined uVar52;
  undefined uVar53;
  undefined uVar54;
  undefined uVar55;
  undefined uVar56;
  int iVar57;
  undefined8 uVar58;
  int iVar59;
  undefined8 uVar60;
  byte bVar61;
  uint uVar62;
  int iVar63;
  byte bVar65;
  int iVar66;
  byte bVar67;
  int iVar68;
  byte bVar69;
  undefined auVar64 [16];
  int iVar70;
  byte bVar71;
  int iVar72;
  uint uVar73;
  int iVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  undefined auVar74 [16];
  undefined auVar79 [12];
  undefined auVar80 [16];
  undefined auVar81 [16];
  undefined auVar82 [16];
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  undefined8 uStack_22f8;
  undefined4 *local_22c0;
  uint local_22b8;
  uint uStack_22b4;
  uint local_22b0;
  uint local_22ac;
  byte local_22a8;
  undefined4 local_22a0;
  uint local_229c;
  uint local_2298;
  uint local_2294;
  undefined4 local_2190;
  undefined4 uStack_218c;
  undefined4 uStack_2188;
  undefined4 uStack_2184;
  uint local_2180;
  undefined4 local_2170;
  undefined4 local_216c;
  undefined4 local_2168;
  undefined4 local_2164;
  uint local_2160;
  uint local_215c;
  int local_2150;
  int local_214c;
  int local_2148;
  int local_2144;
  undefined4 local_2110;
  undefined4 local_210c;
  undefined4 local_2108;
  undefined4 local_2104;
  undefined4 local_20b0 [1024];
  undefined4 auStack_10b0 [1024];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  uint local_6c;
  uint local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  bVar92 = param_1[12];
  bVar89 = param_1[8];
  bVar86 = param_1[4];
  bVar83 = param_1[0];
  uVar22 = (uint)(bVar83 & 1) + (uint)(bVar86 & 2) + (uint)(bVar89 & 4) + (uint)(bVar92 & 8);
  if ((~uVar22 & 9) == 0) {
    uVar60 = param_5[1];
    uVar58 = *param_5;
    uVar11 = param_5[3];
    bVar43 = (byte)uVar11;
    bVar44 = (byte)((ulong)uVar11 >> 8);
    uVar51 = (undefined)((ulong)uVar11 >> 0x10);
    uVar52 = (undefined)((ulong)uVar11 >> 0x18);
    uVar53 = (undefined)((ulong)uVar11 >> 0x20);
    uVar54 = (undefined)((ulong)uVar11 >> 0x28);
    uVar55 = (undefined)((ulong)uVar11 >> 0x30);
    uVar56 = (undefined)((ulong)uVar11 >> 0x38);
    uVar11 = param_5[2];
    bVar40 = (byte)uVar11;
    bVar41 = (byte)((ulong)uVar11 >> 8);
    uVar45 = (undefined)((ulong)uVar11 >> 0x10);
    uVar46 = (undefined)((ulong)uVar11 >> 0x18);
    uVar47 = (undefined)((ulong)uVar11 >> 0x20);
    uVar48 = (undefined)((ulong)uVar11 >> 0x28);
    uVar49 = (undefined)((ulong)uVar11 >> 0x30);
    uVar50 = (undefined)((ulong)uVar11 >> 0x38);
  }
  else {
    uVar58 = local_60;
    if ((uVar22 & 1) != 0) {
      uVar58 = *param_5;
    }
    uVar60 = uStack_58;
    if ((uVar22 >> 1 & 1) != 0) {
      uVar60 = param_5[1];
    }
    if ((uVar22 >> 2 & 1) != 0) {
      local_50 = param_5[2];
    }
    if ((uVar22 >> 3 & 1) != 0) {
      uStack_48 = param_5[3];
    }
    bVar43 = (byte)uStack_48;
    bVar44 = (byte)((ulong)uStack_48 >> 8);
    uVar51 = (undefined)((ulong)uStack_48 >> 0x10);
    uVar52 = (undefined)((ulong)uStack_48 >> 0x18);
    uVar53 = (undefined)((ulong)uStack_48 >> 0x20);
    uVar54 = (undefined)((ulong)uStack_48 >> 0x28);
    uVar55 = (undefined)((ulong)uStack_48 >> 0x30);
    uVar56 = (undefined)((ulong)uStack_48 >> 0x38);
    bVar40 = (byte)local_50;
    bVar41 = (byte)((ulong)local_50 >> 8);
    uVar45 = (undefined)((ulong)local_50 >> 0x10);
    uVar46 = (undefined)((ulong)local_50 >> 0x18);
    uVar47 = (undefined)((ulong)local_50 >> 0x20);
    uVar48 = (undefined)((ulong)local_50 >> 0x28);
    uVar49 = (undefined)((ulong)local_50 >> 0x30);
    uVar50 = (undefined)((ulong)local_50 >> 0x38);
    local_60 = uVar58;
    uStack_58 = uVar60;
  }
  uVar23 = (uint)uVar58;
  uVar42 = (undefined)((ulong)uVar60 >> 8);
  uVar6 = CONCAT12(uVar45,CONCAT11(bVar41,bVar40));
  uVar8 = CONCAT11(bVar44,bVar43);
  auVar64[4] = (char)uVar60;
  auVar64._0_4_ = uVar23;
  auVar64[5] = uVar42;
  auVar64[6] = (char)((ulong)uVar60 >> 0x10);
  auVar64[7] = (char)((ulong)uVar60 >> 0x18);
  auVar64[8] = bVar40;
  auVar64[9] = bVar41;
  auVar64[10] = uVar45;
  auVar64[11] = uVar46;
  auVar64[12] = bVar43;
  auVar64[13] = bVar44;
  auVar64[14] = uVar51;
  auVar64[15] = uVar52;
  auVar64 = NEON_cmeq(auVar64,0,2);
  bVar61 = bVar83 & auVar64[0];
  bVar65 = bVar86 & auVar64[4];
  bVar67 = bVar89 & auVar64[8];
  bVar69 = bVar92 & auVar64[12];
  if (uVar22 == (uint)(bVar61 & 1) + (uint)(bVar65 & 2) + (uint)(bVar67 & 4) + (uint)(bVar69 & 8)) {
    return;
  }
  uVar18 = CONCAT11(uVar48,uVar47);
  bVar61 = bVar61 ^ bVar83;
  bVar83 = param_1[1] & auVar64[1] ^ param_1[1];
  bVar84 = param_1[2] & auVar64[2] ^ param_1[2];
  bVar85 = param_1[3] & auVar64[3] ^ param_1[3];
  bVar65 = bVar65 ^ bVar86;
  bVar86 = param_1[5] & auVar64[5] ^ param_1[5];
  bVar87 = param_1[6] & auVar64[6] ^ param_1[6];
  bVar88 = param_1[7] & auVar64[7] ^ param_1[7];
  bVar67 = bVar67 ^ bVar89;
  bVar89 = param_1[9] & auVar64[9] ^ param_1[9];
  bVar90 = param_1[10] & auVar64[10] ^ param_1[10];
  bVar91 = param_1[11] & auVar64[11] ^ param_1[11];
  bVar69 = bVar69 ^ bVar92;
  bVar92 = param_1[13] & auVar64[13] ^ param_1[13];
  bVar93 = param_1[14] & auVar64[14] ^ param_1[14];
  bVar94 = param_1[15] & auVar64[15] ^ param_1[15];
  local_70 = *param_7;
  local_6c = param_7[1];
  local_64 = param_7[4];
  iVar39 = *(int *)(param_2 + 1);
  uVar15 = (ushort)((ulong)uVar58 >> 0x20);
  if ((int)local_6c < 1) {
    auVar25._0_5_ = CONCAT14(bVar65,(uint)(bVar61 & 1)) & 0x2ffffffff;
    auVar25._5_3_ = 0;
    auVar25[8] = bVar67 & 4;
    auVar25._9_3_ = 0;
    auVar25[12] = bVar69 & 8;
  }
  else {
    iVar59 = 0;
    uVar22 = 0;
    auVar25._0_5_ = CONCAT14(bVar65,(uint)(bVar61 & 1)) & 0x2ffffffff;
    auVar25._5_3_ = 0;
    auVar25[8] = bVar67 & 4;
    auVar25._9_3_ = 0;
    auVar25[12] = bVar69 & 8;
    uVar62 = (uint)(bVar61 & 1) + (uint)(bVar65 & 2) + (uint)auVar25[8] + (uint)auVar25[12];
    do {
      if (0 < (int)local_70) {
        uVar19 = 0;
        iVar2 = *(int *)(param_2 + 2);
        lVar21 = *param_2;
        do {
          iVar57 = (int)uVar19;
          iVar72 = iVar2 * (uVar22 + local_6c * (ushort)((ulong)uVar58 >> 0x30)) +
                   (iVar57 + local_70 * uVar15) * 4;
          iVar75 = iVar2 * (uVar22 + local_6c * (ushort)((ulong)uVar60 >> 0x30)) +
                   (iVar57 + local_70 * (ushort)((ulong)uVar60 >> 0x20)) * 4;
          uVar20 = CONCAT44(iVar75 + ((uint)(iVar75 >> 0x1f) >> 0x1e),
                            iVar72 + ((uint)(iVar72 >> 0x1f) >> 0x1e)) & 0xfffffffcfffffffc;
          iVar72 = ((int)(iVar2 * (uVar22 + local_6c * CONCAT11(uVar50,uVar49)) +
                         (iVar57 + local_70 * uVar18) * 4) / 4) * 4;
          iVar75 = ((int)(iVar2 * (uVar22 + local_6c * CONCAT11(uVar56,uVar55)) +
                         (iVar57 + local_70 * CONCAT11(uVar54,uVar53)) * 4) / 4) * 4;
          bVar71 = (byte)((int)((uint)CONCAT11(bVar83,bVar61) << 0x1f) >> 0x1f);
          iVar63 = CONCAT13((byte)(uVar20 >> 0x18) & bVar71,
                            CONCAT12((byte)(uVar20 >> 0x10) & bVar71,
                                     CONCAT11((byte)(uVar20 >> 8) & bVar71,(byte)uVar20 & bVar71)));
          bVar71 = (byte)((int)((uint)CONCAT11(bVar86,bVar65) << 0x1f) >> 0x1f);
          auVar79._0_8_ =
               CONCAT17((byte)(uVar20 >> 0x38) & bVar71,
                        CONCAT16((byte)(uVar20 >> 0x30) & bVar71,
                                 CONCAT15((byte)(uVar20 >> 0x28) & bVar71,
                                          CONCAT14((byte)(uVar20 >> 0x20) & bVar71,iVar63))));
          bVar71 = (byte)((int)((uint)CONCAT11(bVar89,bVar67) << 0x1f) >> 0x1f);
          auVar79[8] = (byte)iVar72 & bVar71;
          auVar79[9] = (byte)((uint)iVar72 >> 8) & bVar71;
          auVar79[10] = (byte)((uint)iVar72 >> 0x10) & bVar71;
          auVar79[11] = (byte)((uint)iVar72 >> 0x18) & bVar71;
          bVar71 = (byte)((int)((uint)CONCAT11(bVar92,bVar69) << 0x1f) >> 0x1f);
          auVar30[12] = (byte)iVar75 & bVar71;
          auVar30._0_12_ = auVar79;
          auVar30[13] = (byte)((uint)iVar75 >> 8) & bVar71;
          auVar30[14] = (byte)((uint)iVar75 >> 0x10) & bVar71;
          auVar30[15] = (byte)((uint)iVar75 >> 0x18) & bVar71;
          uVar73 = *(uint *)(lVar21 + iVar63);
          uVar76 = *(uint *)(lVar21 + (int)((ulong)auVar79._0_8_ >> 0x20));
          uVar77 = *(uint *)(lVar21 + auVar79._8_4_);
          uVar78 = *(uint *)(lVar21 + auVar30._12_4_);
          auVar80._0_5_ = CONCAT14((char)uVar76,uVar73) & 0xff000000ff;
          auVar80._5_3_ = 0;
          auVar80[8] = (char)uVar77;
          auVar80._9_3_ = 0;
          auVar80[12] = (char)uVar78;
          auVar80._13_3_ = 0;
          auVar64 = NEON_scvtf(auVar80,4);
          lVar1 = (long)(iVar59 + iVar57);
          if ((uVar62 & 1) != 0) {
            local_20b0[lVar1 * 4] = auVar64._0_4_;
          }
          if ((uVar62 >> 1 & 1) != 0) {
            local_20b0[lVar1 * 4 + 1] = auVar64._4_4_;
          }
          if ((uVar62 >> 2 & 1) != 0) {
            local_20b0[lVar1 * 4 + 2] = auVar64._8_4_;
          }
          if ((uVar62 >> 3 & 1) != 0) {
            local_20b0[lVar1 * 4 + 3] = auVar64._12_4_;
          }
          auVar81._0_5_ = CONCAT14((char)(uVar76 >> 8),uVar73 >> 8) & 0xff000000ff;
          auVar81._5_3_ = 0;
          auVar81[8] = (undefined)(uVar77 >> 8);
          auVar81._9_3_ = 0;
          auVar81[12] = (undefined)(uVar78 >> 8);
          auVar81._13_3_ = 0;
          auVar64 = NEON_scvtf(auVar81,4);
          lVar1 = (long)(iVar59 + iVar57 + 0x40);
          if ((uVar62 & 1) != 0) {
            local_20b0[lVar1 * 4] = auVar64._0_4_;
          }
          if ((uVar62 >> 1 & 1) != 0) {
            local_20b0[lVar1 * 4 + 1] = auVar64._4_4_;
          }
          if ((uVar62 >> 2 & 1) != 0) {
            local_20b0[lVar1 * 4 + 2] = auVar64._8_4_;
          }
          if ((uVar62 >> 3 & 1) != 0) {
            local_20b0[lVar1 * 4 + 3] = auVar64._12_4_;
          }
          auVar82._0_5_ = CONCAT14((char)(uVar76 >> 0x10),uVar73 >> 0x10) & 0xff000000ff;
          auVar82._5_3_ = 0;
          auVar82[8] = (undefined)(uVar77 >> 0x10);
          auVar82._9_3_ = 0;
          auVar82[12] = (undefined)(uVar78 >> 0x10);
          auVar82._13_3_ = 0;
          auVar64 = NEON_scvtf(auVar82,4);
          lVar1 = (long)(iVar59 + iVar57 + 0x80);
          if ((uVar62 & 1) != 0) {
            local_20b0[lVar1 * 4] = auVar64._0_4_;
          }
          if ((uVar62 >> 1 & 1) != 0) {
            local_20b0[lVar1 * 4 + 1] = auVar64._4_4_;
          }
          if ((uVar62 >> 2 & 1) != 0) {
            local_20b0[lVar1 * 4 + 2] = auVar64._8_4_;
          }
          if ((uVar62 >> 3 & 1) != 0) {
            local_20b0[lVar1 * 4 + 3] = auVar64._12_4_;
          }
          auVar74._0_4_ = uVar73 >> 0x18;
          auVar74._4_4_ = uVar76 >> 0x18;
          auVar74._8_4_ = uVar77 >> 0x18;
          auVar74._12_4_ = uVar78 >> 0x18;
          auVar64 = NEON_scvtf(auVar74,4);
          lVar1 = (long)(iVar59 + iVar57 + 0xc0);
          if ((uVar62 & 1) != 0) {
            local_20b0[lVar1 * 4] = auVar64._0_4_;
          }
          if ((uVar62 >> 1 & 1) != 0) {
            local_20b0[lVar1 * 4 + 1] = auVar64._4_4_;
          }
          if ((uVar62 >> 2 & 1) != 0) {
            local_20b0[lVar1 * 4 + 2] = auVar64._8_4_;
          }
          if ((uVar62 >> 3 & 1) != 0) {
            local_20b0[lVar1 * 4 + 3] = auVar64._12_4_;
          }
          uVar19 = uVar19 + 1;
        } while (local_70 != uVar19);
      }
      uVar22 = uVar22 + 1;
      iVar59 = iVar59 + 8;
    } while (uVar22 != local_6c);
  }
  local_22b0 = *param_6;
  local_22ac = param_6[1];
  uVar62 = auVar25._0_4_ + auVar25._4_4_ + auVar25._8_4_ + (uint)auVar25[12];
  local_22a8 = *(byte *)(param_6 + 3) & 1;
  local_2180 = param_6[4];
  local_2160 = param_6[5];
  uVar24 = CONCAT14((char)uVar60,(uint)((byte)uVar58 & 0xf)) & 0xfffffffff;
  local_215c = param_6[2];
  uVar22 = (uint)uVar60;
  if ((uVar62 & 1) != 0) {
    local_22a0 = (undefined4)uVar24;
  }
  if ((uVar62 >> 1 & 1) != 0) {
    local_229c = (uint)(byte)(uVar24 >> 0x20);
  }
  if ((uVar62 >> 2 & 1) != 0) {
    local_2298 = (uint)(bVar40 & 0xf);
  }
  if ((uVar62 >> 3 & 1) == 0) {
    auVar26._0_5_ = CONCAT14((char)(uVar22 >> 4),(uint)((byte)(uVar23 >> 4) & 3)) & 0x3ffffffff;
    auVar26._5_3_ = 0;
    auVar26[8] = (byte)(CONCAT13(uVar46,uVar6) >> 4) & 3;
    auVar26._9_3_ = 0;
    auVar26[12] = (byte)(CONCAT13(uVar52,CONCAT12(uVar51,uVar8)) >> 4) & 3;
  }
  else {
    local_2294 = (uint)(bVar43 & 0xf);
    auVar26._0_5_ = CONCAT14((char)(uVar22 >> 4),(uint)((byte)(uVar23 >> 4) & 3)) & 0x3ffffffff;
    auVar26._5_3_ = 0;
    auVar26[8] = (byte)(CONCAT13(uVar46,uVar6) >> 4) & 3;
    auVar26._9_3_ = 0;
    auVar26[12] = (byte)(CONCAT13(uVar52,CONCAT12(uVar51,uVar8)) >> 4) & 3;
  }
  if ((uVar62 & 1) != 0) {
    local_2190 = auVar26._0_4_;
  }
  if ((uVar62 >> 1 & 1) != 0) {
    uStack_218c = auVar26._4_4_;
  }
  if ((uVar62 >> 2 & 1) != 0) {
    uStack_2188 = auVar26._8_4_;
  }
  uVar9 = (uint)(byte)auVar26[12];
  if ((uVar62 >> 3 & 1) == 0) {
    uVar9 = uStack_2184;
  }
  uStack_2184 = uVar9;
  if ((uVar62 & 1) != 0) {
    local_2170 = 0;
  }
  if ((uVar62 >> 1 & 1) != 0) {
    local_216c = 0;
  }
  if ((uVar62 >> 2 & 1) != 0) {
    local_2168 = 0;
  }
  if ((uVar62 >> 3 & 1) != 0) {
    local_2164 = 0;
  }
  uVar24 = CONCAT14((char)(uVar22 >> 5),(uint)((byte)(uVar23 >> 5) & 6)) & 0x6ffffffff;
  bVar40 = (byte)((ulong)uVar58 >> 8);
  iVar59 = (int)uVar24 + 6;
  if ((uVar62 & 1) == 0) {
    iVar59 = local_2150;
  }
  local_2150 = iVar59;
  iVar59 = (byte)(uVar24 >> 0x20) + 6;
  if ((uVar62 >> 1 & 1) == 0) {
    iVar59 = local_214c;
  }
  local_214c = iVar59;
  iVar59 = ((byte)(CONCAT13(uVar46,uVar6) >> 5) & 6) + 6;
  if ((uVar62 >> 2 & 1) == 0) {
    iVar59 = local_2148;
  }
  local_2148 = iVar59;
  if ((uVar62 >> 3 & 1) == 0) {
    auVar27._0_5_ = CONCAT14(uVar42,(uint)(bVar40 & 0x1f)) & 0x1fffffffff;
    auVar27._5_3_ = 0;
    auVar27[8] = bVar41 & 0x1f;
    auVar27._9_3_ = 0;
    auVar27[12] = bVar44 & 0x1f;
  }
  else {
    auVar27._0_5_ = CONCAT14(uVar42,(uint)(bVar40 & 0x1f)) & 0x1fffffffff;
    auVar27._5_3_ = 0;
    auVar27[8] = bVar41 & 0x1f;
    auVar27._9_3_ = 0;
    auVar27[12] = bVar44 & 0x1f;
    local_2144 = ((byte)(CONCAT13(uVar52,CONCAT12(uVar51,uVar8)) >> 5) & 6) + 6;
  }
  if ((uVar62 & 1) != 0) {
    local_2110 = auVar27._0_4_;
  }
  if ((uVar62 >> 1 & 1) != 0) {
    local_210c = auVar27._4_4_;
  }
  if ((uVar62 >> 2 & 1) != 0) {
    local_2108 = auVar27._8_4_;
  }
  if ((uVar62 >> 3 & 1) != 0) {
    local_2104 = (uint)(byte)auVar27[12];
  }
  iVar59 = 0;
  if (local_70 != 0) {
    iVar59 = iVar39 / (int)local_70;
  }
  iVar2 = CONCAT13(bVar91,CONCAT12(bVar90,CONCAT11(bVar89,bVar67)));
  uVar11 = CONCAT17(bVar94,CONCAT16(bVar93,CONCAT15(bVar92,CONCAT14(bVar69,iVar2))));
  iVar39 = CONCAT13(bVar85,CONCAT12(bVar84,CONCAT11(bVar83,bVar61)));
  uVar58 = CONCAT17(bVar88,CONCAT16(bVar87,CONCAT15(bVar86,CONCAT14(bVar65,iVar39))));
  auVar28[9] = bVar89;
  auVar28[8] = bVar67;
  auVar28[10] = bVar90;
  auVar28[11] = bVar91;
  auVar28[12] = bVar69;
  auVar28[13] = bVar92;
  auVar28[14] = bVar93;
  auVar28[15] = bVar94;
  auVar28[1] = bVar83;
  auVar28[0] = bVar61;
  auVar28[2] = bVar84;
  auVar28[3] = bVar85;
  auVar28[4] = bVar65;
  auVar28[5] = bVar86;
  auVar28[6] = bVar87;
  auVar28[7] = bVar88;
  scale_pixels___un_3C_s_5B_vyastc_enc_state_5D__3E_un_3C_s_5B_unastc_enc_context_5D__3E_
            (auVar28,local_20b0,param_6);
  if (((local_215c == 3) && (0 < (int)local_22ac)) &&
     (uVar19 = (ulong)local_22b0, 0 < (int)local_22b0)) {
    uVar22 = 0;
    iVar57 = 0xc0;
    do {
      uVar20 = uVar19;
      iVar72 = iVar57;
      if ((uVar62 & 1) == 0) {
        if ((uVar62 >> 1 & 1) == 0) {
          if ((uVar62 >> 2 & 1) == 0) {
            if ((uVar62 >> 3 & 1) != 0) {
              do {
                uVar20 = uVar20 - 1;
                auStack_10b0[(long)iVar72 * 4 + 3] = 0x437f0000;
                iVar72 = iVar72 + 1;
              } while (uVar20 != 0);
            }
          }
          else {
            do {
              auStack_10b0[(long)iVar72 * 4 + 2] = 0x437f0000;
              if ((uVar62 >> 3 & 1) != 0) {
                auStack_10b0[(long)iVar72 * 4 + 3] = 0x437f0000;
              }
              iVar72 = iVar72 + 1;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        else {
          do {
            lVar21 = (long)iVar72;
            auStack_10b0[lVar21 * 4 + 1] = 0x437f0000;
            if ((uVar62 >> 2 & 1) != 0) {
              auStack_10b0[lVar21 * 4 + 2] = 0x437f0000;
            }
            if ((uVar62 >> 3 & 1) != 0) {
              auStack_10b0[lVar21 * 4 + 3] = 0x437f0000;
            }
            iVar72 = iVar72 + 1;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
      }
      else {
        do {
          lVar21 = (long)iVar72;
          auStack_10b0[lVar21 * 4] = 0x437f0000;
          if ((uVar62 >> 1 & 1) != 0) {
            auStack_10b0[lVar21 * 4 + 1] = 0x437f0000;
          }
          if ((uVar62 >> 2 & 1) != 0) {
            auStack_10b0[lVar21 * 4 + 2] = 0x437f0000;
          }
          if ((uVar62 >> 3 & 1) != 0) {
            auStack_10b0[lVar21 * 4 + 3] = 0x437f0000;
          }
          iVar72 = iVar72 + 1;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      uVar22 = uVar22 + 1;
      iVar57 = iVar57 + 8;
    } while (uVar22 != local_22ac);
  }
  if (local_22a8 != 0) {
    local_22c0 = auStack_10b0;
    auVar17._4_4_ = uStack_218c;
    auVar17._0_4_ = local_2190;
    auVar17._8_4_ = uStack_2188;
    auVar17._12_4_ = uStack_2184;
    local_22b8 = local_22b0;
    uStack_22b4 = local_22ac;
    rotate_plane___un_3C_s_5B_vypixel_set_5D__3E_vyi(auVar17,bVar61,&local_22c0);
  }
  auVar29._8_8_ = uVar11;
  auVar29._0_8_ = uVar58;
  optimize_block___un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_un_3C_s_5B_vyastc_enc_state_5D__3E_
            (auVar29,auStack_10b0,&local_22b0,local_20b0);
  auVar16._8_8_ = uVar11;
  auVar16._0_8_ = uVar58;
  auVar64 = measure_error___un_3C_s_5B_vyastc_block_5D__3E_un_3C_s_5B_vyastc_enc_state_5D__3E_
                      (auVar16,&local_22b0,local_20b0);
  iVar57 = (uint)uVar15 + iVar59 * iVar59;
  iVar59 = (uint)(ushort)(CONCAT15((char)((ulong)uVar60 >> 0x28),
                                   CONCAT14((char)((ulong)uVar60 >> 0x20),(uint)uVar15)) >> 0x20) +
           iVar59 * iVar59;
  iVar72 = (uint)uVar18 + (int)uStack_22f8 * (uint)CONCAT11(uVar50,uVar49);
  iVar75 = (uint)(ushort)(CONCAT15(uVar54,CONCAT14(uVar53,(uint)uVar18)) >> 0x20) +
           (int)((ulong)uStack_22f8 >> 0x20) * (uint)CONCAT11(uVar56,uVar55);
  iVar63 = iVar57 * 4;
  iVar66 = iVar59 * 4;
  iVar68 = iVar72 * 4;
  iVar70 = iVar75 * 4;
  bVar40 = (byte)((iVar39 << 0x1f) >> 0x1f);
  bVar41 = (byte)(((int)((ulong)uVar58 >> 0x20) << 0x1f) >> 0x1f);
  bVar43 = (byte)((iVar2 << 0x1f) >> 0x1f);
  bVar44 = (byte)(((int)((ulong)uVar11 >> 0x20) << 0x1f) >> 0x1f);
  uVar9 = *(undefined4 *)
           (param_3 +
           CONCAT13((byte)((uint)iVar66 >> 0x18) & bVar41,
                    CONCAT12((byte)((uint)iVar66 >> 0x10) & bVar41,
                             CONCAT11((byte)((uint)iVar66 >> 8) & bVar41,(byte)iVar66 & bVar41))));
  uVar10 = *(undefined4 *)
            (param_3 +
            CONCAT13((byte)((uint)iVar68 >> 0x18) & bVar43,
                     CONCAT12((byte)((uint)iVar68 >> 0x10) & bVar43,
                              CONCAT11((byte)((uint)iVar68 >> 8) & bVar43,(byte)iVar68 & bVar43))));
  uVar12 = *(undefined4 *)
            (param_3 +
            CONCAT13((byte)((uint)iVar70 >> 0x18) & bVar44,
                     CONCAT12((byte)((uint)iVar70 >> 0x10) & bVar44,
                              CONCAT11((byte)((uint)iVar70 >> 8) & bVar44,(byte)iVar70 & bVar44))));
  auVar7[4] = (char)uVar9;
  auVar7._0_4_ = *(undefined4 *)
                  (param_3 +
                  CONCAT13((byte)((uint)iVar63 >> 0x18) & bVar40,
                           CONCAT12((byte)((uint)iVar63 >> 0x10) & bVar40,
                                    CONCAT11((byte)((uint)iVar63 >> 8) & bVar40,
                                             (byte)iVar63 & bVar40))));
  auVar7[5] = (char)((uint)uVar9 >> 8);
  auVar7[6] = (char)((uint)uVar9 >> 0x10);
  auVar7[7] = (char)((uint)uVar9 >> 0x18);
  auVar7[8] = (char)uVar10;
  auVar7[9] = (char)((uint)uVar10 >> 8);
  auVar7[10] = (char)((uint)uVar10 >> 0x10);
  auVar7[11] = (char)((uint)uVar10 >> 0x18);
  auVar7[12] = (char)uVar12;
  auVar7[13] = (char)((uint)uVar12 >> 8);
  auVar7[14] = (char)((uint)uVar12 >> 0x10);
  auVar7[15] = (char)((uint)uVar12 >> 0x18);
  auVar30 = NEON_fcmgt(auVar7,auVar64,4);
  auVar31[0] = bVar61 & auVar30[0];
  auVar31[1] = bVar83 & auVar30[1];
  auVar31[2] = bVar84 & auVar30[2];
  auVar31[3] = bVar85 & auVar30[3];
  auVar31[4] = bVar65 & auVar30[4];
  auVar31[5] = bVar86 & auVar30[5];
  auVar31[6] = bVar87 & auVar30[6];
  auVar31[7] = bVar88 & auVar30[7];
  auVar31[8] = bVar67 & auVar30[8];
  auVar31[9] = bVar89 & auVar30[9];
  auVar31[10] = bVar90 & auVar30[10];
  auVar31[11] = bVar91 & auVar30[11];
  auVar31[12] = bVar69 & auVar30[12];
  auVar31[13] = bVar92 & auVar30[13];
  auVar31[14] = bVar93 & auVar30[14];
  auVar31[15] = bVar94 & auVar30[15];
  iVar39 = NEON_umaxv(auVar31,4);
  if (iVar39 == 0) {
    return;
  }
  pack_block___un_3C_s_5B_vyastc_block_5D__3E_un_3C_s_5B_vyastc_enc_state_5D__3E_
            (&local_22b0,local_20b0);
  uVar22 = (uint)(auVar31[0] & 1) + (uint)(auVar31[4] & 2) +
           (uint)(auVar31[8] & 4) + (uint)(auVar31[12] & 8);
  uVar4 = (undefined4)((ulong)uStack_98 >> 0x20);
  uVar5 = (undefined4)((ulong)uStack_88 >> 0x20);
  uVar10 = (undefined4)((ulong)local_a0 >> 0x20);
  uVar9 = (undefined4)((ulong)local_90 >> 0x20);
  uVar12 = (undefined4)((ulong)local_b0 >> 0x20);
  uVar3 = (undefined4)((ulong)uStack_a8 >> 0x20);
  if ((uVar22 & 1) != 0) {
    *(int *)(param_3 + iVar63) = auVar64._0_4_;
  }
  if ((uVar22 >> 1 & 1) != 0) {
    *(int *)(param_3 + iVar66) = auVar64._4_4_;
  }
  if ((uVar22 >> 2 & 1) != 0) {
    *(int *)(param_3 + iVar68) = auVar64._8_4_;
  }
  if ((uVar22 >> 3 & 1) == 0) {
    auVar32._0_4_ = iVar57 * 0x10;
    auVar32._4_4_ = iVar59 * 0x10;
    auVar32._8_4_ = iVar72 * 0x10;
    auVar32._12_4_ = iVar75 * 0x10;
  }
  else {
    *(int *)(param_3 + iVar70) = auVar64._12_4_;
    auVar32._0_4_ = iVar57 * 0x10;
    auVar32._4_4_ = iVar59 * 0x10;
    auVar32._8_4_ = iVar72 * 0x10;
    auVar32._12_4_ = iVar75 * 0x10;
  }
  uVar36 = auVar32._4_4_;
  uVar37 = auVar32._8_4_;
  uVar38 = auVar32._12_4_;
  if ((uVar22 & 1) == 0) {
    if ((uVar22 >> 1 & 1) != 0) {
      *(undefined4 *)(param_4 + (int)uVar36) = uVar12;
    }
    if ((uVar22 >> 2 & 1) != 0) {
      *(int *)(param_4 + (int)uVar37) = (int)uStack_a8;
    }
    if ((uVar22 >> 3 & 1) != 0) {
      *(undefined4 *)(param_4 + (int)uVar38) = uVar3;
    }
    if ((uVar22 >> 1 & 1) != 0) {
      *(undefined4 *)(param_4 + (int)(uVar36 | 4)) = uVar10;
    }
    if ((uVar22 >> 2 & 1) != 0) {
      *(int *)(param_4 + (int)(uVar37 | 4)) = (int)uStack_98;
    }
    if ((uVar22 >> 3 & 1) != 0) {
      *(undefined4 *)(param_4 + (int)(uVar38 | 4)) = uVar4;
    }
    if ((uVar22 >> 1 & 1) != 0) {
      *(undefined4 *)(param_4 + (int)(uVar36 | 8)) = uVar9;
    }
    if ((uVar22 >> 2 & 1) != 0) {
      *(int *)(param_4 + (int)(uVar37 | 8)) = (int)uStack_88;
    }
    if ((uVar22 >> 3 & 1) == 0) {
      auVar13._4_8_ = auVar32._8_8_;
      auVar13._0_4_ = uVar36 | 0xc;
      auVar33._0_8_ = auVar13._0_8_ << 0x20;
      auVar33._8_4_ = uVar37 | 0xc;
      auVar33._12_4_ = uVar38 | 0xc;
      auVar79 = auVar33._4_12_;
      uVar58 = auVar33._8_8_;
    }
    else {
      *(undefined4 *)(param_4 + (int)(uVar38 | 8)) = uVar5;
      auVar14._4_8_ = auVar32._8_8_;
      auVar14._0_4_ = uVar36 | 0xc;
      auVar35._0_8_ = auVar14._0_8_ << 0x20;
      auVar35._8_4_ = uVar37 | 0xc;
      auVar35._12_4_ = uVar38 | 0xc;
      auVar79 = auVar35._4_12_;
      uVar58 = auVar35._8_8_;
    }
  }
  else {
    uVar23 = auVar32._0_4_;
    *(int *)(param_4 + (int)uVar23) = (int)local_b0;
    if ((uVar22 >> 1 & 1) != 0) {
      *(undefined4 *)(param_4 + (int)uVar36) = uVar12;
    }
    if ((uVar22 >> 2 & 1) != 0) {
      *(int *)(param_4 + (int)uVar37) = (int)uStack_a8;
    }
    if ((uVar22 >> 3 & 1) != 0) {
      *(undefined4 *)(param_4 + (int)uVar38) = uVar3;
    }
    *(int *)(param_4 + (int)(uVar23 | 4)) = (int)local_a0;
    if ((uVar22 >> 1 & 1) != 0) {
      *(undefined4 *)(param_4 + (int)(uVar36 | 4)) = uVar10;
    }
    if ((uVar22 >> 2 & 1) != 0) {
      *(int *)(param_4 + (int)(uVar37 | 4)) = (int)uStack_98;
    }
    if ((uVar22 >> 3 & 1) != 0) {
      *(undefined4 *)(param_4 + (int)(uVar38 | 4)) = uVar4;
    }
    *(int *)(param_4 + (int)(uVar23 | 8)) = (int)local_90;
    if ((uVar22 >> 1 & 1) != 0) {
      *(undefined4 *)(param_4 + (int)(uVar36 | 8)) = uVar9;
    }
    if ((uVar22 >> 2 & 1) != 0) {
      *(int *)(param_4 + (int)(uVar37 | 8)) = (int)uStack_88;
    }
    if ((uVar22 >> 3 & 1) != 0) {
      *(undefined4 *)(param_4 + (int)(uVar38 | 8)) = uVar5;
    }
    auVar34._0_8_ = auVar32._0_8_ | 0xc0000000c;
    auVar34._8_4_ = uVar37 | 0xc;
    auVar34._12_4_ = uVar38 | 0xc;
    auVar79 = auVar34._4_12_;
    uVar58 = auVar34._8_8_;
    *(int *)(param_4 + (int)auVar34._0_8_) = (int)local_80;
  }
  if ((uVar22 >> 1 & 1) == 0) {
    iVar39 = (int)((ulong)uVar58 >> 0x20);
  }
  else {
    iVar39 = auVar79._8_4_;
    uVar58 = auVar79._4_8_;
    *(int *)(param_4 + auVar79._0_4_) = (int)((ulong)local_80 >> 0x20);
  }
  if ((uVar22 >> 2 & 1) != 0) {
    iVar39 = (int)((ulong)uVar58 >> 0x20);
    *(int *)(param_4 + (int)uVar58) = (int)uStack_78;
  }
  if ((uVar22 >> 3 & 1) != 0) {
    *(int *)(param_4 + iVar39) = (int)((ulong)uStack_78 >> 0x20);
  }
  return;
}


