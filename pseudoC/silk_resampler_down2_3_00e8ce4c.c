// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_resampler_down2_3
// Entry Point: 00e8ce4c
// Size: 1696 bytes
// Signature: undefined silk_resampler_down2_3(void)


void silk_resampler_down2_3(undefined8 *param_1,undefined2 *param_2,long param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined2 *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined8 uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined auVar35 [16];
  ulong uVar36;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  undefined auVar37 [16];
  ushort uVar41;
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined2 uVar44;
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined2 uVar51;
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  ushort uVar64;
  ushort uVar65;
  ushort uVar66;
  undefined auVar63 [16];
  ushort uVar67;
  undefined auVar68 [16];
  undefined auVar69 [16];
  int iVar70;
  int iVar71;
  int iVar72;
  undefined auVar73 [16];
  undefined8 local_800 [2];
  undefined auStack_7f0 [1920];
  long local_70;
  undefined4 uVar45;
  undefined6 uVar46;
  undefined auVar47 [12];
  undefined auVar48 [14];
  undefined4 uVar52;
  undefined6 uVar53;
  undefined8 uVar54;
  undefined auVar55 [12];
  undefined auVar56 [14];
  undefined auVar59 [16];
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_800[1] = param_1[1];
  local_800[0] = *param_1;
  while( true ) {
    uVar9 = param_4;
    if (0x1df < (int)param_4) {
      uVar9 = 0x1e0;
    }
    silk_resampler_private_AR2(param_1 + 2,auStack_7f0,param_3,silk_Resampler_2_3_COEFS_LQ,uVar9);
    if (2 < (int)uVar9) {
      iVar20 = 0;
      if (4 < uVar9) {
        iVar20 = uVar9 - 5;
      }
      if (iVar20 + 2U < 0x18) {
        puVar11 = local_800;
        puVar16 = param_2;
        uVar12 = uVar9;
        iVar34 = (int)local_800[0];
      }
      else {
        auVar8._8_8_ = 0x1fffdf001fffdf;
        auVar8._0_8_ = 0x1fffdf001fffdf;
        auVar7._8_8_ = 0x1fffdf001fffdf;
        auVar7._0_8_ = 0x1fffdf001fffdf;
        auVar6._8_8_ = 0x1fffdf001fffdf;
        auVar6._0_8_ = 0x1fffdf001fffdf;
        auVar5._8_8_ = 0x1fffdf001fffdf;
        auVar5._0_8_ = 0x1fffdf001fffdf;
        uVar12 = (iVar20 + 2U) / 3 + 1;
        uVar10 = (ulong)uVar12;
        uVar36 = 8;
        if ((uVar12 & 7) != 0) {
          uVar36 = uVar10 & 7;
        }
        lVar13 = uVar10 - uVar36;
        lVar14 = uVar36 - uVar10;
        puVar11 = (undefined8 *)((long)local_800 + lVar13 * 0xc);
        puVar16 = param_2 + lVar13 * 2;
        uVar12 = uVar9 + (int)lVar13 * -3;
        piVar15 = (int *)((ulong)local_800 | 8);
        iVar20 = (int)local_800[0];
        iVar19 = (int)local_800[0];
        iVar21 = (int)local_800[0];
        iVar22 = (int)local_800[0];
        do {
          lVar14 = lVar14 + 8;
          auVar63._0_4_ = piVar15[1];
          auVar63._4_4_ = piVar15[4];
          auVar63._8_4_ = piVar15[7];
          auVar63._12_4_ = piVar15[10];
          iVar31 = piVar15[0xd];
          iVar32 = piVar15[0x10];
          iVar33 = piVar15[0x13];
          iVar34 = piVar15[0x16];
          auVar43._4_4_ = iVar19;
          auVar43._0_4_ = iVar20;
          auVar43._8_4_ = iVar21;
          auVar43._12_4_ = iVar22;
          auVar60 = NEON_ext(auVar43,auVar63,0xc,1);
          auVar73._4_4_ = iVar32;
          auVar73._0_4_ = iVar31;
          auVar73._8_4_ = iVar33;
          auVar73._12_4_ = iVar34;
          auVar73 = NEON_ext(auVar63,auVar73,0xc,1);
          iVar22 = (int)((ulong)((long)piVar15[0x12] * 0x2054) >> 0x10);
          iVar21 = (int)((ulong)((long)piVar15[0xc] * 0x2054) >> 0x10);
          iVar19 = (int)((ulong)((long)piVar15[6] * 0x2054) >> 0x10);
          iVar20 = (int)((ulong)((long)*piVar15 * 0x2054) >> 0x10);
          iVar24 = (int)((ulong)((long)piVar15[0x11] * 0x29f3) >> 0x10) +
                   (int)((ulong)((long)auVar73._8_4_ * 0x1259) >> 0x10) + iVar22 +
                   (int)((ulong)((long)iVar33 * 0x61f) >> 0x10);
          iVar72 = (int)(((ulong)((long)piVar15[0x14] * 0x29f3) >> 0x10) +
                         ((ulong)((long)auVar73._12_4_ * 0x1259) >> 0x10) +
                         ((ulong)((long)piVar15[0x15] * 0x2054) >> 0x10) +
                        ((ulong)((long)iVar34 * 0x61f) >> 0x10));
          iVar25 = (int)((ulong)((long)piVar15[5] * 0x29f3) >> 0x10) +
                   (int)((ulong)((long)auVar60._8_4_ * 0x1259) >> 0x10) + iVar19 +
                   (int)((ulong)((long)auVar63._8_4_ * 0x61f) >> 0x10);
          iVar70 = (int)(((ulong)((long)piVar15[8] * 0x29f3) >> 0x10) +
                         ((ulong)((long)auVar60._12_4_ * 0x1259) >> 0x10) +
                         ((ulong)((long)piVar15[9] * 0x2054) >> 0x10) +
                        ((ulong)((long)auVar63._12_4_ * 0x61f) >> 0x10));
          iVar17 = (int)((ulong)((long)piVar15[0xb] * 0x29f3) >> 0x10) +
                   (int)((ulong)((long)auVar73._0_4_ * 0x1259) >> 0x10) + iVar21 +
                   (int)((ulong)((long)iVar31 * 0x61f) >> 0x10);
          iVar71 = (int)(((ulong)((long)piVar15[0xe] * 0x29f3) >> 0x10) +
                         ((ulong)((long)auVar73._4_4_ * 0x1259) >> 0x10) +
                         ((ulong)((long)piVar15[0xf] * 0x2054) >> 0x10) +
                        ((ulong)((long)iVar32 * 0x61f) >> 0x10));
          iVar18 = (int)((ulong)((long)piVar15[-1] * 0x29f3) >> 0x10) +
                   (int)((ulong)((long)auVar60._0_4_ * 0x1259) >> 0x10) + iVar20 +
                   (int)((ulong)((long)auVar63._0_4_ * 0x61f) >> 0x10);
          iVar26 = (int)((ulong)((long)auVar63._8_4_ * 0x29f3) >> 0x10) + iVar19 +
                   (int)((ulong)((long)piVar15[5] * 0x61f) >> 0x10) +
                   (int)((ulong)((long)piVar15[8] * 0x1259) >> 0x10);
          iVar28 = (int)((ulong)((long)auVar63._12_4_ * 0x29f3) >> 0x10) +
                   (int)((ulong)((long)piVar15[9] * 0x2054) >> 0x10) +
                   (int)((ulong)((long)piVar15[8] * 0x61f) >> 0x10) +
                   (int)((ulong)((long)piVar15[0xb] * 0x1259) >> 0x10);
          iVar27 = (int)((ulong)((long)iVar33 * 0x29f3) >> 0x10) + iVar22 +
                   (int)((ulong)((long)piVar15[0x11] * 0x61f) >> 0x10) +
                   (int)((ulong)((long)piVar15[0x14] * 0x1259) >> 0x10);
          iVar19 = (int)((ulong)((long)iVar31 * 0x29f3) >> 0x10) + iVar21 +
                   (int)((ulong)((long)piVar15[0xb] * 0x61f) >> 0x10) +
                   (int)((ulong)((long)piVar15[0xe] * 0x1259) >> 0x10);
          iVar21 = (int)((ulong)((long)iVar32 * 0x29f3) >> 0x10) +
                   (int)((ulong)((long)piVar15[0xf] * 0x2054) >> 0x10) +
                   (int)((ulong)((long)piVar15[0xe] * 0x61f) >> 0x10) +
                   (int)((ulong)((long)piVar15[0x11] * 0x1259) >> 0x10);
          iVar20 = (int)((ulong)((long)auVar63._0_4_ * 0x29f3) >> 0x10) + iVar20 +
                   (int)((ulong)((long)piVar15[-1] * 0x61f) >> 0x10) +
                   (int)((ulong)((long)piVar15[2] * 0x1259) >> 0x10);
          iVar22 = (int)(((ulong)((long)piVar15[2] * 0x29f3) >> 0x10) +
                         ((ulong)((long)auVar60._4_4_ * 0x1259) >> 0x10) +
                         ((ulong)((long)piVar15[3] * 0x2054) >> 0x10) +
                        ((ulong)((long)auVar63._4_4_ * 0x61f) >> 0x10));
          auVar68._4_4_ = iVar22;
          auVar68._0_4_ = iVar18;
          auVar68._8_4_ = iVar25;
          auVar68._12_4_ = iVar70;
          auVar42._4_4_ = iVar21;
          auVar42._0_4_ = iVar19;
          auVar42._8_4_ = iVar27;
          iVar29 = (int)(((ulong)((long)iVar34 * 0x29f3) >> 0x10) +
                         ((ulong)((long)piVar15[0x15] * 0x2054) >> 0x10) +
                         ((ulong)((long)piVar15[0x14] * 0x61f) >> 0x10) +
                        ((ulong)((long)piVar15[0x17] * 0x1259) >> 0x10));
          auVar42._12_4_ = iVar29;
          iVar23 = (int)(((ulong)((long)auVar63._4_4_ * 0x29f3) >> 0x10) +
                         ((ulong)((long)piVar15[3] * 0x2054) >> 0x10) +
                         ((ulong)((long)piVar15[2] * 0x61f) >> 0x10) +
                        ((ulong)((long)piVar15[5] * 0x1259) >> 0x10));
          auVar37._4_4_ = iVar23;
          auVar37._0_4_ = iVar20;
          auVar37._8_4_ = iVar26;
          auVar37._12_4_ = iVar28;
          auVar49._0_4_ = (iVar17 >> 5) + 1 >> 1;
          auVar49._4_4_ = (iVar71 >> 5) + 1 >> 1;
          auVar49._8_4_ = (iVar24 >> 5) + 1 >> 1;
          auVar49._12_4_ = (iVar72 >> 5) + 1 >> 1;
          auVar35._0_4_ = (iVar18 >> 5) + 1 >> 1;
          auVar35._4_4_ = (iVar22 >> 5) + 1 >> 1;
          auVar35._8_4_ = (iVar25 >> 5) + 1 >> 1;
          auVar35._12_4_ = (iVar70 >> 5) + 1 >> 1;
          auVar57._0_4_ = (iVar20 >> 5) + 1 >> 1;
          auVar57._4_4_ = (iVar23 >> 5) + 1 >> 1;
          auVar57._8_4_ = (iVar26 >> 5) + 1 >> 1;
          auVar57._12_4_ = (iVar28 >> 5) + 1 >> 1;
          auVar61._0_4_ = (iVar19 >> 5) + 1 >> 1;
          auVar61._4_4_ = (iVar21 >> 5) + 1 >> 1;
          auVar61._8_4_ = (iVar27 >> 5) + 1 >> 1;
          auVar61._12_4_ = (iVar29 >> 5) + 1 >> 1;
          auVar60._4_4_ = iVar71;
          auVar60._0_4_ = iVar17;
          auVar60._8_4_ = iVar24;
          auVar60._12_4_ = iVar72;
          auVar63 = NEON_cmgt(auVar60,auVar5,4);
          auVar69 = NEON_cmgt(auVar68,auVar6,4);
          auVar50._8_4_ = 0xffff8000;
          auVar50._0_8_ = 0xffff8000ffff8000;
          auVar50._12_4_ = 0xffff8000;
          auVar50 = NEON_smax(auVar49,auVar50,4);
          auVar58._8_4_ = 0xffff8000;
          auVar58._0_8_ = 0xffff8000ffff8000;
          auVar58._12_4_ = 0xffff8000;
          auVar73 = NEON_smax(auVar35,auVar58,4);
          auVar60 = NEON_cmgt(auVar37,auVar7,4);
          auVar43 = NEON_cmgt(auVar42,auVar8,4);
          auVar62._8_4_ = 0xffff8000;
          auVar62._0_8_ = 0xffff8000ffff8000;
          auVar62._12_4_ = 0xffff8000;
          auVar58 = NEON_smax(auVar57,auVar62,4);
          auVar4._8_4_ = 0xffff8000;
          auVar4._0_8_ = 0xffff8000ffff8000;
          auVar4._12_4_ = 0xffff8000;
          auVar62 = NEON_smax(auVar61,auVar4,4);
          uVar10 = CONCAT26(auVar69._12_2_,
                            CONCAT24(auVar69._8_2_,CONCAT22(auVar69._4_2_,auVar69._0_2_))) &
                   0x7fff7fff7fff7fff;
          uVar64 = auVar63._0_2_ & 0x7fff;
          uVar65 = auVar63._4_2_ & 0x7fff;
          uVar66 = auVar63._8_2_ & 0x7fff;
          uVar67 = auVar63._12_2_ & 0x7fff;
          uVar36 = CONCAT26(auVar60._12_2_,
                            CONCAT24(auVar60._8_2_,CONCAT22(auVar60._4_2_,auVar60._0_2_))) &
                   0x7fff7fff7fff7fff;
          uVar38 = auVar43._0_2_ & 0x7fff;
          uVar39 = auVar43._4_2_ & 0x7fff;
          uVar40 = auVar43._8_2_ & 0x7fff;
          uVar41 = auVar43._12_2_ & 0x7fff;
          uVar44 = CONCAT11((byte)(uVar10 >> 8) | auVar73[1] & ~auVar69[1],
                            (byte)uVar10 | auVar73[0] & ~auVar69[0]);
          uVar45 = CONCAT13((byte)(uVar10 >> 0x18) | auVar73[5] & ~auVar69[5],
                            CONCAT12((byte)(uVar10 >> 0x10) | auVar73[4] & ~auVar69[4],uVar44));
          uVar46 = CONCAT15((byte)(uVar10 >> 0x28) | auVar73[9] & ~auVar69[9],
                            CONCAT14((byte)(uVar10 >> 0x20) | auVar73[8] & ~auVar69[8],uVar45));
          uVar30 = CONCAT17((byte)(uVar10 >> 0x38) | auVar73[13] & ~auVar69[13],
                            CONCAT16((byte)(uVar10 >> 0x30) | auVar73[12] & ~auVar69[12],uVar46));
          auVar47._0_10_ =
               CONCAT19((byte)(uVar64 >> 8) | auVar50[1] & ~auVar63[1],
                        CONCAT18((byte)uVar64 | auVar50[0] & ~auVar63[0],uVar30));
          auVar47[10] = (byte)uVar65 | auVar50[4] & ~auVar63[4];
          auVar47[11] = (byte)(uVar65 >> 8) | auVar50[5] & ~auVar63[5];
          auVar48[12] = (byte)uVar66 | auVar50[8] & ~auVar63[8];
          auVar48._0_12_ = auVar47;
          auVar48[13] = (byte)(uVar66 >> 8) | auVar50[9] & ~auVar63[9];
          auVar69[14] = (byte)uVar67 | auVar50[12] & ~auVar63[12];
          auVar69._0_14_ = auVar48;
          auVar69[15] = (byte)(uVar67 >> 8) | auVar50[13] & ~auVar63[13];
          uVar51 = CONCAT11((byte)(uVar36 >> 8) | auVar58[1] & ~auVar60[1],
                            (byte)uVar36 | auVar58[0] & ~auVar60[0]);
          uVar52 = CONCAT13((byte)(uVar36 >> 0x18) | auVar58[5] & ~auVar60[5],
                            CONCAT12((byte)(uVar36 >> 0x10) | auVar58[4] & ~auVar60[4],uVar51));
          uVar53 = CONCAT15((byte)(uVar36 >> 0x28) | auVar58[9] & ~auVar60[9],
                            CONCAT14((byte)(uVar36 >> 0x20) | auVar58[8] & ~auVar60[8],uVar52));
          uVar54 = CONCAT17((byte)(uVar36 >> 0x38) | auVar58[13] & ~auVar60[13],
                            CONCAT16((byte)(uVar36 >> 0x30) | auVar58[12] & ~auVar60[12],uVar53));
          auVar55._0_10_ =
               CONCAT19((byte)(uVar38 >> 8) | auVar62[1] & ~auVar43[1],
                        CONCAT18((byte)uVar38 | auVar62[0] & ~auVar43[0],uVar54));
          auVar55[10] = (byte)uVar39 | auVar62[4] & ~auVar43[4];
          auVar55[11] = (byte)(uVar39 >> 8) | auVar62[5] & ~auVar43[5];
          auVar56[12] = (byte)uVar40 | auVar62[8] & ~auVar43[8];
          auVar56._0_12_ = auVar55;
          auVar56[13] = (byte)(uVar40 >> 8) | auVar62[9] & ~auVar43[9];
          auVar59[14] = (byte)uVar41 | auVar62[12] & ~auVar43[12];
          auVar59._0_14_ = auVar56;
          auVar59[15] = (byte)(uVar41 >> 8) | auVar62[13] & ~auVar43[13];
          *param_2 = uVar44;
          param_2[1] = uVar51;
          param_2[2] = (short)((uint)uVar45 >> 0x10);
          param_2[3] = (short)((uint)uVar52 >> 0x10);
          param_2[4] = (short)((uint6)uVar46 >> 0x20);
          param_2[5] = (short)((uint6)uVar53 >> 0x20);
          param_2[6] = (short)((ulong)uVar30 >> 0x30);
          param_2[7] = (short)((ulong)uVar54 >> 0x30);
          param_2[8] = (short)((unkuint10)auVar47._0_10_ >> 0x40);
          param_2[9] = (short)((unkuint10)auVar55._0_10_ >> 0x40);
          param_2[10] = auVar47._10_2_;
          param_2[0xb] = auVar55._10_2_;
          param_2[0xc] = auVar48._12_2_;
          param_2[0xd] = auVar56._12_2_;
          param_2[0xe] = auVar69._14_2_;
          param_2[0xf] = auVar59._14_2_;
          param_2 = param_2 + 0x10;
          piVar15 = piVar15 + 0x18;
          iVar20 = iVar31;
          iVar19 = iVar32;
          iVar21 = iVar33;
          iVar22 = iVar34;
        } while (lVar14 != 0);
      }
      puVar11 = puVar11 + 2;
      uVar12 = uVar12 + 3;
      do {
        piVar15 = (int *)((long)puVar11 + -0xc);
        piVar1 = (int *)((long)puVar11 + -4);
        lVar14 = (long)iVar34;
        uVar12 = uVar12 - 3;
        iVar34 = *(int *)((long)puVar11 + -4);
        piVar2 = (int *)((long)puVar11 + 4);
        puVar11 = (undefined8 *)((long)puVar11 + 0xc);
        iVar19 = (int)((ulong)((long)*piVar1 * 0x2054) >> 0x10);
        iVar20 = (int)((ulong)((long)*piVar15 * 0x29f3) >> 0x10) +
                 (int)((ulong)(lVar14 * 0x1259) >> 0x10) + iVar19 +
                 (int)((ulong)((long)iVar34 * 0x61f) >> 0x10);
        iVar19 = (int)((ulong)((long)iVar34 * 0x29f3) >> 0x10) + iVar19 +
                 (int)((ulong)((long)*piVar15 * 0x61f) >> 0x10) +
                 (int)((ulong)((long)*piVar2 * 0x1259) >> 0x10);
        iVar21 = (iVar20 >> 5) + 1 >> 1;
        if (iVar21 == -0x8000 || iVar21 + 0x8000 < 0 != SCARRY4(iVar21,0x8000)) {
          iVar21 = -0x8000;
        }
        iVar22 = (iVar19 >> 5) + 1 >> 1;
        uVar44 = 0x7fff;
        if (iVar20 < 0x1fffe0) {
          uVar44 = (short)iVar21;
        }
        if (iVar22 == -0x8000 || iVar22 + 0x8000 < 0 != SCARRY4(iVar22,0x8000)) {
          iVar22 = -0x8000;
        }
        uVar51 = 0x7fff;
        if (iVar19 < 0x1fffe0) {
          uVar51 = (short)iVar22;
        }
        param_2 = puVar16 + 2;
        *puVar16 = uVar44;
        puVar16[1] = uVar51;
        puVar16 = param_2;
      } while (5 < uVar12);
    }
    param_4 = param_4 - uVar9;
    lVar14 = (long)(int)uVar9 * 4;
    if ((int)param_4 < 1) break;
    param_3 = param_3 + (long)(int)uVar9 * 2;
    local_800[1] = *(undefined8 *)(auStack_7f0 + lVar14 + -8);
    local_800[0] = *(undefined8 *)((long)local_800 + lVar14);
  }
  uVar30 = *(undefined8 *)((long)local_800 + lVar14);
  param_1[1] = *(undefined8 *)(auStack_7f0 + lVar14 + -8);
  *param_1 = uVar30;
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


