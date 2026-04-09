// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mdct_init
// Entry Point: 00e0b0b4
// Size: 1904 bytes
// Signature: undefined mdct_init(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mdct_init(uint *param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  float *pfVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  uint uVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  ulong uVar21;
  uint uVar22;
  void *pvVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint uVar26;
  ulong uVar27;
  float *pfVar28;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  double dVar32;
  undefined auVar33 [16];
  undefined auVar34 [16];
  int iVar36;
  undefined auVar35 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  double dVar41;
  ulong uVar42;
  undefined uVar44;
  undefined uVar45;
  undefined uVar46;
  long lVar43;
  int iVar48;
  undefined auVar47 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  uint uVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  char cVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  char cVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  undefined auVar70 [16];
  undefined auVar71 [16];
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  undefined auVar76 [16];
  undefined auVar77 [16];
  long local_1b0;
  long lStack_1a8;
  long local_1a0;
  long lStack_198;
  double dStack_188;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80 [2];
  double local_68;
  
  uVar26 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar26 = param_2;
  }
  uVar26 = (int)uVar26 >> 2;
  uVar29 = (ulong)uVar26;
  pvVar18 = malloc(-(ulong)(uVar26 >> 0x1f) & 0xfffffffc00000000 | uVar29 << 2);
  pvVar19 = malloc(-(ulong)(uVar26 + param_2 >> 0x1f) & 0xfffffffc00000000 |
                   (ulong)(uVar26 + param_2) << 2);
  dVar32 = log((double)param_2);
  *(void **)(param_1 + 2) = pvVar19;
  *(void **)(param_1 + 4) = pvVar18;
  uVar22 = (uint)(double)(long)(dVar32 / 0.6931471805599453);
  *param_1 = param_2;
  param_1[1] = uVar22;
  if ((int)param_2 < 4) goto LAB_00e0b7f4;
  uVar30 = (ulong)(param_2 >> 1);
  uVar21 = 0;
  dVar41 = 3.141592653589793 / (double)param_2;
  dVar32 = 3.141592653589793 / (double)(param_2 << 1);
  if (uVar26 < 4) {
LAB_00e0b48c:
    iVar31 = (int)uVar21 << 2;
    lVar43 = uVar29 - uVar21;
    uVar26 = (int)uVar21 << 1 | 1;
    pfVar28 = (float *)((long)pvVar19 + uVar21 * 8 + 4);
    do {
      sincos(dVar41 * (double)iVar31,&dStack_f8,&local_100);
      pfVar28[-1] = (float)local_100;
      *pfVar28 = -(float)dStack_f8;
      sincos(dVar32 * (double)uVar26,&dStack_108,&local_110);
      pfVar7 = pfVar28 + uVar30;
      iVar31 = iVar31 + 4;
      lVar43 = lVar43 + -1;
      uVar26 = uVar26 + 2;
      pfVar28 = pfVar28 + 2;
      pfVar7[-1] = (float)local_110;
      *pfVar7 = (float)dStack_108;
    } while (lVar43 != 0);
  }
  else {
    pvVar2 = (void *)((long)pvVar19 + 4);
    pvVar4 = (void *)((long)pvVar19 + uVar29 * 8);
    pvVar5 = (void *)((long)pvVar19 + uVar29 * 8 + uVar30 * 4);
    pvVar23 = (void *)((long)pvVar4 - 4);
    pvVar20 = (void *)((long)pvVar5 - 4);
    pvVar6 = (void *)((long)pvVar19 + uVar30 * 4);
    pvVar3 = (void *)((long)pvVar6 + 4);
    if ((((pvVar19 < pvVar4 && pvVar2 < pvVar23) || (pvVar19 < pvVar20 && pvVar6 < pvVar23)) ||
        (pvVar19 < pvVar5 && pvVar3 < pvVar23)) ||
       (((pvVar2 < pvVar20 && pvVar6 < pvVar4 || (pvVar2 < pvVar5 && pvVar3 < pvVar4)) ||
        (pvVar6 < pvVar5 && pvVar3 < pvVar20)))) goto LAB_00e0b48c;
    uVar21 = uVar29 & 0xfffffffc;
    lStack_198 = SUB168(_DAT_004c4d80,8);
    local_1a0 = SUB168(_DAT_004c4d80,0);
    lStack_1a8 = SUB168(_DAT_004c34b0,8);
    local_1b0 = SUB168(_DAT_004c34b0,0);
    uVar27 = uVar21;
    auVar50 = _DAT_004c51c0;
    do {
      iVar31 = auVar50._4_4_;
      iVar36 = auVar50._8_4_;
      iVar48 = auVar50._12_4_;
      auVar40._0_8_ = (long)(iVar36 << 2);
      auVar40._8_8_ = (long)(iVar48 << 2);
      auVar37._0_8_ = (long)(auVar50._0_4_ << 2);
      auVar37._8_8_ = (long)(iVar31 << 2);
      auVar33 = NEON_scvtf(auVar37,8);
      auVar37 = NEON_scvtf(auVar40,8);
      sincos(auVar37._0_8_ * dVar41,&local_a8,&local_b0);
      dVar14 = local_b0;
      sincos(auVar37._8_8_ * dVar41,&local_98,&local_a0);
      dVar15 = local_a0;
      sincos(dVar41 * auVar33._0_8_,&local_88,&local_90);
      dVar16 = local_90;
      sincos(dVar41 * auVar33._8_8_,&local_68,local_80);
      uVar42 = local_1b0 * 2;
      lVar43 = lStack_1a8 << 1;
      uVar44 = (undefined)((ulong)lVar43 >> 8);
      uVar45 = (undefined)((ulong)lVar43 >> 0x10);
      uVar46 = (undefined)((ulong)lVar43 >> 0x18);
      auVar38._0_8_ = (long)(int)((uint)(local_1a0 << 1) | 1);
      auVar38._8_8_ = (long)(int)((uint)(lStack_198 << 1) | 1);
      cVar56 = (char)((int)(char)(uVar42 >> 0x18) >> 7);
      cVar65 = (char)((int)((uint)(CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14((byte)
                                                  lVar43,(uint)uVar42)))) >> 0x20) | 1) >> 0x1f);
      auVar37 = NEON_scvtf(auVar38,8);
      pfVar28 = (float *)((long)pvVar19 + (uVar42 | 1) * 4 + -4);
      auVar33[5] = cVar56;
      auVar33._0_5_ = (int5)(int)((uint)uVar42 | 1);
      auVar33[6] = cVar56;
      auVar33[7] = cVar56;
      auVar33[8] = (byte)lVar43 | 1;
      auVar33[9] = uVar44;
      auVar33[10] = uVar45;
      auVar33[11] = uVar46;
      auVar33[12] = cVar65;
      auVar33[13] = cVar65;
      auVar33[14] = cVar65;
      auVar33[15] = cVar65;
      auVar33 = NEON_scvtf(auVar33,8);
      *pfVar28 = (float)dVar16;
      pfVar28[1] = -(float)local_88;
      pfVar28[2] = (float)local_80[0];
      pfVar28[3] = -(float)local_68;
      pfVar28[4] = (float)dVar14;
      pfVar28[5] = -(float)local_a8;
      pfVar28[6] = (float)dVar15;
      pfVar28[7] = -(float)local_98;
      sincos(auVar37._0_8_ * dVar32,&local_e8,&local_f0);
      dVar14 = local_f0;
      sincos(auVar37._8_8_ * dVar32,&local_d8,&local_e0);
      dVar15 = local_e0;
      dStack_188 = local_e0;
      sincos(dVar32 * auVar33._0_8_,&local_c8,&local_d0);
      dVar16 = local_d0;
      sincos(dVar32 * auVar33._8_8_,&local_b8,&local_c0);
      uVar27 = uVar27 - 4;
      pfVar28 = (float *)((long)pvVar19 + (uVar42 + uVar30) * 4);
      local_1a0 = local_1a0 + 4;
      lStack_198 = lStack_198 + 4;
      local_1b0 = local_1b0 + 4;
      lStack_1a8 = lStack_1a8 + 4;
      *pfVar28 = (float)dVar16;
      pfVar28[1] = (float)local_c8;
      pfVar28[2] = (float)local_c0;
      pfVar28[3] = (float)local_b8;
      pfVar28[4] = (float)dVar14;
      pfVar28[5] = (float)local_e8;
      pfVar28[6] = (float)dVar15;
      pfVar28[7] = (float)local_d8;
      auVar50._0_4_ = auVar50._0_4_ + 4;
      auVar50._4_4_ = iVar31 + 4;
      auVar50._8_4_ = iVar36 + 4;
      auVar50._12_4_ = iVar48 + 4;
    } while (uVar27 != 0);
    if (uVar21 != uVar29) goto LAB_00e0b48c;
  }
  uVar26 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar26 = param_2;
  }
  if ((int)param_2 < 8) goto LAB_00e0b7f4;
  uVar29 = (ulong)(uint)((int)uVar26 >> 3);
  if ((uint)((int)uVar26 >> 3) < 4) {
    uVar30 = 0;
LAB_00e0b67c:
    auVar50 = _DAT_004c3410;
    uVar26 = (int)uVar30 << 2 | 2;
    lVar43 = uVar29 - uVar30;
    dVar32 = SUB168(_DAT_004c3410,8);
    puVar25 = (undefined8 *)((long)pvVar19 + uVar30 * 8 + (ulong)param_2 * 4);
    do {
      sincos(dVar41 * (double)uVar26,&local_158,&local_160);
      uVar26 = uVar26 + 4;
      lVar43 = lVar43 + -1;
      *puVar25 = CONCAT44((float)(local_158 * dVar32),(float)(local_160 * auVar50._0_8_));
      puVar25 = puVar25 + 1;
    } while (lVar43 != 0);
  }
  else {
    auVar50 = NEON_fmov(0x3fe0000000000000,8);
    uVar30 = uVar29 & 0xfffffffc;
    auVar33 = NEON_fmov(0xbfe0000000000000,8);
    pfVar28 = (float *)((long)pvVar19 + (ulong)param_2 * 4);
    iVar31 = 0;
    iVar36 = 1;
    uVar21 = uVar30;
    do {
      uVar27 = CONCAT44(iVar36 << 2,iVar31 << 2) | 0x200000002;
      auVar39._0_8_ = (long)(int)(SUB84(dStack_188,0) << 2 | 2);
      auVar39._8_8_ = (long)(int)((int)((ulong)dStack_188 >> 0x20) << 2 | 2);
      auVar34._0_8_ = (long)(int)uVar27;
      auVar34._8_8_ = (long)(int)(uVar27 >> 0x20);
      auVar40 = NEON_scvtf(auVar39,8);
      auVar37 = NEON_scvtf(auVar34,8);
      sincos(dVar41 * auVar37._0_8_,&local_148,&local_150);
      dVar32 = local_150;
      sincos(dVar41 * auVar37._8_8_,&local_138,&local_140);
      dVar14 = local_140;
      sincos(auVar40._0_8_ * dVar41,&local_128,&local_130);
      dVar15 = local_130;
      sincos(auVar40._8_8_ * dVar41,&local_118,&local_120);
      uVar21 = uVar21 - 4;
      *pfVar28 = (float)(dVar32 * auVar50._0_8_);
      pfVar28[1] = (float)(local_148 * auVar33._0_8_);
      pfVar28[2] = (float)(dVar14 * auVar50._8_8_);
      pfVar28[3] = (float)(local_138 * auVar33._8_8_);
      pfVar28[4] = (float)(dVar15 * auVar50._0_8_);
      pfVar28[5] = (float)(local_128 * auVar33._0_8_);
      pfVar28[6] = (float)(local_120 * auVar50._8_8_);
      pfVar28[7] = (float)(local_118 * auVar33._8_8_);
      pfVar28 = pfVar28 + 8;
      iVar31 = iVar31 + 4;
      iVar36 = iVar36 + 4;
    } while (uVar21 != 0);
    if (uVar30 != uVar29) goto LAB_00e0b67c;
  }
  if (7 < (int)param_2) {
    uVar21 = 0;
    auVar35._8_4_ = 1;
    auVar35._0_8_ = 0x100000001;
    auVar35._12_4_ = 1;
    uVar10 = 1 << (ulong)(uVar22 - 2 & 0x1f);
    uVar11 = 0x20 - (int)LZCOUNT(uVar10);
    uVar26 = uVar11 & 0x3c;
    auVar47._0_8_ = CONCAT44(uVar10,uVar10);
    auVar47._8_4_ = uVar10;
    auVar47._12_4_ = uVar10;
    do {
      if (uVar22 - 2 < 3) {
        uVar24 = 0;
        uVar17 = 0;
        uVar51 = uVar10;
LAB_00e0b7cc:
        do {
          uVar1 = uVar17 + 1;
          uVar9 = 0;
          if ((uVar51 & (uint)uVar21) != 0) {
            uVar9 = 1 << (ulong)(uVar17 & 0x1f);
          }
          uVar24 = uVar9 | uVar24;
          uVar51 = (int)uVar10 >> (uVar1 & 0x1f);
          uVar17 = uVar1;
        } while (uVar11 != uVar1);
      }
      else {
        bVar52 = 0;
        bVar53 = 0;
        bVar54 = 0;
        bVar55 = 0;
        bVar57 = 0;
        bVar58 = 0;
        bVar59 = 0;
        bVar60 = 0;
        bVar61 = 0;
        bVar62 = 0;
        bVar63 = 0;
        bVar64 = 0;
        bVar66 = 0;
        bVar67 = 0;
        bVar68 = 0;
        bVar69 = 0;
        auVar70._8_8_ = 0x300000002;
        auVar70._0_8_ = 0x100000000;
        auVar49._8_8_ = auVar47._8_8_;
        auVar49._0_8_ = auVar47._0_8_;
        uVar24 = uVar26;
        do {
          auVar76[0] = ~auVar70[0];
          auVar76[1] = ~auVar70[1];
          auVar76[2] = ~auVar70[2];
          auVar76[3] = ~auVar70[3];
          auVar76[4] = ~auVar70[4];
          auVar76[5] = ~auVar70[5];
          auVar76[6] = ~auVar70[6];
          auVar76[7] = ~auVar70[7];
          auVar76[8] = ~auVar70[8];
          auVar76[9] = ~auVar70[9];
          auVar76[10] = ~auVar70[10];
          auVar76[11] = ~auVar70[11];
          auVar76[12] = ~auVar70[12];
          auVar76[13] = ~auVar70[13];
          auVar76[14] = ~auVar70[14];
          auVar76[15] = ~auVar70[15];
          uVar24 = uVar24 - 4;
          auVar50 = NEON_sshl(auVar47,auVar76,4);
          auVar33 = NEON_ext(auVar49,auVar50,0xc,1);
          auVar37 = NEON_ushl(auVar35,auVar70,4);
          auVar71._0_4_ = auVar70._0_4_ + 4;
          auVar71._4_4_ = auVar70._4_4_ + 4;
          auVar71._8_4_ = auVar70._8_4_ + 4;
          auVar71._12_4_ = auVar70._12_4_ + 4;
          bVar72 = (byte)uVar21;
          auVar77[0] = auVar33[0] & bVar72;
          bVar73 = (byte)(uVar21 >> 8);
          auVar77[1] = auVar33[1] & bVar73;
          bVar74 = (byte)(uVar21 >> 0x10);
          auVar77[2] = auVar33[2] & bVar74;
          bVar75 = (byte)(uVar21 >> 0x18);
          auVar77[3] = auVar33[3] & bVar75;
          auVar77[4] = auVar33[4] & bVar72;
          auVar77[5] = auVar33[5] & bVar73;
          auVar77[6] = auVar33[6] & bVar74;
          auVar77[7] = auVar33[7] & bVar75;
          auVar77[8] = auVar33[8] & bVar72;
          auVar77[9] = auVar33[9] & bVar73;
          auVar77[10] = auVar33[10] & bVar74;
          auVar77[11] = auVar33[11] & bVar75;
          auVar77[12] = auVar33[12] & bVar72;
          auVar77[13] = auVar33[13] & bVar73;
          auVar77[14] = auVar33[14] & bVar74;
          auVar77[15] = auVar33[15] & bVar75;
          auVar33 = NEON_cmeq(auVar77,0,2);
          bVar52 = auVar37[0] & ~auVar33[0] | bVar52;
          bVar53 = auVar37[1] & ~auVar33[1] | bVar53;
          bVar54 = auVar37[2] & ~auVar33[2] | bVar54;
          bVar55 = auVar37[3] & ~auVar33[3] | bVar55;
          bVar57 = auVar37[4] & ~auVar33[4] | bVar57;
          bVar58 = auVar37[5] & ~auVar33[5] | bVar58;
          bVar59 = auVar37[6] & ~auVar33[6] | bVar59;
          bVar60 = auVar37[7] & ~auVar33[7] | bVar60;
          bVar61 = auVar37[8] & ~auVar33[8] | bVar61;
          bVar62 = auVar37[9] & ~auVar33[9] | bVar62;
          bVar63 = auVar37[10] & ~auVar33[10] | bVar63;
          bVar64 = auVar37[11] & ~auVar33[11] | bVar64;
          bVar66 = auVar37[12] & ~auVar33[12] | bVar66;
          bVar67 = auVar37[13] & ~auVar33[13] | bVar67;
          bVar68 = auVar37[14] & ~auVar33[14] | bVar68;
          bVar69 = auVar37[15] & ~auVar33[15] | bVar69;
          auVar49 = auVar50;
          auVar70 = auVar71;
        } while (uVar24 != 0);
        auVar12[1] = bVar53;
        auVar12[0] = bVar52;
        auVar12[2] = bVar54;
        auVar12[3] = bVar55;
        auVar12[4] = bVar57;
        auVar12[5] = bVar58;
        auVar12[6] = bVar59;
        auVar12[7] = bVar60;
        auVar12[8] = bVar61;
        auVar12[9] = bVar62;
        auVar12[10] = bVar63;
        auVar12[11] = bVar64;
        auVar12[12] = bVar66;
        auVar12[13] = bVar67;
        auVar12[14] = bVar68;
        auVar12[15] = bVar69;
        auVar13[1] = bVar53;
        auVar13[0] = bVar52;
        auVar13[2] = bVar54;
        auVar13[3] = bVar55;
        auVar13[4] = bVar57;
        auVar13[5] = bVar58;
        auVar13[6] = bVar59;
        auVar13[7] = bVar60;
        auVar13[8] = bVar61;
        auVar13[9] = bVar62;
        auVar13[10] = bVar63;
        auVar13[11] = bVar64;
        auVar13[12] = bVar66;
        auVar13[13] = bVar67;
        auVar13[14] = bVar68;
        auVar13[15] = bVar69;
        auVar33 = NEON_ext(auVar12,auVar13,8,1);
        uVar24 = CONCAT13(bVar55 | auVar33[3],
                          CONCAT12(bVar54 | auVar33[2],
                                   CONCAT11(bVar53 | auVar33[1],bVar52 | auVar33[0]))) |
                 CONCAT13(bVar60 | auVar33[7],
                          CONCAT12(bVar59 | auVar33[6],
                                   CONCAT11(bVar58 | auVar33[5],bVar57 | auVar33[4])));
        if (uVar11 != uVar26) {
          uVar51 = auVar50._12_4_;
          uVar17 = uVar26;
          goto LAB_00e0b7cc;
        }
      }
      piVar8 = (int *)((long)pvVar18 + uVar21 * 8);
      uVar21 = uVar21 + 1;
      *piVar8 = -2 - (uVar24 | -1 << (ulong)(uVar22 - 1 & 0x1f));
      piVar8[1] = uVar24;
    } while (uVar21 != uVar29);
  }
LAB_00e0b7f4:
  param_1[6] = (uint)(4.0 / (float)param_2);
  return;
}


