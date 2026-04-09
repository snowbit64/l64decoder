// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: celt_iir
// Entry Point: 00e7a8f8
// Size: 1700 bytes
// Signature: undefined celt_iir(void)


void celt_iir(undefined (*param_1) [16],short *param_2,long param_3,uint param_4,uint param_5,
             long param_6)

{
  undefined (*pauVar1) [16];
  undefined (*pauVar2) [12];
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined (*pauVar13) [16];
  short *psVar14;
  undefined (*pauVar15) [16];
  short *psVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined2 *puVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  byte *pbVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  int *piVar33;
  undefined8 *puVar34;
  uint uVar35;
  undefined8 uVar36;
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined4 uVar44;
  int iVar45;
  undefined auVar46 [16];
  undefined auVar47 [16];
  ulong uVar48;
  ushort uVar50;
  ushort uVar51;
  ushort uVar52;
  undefined auVar49 [16];
  ushort uVar53;
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  long local_d0;
  undefined8 *puStack_c8;
  undefined (*local_c0) [16];
  ulong local_b8;
  ulong local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar31 = tpidr_el0;
  local_68 = *(long *)(lVar31 + 0x28);
  lVar19 = -((-(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_5 << 1) + 0xf &
            0xfffffffffffffff0);
  puVar34 = (undefined8 *)((long)&local_d0 + lVar19);
  uVar35 = param_5 + param_4;
  puVar18 = (undefined8 *)
            ((long)puVar34 -
            ((-(ulong)(uVar35 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar35 << 1) + 0xf &
            0xfffffffffffffff0));
  uVar32 = (ulong)param_5;
  uVar20 = param_5 - 1;
  if ((int)param_5 < 1) {
LAB_00e7a9f4:
    uVar20 = 0;
    if (0 < (int)uVar35) {
LAB_00e7aa00:
      memset((void *)((long)puVar18 + (ulong)uVar20 * 2),0,(ulong)(uVar35 + ~uVar20) * 2 + 2);
    }
  }
  else {
    if (param_5 < 4) {
      uVar21 = 0;
LAB_00e7a988:
      iVar45 = ~(uint)uVar21 + param_5;
      lVar22 = uVar32 - uVar21;
      psVar14 = (short *)((long)puVar34 + uVar21 * 2);
      do {
        lVar17 = (long)iVar45;
        iVar45 = iVar45 + -1;
        lVar22 = lVar22 + -1;
        *psVar14 = param_2[lVar17];
        psVar14 = psVar14 + 1;
      } while (lVar22 != 0);
    }
    else {
      uVar21 = 0;
      if (((int)uVar20 < (int)(uVar20 - (int)(uVar32 - 1))) || (uVar32 - 1 >> 0x20 != 0))
      goto LAB_00e7a988;
      uVar21 = uVar32 & 0xfffffffc;
      uVar26 = uVar21;
      puVar28 = puVar34;
      do {
        uVar23 = (ulong)uVar20;
        uVar12 = uVar20 >> 0x1f;
        uVar26 = uVar26 - 4;
        uVar20 = uVar20 - 4;
        uVar36 = NEON_rev64(*(undefined8 *)
                             ((long)param_2 +
                             ((-(ulong)uVar12 & 0xfffffffe00000000 | uVar23 << 1) - 6)),2);
        *puVar28 = uVar36;
        puVar28 = puVar28 + 1;
      } while (uVar26 != 0);
      if (uVar21 != uVar32) goto LAB_00e7a988;
    }
    uVar20 = param_5 - 1;
    if ((int)param_5 < 1) goto LAB_00e7a9f4;
    if (param_5 < 8) {
      uVar21 = 0;
LAB_00e7a9c0:
      iVar45 = ~(uint)uVar21 + param_5;
      do {
        lVar22 = (long)iVar45;
        iVar45 = iVar45 + -1;
        *(short *)((long)puVar18 + uVar21 * 2) = -*(short *)(param_6 + lVar22 * 2);
        uVar21 = uVar21 + 1;
      } while (uVar32 != uVar21);
    }
    else {
      uVar21 = 0;
      if (((int)uVar20 < (int)(uVar20 - (int)(uVar32 - 1))) || (uVar32 - 1 >> 0x20 != 0))
      goto LAB_00e7a9c0;
      uVar21 = uVar32 & 0xfffffff8;
      uVar26 = uVar21;
      puVar28 = puVar18;
      do {
        uVar23 = (ulong)uVar20;
        uVar12 = uVar20 >> 0x1f;
        uVar26 = uVar26 - 8;
        uVar20 = uVar20 - 8;
        auVar38 = NEON_neg(*(undefined (*) [16])
                            (param_6 + -0xe + (-(ulong)uVar12 & 0xfffffffe00000000 | uVar23 << 1)),2
                          );
        auVar38 = NEON_rev64(auVar38,2);
        auVar38 = NEON_ext(auVar38,auVar38,8,1);
        puVar28[1] = auVar38._8_8_;
        *puVar28 = auVar38._0_8_;
        puVar28 = puVar28 + 2;
      } while (uVar26 != 0);
      if (uVar21 != uVar32) goto LAB_00e7a9c0;
    }
    uVar20 = param_5;
    if ((int)param_5 < (int)uVar35) goto LAB_00e7aa00;
  }
  lVar22 = (long)(int)param_5;
  if ((int)param_4 < 4) {
    uVar21 = 0;
    if (0 < (int)param_4) goto LAB_00e7abac;
  }
  else {
    uVar21 = 0;
    local_88 = (ulong)(param_4 - 3);
    local_90 = lVar22 << 1;
    piVar33 = (int *)(param_3 + 8);
    local_d0 = lVar22;
    puStack_c8 = puVar18;
    local_c0 = param_1;
    local_b8 = uVar32;
    local_b0 = (ulong)param_4;
    local_a8 = param_6;
    local_a0 = lVar31;
    local_98 = param_3;
    do {
      uStack_78 = SUB168(*param_1,8);
      local_80 = SUB168(*param_1,0);
      FUN_00e7a768(puVar34,puVar18,&local_80,(ulong)param_5);
      uVar21 = uVar21 + 4;
      piVar33[-2] = (int)local_80;
      iVar45 = (int)local_80 + 0x800 >> 0xc;
      if (iVar45 < -0x7ffe) {
        iVar45 = -0x7fff;
      }
      sVar3 = 0x7fff;
      if ((int)local_80 < 0x7fff800) {
        sVar3 = (short)iVar45;
      }
      sVar6 = *param_2;
      iVar10 = (int)-sVar3;
      iVar8 = local_80._4_4_ + iVar10 * sVar6;
      iVar45 = iVar8 + 0x800 >> 0xc;
      piVar33[-1] = iVar8;
      if (iVar45 < -0x7ffe) {
        iVar45 = -0x7fff;
      }
      sVar9 = 0x7fff;
      if (iVar8 < 0x7fff800) {
        sVar9 = (short)iVar45;
      }
      sVar7 = param_2[1];
      sVar9 = -sVar9;
      iVar8 = (int)uStack_78 + (int)sVar9 * (int)sVar6 + sVar7 * iVar10;
      iVar45 = iVar8 + 0x800 >> 0xc;
      *piVar33 = iVar8;
      if (iVar45 < -0x7ffe) {
        iVar45 = -0x7fff;
      }
      sVar4 = 0x7fff;
      if (iVar8 < 0x7fff800) {
        sVar4 = (short)iVar45;
      }
      iVar8 = uStack_78._4_4_ + (int)sVar9 * (int)sVar7 + (int)-sVar4 * (int)sVar6 +
              param_2[2] * iVar10;
      psVar14 = (short *)((long)puVar18 + local_90);
      iVar45 = iVar8 + 0x800 >> 0xc;
      piVar33[1] = iVar8;
      if (iVar45 < -0x7ffe) {
        iVar45 = -0x7fff;
      }
      *psVar14 = -sVar3;
      uVar32 = local_88;
      sVar3 = 0x7fff;
      if (iVar8 < 0x7fff800) {
        sVar3 = (short)iVar45;
      }
      puVar18 = puVar18 + 1;
      piVar33 = piVar33 + 4;
      psVar14[1] = sVar9;
      psVar14[2] = -sVar4;
      psVar14[3] = -sVar3;
      param_1 = param_1 + 1;
    } while ((long)uVar21 < (long)uVar32);
    param_4 = (uint)local_b0;
    puVar18 = puStack_c8;
    param_3 = local_98;
    lVar31 = local_a0;
    param_6 = local_a8;
    uVar32 = local_b8;
    param_1 = local_c0;
    lVar22 = local_d0;
    if ((int)uVar21 < (int)param_4) {
LAB_00e7abac:
      uVar26 = (ulong)(int)(uint)uVar21;
      uVar23 = (ulong)(int)param_4;
      if ((int)param_5 < 1) {
        uVar25 = uVar23 - uVar26;
        uVar30 = uVar26;
        if (((7 < uVar25) && (!CARRY4((uint)uVar21,(uint)(~uVar26 + uVar23)))) &&
           (~uVar26 + uVar23 >> 0x20 == 0)) {
          lVar19 = (uVar21 & 0xffffffff) * 4;
          lVar17 = ((uVar23 + (uVar21 & 0xffffffff)) - uVar26) * 4;
          if (((ulong)((long)param_1 + lVar17) <= (ulong)(param_3 + lVar19)) ||
             ((undefined *)(param_3 + lVar17) <= *param_1 + lVar19)) {
            uVar27 = uVar25 & 0xfffffffffffffff8;
            uVar30 = uVar27 + uVar26;
            auVar38._8_4_ = 0x7fff7ff;
            auVar38._0_8_ = 0x7fff7ff07fff7ff;
            auVar38._12_4_ = 0x7fff7ff;
            auVar40._8_4_ = 0xffff8001;
            auVar40._0_8_ = 0xffff8001ffff8001;
            auVar40._12_4_ = 0xffff8001;
            pbVar29 = (byte *)((long)puVar18 + (uVar26 + lVar22) * 2);
            uVar21 = uVar27;
            do {
              lVar19 = (uVar26 & 0xffffffff) * 4;
              uVar21 = uVar21 - 8;
              pauVar2 = (undefined (*) [12])(*param_1 + lVar19);
              puVar34 = (undefined8 *)(param_3 + lVar19);
              uVar26 = uVar26 + 8;
              uVar11 = *(undefined8 *)(*pauVar2 + 8);
              iVar45 = (int)((ulong)uVar11 >> 0x20);
              uVar36 = *(undefined8 *)*pauVar2;
              auVar43 = *(undefined (*) [16])(pauVar2[1] + 4);
              auVar42._12_4_ = iVar45;
              auVar42._0_12_ = *pauVar2;
              auVar54 = NEON_cmgt(auVar42,auVar38,4);
              puVar34[1] = uVar11;
              *puVar34 = uVar36;
              puVar34[3] = auVar43._8_8_;
              puVar34[2] = auVar43._0_8_;
              auVar49 = NEON_cmgt(auVar43,auVar38,4);
              auVar47._0_4_ = (int)uVar36 + 0x800 >> 0xc;
              auVar47._4_4_ = (int)((ulong)uVar36 >> 0x20) + 0x800 >> 0xc;
              auVar47._8_4_ = (int)uVar11 + 0x800 >> 0xc;
              auVar47._12_4_ = iVar45 + 0x800 >> 0xc;
              auVar46._0_4_ = auVar43._0_4_ + 0x800 >> 0xc;
              auVar46._4_4_ = auVar43._4_4_ + 0x800 >> 0xc;
              auVar46._8_4_ = auVar43._8_4_ + 0x800 >> 0xc;
              auVar46._12_4_ = auVar43._12_4_ + 0x800 >> 0xc;
              auVar43 = NEON_smax(auVar47,auVar40,4);
              auVar42 = NEON_smax(auVar46,auVar40,4);
              uVar48 = CONCAT26(auVar54._12_2_,
                                CONCAT24(auVar54._8_2_,CONCAT22(auVar54._4_2_,auVar54._0_2_))) &
                       0x7fff7fff7fff7fff;
              uVar50 = auVar49._0_2_ & 0x7fff;
              uVar51 = auVar49._4_2_ & 0x7fff;
              uVar52 = auVar49._8_2_ & 0x7fff;
              uVar53 = auVar49._12_2_ & 0x7fff;
              pbVar29[0x10] = (byte)uVar50 | auVar42[0] & ~auVar49[0];
              pbVar29[0x11] = (byte)(uVar50 >> 8) | auVar42[1] & ~auVar49[1];
              pbVar29[0x12] = (byte)uVar51 | auVar42[4] & ~auVar49[4];
              pbVar29[0x13] = (byte)(uVar51 >> 8) | auVar42[5] & ~auVar49[5];
              pbVar29[0x14] = (byte)uVar52 | auVar42[8] & ~auVar49[8];
              pbVar29[0x15] = (byte)(uVar52 >> 8) | auVar42[9] & ~auVar49[9];
              pbVar29[0x16] = (byte)uVar53 | auVar42[12] & ~auVar49[12];
              pbVar29[0x17] = (byte)(uVar53 >> 8) | auVar42[13] & ~auVar49[13];
              *pbVar29 = (byte)uVar48 | auVar43[0] & ~auVar54[0];
              pbVar29[1] = (byte)(uVar48 >> 8) | auVar43[1] & ~auVar54[1];
              pbVar29[2] = (byte)(uVar48 >> 0x10) | auVar43[4] & ~auVar54[4];
              pbVar29[3] = (byte)(uVar48 >> 0x18) | auVar43[5] & ~auVar54[5];
              pbVar29[4] = (byte)(uVar48 >> 0x20) | auVar43[8] & ~auVar54[8];
              pbVar29[5] = (byte)(uVar48 >> 0x28) | auVar43[9] & ~auVar54[9];
              pbVar29[6] = (byte)(uVar48 >> 0x30) | auVar43[12] & ~auVar54[12];
              pbVar29[7] = (byte)(uVar48 >> 0x38) | auVar43[13] & ~auVar54[13];
              pbVar29 = pbVar29 + 0x10;
            } while (uVar21 != 0);
            if (uVar25 == uVar27) goto LAB_00e7ae18;
          }
        }
        do {
          lVar19 = (uVar30 & 0xffffffff) * 4;
          iVar8 = *(int *)(*param_1 + lVar19);
          *(int *)(param_3 + lVar19) = iVar8;
          iVar45 = iVar8 + 0x800 >> 0xc;
          if (iVar45 < -0x7ffe) {
            iVar45 = -0x7fff;
          }
          uVar5 = 0x7fff;
          if (iVar8 < 0x7fff800) {
            uVar5 = (short)iVar45;
          }
          *(undefined2 *)((long)puVar18 + uVar30 * 2 + lVar22 * 2) = uVar5;
          uVar30 = uVar30 + 1;
        } while (uVar23 != uVar30);
      }
      else {
        uVar21 = uVar32 & 0xfffffff0;
        do {
          uVar35 = *(uint *)(*param_1 + (uVar26 & 0xffffffff) * 4);
          uVar30 = uVar26 & 0xffffffff;
          if (param_5 < 0x10) {
            uVar25 = 0;
LAB_00e7ac9c:
            lVar17 = uVar32 - uVar25;
            psVar14 = (short *)((long)puVar18 + (uVar25 + uVar30) * 2);
            psVar16 = (short *)((long)puVar34 + uVar25 * 2);
            do {
              lVar17 = lVar17 + -1;
              uVar35 = uVar35 - (int)*psVar14 * (int)*psVar16;
              psVar14 = psVar14 + 1;
              psVar16 = psVar16 + 1;
            } while (lVar17 != 0);
          }
          else {
            pauVar13 = (undefined (*) [16])((long)puVar18 + (uVar26 & 0xffffffff) * 2 + 0x10);
            pauVar15 = (undefined (*) [16])((long)&local_c0 + lVar19);
            uVar25 = uVar21;
            auVar38 = ZEXT416(uVar35);
            auVar40 = ZEXT816(0);
            auVar42 = ZEXT816(0);
            auVar43 = ZEXT816(0);
            do {
              pauVar1 = pauVar15 + -1;
              uVar44 = (undefined4)((ulong)*(undefined8 *)(pauVar15[-1] + 8) >> 0x20);
              uVar36 = *(undefined8 *)*pauVar1;
              auVar46 = *pauVar15;
              pauVar15 = pauVar15 + 2;
              uVar25 = uVar25 - 0x10;
              auVar49._12_4_ = uVar44;
              auVar49._0_12_ = *(undefined (*) [12])*pauVar1;
              auVar54._12_4_ = uVar44;
              auVar54._0_12_ = *(undefined (*) [12])*pauVar1;
              auVar54 = NEON_ext(auVar49,auVar54,8,1);
              auVar47 = pauVar13[-1];
              auVar49 = *pauVar13;
              auVar55 = NEON_ext(auVar46,auVar46,8,1);
              pauVar13 = pauVar13 + 2;
              auVar56 = NEON_ext(auVar47,auVar47,8,1);
              auVar37._0_4_ = auVar38._0_4_ - (int)auVar47._0_2_ * (int)(short)uVar36;
              auVar37._4_4_ =
                   auVar38._4_4_ - (int)auVar47._2_2_ * (int)(short)((ulong)uVar36 >> 0x10);
              auVar37._8_4_ =
                   auVar38._8_4_ - (int)auVar47._4_2_ * (int)(short)((ulong)uVar36 >> 0x20);
              auVar37._12_4_ =
                   auVar38._12_4_ - (int)auVar47._6_2_ * (int)(short)((ulong)uVar36 >> 0x30);
              auVar38 = NEON_ext(auVar49,auVar49,8,1);
              auVar41._0_4_ = auVar42._0_4_ - (int)auVar49._0_2_ * (int)auVar46._0_2_;
              auVar41._4_4_ = auVar42._4_4_ - (int)auVar49._2_2_ * (int)auVar46._2_2_;
              auVar41._8_4_ = auVar42._8_4_ - (int)auVar49._4_2_ * (int)auVar46._4_2_;
              auVar41._12_4_ = auVar42._12_4_ - (int)auVar49._6_2_ * (int)auVar46._6_2_;
              auVar39._0_4_ = auVar40._0_4_ - (int)auVar56._0_2_ * (int)auVar54._0_2_;
              auVar39._4_4_ = auVar40._4_4_ - (int)auVar56._2_2_ * (int)auVar54._2_2_;
              auVar39._8_4_ = auVar40._8_4_ - (int)auVar56._4_2_ * (int)auVar54._4_2_;
              auVar39._12_4_ = auVar40._12_4_ - (int)auVar56._6_2_ * (int)auVar54._6_2_;
              auVar56._0_4_ = auVar43._0_4_ - (int)auVar38._0_2_ * (int)auVar55._0_2_;
              auVar56._4_4_ = auVar43._4_4_ - (int)auVar38._2_2_ * (int)auVar55._2_2_;
              auVar56._8_4_ = auVar43._8_4_ - (int)auVar38._4_2_ * (int)auVar55._4_2_;
              auVar56._12_4_ = auVar43._12_4_ - (int)auVar38._6_2_ * (int)auVar55._6_2_;
              auVar38 = auVar37;
              auVar40 = auVar39;
              auVar42 = auVar41;
              auVar43 = auVar56;
            } while (uVar25 != 0);
            uVar35 = auVar41._0_4_ + auVar37._0_4_ + auVar56._0_4_ + auVar39._0_4_ +
                     auVar41._4_4_ + auVar37._4_4_ + auVar56._4_4_ + auVar39._4_4_ +
                     auVar41._8_4_ + auVar37._8_4_ + auVar56._8_4_ + auVar39._8_4_ +
                     auVar41._12_4_ + auVar37._12_4_ + auVar56._12_4_ + auVar39._12_4_;
            uVar25 = uVar21;
            if (uVar21 != uVar32) goto LAB_00e7ac9c;
          }
          lVar17 = uVar26 + lVar22;
          iVar45 = (int)(uVar35 + 0x800) >> 0xc;
          uVar26 = uVar26 + 1;
          *(uint *)(param_3 + uVar30 * 4) = uVar35;
          if (iVar45 < -0x7ffe) {
            iVar45 = -0x7fff;
          }
          uVar5 = 0x7fff;
          if ((int)uVar35 < 0x7fff800) {
            uVar5 = (short)iVar45;
          }
          *(undefined2 *)((long)puVar18 + lVar17 * 2) = uVar5;
        } while (uVar26 != uVar23);
      }
    }
  }
LAB_00e7ae18:
  if (0 < (int)param_5) {
    if (param_5 < 0x10) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
      iVar45 = param_4 - 1;
      if ((iVar45 - (int)(uVar32 - 1) <= iVar45) && (uVar32 - 1 >> 0x20 == 0)) {
        uVar21 = uVar32 & 0xfffffff0;
        puVar24 = (undefined2 *)(param_6 + 0x10);
        uVar26 = uVar21;
        do {
          lVar19 = param_3 + (long)iVar45 * 4;
          uVar26 = uVar26 - 0x10;
          iVar45 = iVar45 + -0x10;
          auVar40 = NEON_rev64(*(undefined (*) [16])(lVar19 + -0x1c),4);
          auVar38 = NEON_rev64(*(undefined (*) [16])(lVar19 + -0xc),4);
          auVar43 = NEON_rev64(*(undefined (*) [16])(lVar19 + -0x3c),4);
          auVar42 = NEON_rev64(*(undefined (*) [16])(lVar19 + -0x2c),4);
          auVar40 = NEON_ext(auVar40,auVar40,8,1);
          auVar38 = NEON_ext(auVar38,auVar38,8,1);
          auVar43 = NEON_ext(auVar43,auVar43,8,1);
          auVar42 = NEON_ext(auVar42,auVar42,8,1);
          *puVar24 = auVar40._0_2_;
          puVar24[1] = auVar40._4_2_;
          puVar24[2] = auVar40._8_2_;
          puVar24[3] = auVar40._12_2_;
          puVar24[-8] = auVar38._0_2_;
          puVar24[-7] = auVar38._4_2_;
          puVar24[-6] = auVar38._8_2_;
          puVar24[-5] = auVar38._12_2_;
          puVar24[8] = auVar43._0_2_;
          puVar24[9] = auVar43._4_2_;
          puVar24[10] = auVar43._8_2_;
          puVar24[0xb] = auVar43._12_2_;
          *puVar24 = auVar42._0_2_;
          puVar24[1] = auVar42._4_2_;
          puVar24[2] = auVar42._8_2_;
          puVar24[3] = auVar42._12_2_;
          puVar24 = puVar24 + 0x10;
        } while (uVar26 != 0);
        if (uVar21 == uVar32) goto LAB_00e7ae50;
      }
    }
    iVar45 = ~(uint)uVar21 + param_4;
    lVar19 = uVar32 - uVar21;
    puVar24 = (undefined2 *)(param_6 + uVar21 * 2);
    do {
      lVar22 = (long)iVar45;
      iVar45 = iVar45 + -1;
      lVar19 = lVar19 + -1;
      *puVar24 = (short)*(undefined4 *)(param_3 + lVar22 * 4);
      puVar24 = puVar24 + 1;
    } while (lVar19 != 0);
  }
LAB_00e7ae50:
  if (*(long *)(lVar31 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


