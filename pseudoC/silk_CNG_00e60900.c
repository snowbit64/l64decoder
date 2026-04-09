// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_CNG
// Entry Point: 00e60900
// Size: 2060 bytes
// Signature: undefined silk_CNG(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void silk_CNG(long param_1,long param_2,short *param_3,uint param_4)

{
  unkbyte10 *pVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined8 uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  unkbyte10 *pVar19;
  short *psVar20;
  int *piVar21;
  ulong uVar22;
  undefined2 *puVar23;
  ulong uVar24;
  int iVar25;
  undefined8 *puVar26;
  int iVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined2 uVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  int iVar39;
  int iVar41;
  int iVar42;
  int iVar43;
  undefined auVar40 [16];
  int iVar44;
  int iVar46;
  int iVar47;
  int iVar48;
  undefined auVar45 [16];
  undefined8 *apuStack_e0 [2];
  long local_d0;
  undefined8 *local_c8;
  uint local_bc;
  long local_b8 [3];
  long local_a0;
  long local_98;
  long local_90;
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  short local_74;
  short local_72;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  iVar10 = *(int *)(param_1 + 0x90c);
  if (iVar10 != *(int *)(param_1 + 0x1054)) {
    uVar15 = *(uint *)(param_1 + 0x924);
    uVar17 = (ulong)uVar15;
    if (0 < (int)uVar15) {
      iVar14 = 0;
      if (uVar15 + 1 != 0) {
        iVar14 = 0x7fff / (int)(uVar15 + 1);
      }
      if (uVar15 < 0x10) {
        uVar22 = 0;
        iVar25 = 0;
      }
      else {
        uVar22 = uVar17 & 0xfffffff0;
        uVar15 = iVar14 * 8;
        iVar25 = iVar14 * (int)uVar22;
        puVar26 = (undefined8 *)(param_1 + 0xffc);
        sVar34 = (short)iVar14;
        sVar33 = sVar34 * 4;
        iVar8 = iVar14 * 5;
        iVar9 = iVar14 * 6;
        iVar27 = iVar14 * 7;
        iVar39 = iVar14 * SUB164(_DAT_004c51c0,0);
        iVar41 = iVar14 * SUB164(_DAT_004c51c0,4);
        iVar42 = iVar14 * SUB164(_DAT_004c51c0,8);
        iVar43 = iVar14 * SUB164(_DAT_004c51c0,0xc);
        uVar24 = uVar22;
        do {
          iVar44 = iVar39 + (uVar15 & 0xffff);
          iVar46 = iVar41 + uVar15;
          iVar47 = iVar42 + uVar15;
          iVar48 = iVar43 + uVar15;
          uVar24 = uVar24 - 0x10;
          sVar7 = sVar33 + (short)uVar15;
          sVar37 = (short)iVar39;
          sVar38 = (short)iVar41;
          sVar36 = (short)iVar42;
          sVar35 = (short)iVar43;
          iVar39 = iVar44 + (uVar15 & 0xffff);
          iVar41 = iVar46 + uVar15;
          iVar42 = iVar47 + uVar15;
          iVar43 = iVar48 + uVar15;
          puVar26[-1] = CONCAT26((short)(iVar27 + iVar14),
                                 CONCAT24((short)(iVar9 + iVar14),
                                          CONCAT22((short)(iVar8 + iVar14),sVar33 + sVar34)));
          puVar26[-2] = CONCAT26(sVar35 + sVar34,
                                 CONCAT24(sVar36 + sVar34,CONCAT22(sVar38 + sVar34,sVar37 + sVar34))
                                );
          puVar26[1] = CONCAT26((short)(iVar27 + uVar15) + sVar34,
                                CONCAT24((short)(iVar9 + uVar15) + sVar34,
                                         CONCAT22((short)(iVar8 + uVar15) + sVar34,sVar7 + sVar34)))
          ;
          *puVar26 = CONCAT26((short)(iVar48 + iVar14),
                              CONCAT24((short)(iVar47 + iVar14),
                                       CONCAT22((short)(iVar46 + iVar14),(short)iVar44 + sVar34)));
          puVar26 = puVar26 + 4;
          sVar33 = sVar7 + (short)uVar15;
          iVar8 = iVar8 + uVar15 + uVar15;
          iVar9 = iVar9 + uVar15 + uVar15;
          iVar27 = iVar27 + uVar15 + uVar15;
        } while (uVar24 != 0);
        if (uVar22 == uVar17) goto LAB_00e60a0c;
      }
      lVar18 = uVar17 - uVar22;
      puVar23 = (undefined2 *)(param_1 + uVar22 * 2 + 0xfec);
      do {
        iVar25 = iVar25 + iVar14;
        *puVar23 = (short)iVar25;
        lVar18 = lVar18 + -1;
        puVar23 = puVar23 + 1;
      } while (lVar18 != 0);
    }
LAB_00e60a0c:
    *(int *)(param_1 + 0x1054) = iVar10;
    *(undefined8 *)(param_1 + 0x104c) = 0x30788000000000;
  }
  if (*(int *)(param_1 + 0x1058) == 0) {
    if (*(int *)(param_1 + 0x105c) == 0) {
      uVar15 = *(uint *)(param_1 + 0x924);
      uVar17 = (ulong)uVar15;
      if (0 < (int)uVar15) {
        if (uVar15 < 8) {
          uVar22 = 0;
        }
        else {
          uVar22 = uVar17 & 0xfffffff8;
          pVar19 = (unkbyte10 *)(param_1 + 0x928);
          uVar24 = uVar22;
          do {
            pVar1 = (unkbyte10 *)((long)pVar19 + 0x6c4);
            uVar24 = uVar24 - 8;
            uVar2 = *(undefined8 *)((long)pVar19 + 8);
            uVar30 = (undefined2)((ulong)uVar2 >> 0x10);
            uVar31 = (undefined2)((ulong)uVar2 >> 0x20);
            uVar32 = (undefined2)((ulong)uVar2 >> 0x30);
            uVar2 = *(undefined8 *)pVar19;
            uVar6 = *(undefined8 *)((long)pVar19 + 0x6cc);
            sVar36 = (short)((ulong)uVar6 >> 0x10);
            sVar37 = (short)((ulong)uVar6 >> 0x20);
            sVar38 = (short)((ulong)uVar6 >> 0x30);
            uVar3 = *(undefined8 *)pVar1;
            sVar34 = (short)((ulong)uVar3 >> 0x10);
            sVar33 = (short)((ulong)uVar3 >> 0x20);
            sVar35 = (short)((ulong)uVar3 >> 0x30);
            auVar40._10_2_ = uVar30;
            auVar40._0_10_ = *pVar19;
            auVar40._12_2_ = uVar31;
            auVar40._14_2_ = uVar32;
            auVar45._10_2_ = uVar30;
            auVar45._0_10_ = *pVar19;
            auVar45._12_2_ = uVar31;
            auVar45._14_2_ = uVar32;
            auVar40 = NEON_ext(auVar40,auVar45,8,1);
            auVar4._10_2_ = sVar36;
            auVar4._0_10_ = *pVar1;
            auVar4._12_2_ = sVar37;
            auVar4._14_2_ = sVar38;
            auVar5._10_2_ = sVar36;
            auVar5._0_10_ = *pVar1;
            auVar5._12_2_ = sVar37;
            auVar5._14_2_ = sVar38;
            auVar45 = NEON_ext(auVar4,auVar5,8,1);
            *(ulong *)((long)pVar19 + 0x6cc) =
                 CONCAT26(sVar38 + (short)((uint)(auVar40._6_2_ * 0x3fdc + auVar45._6_2_ * -0x3fdc)
                                          >> 0x10),
                          CONCAT24(sVar37 + (short)((uint)(auVar40._4_2_ * 0x3fdc +
                                                          auVar45._4_2_ * -0x3fdc) >> 0x10),
                                   CONCAT22(sVar36 + (short)((uint)(auVar40._2_2_ * 0x3fdc +
                                                                   auVar45._2_2_ * -0x3fdc) >> 0x10)
                                            ,(short)uVar6 +
                                             (short)((uint)(auVar40._0_2_ * 0x3fdc +
                                                           auVar45._0_2_ * -0x3fdc) >> 0x10))));
            *(ulong *)pVar1 =
                 CONCAT26(sVar35 + (short)((uint)((short)((ulong)uVar2 >> 0x30) * 0x3fdc +
                                                 sVar35 * -0x3fdc) >> 0x10),
                          CONCAT24(sVar33 + (short)((uint)((short)((ulong)uVar2 >> 0x20) * 0x3fdc +
                                                          sVar33 * -0x3fdc) >> 0x10),
                                   CONCAT22(sVar34 + (short)((uint)((short)((ulong)uVar2 >> 0x10) *
                                                                    0x3fdc + sVar34 * -0x3fdc) >>
                                                            0x10),
                                            (short)uVar3 +
                                            (short)((uint)((short)uVar2 * 0x3fdc +
                                                          (short)uVar3 * -0x3fdc) >> 0x10))));
            pVar19 = pVar19 + 1;
          } while (uVar24 != 0);
          if (uVar22 == uVar17) goto LAB_00e60adc;
        }
        lVar18 = uVar17 - uVar22;
        psVar20 = (short *)(param_1 + uVar22 * 2 + 0x928);
        do {
          lVar18 = lVar18 + -1;
          psVar20[0x362] =
               psVar20[0x362] +
               (short)((uint)(((int)*psVar20 - (int)psVar20[0x362]) * 0x3fdc) >> 0x10);
          psVar20 = psVar20 + 1;
        } while (lVar18 != 0);
      }
LAB_00e60adc:
      uVar15 = *(uint *)(param_1 + 0x914);
      if ((int)uVar15 < 1) {
        iVar10 = 0;
      }
      else {
        uVar17 = 0;
        iVar14 = 0;
        iVar25 = 0;
        do {
          iVar9 = *(int *)(param_2 + 0x10 + uVar17 * 4);
          iVar8 = iVar9;
          if (iVar9 <= iVar25) {
            iVar8 = iVar25;
          }
          iVar10 = (int)uVar17;
          if (iVar9 <= iVar25) {
            iVar10 = iVar14;
          }
          uVar17 = uVar17 + 1;
          iVar14 = iVar10;
          iVar25 = iVar8;
        } while (uVar15 != uVar17);
      }
      uVar15 = *(int *)(param_1 + 0x91c) * (uVar15 - 1);
      memmove((void *)(param_1 + (long)*(int *)(param_1 + 0x91c) * 4 + 0xaec),
              (void *)(param_1 + 0xaec),
              -(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2);
      memcpy((void *)(param_1 + 0xaec),
             (void *)(param_1 + (long)(*(int *)(param_1 + 0x91c) * iVar10) * 4 + 4),
             (long)*(int *)(param_1 + 0x91c) << 2);
      uVar17 = (ulong)*(uint *)(param_1 + 0x914);
      if (0 < (int)*(uint *)(param_1 + 0x914)) {
        iVar10 = *(int *)(param_1 + 0x104c);
        piVar21 = (int *)(param_2 + 0x10);
        do {
          uVar17 = uVar17 - 1;
          iVar10 = iVar10 + (int)((ulong)(((long)*piVar21 - (long)iVar10) * 0x121a) >> 0x10);
          *(int *)(param_1 + 0x104c) = iVar10;
          piVar21 = piVar21 + 1;
        } while (uVar17 != 0);
      }
    }
    if (*(int *)(param_1 + 0x1058) == 0) {
      memset((void *)(param_1 + 0x100c),0,(long)*(int *)(param_1 + 0x924) << 2);
      lVar11 = *(long *)(lVar11 + 0x28);
      goto LAB_00e610dc;
    }
  }
  lVar18 = -((-(ulong)(param_4 + 0x10 >> 0x1f) & 0xfffffffc00000000 | (ulong)(param_4 + 0x10) << 2)
             + 0xf & 0xfffffffffffffff0);
  iVar10 = *(int *)(param_1 + 0x104c);
  iVar14 = (int)((ulong)((long)*(int *)(param_1 + 0x10b0) * (long)*(short *)(param_1 + 0x109c)) >>
                0x10);
  if ((iVar14 < 0x200000) && (iVar10 < 0x800001)) {
    uVar15 = (int)((ulong)((long)iVar10 * (long)iVar10) >> 0x10) -
             ((uint)((ulong)((long)iVar14 * (long)iVar14) >> 0xb) & 0xffffffe0);
    if ((int)uVar15 < 1) {
LAB_00e60c70:
      uVar15 = 0;
    }
    else {
      uVar17 = LZCOUNT(uVar15);
      uVar12 = (uint)uVar17;
      if (uVar12 - 0x18 != 0) {
        if (uVar15 < 0x80) {
          uVar15 = uVar15 >> (ulong)(0x38 - uVar12 & 0x1f) | uVar15 << (ulong)(uVar12 - 0x18 & 0x1f)
          ;
        }
        else {
          uVar15 = uVar15 << (ulong)(uVar12 + 8 & 0x1f) | uVar15 >> (ulong)(0x18 - uVar12 & 0x1f);
        }
      }
      uVar16 = 0xb486;
      if ((uVar17 & 1) != 0) {
        uVar16 = 0x8000;
      }
      uVar16 = uVar16 >> (ulong)(uVar12 >> 1);
      uVar15 = (uVar16 + (int)(((ulong)(uVar15 & 0x7f) * 0xd5000000000000 >> 0x30) * (ulong)uVar16
                              >> 0x10)) * 0x100;
    }
  }
  else {
    uVar15 = (iVar10 >> 0x10) * (iVar10 >> 0x10) + (iVar14 >> 0x10) * (iVar14 >> 0x10) * -0x20;
    if ((int)uVar15 < 1) goto LAB_00e60c70;
    uVar17 = LZCOUNT(uVar15);
    uVar12 = (uint)uVar17;
    if (uVar12 - 0x18 != 0) {
      if (uVar15 < 0x80) {
        uVar15 = uVar15 >> (ulong)(0x38 - uVar12 & 0x1f) | uVar15 << (ulong)(uVar12 - 0x18 & 0x1f);
      }
      else {
        uVar15 = uVar15 << (ulong)(uVar12 + 8 & 0x1f) | uVar15 >> (ulong)(0x18 - uVar12 & 0x1f);
      }
    }
    uVar16 = 0xb486;
    if ((uVar17 & 1) != 0) {
      uVar16 = 0x8000;
    }
    uVar15 = ((ushort)((ulong)(uVar15 & 0x7f) * 0xd5000000000000 >> 0x30) | 0x10000) *
             (uVar16 >> (ulong)(uVar12 >> 1)) & 0xffff0000;
  }
  uVar17 = 0xff;
  do {
    uVar12 = (uint)uVar17;
    uVar17 = uVar17 >> 1;
  } while ((int)param_4 < (int)uVar12);
  uVar16 = *(uint *)(param_1 + 0x1050);
  if (0 < (int)param_4) {
    uVar17 = (ulong)param_4;
    puVar13 = (undefined4 *)((long)&local_a0 + lVar18);
    do {
      uVar16 = uVar16 * 0xbb38435 + 0x3619636b;
      uVar17 = uVar17 - 1;
      *puVar13 = *(undefined4 *)(param_1 + (ulong)(uVar12 & uVar16 >> 0x18) * 4 + 0xaec);
      puVar13 = puVar13 + 1;
    } while (uVar17 != 0);
  }
  *(uint *)(param_1 + 0x1050) = uVar16;
  local_d0 = lVar11;
  silk_NLSF2A(&local_88,param_1 + 0xfec,*(undefined4 *)(param_1 + 0x924),
              *(undefined4 *)(param_1 + 0x1060));
  apuStack_e0[1] = (undefined8 *)(param_1 + 0x100c);
  uVar29 = *(undefined8 *)(param_1 + 0x1024);
  uVar28 = *(undefined8 *)(param_1 + 0x101c);
  uVar6 = *(undefined8 *)(param_1 + 0x1034);
  uVar3 = *(undefined8 *)(param_1 + 0x102c);
  auVar40 = *(undefined (*) [16])(param_1 + 0x103c);
  uVar2 = *apuStack_e0[1];
  local_c8 = (undefined8 *)((long)apuStack_e0 + lVar18);
  local_bc = param_4;
  *(undefined8 *)((long)apuStack_e0 + lVar18 + 8) = *(undefined8 *)(param_1 + 0x1014);
  *(undefined8 *)((long)apuStack_e0 + lVar18) = uVar2;
  *(undefined8 *)(&stack0xffffffffffffff40 + lVar18 + -8) = uVar29;
  *(undefined8 *)((long)&local_d0 + lVar18) = uVar28;
  *(undefined8 *)((long)local_b8 + lVar18) = uVar6;
  *(undefined8 *)(&stack0xffffffffffffff40 + lVar18) = uVar3;
  *(long *)((long)local_b8 + lVar18 + 0x10) = auVar40._8_8_;
  *(long *)((long)local_b8 + lVar18 + 8) = auVar40._0_8_;
  if (0 < (int)param_4) {
    iVar14 = *(int *)(param_1 + 0x924);
    puVar26 = local_c8 + 4;
    uVar17 = (ulong)local_bc;
    local_b8[2] = (long)local_6e;
    local_b8[1] = (long)local_6c;
    local_b8[0] = (long)local_6a;
    iVar10 = *(int *)((long)local_c8 + 0x3c);
    iVar25 = *(int *)((long)local_c8 + 0x1c);
    iVar8 = *(int *)((long)local_c8 + 0x34);
    iVar9 = *(int *)((long)local_c8 + 0x2c);
    iVar27 = *(int *)((long)local_c8 + 0x24);
    do {
      iVar39 = *(int *)(puVar26 + 3);
      iVar41 = *(int *)(puVar26 + 2);
      lVar11 = (long)iVar25;
      iVar42 = *(int *)(puVar26 + 1);
      iVar25 = *(int *)puVar26;
      iVar10 = (iVar14 >> 1) + (int)((ulong)((long)local_88 * (long)iVar10) >> 0x10) +
               (int)((ulong)((long)local_86 * (long)iVar39) >> 0x10) +
               (int)((ulong)((long)local_84 * (long)iVar8) >> 0x10) +
               (int)((ulong)((long)local_82 * (long)iVar41) >> 0x10) +
               (int)((ulong)((long)local_80 * (long)iVar9) >> 0x10) +
               (int)((ulong)((long)local_7e * (long)iVar42) >> 0x10) +
               (int)((ulong)((long)local_7c * (long)iVar27) >> 0x10) +
               (int)((ulong)((long)local_7a * (long)iVar25) >> 0x10) +
               (int)((ulong)(local_78 * lVar11) >> 0x10) +
               (int)((ulong)((long)local_76 * (long)*(int *)(puVar26 + -1)) >> 0x10);
      if (iVar14 == 0x10) {
        iVar10 = iVar10 + (int)((ulong)((long)local_74 * (long)*(int *)(puVar26 + -1)) >> 0x10) +
                 (int)((ulong)((long)local_72 * (long)*(int *)(puVar26 + -2)) >> 0x10) +
                 (int)((ulong)((long)local_70 * (long)*(int *)(puVar26 + -2)) >> 0x10) +
                 (int)((ulong)(local_b8[2] * *(int *)(puVar26 + -3)) >> 0x10) +
                 (int)((ulong)(local_b8[1] * *(int *)(puVar26 + -3)) >> 0x10) +
                 (int)((ulong)(local_b8[0] * *(int *)(puVar26 + -4)) >> 0x10);
      }
      if (iVar10 < -0x7ffffff) {
        iVar10 = -0x8000000;
      }
      uVar12 = *(uint *)(puVar26 + 4);
      if (0x7fffffe < iVar10) {
        iVar10 = 0x7ffffff;
      }
      uVar16 = iVar10 * 0x10;
      iVar8 = uVar16 + uVar12;
      if (iVar8 < 0) {
        iVar10 = 0x7fffffff;
        if ((int)(uVar16 | uVar12) < 0) {
          iVar10 = iVar8;
        }
      }
      else {
        iVar10 = iVar8;
        if ((int)(uVar16 & uVar12) < 0) {
          iVar10 = -0x80000000;
        }
      }
      sVar34 = *param_3;
      *(int *)(puVar26 + 4) = iVar10;
      puVar26 = (undefined8 *)((long)puVar26 + 4);
      iVar9 = (int)((ulong)((long)iVar10 * (long)((int)uVar15 >> 6)) >> 0x10);
      iVar8 = -0x8000;
      if (-0x800081 < iVar9) {
        iVar8 = (iVar9 >> 7) + 1 >> 1;
      }
      iVar27 = 0x7fff;
      if (iVar9 < 0x7fff80) {
        iVar27 = iVar8;
      }
      iVar27 = iVar27 + sVar34;
      if (iVar27 == -0x8000 || iVar27 + 0x8000 < 0 != SCARRY4(iVar27,0x8000)) {
        iVar27 = -0x8000;
      }
      if (0x7ffe < iVar27) {
        iVar27 = 0x7fff;
      }
      uVar17 = uVar17 - 1;
      *param_3 = (short)iVar27;
      param_3 = param_3 + 1;
      iVar8 = iVar39;
      iVar9 = iVar41;
      iVar27 = iVar42;
      local_a0 = (long)local_70;
      local_98 = (long)local_72;
      local_90 = (long)local_74;
    } while (uVar17 != 0);
  }
  puVar26 = (undefined8 *)((long)local_c8 + (long)(int)local_bc * 4);
  uVar29 = *puVar26;
  uVar3 = puVar26[3];
  uVar2 = puVar26[2];
  uVar28 = puVar26[5];
  uVar6 = puVar26[4];
  auVar40 = *(undefined (*) [16])(puVar26 + 6);
  apuStack_e0[1][1] = puVar26[1];
  *apuStack_e0[1] = uVar29;
  apuStack_e0[1][3] = uVar3;
  apuStack_e0[1][2] = uVar2;
  apuStack_e0[1][5] = uVar28;
  apuStack_e0[1][4] = uVar6;
  apuStack_e0[1][7] = auVar40._8_8_;
  apuStack_e0[1][6] = auVar40._0_8_;
  lVar11 = *(long *)(local_d0 + 0x28);
LAB_00e610dc:
  if (lVar11 != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


