// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: measure_error___un_3C_s_5B_vyastc_block_5D__3E_un_3C_s_5B_vyastc_enc_state_5D__3E_
// Entry Point: 00e5a4dc
// Size: 1988 bytes
// Signature: undefined measure_error___un_3C_s_5B_vyastc_block_5D__3E_un_3C_s_5B_vyastc_enc_state_5D__3E_(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined  [16]
measure_error___un_3C_s_5B_vyastc_block_5D__3E_un_3C_s_5B_vyastc_enc_state_5D__3E_
          (undefined param_1 [16],int *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined5 uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  ulong uVar23;
  long lVar24;
  undefined4 *puVar25;
  undefined4 uVar26;
  undefined (*pauVar27) [16];
  byte bVar28;
  undefined uVar29;
  byte bVar31;
  byte bVar33;
  byte bVar35;
  byte bVar37;
  byte bVar39;
  byte bVar41;
  byte bVar43;
  byte bVar45;
  byte bVar47;
  byte bVar49;
  byte bVar51;
  byte bVar53;
  byte bVar55;
  byte bVar57;
  undefined uVar32;
  undefined uVar34;
  undefined uVar36;
  undefined uVar38;
  undefined uVar40;
  undefined uVar42;
  undefined uVar44;
  undefined uVar46;
  undefined uVar48;
  undefined uVar50;
  undefined uVar52;
  undefined uVar54;
  undefined uVar56;
  undefined uVar58;
  byte bVar59;
  undefined uVar60;
  undefined auVar30 [16];
  undefined8 uVar61;
  undefined auVar62 [16];
  undefined auVar63 [16];
  int iVar66;
  int iVar67;
  int iVar68;
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  int iVar74;
  float fVar75;
  undefined8 uVar76;
  float fVar84;
  undefined auVar77 [16];
  int iVar82;
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  float fVar83;
  float fVar85;
  undefined auVar81 [16];
  int iVar86;
  int iVar87;
  int iVar92;
  int iVar93;
  int iVar94;
  undefined auVar88 [16];
  undefined auVar89 [16];
  undefined auVar90 [16];
  undefined auVar91 [16];
  undefined auVar95 [16];
  undefined auVar96 [16];
  undefined auVar97 [16];
  int iVar98;
  int iVar102;
  int iVar103;
  int iVar104;
  undefined auVar99 [16];
  undefined auVar100 [16];
  undefined auVar101 [16];
  undefined auVar105 [16];
  undefined auVar106 [16];
  uint uVar107;
  undefined auVar108 [12];
  undefined auVar109 [16];
  undefined auVar110 [16];
  undefined auVar111 [16];
  undefined auVar112 [16];
  undefined4 local_700;
  undefined4 local_600;
  undefined8 local_500 [16];
  undefined8 local_480 [128];
  undefined4 local_80;
  byte local_7c [28];
  undefined auVar113 [16];
  
  bVar59 = param_1[15];
  bVar57 = param_1[14];
  bVar55 = param_1[13];
  bVar53 = param_1[12];
  bVar51 = param_1[11];
  bVar49 = param_1[10];
  bVar47 = param_1[9];
  bVar45 = param_1[8];
  bVar43 = param_1[7];
  bVar41 = param_1[6];
  bVar39 = param_1[5];
  bVar37 = param_1[4];
  bVar35 = param_1[3];
  bVar33 = param_1[2];
  bVar31 = param_1[1];
  bVar28 = param_1[0];
  iVar7 = *(int *)(param_3 + 0x2044);
  iVar8 = *(int *)(param_3 + 0x2040);
  if (0x40 < iVar8 * iVar7) {
    puts("src/kernel_astc.ispc:1988:5: Assertion failed: pitch <= 64 \n");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar5 = *param_2;
  iVar6 = param_2[1];
  cVar9 = *(char *)(param_2 + 2);
  iVar86 = 1;
  if (cVar9 != '\0') {
    iVar86 = 2;
  }
  uVar12 = iVar6 * iVar5 * iVar86;
  uVar29 = (undefined)uVar12;
  uVar32 = (undefined)(uVar12 >> 8);
  uVar34 = (undefined)(uVar12 >> 0x10);
  uVar36 = (undefined)(uVar12 >> 0x18);
  auVar69[4] = uVar29;
  auVar69._0_4_ = uVar12;
  auVar69[5] = uVar32;
  auVar69[6] = uVar34;
  auVar69[7] = uVar36;
  auVar69[8] = uVar29;
  auVar69[9] = uVar32;
  auVar69[10] = uVar34;
  auVar69[11] = uVar36;
  auVar69[12] = uVar29;
  auVar69[13] = uVar32;
  auVar69[14] = uVar34;
  auVar69[15] = uVar36;
  auVar69 = NEON_cmgt(auVar69,0,4);
  auVar63[0] = auVar69[0] & bVar28;
  auVar63[1] = auVar69[1] & bVar31;
  auVar63[2] = auVar69[2] & bVar33;
  auVar63[3] = auVar69[3] & bVar35;
  auVar63[4] = auVar69[4] & bVar37;
  auVar63[5] = auVar69[5] & bVar39;
  auVar63[6] = auVar69[6] & bVar41;
  auVar63[7] = auVar69[7] & bVar43;
  auVar63[8] = auVar69[8] & bVar45;
  auVar63[9] = auVar69[9] & bVar47;
  auVar63[10] = auVar69[10] & bVar49;
  auVar63[11] = auVar69[11] & bVar51;
  auVar63[12] = auVar69[12] & bVar53;
  auVar63[13] = auVar69[13] & bVar55;
  auVar63[14] = auVar69[14] & bVar57;
  auVar63[15] = auVar69[15] & bVar59;
  iVar86 = NEON_umaxv(auVar63,4);
  if (iVar86 != 0) {
    iVar66 = 0;
    iVar86 = 0;
    auVar95 = *(undefined (*) [16])(param_2 + 4);
    iVar87 = auVar95._0_4_ * 0x5556 >> 0x10;
    iVar92 = auVar95._4_4_ * 0x5556 >> 0x10;
    iVar93 = auVar95._8_4_ * 0x5556 >> 0x10;
    iVar94 = auVar95._12_4_ * 0x5556 >> 0x10;
    auVar105 = NEON_cmeq(auVar95,0,2);
    iVar98 = auVar95._0_4_ + iVar87 * -3;
    iVar102 = auVar95._4_4_ + iVar92 * -3;
    iVar103 = auVar95._8_4_ + iVar93 * -3;
    iVar104 = auVar95._12_4_ + iVar94 * -3;
    auVar109._0_4_ = iVar98 * -2 + 5;
    auVar109._4_4_ = iVar102 * -2 + 5;
    auVar109._8_4_ = iVar103 * -2 + 5;
    auVar109._12_4_ = iVar104 * -2 + 5;
    iVar67 = 0;
    iVar68 = 0;
    iVar74 = 0;
    iVar82 = 0;
    auVar95._8_4_ = 2;
    auVar95._0_8_ = 0x200000002;
    auVar95._12_4_ = 2;
    auVar110 = NEON_smax(auVar95,auVar109,4);
    auVar99._0_4_ = iVar98 + iVar87 + -1;
    auVar99._4_4_ = iVar102 + iVar92 + -1;
    auVar99._8_4_ = iVar103 + iVar93 + -1;
    auVar99._12_4_ = iVar104 + iVar94 + -1;
    auVar106._8_8_ = 0;
    auVar106._0_8_ =
         (ulong)(byte)((bVar28 & SUB161(_DAT_004c4480,0)) + (bVar37 & SUB161(_DAT_004c4480,4)) +
                      (bVar45 & SUB161(_DAT_004c4480,8)) + (bVar53 & SUB161(_DAT_004c4480,0xc))) & 8
    ;
    auVar95 = NEON_cmeq(auVar106,ZEXT816(0),8);
    auVar100._8_4_ = 2;
    auVar100._0_8_ = 0x200000002;
    auVar100._12_4_ = 2;
    auVar106 = NEON_bsl(auVar105,auVar100,auVar110,1);
    auVar100 = NEON_smax(auVar99,ZEXT416(0),4);
    auVar105._0_8_ = auVar95._0_8_;
    auVar105._8_8_ = auVar105._0_8_;
    auVar100 = NEON_ushl(auVar106,auVar100,4);
    auVar95 = NEON_bsl(auVar105,auVar100,auVar100,1);
    auVar110._0_4_ = auVar100._0_4_ + -1;
    auVar110._4_4_ = auVar100._4_4_ + -1;
    auVar110._8_4_ = auVar100._8_4_ + -1;
    auVar110._12_4_ = auVar95._12_4_ + -1;
    auVar95 = NEON_scvtf(auVar110,4);
    auVar100 = NEON_frecpe(auVar95,4);
    auVar106 = NEON_frecps(auVar95,auVar100,4);
    auVar101._0_4_ = auVar100._0_4_ * auVar106._0_4_;
    auVar101._4_4_ = auVar100._4_4_ * auVar106._4_4_;
    auVar101._8_4_ = auVar100._8_4_ * auVar106._8_4_;
    auVar101._12_4_ = auVar100._12_4_ * auVar106._12_4_;
    auVar95 = NEON_frecps(auVar95,auVar101,4);
    do {
      uVar107 = (uint)(byte)(auVar63[0] & SUB161(_DAT_004c4480,0));
      auVar108._0_8_ =
           CONCAT17(auVar63[7] & SUB161(_DAT_004c4480,7),
                    (uint7)CONCAT14(auVar63[4] & SUB161(_DAT_004c4480,4),uVar107));
      auVar108[8] = auVar63[8] & SUB161(_DAT_004c4480,8);
      auVar108[9] = auVar63[9] & SUB161(_DAT_004c4480,9);
      auVar108[10] = auVar63[10] & SUB161(_DAT_004c4480,10);
      auVar108[11] = auVar63[11] & SUB161(_DAT_004c4480,0xb);
      auVar113[12] = auVar63[12] & SUB161(_DAT_004c4480,0xc);
      auVar113._0_12_ = auVar108;
      auVar113[13] = auVar63[13] & SUB161(_DAT_004c4480,0xd);
      auVar113[14] = auVar63[14] & SUB161(_DAT_004c4480,0xe);
      auVar113[15] = auVar63[15] & SUB161(_DAT_004c4480,0xf);
      uVar107 = uVar107 + (int)((ulong)auVar108._0_8_ >> 0x20) + auVar108._8_4_ + auVar113._12_4_;
      pbVar4 = (byte *)((long)param_2 + (long)iVar66 + 0x20);
      if ((~uVar107 & 9) == 0) {
        uVar19 = CONCAT14(*(undefined *)((long)param_2 + (long)iVar66 + 0x22),
                          (uint)CONCAT12(*(undefined *)((long)param_2 + (long)iVar66 + 0x21),
                                         (ushort)*pbVar4));
        uVar38 = *(undefined *)((long)param_2 + (long)iVar66 + 0x23);
      }
      else {
        if ((uVar107 & 1) != 0) {
          local_80._0_1_ = *pbVar4;
        }
        if ((uVar107 >> 1 & 1) != 0) {
          local_80._1_1_ = *(undefined *)((long)param_2 + (long)iVar66 + 0x21);
        }
        if ((uVar107 >> 2 & 1) != 0) {
          local_80._2_1_ = *(undefined *)((long)param_2 + (long)iVar66 + 0x22);
        }
        if ((uVar107 >> 3 & 1) != 0) {
          local_80._3_1_ = *(undefined *)((long)param_2 + (long)iVar66 + 0x23);
        }
        uVar19 = CONCAT14(local_80._2_1_,(uint)CONCAT12(local_80._1_1_,(ushort)(byte)local_80));
        uVar38 = local_80._3_1_;
      }
      auVar111._2_2_ = 0;
      auVar111._0_2_ = (ushort)uVar19;
      auVar111._4_2_ = (short)((uint5)uVar19 >> 0x10);
      auVar111._6_2_ = 0;
      auVar111[8] = (char)((uint5)uVar19 >> 0x20);
      auVar111._9_3_ = 0;
      auVar111[12] = uVar38;
      auVar111._13_3_ = 0;
      auVar100 = NEON_ucvtf(auVar111,4);
      iVar67 = iVar67 + 1;
      iVar68 = iVar68 + 1;
      iVar74 = iVar74 + 1;
      iVar82 = iVar82 + 1;
      auVar14[4] = uVar29;
      auVar14._0_4_ = uVar12;
      auVar14[5] = uVar32;
      auVar14[6] = uVar34;
      auVar14[7] = uVar36;
      auVar14[8] = uVar29;
      auVar14[9] = uVar32;
      auVar14[10] = uVar34;
      auVar14[11] = uVar36;
      auVar14[12] = uVar29;
      auVar14[13] = uVar32;
      auVar14[14] = uVar34;
      auVar14[15] = uVar36;
      auVar17._4_2_ = (short)iVar68;
      auVar17._0_4_ = iVar67;
      auVar17._6_2_ = (short)((uint)iVar68 >> 0x10);
      auVar17._8_2_ = (short)iVar74;
      auVar17._10_2_ = (short)((uint)iVar74 >> 0x10);
      auVar17._12_2_ = (short)iVar82;
      auVar17._14_2_ = (short)((uint)iVar82 >> 0x10);
      auVar106 = NEON_cmgt(auVar14,auVar17,4);
      auVar70[0] = auVar69[0] & auVar106[0];
      auVar70[1] = auVar69[1] & auVar106[1];
      auVar70[2] = auVar69[2] & auVar106[2];
      auVar70[3] = auVar69[3] & auVar106[3];
      auVar70[4] = auVar69[4] & auVar106[4];
      auVar70[5] = auVar69[5] & auVar106[5];
      auVar70[6] = auVar69[6] & auVar106[6];
      auVar70[7] = auVar69[7] & auVar106[7];
      auVar70[8] = auVar69[8] & auVar106[8];
      auVar70[9] = auVar69[9] & auVar106[9];
      auVar70[10] = auVar69[10] & auVar106[10];
      auVar70[11] = auVar69[11] & auVar106[11];
      auVar70[12] = auVar69[12] & auVar106[12];
      auVar70[13] = auVar69[13] & auVar106[13];
      auVar70[14] = auVar69[14] & auVar106[14];
      auVar70[15] = auVar69[15] & auVar106[15];
      iVar94 = auVar63._0_4_;
      iVar98 = auVar63._4_4_;
      iVar102 = auVar63._8_4_;
      iVar103 = auVar63._12_4_;
      auVar63[0] = auVar70[0] & bVar28;
      auVar63[1] = auVar70[1] & bVar31;
      auVar63[2] = auVar70[2] & bVar33;
      auVar63[3] = auVar70[3] & bVar35;
      auVar63[4] = auVar70[4] & bVar37;
      auVar63[5] = auVar70[5] & bVar39;
      auVar63[6] = auVar70[6] & bVar41;
      auVar63[7] = auVar70[7] & bVar43;
      auVar63[8] = auVar70[8] & bVar45;
      auVar63[9] = auVar70[9] & bVar47;
      auVar63[10] = auVar70[10] & bVar49;
      auVar63[11] = auVar70[11] & bVar51;
      auVar63[12] = auVar70[12] & bVar53;
      auVar63[13] = auVar70[13] & bVar55;
      auVar63[14] = auVar70[14] & bVar57;
      auVar63[15] = auVar70[15] & bVar59;
      iVar87 = (int)(auVar100._4_4_ * 64.0 * auVar101._4_4_ * auVar95._4_4_ + 0.5);
      iVar92 = (int)(auVar100._8_4_ * 64.0 * auVar101._8_4_ * auVar95._8_4_ + 0.5);
      iVar93 = (int)(auVar100._12_4_ * 64.0 * auVar101._12_4_ * auVar95._12_4_ + 0.5);
      lVar24 = (long)iVar86;
      auVar112._0_4_ = (iVar94 << 0x1f) >> 0x1f;
      auVar112._4_4_ = (iVar98 << 0x1f) >> 0x1f;
      auVar112._8_4_ = (iVar102 << 0x1f) >> 0x1f;
      auVar112._12_4_ = (iVar103 << 0x1f) >> 0x1f;
      iVar94 = NEON_umaxv(auVar63,4);
      auVar18[4] = (char)iVar87;
      auVar18._0_4_ = (int)(auVar100._0_4_ * 64.0 * auVar101._0_4_ * auVar95._0_4_ + 0.5);
      auVar18[5] = (char)((uint)iVar87 >> 8);
      auVar18[6] = (char)((uint)iVar87 >> 0x10);
      auVar18[7] = (char)((uint)iVar87 >> 0x18);
      auVar18[8] = (char)iVar92;
      auVar18[9] = (char)((uint)iVar92 >> 8);
      auVar18[10] = (char)((uint)iVar92 >> 0x10);
      auVar18[11] = (char)((uint)iVar92 >> 0x18);
      auVar18[12] = (char)iVar93;
      auVar18[13] = (char)((uint)iVar93 >> 8);
      auVar18[14] = (char)((uint)iVar93 >> 0x10);
      auVar18[15] = (char)((uint)iVar93 >> 0x18);
      auVar69 = NEON_bsl(auVar112,auVar18,*(undefined (*) [16])((long)local_480 + lVar24),1);
      iVar86 = iVar86 + 0x10;
      iVar66 = iVar66 + 4;
      *(long *)((long)local_480 + lVar24 + 8) = auVar69._8_8_;
      *(long *)((long)local_480 + lVar24) = auVar69._0_8_;
      auVar69 = auVar70;
    } while (iVar94 != 0);
  }
  auVar71._8_4_ = 0xfffffffc;
  auVar71._0_8_ = 0xfffffffcfffffffc;
  auVar71._12_4_ = 0xfffffffc;
  pauVar27 = (undefined (*) [16])(param_2 + 0x58);
  uVar76 = *(undefined8 *)(param_2 + 0x5a);
  auVar15[9] = (char)((ulong)uVar76 >> 8);
  auVar15._0_9_ = *(unkbyte9 *)*pauVar27;
  auVar15[10] = (char)((ulong)uVar76 >> 0x10);
  auVar15[11] = (char)((ulong)uVar76 >> 0x18);
  auVar15[12] = (char)((ulong)uVar76 >> 0x20);
  auVar15[13] = (char)((ulong)uVar76 >> 0x28);
  auVar15[14] = (char)((ulong)uVar76 >> 0x30);
  auVar15[15] = (char)((ulong)uVar76 >> 0x38);
  auVar69 = NEON_cmgt(auVar15,auVar71,4);
  auVar77[0] = auVar69[0] & bVar28;
  auVar77[1] = auVar69[1] & bVar31;
  auVar77[2] = auVar69[2] & bVar33;
  auVar77[3] = auVar69[3] & bVar35;
  auVar77[4] = auVar69[4] & bVar37;
  auVar77[5] = auVar69[5] & bVar39;
  auVar77[6] = auVar69[6] & bVar41;
  auVar77[7] = auVar69[7] & bVar43;
  auVar77[8] = auVar69[8] & bVar45;
  auVar77[9] = auVar69[9] & bVar47;
  auVar77[10] = auVar69[10] & bVar49;
  auVar77[11] = auVar69[11] & bVar51;
  auVar77[12] = auVar69[12] & bVar53;
  auVar77[13] = auVar69[13] & bVar55;
  auVar77[14] = auVar69[14] & bVar57;
  auVar77[15] = auVar69[15] & bVar59;
  iVar86 = NEON_umaxv(auVar77,4);
  if (iVar86 != 0) {
    uVar20 = 0;
    auVar63 = *(undefined (*) [16])(param_2 + 0x68);
    iVar86 = auVar63._0_4_ * 0x5556 >> 0x10;
    iVar66 = auVar63._4_4_ * 0x5556 >> 0x10;
    iVar67 = auVar63._8_4_ * 0x5556 >> 0x10;
    iVar68 = auVar63._12_4_ * 0x5556 >> 0x10;
    iVar74 = auVar63._0_4_ + iVar86 * -3;
    iVar82 = auVar63._4_4_ + iVar66 * -3;
    iVar87 = auVar63._8_4_ + iVar67 * -3;
    iVar92 = auVar63._12_4_ + iVar68 * -3;
    auVar62._0_4_ = iVar74 * -2 + 5;
    auVar62._4_4_ = iVar82 * -2 + 5;
    auVar62._8_4_ = iVar87 * -2 + 5;
    auVar62._12_4_ = iVar92 * -2 + 5;
    auVar88._8_4_ = 2;
    auVar88._0_8_ = 0x200000002;
    auVar88._12_4_ = 2;
    auVar64._0_4_ = iVar74 + iVar86;
    auVar64._4_4_ = iVar82 + iVar66;
    auVar64._8_4_ = iVar87 + iVar67;
    auVar64._12_4_ = iVar92 + iVar68;
    auVar63 = NEON_smax(auVar88,auVar62,4);
    auVar63 = NEON_ushl(auVar63,auVar64,4);
    auVar78._0_4_ = (auVar63._0_4_ >> 1) + -1;
    auVar78._4_4_ = (auVar63._4_4_ >> 1) + -1;
    auVar78._8_4_ = (auVar63._8_4_ >> 1) + -1;
    auVar78._12_4_ = (auVar63._12_4_ >> 1) + -1;
    auVar63 = NEON_scvtf(auVar78,4);
    iVar86 = (int)*(undefined8 *)*pauVar27;
    iVar66 = (int)((ulong)*(undefined8 *)*pauVar27 >> 0x20);
    iVar67 = (int)((ulong)uVar76 >> 0x20);
    auVar100 = NEON_frecpe(auVar63,4);
    auVar95 = NEON_frecps(auVar63,auVar100,4);
    auVar65._0_4_ = auVar100._0_4_ * auVar95._0_4_;
    auVar65._4_4_ = auVar100._4_4_ * auVar95._4_4_;
    auVar65._8_4_ = auVar100._8_4_ * auVar95._8_4_;
    auVar65._12_4_ = auVar100._12_4_ * auVar95._12_4_;
    auVar79._0_4_ = ((int)(iVar86 + ((uint)(iVar86 >> 0x1f) >> 0x1e)) >> 2) * 2;
    auVar79._4_4_ = ((int)(iVar66 + ((uint)(iVar66 >> 0x1f) >> 0x1e)) >> 2) * 2;
    auVar79._8_4_ = ((int)(SUB164(*pauVar27,8) + ((uint)((int)uVar76 >> 0x1f) >> 0x1e)) >> 2) * 2;
    auVar79._12_4_ = ((int)(iVar67 + ((uint)(iVar67 >> 0x1f) >> 0x1e)) >> 2) * 2;
    auVar63 = NEON_frecps(auVar63,auVar65,4);
    iVar86 = auVar79._0_4_ + 2;
    iVar66 = auVar79._4_4_ + 2;
    iVar67 = auVar79._8_4_ + 2;
    iVar68 = auVar79._12_4_ + 2;
    while( true ) {
      uVar23 = -(uVar20 >> 0x1f) & 0xfffffffc00000000 | uVar20 << 2;
      uVar29 = *(undefined *)((long)param_2 + uVar23 + 0x1b1);
      auVar89._6_2_ = 0;
      auVar89._0_6_ =
           (uint6)CONCAT14(uVar29,(uint)CONCAT12(uVar29,(ushort)*(byte *)((long)param_2 +
                                                                         uVar23 + 0x1b0))) &
           0xffff0000ffff;
      auVar89[8] = *(undefined *)((long)param_2 + uVar23 + 0x1b2);
      auVar89._9_3_ = 0;
      auVar89[12] = *(undefined *)((long)param_2 + uVar23 + 0x1b3);
      auVar89._13_3_ = 0;
      auVar95 = NEON_ucvtf(auVar89,4);
      uVar107 = (int)uVar20 + 1;
      uVar20 = (ulong)uVar107;
      auVar90._4_4_ = uVar107;
      auVar90._0_4_ = uVar107;
      auVar90._8_4_ = uVar107;
      auVar90._12_4_ = uVar107;
      auVar16._4_4_ = iVar66;
      auVar16._0_4_ = iVar86;
      auVar16._8_4_ = iVar67;
      auVar16._12_4_ = iVar68;
      auVar100 = NEON_cmgt(auVar16,auVar90,4);
      auVar72[0] = auVar69[0] & auVar100[0];
      auVar72[1] = auVar69[1] & auVar100[1];
      auVar72[2] = auVar69[2] & auVar100[2];
      auVar72[3] = auVar69[3] & auVar100[3];
      auVar72[4] = auVar69[4] & auVar100[4];
      auVar72[5] = auVar69[5] & auVar100[5];
      auVar72[6] = auVar69[6] & auVar100[6];
      auVar72[7] = auVar69[7] & auVar100[7];
      auVar72[8] = auVar69[8] & auVar100[8];
      auVar72[9] = auVar69[9] & auVar100[9];
      auVar72[10] = auVar69[10] & auVar100[10];
      auVar72[11] = auVar69[11] & auVar100[11];
      auVar72[12] = auVar69[12] & auVar100[12];
      auVar72[13] = auVar69[13] & auVar100[13];
      auVar72[14] = auVar69[14] & auVar100[14];
      auVar72[15] = auVar69[15] & auVar100[15];
      auVar96[0] = auVar72[0] & bVar28;
      auVar96[1] = auVar72[1] & bVar31;
      auVar96[2] = auVar72[2] & bVar33;
      auVar96[3] = auVar72[3] & bVar35;
      auVar96[4] = auVar72[4] & bVar37;
      auVar96[5] = auVar72[5] & bVar39;
      auVar96[6] = auVar72[6] & bVar41;
      auVar96[7] = auVar72[7] & bVar43;
      auVar96[8] = auVar72[8] & bVar45;
      auVar96[9] = auVar72[9] & bVar47;
      auVar96[10] = auVar72[10] & bVar49;
      auVar96[11] = auVar72[11] & bVar51;
      auVar96[12] = auVar72[12] & bVar53;
      auVar96[13] = auVar72[13] & bVar55;
      auVar96[14] = auVar72[14] & bVar57;
      auVar96[15] = auVar72[15] & bVar59;
      uVar76 = NEON_bit(auVar79._0_8_,
                        CONCAT26((short)(int)(auVar95._12_4_ * 255.0 *
                                              auVar65._12_4_ * auVar63._12_4_ + 0.5),
                                 CONCAT24((short)(int)(auVar95._8_4_ * 255.0 *
                                                       auVar65._8_4_ * auVar63._8_4_ + 0.5),
                                          CONCAT22((short)(int)(auVar95._4_4_ * 255.0 *
                                                                auVar65._4_4_ * auVar63._4_4_ + 0.5)
                                                   ,(short)(int)(auVar95._0_4_ * 255.0 *
                                                                 auVar65._0_4_ * auVar63._0_4_ + 0.5
                                                                )))),
                        CONCAT26((short)(auVar69._12_2_ << 0xf) >> 0xf,
                                 CONCAT24((short)(auVar69._8_2_ << 0xf) >> 0xf,
                                          CONCAT22((short)(auVar69._4_2_ << 0xf) >> 0xf,
                                                   (short)(auVar69._0_2_ << 0xf) >> 0xf))),1);
      iVar74 = NEON_umaxv(auVar96,4);
      *(uint *)((long)&local_80 + uVar23) =
           CONCAT13((char)((ulong)uVar76 >> 0x30),
                    CONCAT12((char)((ulong)uVar76 >> 0x20),
                             CONCAT11((char)((ulong)uVar76 >> 0x10),(char)uVar76)));
      if (iVar74 == 0) break;
      lVar24 = (long)(int)uVar107 * 4;
      auVar79 = ZEXT716(CONCAT16(*(byte *)((long)&local_80 + lVar24 + 3),
                                 (uint6)CONCAT14(*(byte *)((long)&local_80 + lVar24 + 2),
                                                 (uint)CONCAT12(*(byte *)((long)&local_80 +
                                                                         lVar24 + 1),
                                                                (ushort)*(byte *)((long)&local_80 +
                                                                                 (long)(int)uVar107
                                                                                 * 4)))));
      auVar69 = auVar72;
    }
  }
  decode_endpoints___un_3C_vyf_3E_un_3C_vyT_3E_vyi(local_500,&local_80);
  iVar86 = iVar8;
  if (iVar8 < 0) {
    iVar86 = iVar8 + 1;
  }
  iVar66 = iVar7;
  if (iVar7 < 0) {
    iVar66 = iVar7 + 1;
  }
  if (0 < (int)uVar12) {
    uVar20 = (ulong)uVar12;
    puVar22 = &local_600;
    puVar21 = local_480;
    do {
      *puVar22 = CONCAT13((char)((ulong)puVar21[1] >> 0x20),
                          CONCAT12((char)puVar21[1],
                                   CONCAT11((char)((ulong)*puVar21 >> 0x20),(char)*puVar21)));
      puVar22 = puVar22 + 1;
      uVar20 = uVar20 - 1;
      puVar21 = puVar21 + 2;
    } while (uVar20 != 0);
  }
  if ((cVar9 != '\0') && (1 < (int)uVar12)) {
    puVar21 = local_480 + 2;
    puVar22 = &local_600;
    puVar25 = &local_700;
    uVar20 = (ulong)(uVar12 >> 1);
    do {
      uVar61 = puVar21[1];
      uVar76 = *puVar21;
      *puVar22 = CONCAT13((char)((ulong)puVar21[-1] >> 0x20),
                          CONCAT12((char)puVar21[-1],
                                   CONCAT11((char)((ulong)puVar21[-2] >> 0x20),(char)puVar21[-2])));
      puVar22 = puVar22 + 1;
      *puVar25 = CONCAT13((char)((ulong)uVar61 >> 0x20),
                          CONCAT12((char)uVar61,CONCAT11((char)((ulong)uVar76 >> 0x20),(char)uVar76)
                                  ));
      puVar25 = puVar25 + 1;
      puVar21 = puVar21 + 4;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  if (iVar7 < 1) {
    uVar29 = 0;
    uVar32 = 0;
    uVar34 = 0;
    uVar36 = 0;
    uVar38 = 0;
    uVar40 = 0;
    uVar42 = 0;
    uVar44 = 0;
    uVar46 = 0;
    uVar48 = 0;
    uVar50 = 0;
    uVar52 = 0;
    uVar54 = 0;
    uVar56 = 0;
    uVar58 = 0;
    uVar60 = 0;
  }
  else {
    iVar68 = 0;
    iVar67 = 0;
    uVar29 = 0;
    uVar32 = 0;
    uVar34 = 0;
    uVar36 = 0;
    uVar38 = 0;
    uVar40 = 0;
    uVar42 = 0;
    uVar44 = 0;
    uVar46 = 0;
    uVar48 = 0;
    uVar50 = 0;
    uVar52 = 0;
    uVar54 = 0;
    uVar56 = 0;
    uVar58 = 0;
    uVar60 = 0;
    iVar74 = 0;
    if (iVar8 + -1 != 0) {
      iVar74 = ((iVar86 >> 1) + 0x400) / (iVar8 + -1);
    }
    iVar86 = 0;
    if (iVar7 + -1 != 0) {
      iVar86 = ((iVar66 >> 1) + 0x400) / (iVar7 + -1);
    }
    do {
      if (0 < iVar8) {
        iVar66 = 0;
        uVar107 = iVar67 * iVar86 * (iVar6 + -1) + 0x20;
        iVar87 = (int)uVar107 >> 10;
        uVar12 = param_2[0x55];
        uVar107 = uVar107 >> 6 & 0xf;
        iVar82 = iVar68;
        do {
          uVar11 = iVar66 * iVar74 * (iVar5 + -1) + 0x20;
          uVar13 = uVar11 >> 6 & 0xf;
          uVar10 = uVar107 * uVar13 + 8 >> 4;
          iVar103 = uVar13 - uVar10;
          iVar104 = uVar107 - uVar10;
          iVar92 = (uVar10 - (uVar13 + uVar107)) + 0x10;
          iVar102 = (int)uVar11 >> 10;
          iVar98 = iVar87 * iVar5 + iVar102;
          iVar102 = (iVar87 + 1) * iVar5 + iVar102;
          iVar93 = iVar98 + 1;
          iVar94 = iVar102 + 1;
          if (cVar9 == '\0') {
            auVar97 = ZEXT816(0);
          }
          else {
            lVar24 = (long)iVar93 * 4;
            lVar1 = (long)iVar98 * 4;
            lVar2 = (long)iVar102 * 4;
            lVar3 = (long)iVar94 * 4;
            auVar97._0_4_ =
                 (int)(iVar103 * (uint)*(byte *)(&local_700 + iVar93) +
                       iVar92 * (uint)*(byte *)(&local_700 + iVar98) +
                       iVar104 * (uint)*(byte *)(&local_700 + iVar102) +
                       uVar10 * *(byte *)(&local_700 + iVar94) + 8) >> 4;
            auVar97._4_4_ =
                 (int)(iVar103 * (uint)*(byte *)((long)&local_700 + lVar24 + 1) +
                       iVar92 * (uint)*(byte *)((long)&local_700 + lVar1 + 1) +
                       iVar104 * (uint)*(byte *)((long)&local_700 + lVar2 + 1) +
                       uVar10 * *(byte *)((long)&local_700 + lVar3 + 1) + 8) >> 4;
            auVar97._8_4_ =
                 (int)(iVar103 * (uint)*(byte *)((long)&local_700 + lVar24 + 2) +
                       iVar92 * (uint)*(byte *)((long)&local_700 + lVar1 + 2) +
                       iVar104 * (uint)*(byte *)((long)&local_700 + lVar2 + 2) +
                       uVar10 * *(byte *)((long)&local_700 + lVar3 + 2) + 8) >> 4;
            auVar97._12_4_ =
                 (int)(iVar103 * (uint)*(byte *)((long)&local_700 + lVar24 + 3) +
                       iVar92 * (uint)*(byte *)((long)&local_700 + lVar1 + 3) +
                       iVar104 * (uint)*(byte *)((long)&local_700 + lVar2 + 3) +
                       uVar10 * *(byte *)((long)&local_700 + lVar3 + 3) + 8) >> 4;
          }
          if (0 < (int)uVar12) {
            lVar24 = (long)iVar93 * 4;
            lVar1 = (long)iVar94 * 4;
            lVar2 = (long)iVar98 * 4;
            lVar3 = (long)iVar102 * 4;
            auVar73._0_4_ =
                 (int)(iVar103 * (uint)*(byte *)(&local_600 + iVar93) +
                       uVar10 * *(byte *)(&local_600 + iVar94) +
                       iVar92 * (uint)*(byte *)(&local_600 + iVar98) +
                       iVar104 * (uint)*(byte *)(&local_600 + iVar102) + 8) >> 4;
            auVar73._4_4_ =
                 (int)(iVar103 * (uint)*(byte *)((long)&local_600 + lVar24 + 1) +
                       uVar10 * *(byte *)((long)&local_600 + lVar1 + 1) +
                       iVar92 * (uint)*(byte *)((long)&local_600 + lVar2 + 1) +
                       iVar104 * (uint)*(byte *)((long)&local_600 + lVar3 + 1) + 8) >> 4;
            auVar73._8_4_ =
                 (int)(iVar103 * (uint)*(byte *)((long)&local_600 + lVar24 + 2) +
                       uVar10 * *(byte *)((long)&local_600 + lVar1 + 2) +
                       iVar92 * (uint)*(byte *)((long)&local_600 + lVar2 + 2) +
                       iVar104 * (uint)*(byte *)((long)&local_600 + lVar3 + 2) + 8) >> 4;
            auVar73._12_4_ =
                 (int)(iVar103 * (uint)*(byte *)((long)&local_600 + lVar24 + 3) +
                       uVar10 * *(byte *)((long)&local_600 + lVar1 + 3) +
                       iVar92 * (uint)*(byte *)((long)&local_600 + lVar2 + 3) +
                       iVar104 * (uint)*(byte *)((long)&local_600 + lVar3 + 3) + 8) >> 4;
            if (cVar9 == '\0') {
              lVar24 = 0x400000000;
              pauVar27 = (undefined (*) [16])local_500;
              uVar20 = (ulong)uVar12;
              iVar92 = iVar82;
              do {
                auVar69 = *pauVar27;
                auVar63 = *(undefined (*) [16])((long)local_500 + (lVar24 >> 0x1c));
                iVar93 = (0x40 - auVar73._0_4_) * (int)(auVar69._0_4_ * 256.0 + 128.0) +
                         auVar73._0_4_ * (int)(auVar63._0_4_ * 256.0 + 128.0) + 0x20;
                iVar94 = (0x40 - auVar73._4_4_) * (int)(auVar69._4_4_ * 256.0 + 128.0) +
                         auVar73._4_4_ * (int)(auVar63._4_4_ * 256.0 + 128.0) + 0x20;
                iVar98 = (0x40 - auVar73._8_4_) * (int)(auVar69._8_4_ * 256.0 + 128.0) +
                         auVar73._8_4_ * (int)(auVar63._8_4_ * 256.0 + 128.0) + 0x20;
                iVar102 = (0x40 - auVar73._12_4_) * (int)(auVar69._12_4_ * 256.0 + 128.0) +
                          auVar73._12_4_ * (int)(auVar63._12_4_ * 256.0 + 128.0) + 0x20;
                auVar81._0_4_ = (int)(iVar93 + ((uint)(iVar93 >> 0x1f) >> 0x1a)) >> 0xe;
                auVar81._4_4_ = (int)(iVar94 + ((uint)(iVar94 >> 0x1f) >> 0x1a)) >> 0xe;
                auVar81._8_4_ = (int)(iVar98 + ((uint)(iVar98 >> 0x1f) >> 0x1a)) >> 0xe;
                auVar81._12_4_ = (int)(iVar102 + ((uint)(iVar102 >> 0x1f) >> 0x1a)) >> 0xe;
                auVar63 = NEON_scvtf(auVar81,4);
                auVar69 = *(undefined (*) [16])(param_3 + (long)iVar92 * 0x10);
                fVar75 = auVar63._0_4_ - auVar69._0_4_;
                fVar83 = auVar63._4_4_ - auVar69._4_4_;
                fVar84 = auVar63._8_4_ - auVar69._8_4_;
                fVar85 = auVar63._12_4_ - auVar69._12_4_;
                fVar75 = (float)CONCAT13(uVar36,CONCAT12(uVar34,CONCAT11(uVar32,uVar29))) +
                         fVar75 * fVar75;
                uVar29 = SUB41(fVar75,0);
                uVar32 = (undefined)((uint)fVar75 >> 8);
                uVar34 = (undefined)((uint)fVar75 >> 0x10);
                uVar36 = (undefined)((uint)fVar75 >> 0x18);
                fVar75 = (float)CONCAT13(uVar44,CONCAT12(uVar42,CONCAT11(uVar40,uVar38))) +
                         fVar83 * fVar83;
                uVar38 = SUB41(fVar75,0);
                uVar40 = (undefined)((uint)fVar75 >> 8);
                uVar42 = (undefined)((uint)fVar75 >> 0x10);
                uVar44 = (undefined)((uint)fVar75 >> 0x18);
                fVar75 = (float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46))) +
                         fVar84 * fVar84;
                uVar46 = SUB41(fVar75,0);
                uVar48 = (undefined)((uint)fVar75 >> 8);
                uVar50 = (undefined)((uint)fVar75 >> 0x10);
                uVar52 = (undefined)((uint)fVar75 >> 0x18);
                fVar75 = (float)CONCAT13(uVar60,CONCAT12(uVar58,CONCAT11(uVar56,uVar54))) +
                         fVar85 * fVar85;
                uVar54 = SUB41(fVar75,0);
                uVar56 = (undefined)((uint)fVar75 >> 8);
                uVar58 = (undefined)((uint)fVar75 >> 0x10);
                uVar60 = (undefined)((uint)fVar75 >> 0x18);
                lVar24 = lVar24 + 0x100000000;
                iVar92 = iVar92 + 0x40;
                uVar20 = uVar20 - 1;
                pauVar27 = pauVar27 + 1;
              } while (uVar20 != 0);
            }
            else {
              uVar20 = 0;
              lVar24 = 0x400000000;
              iVar92 = iVar82;
              do {
                uVar26 = (undefined4)uVar20;
                auVar91._4_4_ = uVar26;
                auVar91._0_4_ = uVar26;
                auVar91._8_4_ = uVar26;
                auVar91._12_4_ = uVar26;
                auVar63 = NEON_cmeq(*(undefined (*) [16])(param_2 + 0x48),auVar91,4);
                auVar69 = *(undefined (*) [16])((long)local_500 + (lVar24 >> 0x1c));
                auVar63 = NEON_bsl(auVar63,auVar97,auVar73,1);
                iVar93 = (0x40 - auVar63._0_4_) *
                         (int)((float)local_500[uVar20 * 2] * 256.0 + 128.0) +
                         auVar63._0_4_ * (int)(auVar69._0_4_ * 256.0 + 128.0) + 0x20;
                iVar94 = (0x40 - auVar63._4_4_) *
                         (int)((float)((ulong)local_500[uVar20 * 2] >> 0x20) * 256.0 + 128.0) +
                         auVar63._4_4_ * (int)(auVar69._4_4_ * 256.0 + 128.0) + 0x20;
                iVar98 = (0x40 - auVar63._8_4_) *
                         (int)((float)local_500[uVar20 * 2 + 1] * 256.0 + 128.0) +
                         auVar63._8_4_ * (int)(auVar69._8_4_ * 256.0 + 128.0) + 0x20;
                iVar102 = (0x40 - auVar63._12_4_) *
                          (int)((float)((ulong)local_500[uVar20 * 2 + 1] >> 0x20) * 256.0 + 128.0) +
                          auVar63._12_4_ * (int)(auVar69._12_4_ * 256.0 + 128.0) + 0x20;
                auVar80._0_4_ = (int)(iVar93 + ((uint)(iVar93 >> 0x1f) >> 0x1a)) >> 0xe;
                auVar80._4_4_ = (int)(iVar94 + ((uint)(iVar94 >> 0x1f) >> 0x1a)) >> 0xe;
                auVar80._8_4_ = (int)(iVar98 + ((uint)(iVar98 >> 0x1f) >> 0x1a)) >> 0xe;
                auVar80._12_4_ = (int)(iVar102 + ((uint)(iVar102 >> 0x1f) >> 0x1a)) >> 0xe;
                auVar63 = NEON_scvtf(auVar80,4);
                auVar69 = *(undefined (*) [16])(param_3 + (long)iVar92 * 0x10);
                fVar75 = auVar63._0_4_ - auVar69._0_4_;
                fVar83 = auVar63._4_4_ - auVar69._4_4_;
                fVar84 = auVar63._8_4_ - auVar69._8_4_;
                fVar85 = auVar63._12_4_ - auVar69._12_4_;
                fVar75 = (float)CONCAT13(uVar36,CONCAT12(uVar34,CONCAT11(uVar32,uVar29))) +
                         fVar75 * fVar75;
                uVar29 = SUB41(fVar75,0);
                uVar32 = (undefined)((uint)fVar75 >> 8);
                uVar34 = (undefined)((uint)fVar75 >> 0x10);
                uVar36 = (undefined)((uint)fVar75 >> 0x18);
                fVar75 = (float)CONCAT13(uVar44,CONCAT12(uVar42,CONCAT11(uVar40,uVar38))) +
                         fVar83 * fVar83;
                uVar38 = SUB41(fVar75,0);
                uVar40 = (undefined)((uint)fVar75 >> 8);
                uVar42 = (undefined)((uint)fVar75 >> 0x10);
                uVar44 = (undefined)((uint)fVar75 >> 0x18);
                fVar75 = (float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46))) +
                         fVar84 * fVar84;
                uVar46 = SUB41(fVar75,0);
                uVar48 = (undefined)((uint)fVar75 >> 8);
                uVar50 = (undefined)((uint)fVar75 >> 0x10);
                uVar52 = (undefined)((uint)fVar75 >> 0x18);
                fVar75 = (float)CONCAT13(uVar60,CONCAT12(uVar58,CONCAT11(uVar56,uVar54))) +
                         fVar85 * fVar85;
                uVar54 = SUB41(fVar75,0);
                uVar56 = (undefined)((uint)fVar75 >> 8);
                uVar58 = (undefined)((uint)fVar75 >> 0x10);
                uVar60 = (undefined)((uint)fVar75 >> 0x18);
                uVar20 = uVar20 + 1;
                lVar24 = lVar24 + 0x100000000;
                iVar92 = iVar92 + 0x40;
              } while (uVar12 != uVar20);
            }
          }
          iVar66 = iVar66 + 1;
          iVar82 = iVar82 + 1;
        } while (iVar66 != iVar8);
      }
      iVar67 = iVar67 + 1;
      iVar68 = iVar68 + 8;
    } while (iVar67 != iVar7);
  }
  auVar30[1] = uVar32;
  auVar30[0] = uVar29;
  auVar30[2] = uVar34;
  auVar30[3] = uVar36;
  auVar30[4] = uVar38;
  auVar30[5] = uVar40;
  auVar30[6] = uVar42;
  auVar30[7] = uVar44;
  auVar30[8] = uVar46;
  auVar30[9] = uVar48;
  auVar30[10] = uVar50;
  auVar30[11] = uVar52;
  auVar30[12] = uVar54;
  auVar30[13] = uVar56;
  auVar30[14] = uVar58;
  auVar30[15] = uVar60;
  return auVar30;
}


