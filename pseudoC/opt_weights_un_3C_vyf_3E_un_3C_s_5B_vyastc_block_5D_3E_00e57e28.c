// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opt_weights___un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_
// Entry Point: 00e57e28
// Size: 1120 bytes
// Signature: undefined opt_weights___un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void opt_weights___un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_
               (undefined param_1 [16],long param_2,int *param_3)

{
  long lVar1;
  char cVar2;
  undefined uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined (*pauVar7) [16];
  undefined (*pauVar8) [16];
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined auVar14 [16];
  float fVar15;
  float fVar18;
  float fVar19;
  undefined auVar16 [16];
  undefined auVar17 [16];
  float fVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  int iVar27;
  float fVar28;
  int iVar29;
  float fVar30;
  int iVar31;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  float fVar32;
  int iVar33;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  uint uVar42;
  undefined auVar43 [12];
  float fVar48;
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined8 uVar49;
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  byte bVar56;
  byte bVar58;
  byte bVar59;
  undefined8 uVar57;
  byte bVar60;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  undefined8 uVar61;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined auStack_140 [16];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  float local_110 [2];
  undefined8 uStack_108;
  float local_100 [2];
  undefined8 uStack_f8;
  undefined local_f0 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0 [8];
  undefined local_90 [64];
  undefined4 local_50;
  undefined local_4c [28];
  undefined auVar47 [16];
  
  auVar16._8_4_ = 0xfffffffc;
  auVar16._0_8_ = 0xfffffffcfffffffc;
  auVar16._12_4_ = 0xfffffffc;
  auVar14 = *(undefined (*) [16])(param_3 + 0x58);
  auVar16 = NEON_cmgt(auVar14,auVar16,4);
  bVar56 = param_1[0];
  auVar34[0] = auVar16[0] & bVar56;
  auVar34[1] = auVar16[1] & param_1[1];
  auVar34[2] = auVar16[2] & param_1[2];
  auVar34[3] = auVar16[3] & param_1[3];
  bVar58 = param_1[4];
  auVar34[4] = auVar16[4] & bVar58;
  auVar34[5] = auVar16[5] & param_1[5];
  auVar34[6] = auVar16[6] & param_1[6];
  bVar59 = param_1[7];
  auVar34[7] = auVar16[7] & bVar59;
  bVar60 = param_1[8];
  auVar34[8] = auVar16[8] & bVar60;
  bVar62 = param_1[9];
  auVar34[9] = auVar16[9] & bVar62;
  bVar63 = param_1[10];
  auVar34[10] = auVar16[10] & bVar63;
  bVar64 = param_1[11];
  auVar34[11] = auVar16[11] & bVar64;
  bVar65 = param_1[12];
  auVar34[12] = auVar16[12] & bVar65;
  bVar66 = param_1[13];
  auVar34[13] = auVar16[13] & bVar66;
  bVar67 = param_1[14];
  auVar34[14] = auVar16[14] & bVar67;
  bVar68 = param_1[15];
  auVar34[15] = auVar16[15] & bVar68;
  iVar22 = NEON_umaxv(auVar34,4);
  auVar35._8_4_ = 2;
  auVar35._0_8_ = 0x200000002;
  auVar35._12_4_ = 2;
  cVar2 = *(char *)(param_3 + 2);
  if (iVar22 != 0) {
    uVar6 = 0;
    auVar34 = *(undefined (*) [16])(param_3 + 0x68);
    iVar33 = auVar34._0_4_ * 0x5556 >> 0x10;
    iVar39 = auVar34._4_4_ * 0x5556 >> 0x10;
    iVar40 = auVar34._8_4_ * 0x5556 >> 0x10;
    iVar41 = auVar34._12_4_ * 0x5556 >> 0x10;
    iVar22 = auVar34._0_4_ + iVar33 * -3;
    iVar27 = auVar34._4_4_ + iVar39 * -3;
    iVar29 = auVar34._8_4_ + iVar40 * -3;
    iVar31 = auVar34._12_4_ + iVar41 * -3;
    auVar44._0_4_ = iVar22 * -2 + 5;
    auVar44._4_4_ = iVar27 * -2 + 5;
    auVar44._8_4_ = iVar29 * -2 + 5;
    auVar44._12_4_ = iVar31 * -2 + 5;
    auVar46._0_4_ = iVar22 + iVar33;
    auVar46._4_4_ = iVar27 + iVar39;
    auVar46._8_4_ = iVar29 + iVar40;
    auVar46._12_4_ = iVar31 + iVar41;
    auVar34 = NEON_smax(auVar35,auVar44,4);
    auVar34 = NEON_ushl(auVar34,auVar46,4);
    auVar45._0_4_ = (auVar34._0_4_ >> 1) + -1;
    auVar45._4_4_ = (auVar34._4_4_ >> 1) + -1;
    auVar45._8_4_ = (auVar34._8_4_ >> 1) + -1;
    auVar45._12_4_ = (auVar34._12_4_ >> 1) + -1;
    auVar34 = NEON_scvtf(auVar45,4);
    auVar46 = NEON_frecpe(auVar34,4);
    auVar35 = NEON_frecps(auVar34,auVar46,4);
    auVar36._0_4_ = auVar46._0_4_ * auVar35._0_4_;
    auVar36._4_4_ = auVar46._4_4_ * auVar35._4_4_;
    auVar36._8_4_ = auVar46._8_4_ * auVar35._8_4_;
    auVar36._12_4_ = auVar46._12_4_ * auVar35._12_4_;
    auVar34 = NEON_frecps(auVar34,auVar36,4);
    auVar24._0_4_ = ((int)(auVar14._0_4_ + ((uint)(auVar14._0_4_ >> 0x1f) >> 0x1e)) >> 2) * 2 + 2;
    auVar24._4_4_ = ((int)(auVar14._4_4_ + ((uint)(auVar14._4_4_ >> 0x1f) >> 0x1e)) >> 2) * 2 + 2;
    auVar24._8_4_ = ((int)(auVar14._8_4_ + ((uint)(auVar14._8_4_ >> 0x1f) >> 0x1e)) >> 2) * 2 + 2;
    auVar24._12_4_ = ((int)(auVar14._12_4_ + ((uint)(auVar14._12_4_ >> 0x1f) >> 0x1e)) >> 2) * 2 + 2
    ;
    fVar20 = auVar34._0_4_;
    fVar48 = auVar34._4_4_;
    fVar15 = auVar34._8_4_;
    fVar18 = auVar34._12_4_;
    while( true ) {
      uVar9 = -(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2;
      uVar3 = *(undefined *)((long)param_3 + uVar9 + 0x1b1);
      auVar51._6_2_ = 0;
      auVar51._0_6_ =
           (uint6)CONCAT14(uVar3,(uint)CONCAT12(uVar3,(ushort)*(byte *)((long)param_3 +
                                                                       uVar9 + 0x1b0))) &
           0xffff0000ffff;
      auVar51[8] = *(undefined *)((long)param_3 + uVar9 + 0x1b2);
      auVar51._9_3_ = 0;
      auVar51[12] = *(undefined *)((long)param_3 + uVar9 + 0x1b3);
      auVar51._13_3_ = 0;
      auVar35 = NEON_ucvtf(auVar51,4);
      uVar42 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar42;
      auVar52._4_4_ = uVar42;
      auVar52._0_4_ = uVar42;
      auVar52._8_4_ = uVar42;
      auVar52._12_4_ = uVar42;
      auVar46 = NEON_cmgt(auVar24,auVar52,4);
      auVar17[0] = auVar16[0] & auVar46[0];
      auVar17[1] = auVar16[1] & auVar46[1];
      auVar17[2] = auVar16[2] & auVar46[2];
      auVar17[3] = auVar16[3] & auVar46[3];
      auVar17[4] = auVar16[4] & auVar46[4];
      auVar17[5] = auVar16[5] & auVar46[5];
      auVar17[6] = auVar16[6] & auVar46[6];
      auVar17[7] = auVar16[7] & auVar46[7];
      auVar17[8] = auVar16[8] & auVar46[8];
      auVar17[9] = auVar16[9] & auVar46[9];
      auVar17[10] = auVar16[10] & auVar46[10];
      auVar17[11] = auVar16[11] & auVar46[11];
      auVar17[12] = auVar16[12] & auVar46[12];
      auVar17[13] = auVar16[13] & auVar46[13];
      auVar17[14] = auVar16[14] & auVar46[14];
      auVar17[15] = auVar16[15] & auVar46[15];
      auVar53[0] = auVar17[0] & bVar56;
      auVar53[1] = auVar17[1] & param_1[1];
      auVar53[2] = auVar17[2] & param_1[2];
      auVar53[3] = auVar17[3] & param_1[3];
      auVar53[4] = auVar17[4] & bVar58;
      auVar53[5] = auVar17[5] & param_1[5];
      auVar53[6] = auVar17[6] & param_1[6];
      auVar53[7] = auVar17[7] & bVar59;
      auVar53[8] = auVar17[8] & bVar60;
      auVar53[9] = auVar17[9] & bVar62;
      auVar53[10] = auVar17[10] & bVar63;
      auVar53[11] = auVar17[11] & bVar64;
      auVar53[12] = auVar17[12] & bVar65;
      auVar53[13] = auVar17[13] & bVar66;
      auVar53[14] = auVar17[14] & bVar67;
      auVar53[15] = auVar17[15] & bVar68;
      uVar49 = NEON_bit(auVar34._0_8_,
                        CONCAT26((short)(int)(auVar35._12_4_ * 255.0 * auVar36._12_4_ * fVar18 + 0.5
                                             ),
                                 CONCAT24((short)(int)(auVar35._8_4_ * 255.0 *
                                                       auVar36._8_4_ * fVar15 + 0.5),
                                          CONCAT22((short)(int)(auVar35._4_4_ * 255.0 *
                                                                auVar36._4_4_ * fVar48 + 0.5),
                                                   (short)(int)(auVar35._0_4_ * 255.0 *
                                                                auVar36._0_4_ * fVar20 + 0.5)))),
                        CONCAT26((short)(auVar16._12_2_ << 0xf) >> 0xf,
                                 CONCAT24((short)(auVar16._8_2_ << 0xf) >> 0xf,
                                          CONCAT22((short)(auVar16._4_2_ << 0xf) >> 0xf,
                                                   (short)(auVar16._0_2_ << 0xf) >> 0xf))),1);
      iVar22 = NEON_umaxv(auVar53,4);
      *(uint *)((long)&local_50 + uVar9) =
           CONCAT13((char)((ulong)uVar49 >> 0x30),
                    CONCAT12((char)((ulong)uVar49 >> 0x20),
                             CONCAT11((char)((ulong)uVar49 >> 0x10),(char)uVar49)));
      if (iVar22 == 0) break;
      lVar1 = (long)(int)uVar42 * 4;
      auVar34 = ZEXT716(CONCAT16(*(undefined *)((long)&local_50 + lVar1 + 3),
                                 (uint6)CONCAT14(*(undefined *)((long)&local_50 + lVar1 + 2),
                                                 (uint)CONCAT12(*(undefined *)
                                                                 ((long)&local_50 + lVar1 + 1),
                                                                (ushort)*(byte *)(&local_50 +
                                                                                 (int)uVar42)))));
      auVar16 = auVar17;
    }
  }
  decode_endpoints___un_3C_vyf_3E_un_3C_vyT_3E_vyi(auVar14,param_1,local_d0,&local_50);
  auVar14 = *(undefined (*) [16])(param_3 + 4);
  iVar33 = auVar14._0_4_ * 0x5556 >> 0x10;
  iVar39 = auVar14._4_4_ * 0x5556 >> 0x10;
  iVar40 = auVar14._8_4_ * 0x5556 >> 0x10;
  iVar41 = auVar14._12_4_ * 0x5556 >> 0x10;
  iVar22 = auVar14._0_4_ + iVar33 * -3;
  iVar27 = auVar14._4_4_ + iVar39 * -3;
  iVar29 = auVar14._8_4_ + iVar40 * -3;
  iVar31 = auVar14._12_4_ + iVar41 * -3;
  auVar25._0_4_ = iVar22 * -2 + 5;
  auVar25._4_4_ = iVar27 * -2 + 5;
  auVar25._8_4_ = iVar29 * -2 + 5;
  auVar25._12_4_ = iVar31 * -2 + 5;
  auVar37._8_4_ = 2;
  auVar37._0_8_ = 0x200000002;
  auVar37._12_4_ = 2;
  auVar16 = NEON_smax(auVar37,auVar25,4);
  auVar14._0_4_ = iVar22 + iVar33;
  auVar14._4_4_ = iVar27 + iVar39;
  auVar14._8_4_ = iVar29 + iVar40;
  auVar14._12_4_ = iVar31 + iVar41;
  auVar14 = NEON_ushl(auVar16,auVar14,4);
  lVar1 = 3;
  if (cVar2 == '\0') {
    lVar1 = 4;
  }
  local_e0 = 0;
  uStack_d8 = 0;
  pauVar7 = (undefined (*) [16])local_90;
  pfVar10 = local_110;
  lVar11 = lVar1;
  do {
    auVar16 = *pauVar7;
    auVar34 = pauVar7[-4];
    pfVar10[4] = auVar16._8_4_ - auVar34._8_4_;
    pfVar10[5] = auVar16._12_4_ - auVar34._12_4_;
    *pfVar10 = auVar16._0_4_ - auVar34._0_4_;
    pfVar10[1] = auVar16._4_4_ - auVar34._4_4_;
    pauVar7 = pauVar7 + 1;
    lVar11 = lVar11 + -1;
    pfVar10 = pfVar10 + 4;
  } while (lVar11 != 0);
  fVar20 = (float)((ulong)uStack_f8 >> 0x20);
  fVar19 = (float)uStack_108;
  fVar21 = SUB84(uStack_108,4);
  fVar48 = (float)((ulong)local_e0 >> 0x20);
  fVar15 = (float)((ulong)uStack_d8 >> 0x20);
  auVar26._0_4_ =
       local_100[0] * local_100[0] + local_110[0] * local_110[0] + local_f0._0_4_ * local_f0._0_4_ +
       (float)local_e0 * (float)local_e0 + 1e-05;
  auVar26._4_4_ =
       local_100[1] * local_100[1] + local_110[1] * local_110[1] + local_f0._4_4_ * local_f0._4_4_ +
       fVar48 * fVar48 + 1e-05;
  auVar26._8_4_ =
       (float)uStack_f8 * (float)uStack_f8 + fVar19 * fVar19 + local_f0._8_4_ * local_f0._8_4_ +
       (float)uStack_d8 * (float)uStack_d8 + 1e-05;
  auVar26._12_4_ =
       fVar20 * fVar20 + fVar21 * fVar21 + local_f0._12_4_ * local_f0._12_4_ + fVar15 * fVar15 +
       1e-05;
  auVar16 = NEON_frecpe(auVar26,4);
  auVar34 = NEON_frecps(auVar26,auVar16,4);
  auVar38._0_4_ = auVar16._0_4_ * auVar34._0_4_;
  auVar38._4_4_ = auVar16._4_4_ * auVar34._4_4_;
  auVar38._8_4_ = auVar16._8_4_ * auVar34._8_4_;
  auVar38._12_4_ = auVar16._12_4_ * auVar34._12_4_;
  auVar50._0_4_ = (auVar14._0_4_ >> 1) + -1;
  auVar50._4_4_ = (auVar14._4_4_ >> 1) + -1;
  auVar50._8_4_ = (auVar14._8_4_ >> 1) + -1;
  auVar50._12_4_ = (auVar14._12_4_ >> 1) + -1;
  auVar14 = NEON_frecps(auVar26,auVar38,4);
  auVar16 = NEON_scvtf(auVar50,4);
  fVar23 = auVar38._0_4_ * auVar14._0_4_ * auVar16._0_4_;
  fVar28 = auVar38._4_4_ * auVar14._4_4_ * auVar16._4_4_;
  fVar30 = auVar38._8_4_ * auVar14._8_4_ * auVar16._8_4_;
  fVar32 = auVar38._12_4_ * auVar14._12_4_ * auVar16._12_4_;
  fVar15 = local_110[0] * fVar23;
  fVar18 = local_110[1] * fVar28;
  local_100[0] = fVar19 * fVar30;
  local_100[1] = fVar21 * fVar32;
  pauVar7 = (undefined (*) [16])local_110;
  fVar20 = local_100[0];
  fVar48 = local_100[1];
  uVar49 = uStack_f8;
  auVar14 = local_f0;
  uVar4 = local_e0;
  uVar5 = uStack_d8;
  lVar11 = lVar1;
  while (lVar11 = lVar11 + -1, lVar11 != 0) {
    pauVar8 = pauVar7 + 1;
    auVar34 = *pauVar8;
    local_f0 = auVar14;
    local_e0 = uVar4;
    uStack_d8 = uVar5;
    *(float *)pauVar7[2] = auVar34._8_4_ * fVar30;
    *(float *)(pauVar7[2] + 4) = auVar34._12_4_ * fVar32;
    local_100[0] = fVar20;
    local_100[1] = fVar48;
    uStack_f8 = uVar49;
    *(float *)*pauVar8 = auVar34._0_4_ * fVar23;
    *(float *)(pauVar7[1] + 4) = auVar34._4_4_ * fVar28;
    pauVar7 = pauVar8;
    fVar20 = local_100[0];
    fVar48 = local_100[1];
    uVar49 = uStack_f8;
    auVar14 = local_f0;
    uVar4 = local_e0;
    uVar5 = uStack_d8;
  }
  iVar22 = param_3[1];
  if (0 < iVar22) {
    iVar29 = 0;
    uVar42 = (uint)(bVar56 & SUB161(_DAT_004c4480,0));
    auVar43._0_8_ =
         CONCAT17(bVar59 & SUB161(_DAT_004c4480,7),
                  (uint7)CONCAT14(bVar58 & SUB161(_DAT_004c4480,4),uVar42));
    auVar43[8] = bVar60 & SUB161(_DAT_004c4480,8);
    auVar43[9] = bVar62 & SUB161(_DAT_004c4480,9);
    auVar43[10] = bVar63 & SUB161(_DAT_004c4480,10);
    auVar43[11] = bVar64 & SUB161(_DAT_004c4480,0xb);
    auVar47[12] = bVar65 & SUB161(_DAT_004c4480,0xc);
    auVar47._0_12_ = auVar43;
    auVar47[13] = bVar66 & SUB161(_DAT_004c4480,0xd);
    auVar47[14] = bVar67 & SUB161(_DAT_004c4480,0xe);
    auVar47[15] = bVar68 & SUB161(_DAT_004c4480,0xf);
    uVar42 = uVar42 + (int)((ulong)auVar43._0_8_ >> 0x20) + auVar43._8_4_ + auVar47._12_4_;
    iVar31 = *param_3;
    iVar27 = 0;
    do {
      if (0 < iVar31) {
        iVar33 = 0;
        fVar23 = (float)((ulong)uVar49 >> 0x20);
        fVar28 = (float)((ulong)uVar4 >> 0x20);
        fVar30 = (float)((ulong)uVar5 >> 0x20);
        iVar22 = iVar29;
        if ((uVar42 & 1) == 0) {
          do {
            local_120 = 0;
            uStack_118 = 0;
            puVar12 = &local_150;
            puVar13 = local_d0;
            lVar11 = lVar1;
            iVar39 = iVar22;
            do {
              auVar34 = *(undefined (*) [16])(param_2 + (long)iVar39 * 0x10);
              uVar61 = puVar13[1];
              uVar57 = *puVar13;
              *(float *)(puVar12 + 2) = auVar34._8_4_ - (float)uVar61;
              *(float *)((long)puVar12 + 0x14) = auVar34._12_4_ - (float)((ulong)uVar61 >> 0x20);
              *(float *)puVar12 = auVar34._0_4_ - (float)uVar57;
              *(float *)((long)puVar12 + 4) = auVar34._4_4_ - (float)((ulong)uVar57 >> 0x20);
              iVar39 = iVar39 + 0x40;
              lVar11 = lVar11 + -1;
              puVar12 = puVar12 + 2;
              puVar13 = puVar13 + 2;
            } while (lVar11 != 0);
            auVar54._0_4_ =
                 auStack_140._0_4_ * fVar20 + (float)local_150 * fVar15 +
                 (float)local_130 * auVar14._0_4_ + (float)local_120 * (float)uVar4 + 0.5;
            auVar54._4_4_ =
                 auStack_140._4_4_ * fVar48 + (float)((ulong)local_150 >> 0x20) * fVar18 +
                 (float)((ulong)local_130 >> 0x20) * auVar14._4_4_ +
                 (float)((ulong)local_120 >> 0x20) * fVar28 + 0.5;
            auVar54._8_4_ =
                 auStack_140._8_4_ * (float)uVar49 + (float)uStack_148 * fVar19 +
                 (float)uStack_128 * auVar14._8_4_ + (float)uStack_118 * (float)uVar5 + 0.5;
            auVar54._12_4_ =
                 auStack_140._12_4_ * fVar23 + (float)((ulong)uStack_148 >> 0x20) * fVar21 +
                 (float)((ulong)uStack_128 >> 0x20) * auVar14._12_4_ +
                 (float)((ulong)uStack_118 >> 0x20) * fVar30 + 0.5;
            auVar34 = NEON_fmax(auVar54,ZEXT816(0),4);
            auVar34 = NEON_fmin(auVar34,auVar16,4);
            lVar11 = (long)(iVar33 + iVar31 * iVar27);
            if ((uVar42 >> 1 & 1) != 0) {
              *(char *)((long)param_3 + lVar11 * 4 + 0x21) = (char)(int)auVar34._4_4_;
            }
            if ((uVar42 >> 2 & 1) != 0) {
              *(char *)((long)param_3 + lVar11 * 4 + 0x22) = (char)(int)auVar34._8_4_;
            }
            if ((uVar42 >> 3 & 1) != 0) {
              *(char *)((long)param_3 + lVar11 * 4 + 0x23) = (char)(int)auVar34._12_4_;
            }
            iVar31 = *param_3;
            iVar33 = iVar33 + 1;
            iVar22 = iVar22 + 1;
          } while (iVar33 < iVar31);
        }
        else {
          do {
            local_120 = 0;
            uStack_118 = 0;
            puVar12 = &local_150;
            puVar13 = local_d0;
            lVar11 = lVar1;
            iVar39 = iVar22;
            do {
              auVar34 = *(undefined (*) [16])(param_2 + (long)iVar39 * 0x10);
              uVar61 = puVar13[1];
              uVar57 = *puVar13;
              *(float *)(puVar12 + 2) = auVar34._8_4_ - (float)uVar61;
              *(float *)((long)puVar12 + 0x14) = auVar34._12_4_ - (float)((ulong)uVar61 >> 0x20);
              *(float *)puVar12 = auVar34._0_4_ - (float)uVar57;
              *(float *)((long)puVar12 + 4) = auVar34._4_4_ - (float)((ulong)uVar57 >> 0x20);
              iVar39 = iVar39 + 0x40;
              lVar11 = lVar11 + -1;
              puVar12 = puVar12 + 2;
              puVar13 = puVar13 + 2;
            } while (lVar11 != 0);
            auVar55._0_4_ =
                 auStack_140._0_4_ * fVar20 + (float)local_150 * fVar15 +
                 (float)local_130 * auVar14._0_4_ + (float)local_120 * (float)uVar4 + 0.5;
            auVar55._4_4_ =
                 auStack_140._4_4_ * fVar48 + (float)((ulong)local_150 >> 0x20) * fVar18 +
                 (float)((ulong)local_130 >> 0x20) * auVar14._4_4_ +
                 (float)((ulong)local_120 >> 0x20) * fVar28 + 0.5;
            auVar55._8_4_ =
                 auStack_140._8_4_ * (float)uVar49 + (float)uStack_148 * fVar19 +
                 (float)uStack_128 * auVar14._8_4_ + (float)uStack_118 * (float)uVar5 + 0.5;
            auVar55._12_4_ =
                 auStack_140._12_4_ * fVar23 + (float)((ulong)uStack_148 >> 0x20) * fVar21 +
                 (float)((ulong)uStack_128 >> 0x20) * auVar14._12_4_ +
                 (float)((ulong)uStack_118 >> 0x20) * fVar30 + 0.5;
            auVar34 = NEON_fmax(auVar55,ZEXT816(0),4);
            auVar34 = NEON_fmin(auVar34,auVar16,4);
            iVar31 = iVar33 + iVar31 * iVar27;
            lVar11 = (long)iVar31;
            *(char *)(param_3 + (long)iVar31 + 8) = (char)(int)auVar34._0_4_;
            if ((uVar42 >> 1 & 1) != 0) {
              *(char *)((long)param_3 + lVar11 * 4 + 0x21) = (char)(int)auVar34._4_4_;
            }
            if ((uVar42 >> 2 & 1) != 0) {
              *(char *)((long)param_3 + lVar11 * 4 + 0x22) = (char)(int)auVar34._8_4_;
            }
            if ((uVar42 >> 3 & 1) != 0) {
              *(char *)((long)param_3 + lVar11 * 4 + 0x23) = (char)(int)auVar34._12_4_;
            }
            iVar31 = *param_3;
            iVar33 = iVar33 + 1;
            iVar22 = iVar22 + 1;
          } while (iVar33 < iVar31);
        }
        iVar22 = param_3[1];
      }
      iVar27 = iVar27 + 1;
      iVar29 = iVar29 + 8;
    } while (iVar27 < iVar22);
  }
  return;
}


