// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: optimize_block___un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_un_3C_s_5B_vyastc_enc_state_5D__3E_
// Entry Point: 00e5a09c
// Size: 1088 bytes
// Signature: undefined optimize_block___un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_un_3C_s_5B_vyastc_enc_state_5D__3E_(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void optimize_block___un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_un_3C_s_5B_vyastc_enc_state_5D__3E_
               (undefined param_1 [16],undefined8 param_2,int *param_3,long param_4)

{
  long lVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  undefined auVar15 [12];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  byte bVar27;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  ulong uVar28;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  ulong uVar44;
  undefined local_2c0 [256];
  undefined local_1c0 [256];
  undefined auStack_c0 [128];
  undefined8 local_40;
  int local_38;
  int local_34;
  undefined auVar26 [16];
  
  auVar16._8_4_ = 2;
  auVar16._0_8_ = 0x200000002;
  auVar16._12_4_ = 2;
  iVar11 = (int)*(undefined8 *)(param_3 + 0x58);
  iVar13 = (int)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20);
  iVar7 = (int)*(undefined8 *)(param_3 + 0x5a);
  iVar8 = (int)((ulong)*(undefined8 *)(param_3 + 0x5a) >> 0x20);
  uVar28 = CONCAT44(iVar13 + ((uint)(iVar13 >> 0x1f) >> 0x1e),
                    iVar11 + ((uint)(iVar11 >> 0x1f) >> 0x1e)) & 0xfffffffcfffffffc;
  uVar44 = CONCAT44(iVar8 + ((uint)(iVar8 >> 0x1f) >> 0x1e),iVar7 + ((uint)(iVar7 >> 0x1f) >> 0x1e))
           & 0xfffffffcfffffffc;
  iVar13 = iVar13 - (int)(uVar28 >> 0x20);
  iVar7 = iVar7 - (int)uVar44;
  iVar8 = iVar8 - (int)(uVar44 >> 0x20);
  auVar17[4] = (char)iVar13;
  auVar17._0_4_ = iVar11 - (int)uVar28;
  auVar17[5] = (char)((uint)iVar13 >> 8);
  auVar17[6] = (char)((uint)iVar13 >> 0x10);
  auVar17[7] = (char)((uint)iVar13 >> 0x18);
  auVar17[8] = (char)iVar7;
  auVar17[9] = (char)((uint)iVar7 >> 8);
  auVar17[10] = (char)((uint)iVar7 >> 0x10);
  auVar17[11] = (char)((uint)iVar7 >> 0x18);
  auVar17[12] = (char)iVar8;
  auVar17[13] = (char)((uint)iVar8 >> 8);
  auVar17[14] = (char)((uint)iVar8 >> 0x10);
  auVar17[15] = (char)((uint)iVar8 >> 0x18);
  auVar17 = NEON_cmeq(auVar17,auVar16,4);
  local_38 = *param_3;
  local_34 = param_3[1];
  bVar27 = param_1[0];
  local_40 = param_2;
  compute_pca_endpoints___un_3C_vyf_3E_un_3C_s_5B_vypixel_set_5D__3E_vybuni
            (auVar17,bVar27,auStack_c0,&local_40,4);
  auVar18[0] = auVar17[0] & bVar27;
  bVar29 = param_1[1];
  auVar18[1] = auVar17[1] & bVar29;
  bVar30 = param_1[2];
  auVar18[2] = auVar17[2] & bVar30;
  bVar31 = param_1[3];
  auVar18[3] = auVar17[3] & bVar31;
  bVar32 = param_1[4];
  auVar18[4] = auVar17[4] & bVar32;
  bVar33 = param_1[5];
  auVar18[5] = auVar17[5] & bVar33;
  bVar34 = param_1[6];
  auVar18[6] = auVar17[6] & bVar34;
  bVar35 = param_1[7];
  auVar18[7] = auVar17[7] & bVar35;
  bVar36 = param_1[8];
  auVar18[8] = auVar17[8] & bVar36;
  bVar37 = param_1[9];
  auVar18[9] = auVar17[9] & bVar37;
  bVar38 = param_1[10];
  auVar18[10] = auVar17[10] & bVar38;
  bVar39 = param_1[11];
  auVar18[11] = auVar17[11] & bVar39;
  bVar40 = param_1[12];
  auVar18[12] = auVar17[12] & bVar40;
  bVar41 = param_1[13];
  auVar18[13] = auVar17[13] & bVar41;
  bVar42 = param_1[14];
  auVar18[14] = auVar17[14] & bVar42;
  bVar43 = param_1[15];
  auVar18[15] = auVar17[15] & bVar43;
  iVar11 = NEON_umaxv(auVar18,4);
  if (iVar11 != 0) {
    quantize_endpoints_scale___un_3C_s_5B_vyastc_block_5D__3E_un_3C_vyf_3E_(param_3,auStack_c0);
  }
  auVar19[0] = bVar27 & ~auVar17[0];
  auVar19[1] = bVar29 & ~auVar17[1];
  auVar19[2] = bVar30 & ~auVar17[2];
  auVar19[3] = bVar31 & ~auVar17[3];
  auVar19[4] = bVar32 & ~auVar17[4];
  auVar19[5] = bVar33 & ~auVar17[5];
  auVar19[6] = bVar34 & ~auVar17[6];
  auVar19[7] = bVar35 & ~auVar17[7];
  auVar19[8] = bVar36 & ~auVar17[8];
  auVar19[9] = bVar37 & ~auVar17[9];
  auVar19[10] = bVar38 & ~auVar17[10];
  auVar19[11] = bVar39 & ~auVar17[11];
  auVar19[12] = bVar40 & ~auVar17[12];
  auVar19[13] = bVar41 & ~auVar17[13];
  auVar19[14] = bVar42 & ~auVar17[14];
  auVar19[15] = bVar43 & ~auVar17[15];
  iVar11 = NEON_umaxv(auVar19,4);
  if (iVar11 != 0) {
    quantize_endpoints_pair___un_3C_s_5B_vyastc_block_5D__3E_un_3C_vyf_3E_(param_3,auStack_c0);
  }
  opt_weights___un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_(param_1,param_2,param_3);
  iVar11 = *(int *)(param_4 + 0x204c);
  if (0 < iVar11) {
    iVar13 = 0;
    do {
      auVar17 = *(undefined (*) [16])(param_3 + 0x58);
      uVar28 = CONCAT44(auVar17._4_4_ + (uint)((byte)(auVar17[7] >> 7) >> 6),
                        auVar17._0_4_ + (uint)((byte)(auVar17[3] >> 7) >> 6)) & 0xfffffffcfffffffc;
      auVar20._0_4_ = auVar17._0_4_ - (int)uVar28;
      auVar20._4_4_ = auVar17._4_4_ - (int)(uVar28 >> 0x20);
      auVar20._8_4_ =
           auVar17._8_4_ - (auVar17._8_4_ + (uint)((byte)(auVar17[11] >> 7) >> 6) & 0xfffffffc);
      auVar20._12_4_ =
           auVar17._12_4_ - (auVar17._12_4_ + (uint)((byte)(auVar17[15] >> 7) >> 6) & 0xfffffffc);
      auVar5[8] = 2;
      auVar5._0_8_ = 0x200000002;
      auVar5._9_3_ = 0;
      auVar5[12] = 2;
      auVar5._13_3_ = 0;
      auVar17 = NEON_cmeq(auVar20,auVar5,4);
      auVar21[0] = auVar17[0] & bVar27;
      auVar21[1] = auVar17[1] & bVar29;
      auVar21[2] = auVar17[2] & bVar30;
      auVar21[3] = auVar17[3] & bVar31;
      auVar21[4] = auVar17[4] & bVar32;
      auVar21[5] = auVar17[5] & bVar33;
      auVar21[6] = auVar17[6] & bVar34;
      auVar21[7] = auVar17[7] & bVar35;
      auVar21[8] = auVar17[8] & bVar36;
      auVar21[9] = auVar17[9] & bVar37;
      auVar21[10] = auVar17[10] & bVar38;
      auVar21[11] = auVar17[11] & bVar39;
      auVar21[12] = auVar17[12] & bVar40;
      auVar21[13] = auVar17[13] & bVar41;
      auVar21[14] = auVar17[14] & bVar42;
      auVar21[15] = auVar17[15] & bVar43;
      iVar7 = NEON_umaxv(auVar21,4);
      if (iVar7 != 0) {
        ls_refine_scale___un_3C_vyf_3E_un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_
                  (auStack_c0,param_2,param_3);
      }
      auVar22[0] = bVar27 & ~auVar17[0];
      auVar22[1] = bVar29 & ~auVar17[1];
      auVar22[2] = bVar30 & ~auVar17[2];
      auVar22[3] = bVar31 & ~auVar17[3];
      auVar22[4] = bVar32 & ~auVar17[4];
      auVar22[5] = bVar33 & ~auVar17[5];
      auVar22[6] = bVar34 & ~auVar17[6];
      auVar22[7] = bVar35 & ~auVar17[7];
      auVar22[8] = bVar36 & ~auVar17[8];
      auVar22[9] = bVar37 & ~auVar17[9];
      auVar22[10] = bVar38 & ~auVar17[10];
      auVar22[11] = bVar39 & ~auVar17[11];
      auVar22[12] = bVar40 & ~auVar17[12];
      auVar22[13] = bVar41 & ~auVar17[13];
      auVar22[14] = bVar42 & ~auVar17[14];
      auVar22[15] = bVar43 & ~auVar17[15];
      iVar7 = NEON_umaxv(auVar22,4);
      if (iVar7 != 0) {
        ls_refine_pair___un_3C_vyf_3E_un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_
                  (auStack_c0,param_2,param_3);
      }
      auVar17 = *(undefined (*) [16])(param_3 + 0x58);
      uVar28 = CONCAT44(auVar17._4_4_ + (uint)((byte)(auVar17[7] >> 7) >> 6),
                        auVar17._0_4_ + (uint)((byte)(auVar17[3] >> 7) >> 6)) & 0xfffffffcfffffffc;
      auVar23._0_4_ = auVar17._0_4_ - (int)uVar28;
      auVar23._4_4_ = auVar17._4_4_ - (int)(uVar28 >> 0x20);
      auVar23._8_4_ =
           auVar17._8_4_ - (auVar17._8_4_ + (uint)((byte)(auVar17[11] >> 7) >> 6) & 0xfffffffc);
      auVar23._12_4_ =
           auVar17._12_4_ - (auVar17._12_4_ + (uint)((byte)(auVar17[15] >> 7) >> 6) & 0xfffffffc);
      auVar6[8] = 2;
      auVar6._0_8_ = 0x200000002;
      auVar6._9_3_ = 0;
      auVar6[12] = 2;
      auVar6._13_3_ = 0;
      auVar17 = NEON_cmeq(auVar23,auVar6,4);
      auVar24[0] = auVar17[0] & bVar27;
      auVar24[1] = auVar17[1] & bVar29;
      auVar24[2] = auVar17[2] & bVar30;
      auVar24[3] = auVar17[3] & bVar31;
      auVar24[4] = auVar17[4] & bVar32;
      auVar24[5] = auVar17[5] & bVar33;
      auVar24[6] = auVar17[6] & bVar34;
      auVar24[7] = auVar17[7] & bVar35;
      auVar24[8] = auVar17[8] & bVar36;
      auVar24[9] = auVar17[9] & bVar37;
      auVar24[10] = auVar17[10] & bVar38;
      auVar24[11] = auVar17[11] & bVar39;
      auVar24[12] = auVar17[12] & bVar40;
      auVar24[13] = auVar17[13] & bVar41;
      auVar24[14] = auVar17[14] & bVar42;
      auVar24[15] = auVar17[15] & bVar43;
      iVar7 = NEON_umaxv(auVar24,4);
      if (iVar7 != 0) {
        quantize_endpoints_scale___un_3C_s_5B_vyastc_block_5D__3E_un_3C_vyf_3E_(param_3,auStack_c0);
      }
      auVar25[0] = bVar27 & ~auVar17[0];
      auVar25[1] = bVar29 & ~auVar17[1];
      auVar25[2] = bVar30 & ~auVar17[2];
      auVar25[3] = bVar31 & ~auVar17[3];
      auVar25[4] = bVar32 & ~auVar17[4];
      auVar25[5] = bVar33 & ~auVar17[5];
      auVar25[6] = bVar34 & ~auVar17[6];
      auVar25[7] = bVar35 & ~auVar17[7];
      auVar25[8] = bVar36 & ~auVar17[8];
      auVar25[9] = bVar37 & ~auVar17[9];
      auVar25[10] = bVar38 & ~auVar17[10];
      auVar25[11] = bVar39 & ~auVar17[11];
      auVar25[12] = bVar40 & ~auVar17[12];
      auVar25[13] = bVar41 & ~auVar17[13];
      auVar25[14] = bVar42 & ~auVar17[14];
      auVar25[15] = bVar43 & ~auVar17[15];
      iVar7 = NEON_umaxv(auVar25,4);
      if (iVar7 != 0) {
        quantize_endpoints_pair___un_3C_s_5B_vyastc_block_5D__3E_un_3C_vyf_3E_(param_3,auStack_c0);
      }
      opt_weights___un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_(param_1,param_2,param_3);
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar11);
  }
  if (*(char *)(param_3 + 2) != '\0') {
    optimize_alt_plane___un_3C_vyT_3E_un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_
              (param_1,local_1c0,param_2,param_3);
    if (0 < param_3[1] * *param_3) {
      memcpy(local_2c0,param_3 + 8,(ulong)(uint)(param_3[1] * *param_3) << 2);
      uVar14 = (uint)(bVar27 & SUB161(_DAT_004c4480,0));
      auVar15._0_8_ =
           CONCAT17(bVar35 & SUB161(_DAT_004c4480,7),
                    (uint7)CONCAT14(bVar32 & SUB161(_DAT_004c4480,4),uVar14));
      auVar15[8] = bVar36 & SUB161(_DAT_004c4480,8);
      auVar15[9] = bVar37 & SUB161(_DAT_004c4480,9);
      auVar15[10] = bVar38 & SUB161(_DAT_004c4480,10);
      auVar15[11] = bVar39 & SUB161(_DAT_004c4480,0xb);
      auVar26[12] = bVar40 & SUB161(_DAT_004c4480,0xc);
      auVar26._0_12_ = auVar15;
      auVar26[13] = bVar41 & SUB161(_DAT_004c4480,0xd);
      auVar26[14] = bVar42 & SUB161(_DAT_004c4480,0xe);
      auVar26[15] = bVar43 & SUB161(_DAT_004c4480,0xf);
      uVar14 = uVar14 + (int)((ulong)auVar15._0_8_ >> 0x20) + auVar15._8_4_ + auVar26._12_4_;
      lVar9 = 0;
      lVar10 = 0;
      iVar11 = 1;
      if ((uVar14 & 1) == 0) {
        do {
          lVar1 = lVar10 * 4;
          uVar2 = local_2c0[lVar1 + 2];
          uVar3 = local_2c0[lVar1 + 3];
          lVar12 = lVar9 >> 0x20;
          if ((uVar14 >> 1 & 1) != 0) {
            *(undefined *)((long)param_3 + lVar12 * 4 + 0x21) = local_2c0[lVar1 + 1];
          }
          if ((uVar14 >> 2 & 1) != 0) {
            *(undefined *)((long)param_3 + lVar12 * 4 + 0x22) = uVar2;
          }
          if ((uVar14 >> 3 & 1) != 0) {
            *(undefined *)((long)param_3 + lVar12 * 4 + 0x23) = uVar3;
          }
          lVar1 = lVar10 * 4;
          uVar2 = local_1c0[lVar1 + 2];
          uVar3 = local_1c0[lVar1 + 3];
          lVar12 = (long)iVar11;
          if ((uVar14 >> 1 & 1) != 0) {
            *(undefined *)((long)param_3 + lVar12 * 4 + 0x21) = local_1c0[lVar1 + 1];
          }
          if ((uVar14 >> 2 & 1) != 0) {
            *(undefined *)((long)param_3 + lVar12 * 4 + 0x22) = uVar2;
          }
          if ((uVar14 >> 3 & 1) != 0) {
            *(undefined *)((long)param_3 + lVar12 * 4 + 0x23) = uVar3;
          }
          lVar10 = lVar10 + 1;
          iVar11 = iVar11 + 2;
          lVar9 = lVar9 + 0x200000000;
        } while (lVar10 < param_3[1] * *param_3);
      }
      else {
        do {
          lVar1 = lVar10 * 4;
          uVar2 = local_2c0[lVar1 + 1];
          uVar3 = local_2c0[lVar1 + 2];
          uVar4 = local_2c0[lVar1 + 3];
          lVar12 = lVar9 >> 0x20;
          *(undefined *)((long)param_3 + (lVar9 >> 0x1e) + 0x20) = local_2c0[lVar1];
          if ((uVar14 >> 1 & 1) != 0) {
            *(undefined *)((long)param_3 + lVar12 * 4 + 0x21) = uVar2;
          }
          if ((uVar14 >> 2 & 1) != 0) {
            *(undefined *)((long)param_3 + lVar12 * 4 + 0x22) = uVar3;
          }
          if ((uVar14 >> 3 & 1) != 0) {
            *(undefined *)((long)param_3 + lVar12 * 4 + 0x23) = uVar4;
          }
          lVar1 = lVar10 * 4;
          uVar2 = local_1c0[lVar1 + 1];
          uVar3 = local_1c0[lVar1 + 2];
          uVar4 = local_1c0[lVar1 + 3];
          lVar12 = (long)iVar11;
          *(undefined *)(param_3 + (long)iVar11 + 8) = local_1c0[lVar1];
          if ((uVar14 >> 1 & 1) != 0) {
            *(undefined *)((long)param_3 + lVar12 * 4 + 0x21) = uVar2;
          }
          if ((uVar14 >> 2 & 1) != 0) {
            *(undefined *)((long)param_3 + lVar12 * 4 + 0x22) = uVar3;
          }
          if ((uVar14 >> 3 & 1) != 0) {
            *(undefined *)((long)param_3 + lVar12 * 4 + 0x23) = uVar4;
          }
          lVar10 = lVar10 + 1;
          iVar11 = iVar11 + 2;
          lVar9 = lVar9 + 0x200000000;
        } while (lVar10 < param_3[1] * *param_3);
      }
    }
  }
  return;
}


