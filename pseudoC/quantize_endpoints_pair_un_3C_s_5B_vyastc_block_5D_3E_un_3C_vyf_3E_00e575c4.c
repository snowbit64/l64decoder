// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: quantize_endpoints_pair___un_3C_s_5B_vyastc_block_5D__3E_un_3C_vyf_3E_
// Entry Point: 00e575c4
// Size: 2000 bytes
// Signature: undefined quantize_endpoints_pair___un_3C_s_5B_vyastc_block_5D__3E_un_3C_vyf_3E_(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void quantize_endpoints_pair___un_3C_s_5B_vyastc_block_5D__3E_un_3C_vyf_3E_
               (undefined param_1 [16],long param_2,undefined (*param_3) [16])

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  uint6 uVar9;
  long lVar10;
  undefined *puVar11;
  byte bVar12;
  undefined auVar13 [12];
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  byte bVar24;
  int iVar25;
  int iVar31;
  byte bVar32;
  int iVar33;
  byte bVar34;
  undefined auVar26 [16];
  int iVar35;
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  float fVar36;
  float fVar41;
  float fVar42;
  undefined auVar37 [16];
  undefined auVar38 [16];
  float fVar43;
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined uVar44;
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
  uint uVar55;
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined auVar72 [16];
  int iVar73;
  int iVar77;
  int iVar78;
  undefined auVar74 [16];
  undefined auVar75 [16];
  int iVar79;
  undefined auVar76 [16];
  undefined auVar80 [16];
  undefined auVar81 [16];
  byte bVar82;
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
  byte bVar95;
  byte bVar96;
  byte bVar97;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined auVar19 [16];
  
  auVar16 = *param_3;
  auVar15 = param_3[1];
  auVar26 = param_3[2];
  auVar2 = param_3[4];
  auVar6 = param_3[5];
  fVar36 = (float)*(undefined8 *)param_3[3];
  fVar41 = (float)((ulong)*(undefined8 *)param_3[3] >> 0x20);
  fVar42 = (float)*(undefined8 *)(param_3[3] + 8);
  fVar43 = (float)((ulong)*(undefined8 *)(param_3[3] + 8) >> 0x20);
  fVar60 = (auVar16._0_4_ + auVar16._0_4_) - auVar2._0_4_;
  fVar61 = (auVar16._4_4_ + auVar16._4_4_) - auVar2._4_4_;
  fVar62 = (auVar16._8_4_ + auVar16._8_4_) - auVar2._8_4_;
  fVar63 = (auVar16._12_4_ + auVar16._12_4_) - auVar2._12_4_;
  auVar14._8_4_ = 0x437f0000;
  auVar14._0_8_ = 0x437f0000437f0000;
  auVar14._12_4_ = 0x437f0000;
  fVar64 = (auVar15._0_4_ + auVar15._0_4_) - auVar6._0_4_;
  fVar65 = (auVar15._4_4_ + auVar15._4_4_) - auVar6._4_4_;
  fVar66 = (auVar15._8_4_ + auVar15._8_4_) - auVar6._8_4_;
  fVar67 = (auVar15._12_4_ + auVar15._12_4_) - auVar6._12_4_;
  fVar68 = (auVar26._0_4_ + auVar26._0_4_) - auVar2._0_4_;
  fVar69 = (auVar26._4_4_ + auVar26._4_4_) - auVar2._4_4_;
  fVar70 = (auVar26._8_4_ + auVar26._8_4_) - auVar2._8_4_;
  fVar71 = (auVar26._12_4_ + auVar26._12_4_) - auVar2._12_4_;
  fVar36 = (fVar36 + fVar36) - auVar6._0_4_;
  fVar41 = (fVar41 + fVar41) - auVar6._4_4_;
  uVar44 = SUB41(fVar41,0);
  uVar45 = (undefined)((uint)fVar41 >> 8);
  uVar46 = (undefined)((uint)fVar41 >> 0x10);
  uVar47 = (undefined)((uint)fVar41 >> 0x18);
  fVar41 = (fVar42 + fVar42) - auVar6._8_4_;
  uVar48 = (undefined)((uint)fVar41 >> 8);
  uVar49 = (undefined)((uint)fVar41 >> 0x10);
  uVar50 = (undefined)((uint)fVar41 >> 0x18);
  fVar42 = (fVar43 + fVar43) - auVar6._12_4_;
  uVar51 = SUB41(fVar42,0);
  uVar52 = (undefined)((uint)fVar42 >> 8);
  uVar53 = (undefined)((uint)fVar42 >> 0x10);
  uVar54 = (undefined)((uint)fVar42 >> 0x18);
  auVar26._4_4_ = fVar61;
  auVar26._0_4_ = fVar60;
  auVar26._8_4_ = fVar62;
  auVar26._12_4_ = fVar63;
  auVar26 = NEON_fcmlt(auVar26,0,4);
  auVar37._4_4_ = fVar61;
  auVar37._0_4_ = fVar60;
  auVar37._8_4_ = fVar62;
  auVar37._12_4_ = fVar63;
  auVar37 = NEON_fcmgt(auVar37,auVar14,4);
  auVar38._4_4_ = fVar65;
  auVar38._0_4_ = fVar64;
  auVar38._8_4_ = fVar66;
  auVar38._12_4_ = fVar67;
  auVar72 = NEON_fcmlt(auVar38,0,4);
  auVar74._4_4_ = fVar65;
  auVar74._0_4_ = fVar64;
  auVar74._8_4_ = fVar66;
  auVar74._12_4_ = fVar67;
  auVar74 = NEON_fcmgt(auVar74,auVar14,4);
  auVar75._4_4_ = fVar69;
  auVar75._0_4_ = fVar68;
  auVar75._8_4_ = fVar70;
  auVar75._12_4_ = fVar71;
  auVar80 = NEON_fcmlt(auVar75,0,4);
  auVar16[4] = uVar44;
  auVar16._0_4_ = fVar36;
  auVar16[5] = uVar45;
  auVar16[6] = uVar46;
  auVar16[7] = uVar47;
  auVar16[8] = SUB41(fVar41,0);
  auVar16[9] = uVar48;
  auVar16[10] = uVar49;
  auVar16[11] = uVar50;
  auVar16[12] = uVar51;
  auVar16[13] = uVar52;
  auVar16[14] = uVar53;
  auVar16[15] = uVar54;
  auVar38 = NEON_fcmlt(auVar16,0,4);
  auVar8._4_4_ = fVar69;
  auVar8._0_4_ = fVar68;
  auVar8._8_4_ = fVar70;
  auVar8._12_4_ = fVar71;
  auVar75 = NEON_fcmgt(auVar8,auVar14,4);
  auVar15[4] = uVar44;
  auVar15._0_4_ = fVar36;
  auVar15[5] = uVar45;
  auVar15[6] = uVar46;
  auVar15[7] = uVar47;
  auVar15[8] = SUB41(fVar41,0);
  auVar15[9] = uVar48;
  auVar15[10] = uVar49;
  auVar15[11] = uVar50;
  auVar15[12] = uVar51;
  auVar15[13] = uVar52;
  auVar15[14] = uVar53;
  auVar15[15] = uVar54;
  auVar15 = NEON_fcmgt(auVar15,auVar14,4);
  auVar16 = *(undefined (*) [16])(param_2 + 0x1a0);
  bVar12 = auVar74[0] | auVar72[0] | auVar38[0] | auVar15[0] |
           auVar37[0] | auVar26[0] | auVar80[0] | auVar75[0];
  bVar21 = auVar74[4] | auVar72[4] | auVar38[4] | auVar15[4] |
           auVar37[4] | auVar26[4] | auVar80[4] | auVar75[4];
  bVar22 = auVar74[8] | auVar72[8] | auVar38[8] | auVar15[8] |
           auVar37[8] | auVar26[8] | auVar80[8] | auVar75[8];
  bVar23 = auVar74[12] | auVar72[12] | auVar38[12] | auVar15[12] |
           auVar37[12] | auVar26[12] | auVar80[12] | auVar75[12];
  iVar25 = auVar16._0_4_ * 0x5556 >> 0x10;
  iVar31 = auVar16._4_4_ * 0x5556 >> 0x10;
  iVar33 = auVar16._8_4_ * 0x5556 >> 0x10;
  iVar35 = auVar16._12_4_ * 0x5556 >> 0x10;
  auVar15 = ZEXT816(0x1000100010001);
  bVar20 = bVar21 ^ auVar15[2];
  iVar73 = auVar16._0_4_ + iVar25 * -3;
  iVar77 = auVar16._4_4_ + iVar31 * -3;
  iVar78 = auVar16._8_4_ + iVar33 * -3;
  iVar79 = auVar16._12_4_ + iVar35 * -3;
  auVar80._0_4_ = iVar73 * -2 + 5;
  auVar80._4_4_ = iVar77 * -2 + 5;
  auVar80._8_4_ = iVar78 * -2 + 5;
  auVar80._12_4_ = iVar79 * -2 + 5;
  auVar81._8_4_ = 2;
  auVar81._0_8_ = 0x200000002;
  auVar81._12_4_ = 2;
  auVar16 = NEON_smax(auVar81,auVar80,4);
  auVar76._0_4_ = iVar73 + iVar25;
  auVar76._4_4_ = iVar77 + iVar31;
  auVar76._8_4_ = iVar78 + iVar33;
  auVar76._12_4_ = iVar79 + iVar35;
  bVar24 = (byte)((int)((uint)CONCAT12(bVar20,(ushort)(byte)(bVar12 ^ auVar15[0])) << 0x1f) >> 0x1f)
  ;
  bVar82 = param_1[0];
  auVar72[0] = bVar24 & bVar82;
  bVar83 = param_1[1];
  auVar72[1] = bVar24 & bVar83;
  bVar84 = param_1[2];
  auVar72[2] = bVar24 & bVar84;
  bVar85 = param_1[3];
  auVar72[3] = bVar24 & bVar85;
  bVar20 = (byte)((int)((uint)bVar20 << 0x1f) >> 0x1f);
  bVar86 = param_1[4];
  auVar72[4] = bVar20 & bVar86;
  bVar87 = param_1[5];
  auVar72[5] = bVar20 & bVar87;
  bVar88 = param_1[6];
  auVar72[6] = bVar20 & bVar88;
  bVar89 = param_1[7];
  auVar72[7] = bVar20 & bVar89;
  bVar32 = (byte)((int)((uint)(byte)(bVar22 ^ auVar15[4]) << 0x1f) >> 0x1f);
  bVar90 = param_1[8];
  auVar72[8] = bVar32 & bVar90;
  bVar91 = param_1[9];
  auVar72[9] = bVar32 & bVar91;
  bVar92 = param_1[10];
  auVar72[10] = bVar32 & bVar92;
  bVar93 = param_1[11];
  auVar72[11] = bVar32 & bVar93;
  bVar34 = (byte)((int)((uint)(byte)(bVar23 ^ auVar15[6]) << 0x1f) >> 0x1f);
  bVar94 = param_1[12];
  auVar72[12] = bVar34 & bVar94;
  bVar95 = param_1[13];
  auVar72[13] = bVar34 & bVar95;
  bVar96 = param_1[14];
  auVar72[14] = bVar34 & bVar96;
  bVar97 = param_1[15];
  auVar72[15] = bVar34 & bVar97;
  auVar16 = NEON_ushl(auVar16,auVar76,4);
  iVar73 = NEON_umaxv(auVar72,4);
  iVar25 = auVar16._0_4_ >> 1;
  iVar31 = auVar16._4_4_ >> 1;
  iVar33 = auVar16._8_4_ >> 1;
  iVar35 = auVar16._12_4_ >> 1;
  uStack_78 = CONCAT44(fVar63,fVar62);
  local_80 = CONCAT44(fVar61,fVar60);
  uStack_68 = CONCAT44(fVar67,fVar66);
  local_70 = CONCAT44(fVar65,fVar64);
  uStack_58 = CONCAT44(fVar71,fVar70);
  local_60 = CONCAT44(fVar69,fVar68);
  uStack_48 = CONCAT17(uVar54,CONCAT16(uVar53,CONCAT15(uVar52,CONCAT14(uVar51,fVar41))));
  uStack_50 = CONCAT17(uVar47,CONCAT16(uVar46,CONCAT15(uVar45,CONCAT14(uVar44,fVar36))));
  uStack_38 = auVar2._8_8_;
  local_40 = auVar2._0_8_;
  uStack_28 = auVar6._8_8_;
  uStack_30 = auVar6._0_8_;
  if (iVar73 != 0) {
    iVar73 = iVar31 + -1;
    iVar77 = iVar33 + -1;
    iVar78 = iVar35 + -1;
    uVar55 = (uint)(auVar72[0] & 1) + (uint)(auVar72[4] & 2) +
             (uint)(auVar72[8] & 4) + (uint)(auVar72[12] & 8);
    auVar2[4] = (char)iVar73;
    auVar2._0_4_ = iVar25 + -1;
    auVar2[5] = (char)((uint)iVar73 >> 8);
    auVar2[6] = (char)((uint)iVar73 >> 0x10);
    auVar2[7] = (char)((uint)iVar73 >> 0x18);
    auVar2[8] = (char)iVar77;
    auVar2[9] = (char)((uint)iVar77 >> 8);
    auVar2[10] = (char)((uint)iVar77 >> 0x10);
    auVar2[11] = (char)((uint)iVar77 >> 0x18);
    auVar2[12] = (char)iVar78;
    auVar2[13] = (char)((uint)iVar78 >> 8);
    auVar2[14] = (char)((uint)iVar78 >> 0x10);
    auVar2[15] = (char)((uint)iVar78 >> 0x18);
    auVar16 = NEON_scvtf(auVar2,4);
    lVar10 = 0;
    fVar36 = auVar16._0_4_;
    fVar41 = auVar16._4_4_;
    fVar42 = auVar16._8_4_;
    fVar43 = auVar16._12_4_;
    if ((uVar55 & 1) == 0) {
      puVar11 = (undefined *)(param_2 + 0x1b7);
      do {
        auVar15 = *(undefined (*) [16])((long)&local_80 + lVar10);
        auVar4._4_4_ = auVar15._4_4_ * 0.003921569 * fVar41 + 0.5;
        auVar4._0_4_ = auVar15._0_4_ * 0.003921569 * fVar36 + 0.5;
        auVar4._8_4_ = auVar15._8_4_ * 0.003921569 * fVar42 + 0.5;
        auVar4._12_4_ = auVar15._12_4_ * 0.003921569 * fVar43 + 0.5;
        auVar15 = NEON_fmax(auVar4,ZEXT816(0),4);
        auVar15 = NEON_fmin(auVar15,auVar16,4);
        if ((uVar55 >> 1 & 1) != 0) {
          puVar11[-6] = (char)(int)auVar15._4_4_;
        }
        if ((uVar55 >> 2 & 1) != 0) {
          puVar11[-5] = (char)(int)auVar15._8_4_;
        }
        if ((uVar55 >> 3 & 1) != 0) {
          puVar11[-4] = (char)(int)auVar15._12_4_;
        }
        auVar15 = *(undefined (*) [16])((long)&local_70 + lVar10);
        auVar5._4_4_ = auVar15._4_4_ * 0.003921569 * fVar41 + 0.5;
        auVar5._0_4_ = auVar15._0_4_ * 0.003921569 * fVar36 + 0.5;
        auVar5._8_4_ = auVar15._8_4_ * 0.003921569 * fVar42 + 0.5;
        auVar5._12_4_ = auVar15._12_4_ * 0.003921569 * fVar43 + 0.5;
        auVar15 = NEON_fmax(auVar5,ZEXT816(0),4);
        auVar15 = NEON_fmin(auVar15,auVar16,4);
        if ((uVar55 >> 1 & 1) != 0) {
          puVar11[-2] = (char)(int)auVar15._4_4_;
        }
        if ((uVar55 >> 2 & 1) != 0) {
          puVar11[-1] = (char)(int)auVar15._8_4_;
        }
        if ((uVar55 >> 3 & 1) != 0) {
          *puVar11 = (char)(int)auVar15._12_4_;
        }
        lVar10 = lVar10 + 0x20;
        puVar11 = puVar11 + 8;
      } while (lVar10 != 0x60);
    }
    else {
      puVar11 = (undefined *)(param_2 + 0x1b7);
      do {
        auVar15 = *(undefined (*) [16])((long)&local_80 + lVar10);
        auVar6._4_4_ = auVar15._4_4_ * 0.003921569 * fVar41 + 0.5;
        auVar6._0_4_ = auVar15._0_4_ * 0.003921569 * fVar36 + 0.5;
        auVar6._8_4_ = auVar15._8_4_ * 0.003921569 * fVar42 + 0.5;
        auVar6._12_4_ = auVar15._12_4_ * 0.003921569 * fVar43 + 0.5;
        auVar15 = NEON_fmax(auVar6,ZEXT816(0),4);
        auVar15 = NEON_fmin(auVar15,auVar16,4);
        puVar11[-7] = (char)(int)auVar15._0_4_;
        if ((uVar55 >> 1 & 1) != 0) {
          puVar11[-6] = (char)(int)auVar15._4_4_;
        }
        if ((uVar55 >> 2 & 1) != 0) {
          puVar11[-5] = (char)(int)auVar15._8_4_;
        }
        if ((uVar55 >> 3 & 1) != 0) {
          puVar11[-4] = (char)(int)auVar15._12_4_;
        }
        auVar15 = *(undefined (*) [16])((long)&local_70 + lVar10);
        auVar7._4_4_ = auVar15._4_4_ * 0.003921569 * fVar41 + 0.5;
        auVar7._0_4_ = auVar15._0_4_ * 0.003921569 * fVar36 + 0.5;
        auVar7._8_4_ = auVar15._8_4_ * 0.003921569 * fVar42 + 0.5;
        auVar7._12_4_ = auVar15._12_4_ * 0.003921569 * fVar43 + 0.5;
        auVar15 = NEON_fmax(auVar7,ZEXT816(0),4);
        auVar15 = NEON_fmin(auVar15,auVar16,4);
        puVar11[-3] = (char)(int)auVar15._0_4_;
        if ((uVar55 >> 1 & 1) != 0) {
          puVar11[-2] = (char)(int)auVar15._4_4_;
        }
        if ((uVar55 >> 2 & 1) != 0) {
          puVar11[-1] = (char)(int)auVar15._8_4_;
        }
        if ((uVar55 >> 3 & 1) != 0) {
          *puVar11 = (char)(int)auVar15._12_4_;
        }
        lVar10 = lVar10 + 0x20;
        puVar11 = puVar11 + 8;
      } while (lVar10 != 0x60);
    }
  }
  auVar27[0] = bVar82 & ~bVar24;
  auVar27[1] = bVar83 & ~bVar24;
  auVar27[2] = bVar84 & ~bVar24;
  auVar27[3] = bVar85 & ~bVar24;
  auVar27[4] = bVar86 & ~bVar20;
  auVar27[5] = bVar87 & ~bVar20;
  auVar27[6] = bVar88 & ~bVar20;
  auVar27[7] = bVar89 & ~bVar20;
  auVar27[8] = bVar90 & ~bVar32;
  auVar27[9] = bVar91 & ~bVar32;
  auVar27[10] = bVar92 & ~bVar32;
  auVar27[11] = bVar93 & ~bVar32;
  auVar27[12] = bVar94 & ~bVar34;
  auVar27[13] = bVar95 & ~bVar34;
  auVar27[14] = bVar96 & ~bVar34;
  auVar27[15] = bVar97 & ~bVar34;
  iVar73 = NEON_umaxv(auVar27,4);
  if (iVar73 != 0) {
    auVar39._0_4_ = iVar25 + -1;
    auVar39._4_4_ = iVar31 + -1;
    auVar39._8_4_ = iVar33 + -1;
    auVar39._12_4_ = iVar35 + -1;
    bVar20 = (auVar27[0] & SUB161(_DAT_004c4480,0)) + (auVar27[4] & SUB161(_DAT_004c4480,4)) +
             (auVar27[8] & SUB161(_DAT_004c4480,8)) + (auVar27[12] & SUB161(_DAT_004c4480,0xc));
    auVar16 = NEON_scvtf(auVar39,4);
    lVar10 = 0;
    fVar36 = auVar16._0_4_;
    fVar41 = auVar16._4_4_;
    fVar42 = auVar16._8_4_;
    fVar43 = auVar16._12_4_;
    if ((bVar20 & 1) == 0) {
      puVar11 = (undefined *)(param_2 + 0x1b7);
      do {
        auVar15 = *(undefined (*) [16])(*param_3 + lVar10);
        auVar56._0_4_ = auVar15._0_4_ * 0.003921569 * fVar36 + 0.5;
        auVar56._4_4_ = auVar15._4_4_ * 0.003921569 * fVar41 + 0.5;
        auVar56._8_4_ = auVar15._8_4_ * 0.003921569 * fVar42 + 0.5;
        auVar56._12_4_ = auVar15._12_4_ * 0.003921569 * fVar43 + 0.5;
        auVar15 = NEON_fmax(auVar56,ZEXT216(0),4);
        auVar15 = NEON_fmin(auVar15,auVar16,4);
        if ((bVar20 >> 1 & 1) != 0) {
          puVar11[-6] = (char)(int)auVar15._4_4_;
        }
        if ((bVar20 >> 2 & 1) != 0) {
          puVar11[-5] = (char)(int)auVar15._8_4_;
        }
        if ((bVar20 >> 3 & 1) != 0) {
          puVar11[-4] = (char)(int)auVar15._12_4_;
        }
        auVar15 = *(undefined (*) [16])(param_3[1] + lVar10);
        auVar57._0_4_ = auVar15._0_4_ * 0.003921569 * fVar36 + 0.5;
        auVar57._4_4_ = auVar15._4_4_ * 0.003921569 * fVar41 + 0.5;
        auVar57._8_4_ = auVar15._8_4_ * 0.003921569 * fVar42 + 0.5;
        auVar57._12_4_ = auVar15._12_4_ * 0.003921569 * fVar43 + 0.5;
        auVar15 = NEON_fmax(auVar57,ZEXT216(0),4);
        auVar15 = NEON_fmin(auVar15,auVar16,4);
        if ((bVar20 >> 1 & 1) != 0) {
          puVar11[-2] = (char)(int)auVar15._4_4_;
        }
        if ((bVar20 >> 2 & 1) != 0) {
          puVar11[-1] = (char)(int)auVar15._8_4_;
        }
        if ((bVar20 >> 3 & 1) != 0) {
          *puVar11 = (char)(int)auVar15._12_4_;
        }
        lVar10 = lVar10 + 0x20;
        puVar11 = puVar11 + 8;
      } while (lVar10 != 0x60);
    }
    else {
      puVar11 = (undefined *)(param_2 + 0x1b7);
      do {
        auVar15 = *(undefined (*) [16])(*param_3 + lVar10);
        auVar58._0_4_ = auVar15._0_4_ * 0.003921569 * fVar36 + 0.5;
        auVar58._4_4_ = auVar15._4_4_ * 0.003921569 * fVar41 + 0.5;
        auVar58._8_4_ = auVar15._8_4_ * 0.003921569 * fVar42 + 0.5;
        auVar58._12_4_ = auVar15._12_4_ * 0.003921569 * fVar43 + 0.5;
        auVar15 = NEON_fmax(auVar58,ZEXT216(0),4);
        auVar15 = NEON_fmin(auVar15,auVar16,4);
        puVar11[-7] = (char)(int)auVar15._0_4_;
        if ((bVar20 >> 1 & 1) != 0) {
          puVar11[-6] = (char)(int)auVar15._4_4_;
        }
        if ((bVar20 >> 2 & 1) != 0) {
          puVar11[-5] = (char)(int)auVar15._8_4_;
        }
        if ((bVar20 >> 3 & 1) != 0) {
          puVar11[-4] = (char)(int)auVar15._12_4_;
        }
        auVar15 = *(undefined (*) [16])(param_3[1] + lVar10);
        auVar59._0_4_ = auVar15._0_4_ * 0.003921569 * fVar36 + 0.5;
        auVar59._4_4_ = auVar15._4_4_ * 0.003921569 * fVar41 + 0.5;
        auVar59._8_4_ = auVar15._8_4_ * 0.003921569 * fVar42 + 0.5;
        auVar59._12_4_ = auVar15._12_4_ * 0.003921569 * fVar43 + 0.5;
        auVar15 = NEON_fmax(auVar59,ZEXT216(0),4);
        auVar15 = NEON_fmin(auVar15,auVar16,4);
        puVar11[-3] = (char)(int)auVar15._0_4_;
        if ((bVar20 >> 1 & 1) != 0) {
          puVar11[-2] = (char)(int)auVar15._4_4_;
        }
        if ((bVar20 >> 2 & 1) != 0) {
          puVar11[-1] = (char)(int)auVar15._8_4_;
        }
        if ((bVar20 >> 3 & 1) != 0) {
          *puVar11 = (char)(int)auVar15._12_4_;
        }
        lVar10 = lVar10 + 0x20;
        puVar11 = puVar11 + 8;
      } while (lVar10 != 0x60);
    }
  }
  auVar28._8_4_ = 8;
  auVar28._0_8_ = 0x800000008;
  auVar28._12_4_ = 8;
  auVar16 = NEON_cmgt(*(undefined (*) [16])(param_2 + 0x160),auVar28,4);
  auVar29[0] = bVar82 & auVar16[0];
  auVar29[1] = bVar83 & auVar16[1];
  auVar29[2] = bVar84 & auVar16[2];
  auVar29[3] = bVar85 & auVar16[3];
  auVar29[4] = bVar86 & auVar16[4];
  auVar29[5] = bVar87 & auVar16[5];
  auVar29[6] = bVar88 & auVar16[6];
  auVar29[7] = bVar89 & auVar16[7];
  auVar29[8] = bVar90 & auVar16[8];
  auVar29[9] = bVar91 & auVar16[9];
  auVar29[10] = bVar92 & auVar16[10];
  auVar29[11] = bVar93 & auVar16[11];
  auVar29[12] = bVar94 & auVar16[12];
  auVar29[13] = bVar95 & auVar16[13];
  auVar29[14] = bVar96 & auVar16[14];
  auVar29[15] = bVar97 & auVar16[15];
  iVar73 = NEON_umaxv(auVar29,4);
  if (iVar73 != 0) {
    auVar17._0_4_ = iVar25 + -1;
    auVar17._4_4_ = iVar31 + -1;
    auVar17._8_4_ = iVar33 + -1;
    auVar17._12_4_ = iVar35 + -1;
    auVar16 = param_3[6];
    auVar15 = NEON_scvtf(auVar17,4);
    fVar36 = auVar16._4_4_ * 0.003921569 * auVar15._4_4_ + 0.5;
    fVar41 = auVar16._8_4_ * 0.003921569 * auVar15._8_4_ + 0.5;
    fVar42 = auVar16._12_4_ * 0.003921569 * auVar15._12_4_ + 0.5;
    auVar3[4] = SUB41(fVar36,0);
    auVar3._0_4_ = auVar16._0_4_ * 0.003921569 * auVar15._0_4_ + 0.5;
    auVar3[5] = (char)((uint)fVar36 >> 8);
    auVar3[6] = (char)((uint)fVar36 >> 0x10);
    auVar3[7] = (char)((uint)fVar36 >> 0x18);
    auVar3[8] = SUB41(fVar41,0);
    auVar3[9] = (char)((uint)fVar41 >> 8);
    auVar3[10] = (char)((uint)fVar41 >> 0x10);
    auVar3[11] = (char)((uint)fVar41 >> 0x18);
    auVar3[12] = SUB41(fVar42,0);
    auVar3[13] = (char)((uint)fVar42 >> 8);
    auVar3[14] = (char)((uint)fVar42 >> 0x10);
    auVar3[15] = (char)((uint)fVar42 >> 0x18);
    auVar16 = NEON_fmax(auVar3,ZEXT816(0),4);
    auVar16 = NEON_fmin(auVar16,auVar15,4);
    uVar55 = (uint)(auVar29[0] & 1) + (uint)(auVar29[4] & 2) +
             (uint)(auVar29[8] & 4) + (uint)(auVar29[12] & 8);
    if ((uVar55 & 1) != 0) {
      *(char *)(param_2 + 0x1c8) = (char)(int)auVar16._0_4_;
    }
    if ((uVar55 >> 1 & 1) != 0) {
      *(char *)(param_2 + 0x1c9) = (char)(int)auVar16._4_4_;
    }
    if ((uVar55 >> 2 & 1) != 0) {
      *(char *)(param_2 + 0x1ca) = (char)(int)auVar16._8_4_;
    }
    if ((uVar55 >> 3 & 1) != 0) {
      *(char *)(param_2 + 0x1cb) = (char)(int)auVar16._12_4_;
    }
    auVar16 = param_3[7];
    auVar40._0_4_ = auVar16._0_4_ * 0.003921569 * auVar15._0_4_ + 0.5;
    auVar40._4_4_ = auVar16._4_4_ * 0.003921569 * auVar15._4_4_ + 0.5;
    auVar40._8_4_ = auVar16._8_4_ * 0.003921569 * auVar15._8_4_ + 0.5;
    auVar40._12_4_ = auVar16._12_4_ * 0.003921569 * auVar15._12_4_ + 0.5;
    auVar16 = NEON_fmax(auVar40,ZEXT816(0),4);
    auVar16 = NEON_fmin(auVar16,auVar15,4);
    if ((uVar55 & 1) != 0) {
      *(char *)(param_2 + 0x1cc) = (char)(int)auVar16._0_4_;
    }
    if ((uVar55 >> 1 & 1) != 0) {
      *(char *)(param_2 + 0x1cd) = (char)(int)auVar16._4_4_;
    }
    if ((uVar55 >> 2 & 1) != 0) {
      *(char *)(param_2 + 0x1ce) = (char)(int)auVar16._8_4_;
    }
    if ((uVar55 >> 3 & 1) != 0) {
      *(char *)(param_2 + 0x1cf) = (char)(int)auVar16._12_4_;
    }
  }
  auVar16 = compare_endpoints___un_3C_vyT_3E_un_3C_s_5B_vyastc_block_5D__3E_
                      (param_1,param_2 + 0x1b0,param_2);
  uVar9 = (uint6)CONCAT14(bVar21,(uint)CONCAT12(bVar21,(ushort)bVar12)) & 0xffff0000ffff;
  auVar30._0_4_ = ((int)uVar9 << 0x1f) >> 0x1f;
  auVar30._4_4_ = (int)((uint)(ushort)(uVar9 >> 0x20) << 0x1f) >> 0x1f;
  auVar30._8_4_ = (int)((uint)bVar22 << 0x1f) >> 0x1f;
  auVar30._12_4_ = (int)((uint)bVar23 << 0x1f) >> 0x1f;
  auVar16 = NEON_cmeq(auVar16,auVar30,4);
  auVar18[0] = bVar82 & auVar16[0];
  auVar18[1] = bVar83 & auVar16[1];
  auVar18[2] = bVar84 & auVar16[2];
  auVar18[3] = bVar85 & auVar16[3];
  auVar18[4] = bVar86 & auVar16[4];
  auVar18[5] = bVar87 & auVar16[5];
  auVar18[6] = bVar88 & auVar16[6];
  auVar18[7] = bVar89 & auVar16[7];
  auVar18[8] = bVar90 & auVar16[8];
  auVar18[9] = bVar91 & auVar16[9];
  auVar18[10] = bVar92 & auVar16[10];
  auVar18[11] = bVar93 & auVar16[11];
  auVar18[12] = bVar94 & auVar16[12];
  auVar18[13] = bVar95 & auVar16[13];
  auVar18[14] = bVar96 & auVar16[14];
  auVar18[15] = bVar97 & auVar16[15];
  iVar25 = NEON_umaxv(auVar18,4);
  if (iVar25 != 0) {
    uVar55 = (uint)(auVar18[0] & SUB161(_DAT_004c4480,0));
    auVar13._0_8_ =
         CONCAT17(auVar18[7] & SUB161(_DAT_004c4480,7),
                  (uint7)CONCAT14(auVar18[4] & SUB161(_DAT_004c4480,4),uVar55));
    auVar13[8] = auVar18[8] & SUB161(_DAT_004c4480,8);
    auVar13[9] = auVar18[9] & SUB161(_DAT_004c4480,9);
    auVar13[10] = auVar18[10] & SUB161(_DAT_004c4480,10);
    auVar13[11] = auVar18[11] & SUB161(_DAT_004c4480,0xb);
    auVar19[12] = auVar18[12] & SUB161(_DAT_004c4480,0xc);
    auVar19._0_12_ = auVar13;
    auVar19[13] = auVar18[13] & SUB161(_DAT_004c4480,0xd);
    auVar19[14] = auVar18[14] & SUB161(_DAT_004c4480,0xe);
    auVar19[15] = auVar18[15] & SUB161(_DAT_004c4480,0xf);
    uVar55 = uVar55 + (int)((ulong)auVar13._0_8_ >> 0x20) + auVar13._8_4_ + auVar19._12_4_;
    if ((uVar55 & 1) == 0) {
      lVar10 = 0;
      do {
        lVar1 = param_2 + lVar10;
        uVar44 = *(undefined *)(lVar1 + 0x1b1);
        if ((uVar55 >> 1 & 1) == 0) {
          uVar45 = *(undefined *)(lVar1 + 0x1b2);
          uVar46 = *(undefined *)(lVar1 + 0x1b3);
        }
        else {
          *(undefined *)(lVar1 + 0x1b1) = *(undefined *)(lVar1 + 0x1b5);
          uVar45 = *(undefined *)(lVar1 + 0x1b2);
          uVar46 = *(undefined *)(lVar1 + 0x1b3);
        }
        if ((uVar55 >> 2 & 1) != 0) {
          *(undefined *)(param_2 + lVar10 + 0x1b2) = *(undefined *)(lVar1 + 0x1b6);
        }
        if ((uVar55 >> 3 & 1) != 0) {
          *(undefined *)(param_2 + lVar10 + 0x1b3) = *(undefined *)(lVar1 + 0x1b7);
        }
        if ((uVar55 >> 1 & 1) != 0) {
          *(undefined *)(param_2 + lVar10 + 0x1b5) = uVar44;
        }
        if ((uVar55 >> 2 & 1) != 0) {
          *(undefined *)(param_2 + lVar10 + 0x1b6) = uVar45;
        }
        if ((uVar55 >> 3 & 1) != 0) {
          *(undefined *)(param_2 + lVar10 + 0x1b7) = uVar46;
        }
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0x20);
    }
    else {
      lVar10 = 0x1b7;
      do {
        puVar11 = (undefined *)(param_2 + lVar10);
        uVar44 = *puVar11;
        uVar45 = puVar11[-7];
        uVar46 = puVar11[-6];
        uVar47 = puVar11[-5];
        uVar48 = puVar11[-4];
        puVar11[-7] = puVar11[-3];
        if ((uVar55 >> 1 & 1) != 0) {
          puVar11[-6] = puVar11[-2];
        }
        if ((uVar55 >> 2 & 1) != 0) {
          *(undefined *)(param_2 + lVar10 + -5) = puVar11[-1];
        }
        if ((uVar55 >> 3 & 1) != 0) {
          *(undefined *)(param_2 + lVar10 + -4) = uVar44;
        }
        *(undefined *)(param_2 + lVar10 + -3) = uVar45;
        if ((uVar55 >> 1 & 1) != 0) {
          *(undefined *)(param_2 + lVar10 + -2) = uVar46;
        }
        if ((uVar55 >> 2 & 1) != 0) {
          *(undefined *)(param_2 + lVar10 + -1) = uVar47;
        }
        if ((uVar55 >> 3 & 1) != 0) {
          *(undefined *)(param_2 + lVar10) = uVar48;
        }
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0x1d7);
    }
  }
  return;
}


