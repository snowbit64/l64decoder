// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert_element___un_3C_s_5B_vyastc_rank_state_5D__3E_vyfvyuun_3C_vyf_3E_
// Entry Point: 00e55028
// Size: 360 bytes
// Signature: undefined insert_element___un_3C_s_5B_vyastc_rank_state_5D__3E_vyfvyuun_3C_vyf_3E_(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void insert_element___un_3C_s_5B_vyastc_rank_state_5D__3E_vyfvyuun_3C_vyf_3E_
               (undefined param_1 [16],undefined param_2 [16],undefined param_3 [16],long param_4,
               undefined4 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined (*pauVar4) [16];
  int iVar5;
  uint uVar6;
  undefined auVar7 [12];
  undefined auVar9 [16];
  undefined8 uVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  byte bVar13;
  byte bVar23;
  ushort uVar24;
  byte bVar25;
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined uVar30;
  undefined uVar31;
  undefined uVar32;
  undefined uVar33;
  undefined uVar34;
  undefined uVar35;
  undefined uVar36;
  undefined uVar37;
  undefined uVar38;
  undefined uVar39;
  undefined uVar40;
  undefined uVar41;
  short sVar42;
  short sVar43;
  undefined auVar8 [16];
  undefined2 uVar14;
  int iVar15;
  undefined6 uVar16;
  undefined8 uVar17;
  undefined auVar18 [12];
  undefined auVar19 [14];
  undefined auVar22 [16];
  
  iVar5 = *(int *)(param_4 + 0x1cfc);
  if (iVar5 < 1) {
    auVar9 = ZEXT816(0);
  }
  else {
    lVar3 = 0;
    auVar9 = ZEXT816(0);
    pauVar4 = (undefined (*) [16])(param_4 + 0x14f0);
    do {
      uVar10 = *(undefined8 *)*pauVar4;
      auVar12 = *pauVar4;
      auVar21 = NEON_fcmgt(auVar12,param_1,4);
      bVar13 = param_3[0] & auVar21[0];
      uVar14 = CONCAT11(param_3[1] & auVar21[1],bVar13);
      iVar15 = CONCAT13(param_3[3] & auVar21[3],CONCAT12(param_3[2] & auVar21[2],uVar14));
      bVar23 = param_3[4] & auVar21[4];
      uVar16 = CONCAT15(param_3[5] & auVar21[5],CONCAT14(bVar23,iVar15));
      uVar17 = CONCAT17(param_3[7] & auVar21[7],CONCAT16(param_3[6] & auVar21[6],uVar16));
      bVar25 = param_3[8] & auVar21[8];
      auVar18._0_10_ = CONCAT19(param_3[9] & auVar21[9],CONCAT18(bVar25,uVar17));
      auVar18[10] = param_3[10] & auVar21[10];
      auVar18[11] = param_3[11] & auVar21[11];
      auVar19[12] = param_3[12] & auVar21[12];
      auVar19._0_12_ = auVar18;
      auVar19[13] = param_3[13] & auVar21[13];
      auVar22[14] = param_3[14] & auVar21[14];
      auVar22._0_14_ = auVar19;
      auVar22[15] = param_3[15] & auVar21[15];
      iVar1 = NEON_umaxv(auVar22,4);
      if (iVar1 != 0) {
        bVar13 = (bVar13 & 1) + (bVar23 & 2) + (bVar25 & 4) + (auVar19[12] & 8);
        if ((bVar13 & 1) == 0) {
          if ((bVar13 >> 1 & 1) == 0) goto LAB_00e550c0;
LAB_00e550e8:
          *(int *)(*pauVar4 + 4) = param_1._4_4_;
          if ((bVar13 >> 2 & 1) != 0) goto LAB_00e550f4;
LAB_00e550c4:
          if ((bVar13 >> 3 & 1) == 0) goto LAB_00e550c8;
LAB_00e55100:
          *(int *)(*pauVar4 + 0xc) = param_1._12_4_;
          uVar2 = *(undefined8 *)(pauVar4[0x40] + 8);
          uVar34 = (undefined)uVar2;
          uVar35 = (undefined)((ulong)uVar2 >> 8);
          uVar36 = (undefined)((ulong)uVar2 >> 0x10);
          uVar37 = (undefined)((ulong)uVar2 >> 0x18);
          uVar38 = (undefined)((ulong)uVar2 >> 0x20);
          uVar39 = (undefined)((ulong)uVar2 >> 0x28);
          uVar40 = (undefined)((ulong)uVar2 >> 0x30);
          uVar41 = (undefined)((ulong)uVar2 >> 0x38);
          uVar2 = *(undefined8 *)pauVar4[0x40];
          uVar26 = (undefined)uVar2;
          uVar27 = (undefined)((ulong)uVar2 >> 8);
          uVar28 = (undefined)((ulong)uVar2 >> 0x10);
          uVar29 = (undefined)((ulong)uVar2 >> 0x18);
          uVar30 = (undefined)((ulong)uVar2 >> 0x20);
          uVar31 = (undefined)((ulong)uVar2 >> 0x28);
          uVar32 = (undefined)((ulong)uVar2 >> 0x30);
          uVar33 = (undefined)((ulong)uVar2 >> 0x38);
        }
        else {
          *(int *)*pauVar4 = param_1._0_4_;
          if ((bVar13 >> 1 & 1) != 0) goto LAB_00e550e8;
LAB_00e550c0:
          if ((bVar13 >> 2 & 1) == 0) goto LAB_00e550c4;
LAB_00e550f4:
          *(int *)(*pauVar4 + 8) = param_1._8_4_;
          if ((bVar13 >> 3 & 1) != 0) goto LAB_00e55100;
LAB_00e550c8:
          uVar2 = *(undefined8 *)(pauVar4[0x40] + 8);
          uVar34 = (undefined)uVar2;
          uVar35 = (undefined)((ulong)uVar2 >> 8);
          uVar36 = (undefined)((ulong)uVar2 >> 0x10);
          uVar37 = (undefined)((ulong)uVar2 >> 0x18);
          uVar38 = (undefined)((ulong)uVar2 >> 0x20);
          uVar39 = (undefined)((ulong)uVar2 >> 0x28);
          uVar40 = (undefined)((ulong)uVar2 >> 0x30);
          uVar41 = (undefined)((ulong)uVar2 >> 0x38);
          uVar2 = *(undefined8 *)pauVar4[0x40];
          uVar26 = (undefined)uVar2;
          uVar27 = (undefined)((ulong)uVar2 >> 8);
          uVar28 = (undefined)((ulong)uVar2 >> 0x10);
          uVar29 = (undefined)((ulong)uVar2 >> 0x18);
          uVar30 = (undefined)((ulong)uVar2 >> 0x20);
          uVar31 = (undefined)((ulong)uVar2 >> 0x28);
          uVar32 = (undefined)((ulong)uVar2 >> 0x30);
          uVar33 = (undefined)((ulong)uVar2 >> 0x38);
        }
        if ((bVar13 & 1) != 0) {
          *(int *)pauVar4[0x40] = param_2._0_4_;
        }
        if ((bVar13 >> 1 & 1) != 0) {
          *(int *)(pauVar4[0x40] + 4) = param_2._4_4_;
        }
        if ((bVar13 >> 2 & 1) != 0) {
          *(int *)(pauVar4[0x40] + 8) = param_2._8_4_;
        }
        if ((bVar13 >> 3 & 1) != 0) {
          *(int *)(pauVar4[0x40] + 0xc) = param_2._12_4_;
        }
        uVar24 = (ushort)((uint6)uVar16 >> 0x20);
        auVar11._0_4_ = (int)(float)uVar10;
        auVar11._4_4_ = (int)auVar12._4_4_;
        auVar11._8_4_ = (int)auVar12._8_4_;
        auVar11._12_4_ = (int)auVar12._12_4_;
        auVar12 = NEON_scvtf(auVar11,4);
        auVar20._0_4_ = (iVar15 << 0x1f) >> 0x1f;
        auVar20._4_4_ = ((int)((ulong)uVar17 >> 0x20) << 0x1f) >> 0x1f;
        auVar20._8_4_ = (auVar18._8_4_ << 0x1f) >> 0x1f;
        auVar20._12_4_ = (auVar22._12_4_ << 0x1f) >> 0x1f;
        sVar42 = (short)((CONCAT22(uVar24,uVar14) << 0x1f) >> 0x1f);
        sVar43 = (short)((int)((uint)uVar24 << 0x1f) >> 0x1f);
        param_1 = NEON_bit(param_1,auVar12,auVar20,1);
        auVar12[1] = uVar27;
        auVar12[0] = uVar26;
        auVar12[2] = uVar28;
        auVar12[3] = uVar29;
        auVar12[4] = uVar30;
        auVar12[5] = uVar31;
        auVar12[6] = uVar32;
        auVar12[7] = uVar33;
        auVar12[8] = uVar34;
        auVar12[9] = uVar35;
        auVar12[10] = uVar36;
        auVar12[11] = uVar37;
        auVar12[12] = uVar38;
        auVar12[13] = uVar39;
        auVar12[14] = uVar40;
        auVar12[15] = uVar41;
        auVar21._2_2_ = sVar42;
        auVar21._0_2_ = sVar42;
        auVar21._4_2_ = sVar43;
        auVar21._6_2_ = sVar43;
        auVar21._8_4_ = (int)((uint)(ushort)((unkuint10)auVar18._0_10_ >> 0x40) << 0x1f) >> 0x1f;
        auVar21._12_4_ = (int)((uint)auVar19._12_2_ << 0x1f) >> 0x1f;
        param_2 = NEON_bit(param_2,auVar12,auVar21,1);
        auVar12 = *pauVar4;
        iVar5 = *(int *)(param_4 + 0x1cfc);
      }
      auVar9 = NEON_fmax(auVar9,auVar12,4);
      lVar3 = lVar3 + 1;
      pauVar4 = pauVar4 + 1;
    } while (lVar3 < iVar5);
  }
  uVar6 = (uint)(byte)(param_3[0] & SUB161(_DAT_004c4480,0));
  auVar7._0_8_ = CONCAT17(param_3[7] & SUB161(_DAT_004c4480,7),
                          (uint7)CONCAT14(param_3[4] & SUB161(_DAT_004c4480,4),uVar6));
  auVar7[8] = param_3[8] & SUB161(_DAT_004c4480,8);
  auVar7[9] = param_3[9] & SUB161(_DAT_004c4480,9);
  auVar7[10] = param_3[10] & SUB161(_DAT_004c4480,10);
  auVar7[11] = param_3[11] & SUB161(_DAT_004c4480,0xb);
  auVar8[12] = param_3[12] & SUB161(_DAT_004c4480,0xc);
  auVar8._0_12_ = auVar7;
  auVar8[13] = param_3[13] & SUB161(_DAT_004c4480,0xd);
  auVar8[14] = param_3[14] & SUB161(_DAT_004c4480,0xe);
  auVar8[15] = param_3[15] & SUB161(_DAT_004c4480,0xf);
  uVar6 = uVar6 + (int)((ulong)auVar7._0_8_ >> 0x20) + auVar7._8_4_ + auVar8._12_4_;
  if ((uVar6 & 1) != 0) {
    *param_5 = auVar9._0_4_;
  }
  if ((uVar6 >> 1 & 1) != 0) {
    param_5[1] = auVar9._4_4_;
  }
  if ((uVar6 >> 2 & 1) != 0) {
                    /* WARNING: Read-only address (ram,0x004c4480) is written */
    param_5[2] = auVar9._8_4_;
  }
  if ((uVar6 >> 3 & 1) != 0) {
                    /* WARNING: Read-only address (ram,0x004c4480) is written */
    param_5[3] = auVar9._12_4_;
    return;
  }
                    /* WARNING: Read-only address (ram,0x004c4480) is written */
  return;
}


