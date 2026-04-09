// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_A2NLSF
// Entry Point: 00e92f1c
// Size: 5052 bytes
// Signature: undefined silk_A2NLSF(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void silk_A2NLSF(short *param_1,long param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int *piVar21;
  ulong uVar22;
  undefined (*pauVar23) [16];
  long lVar24;
  uint uVar25;
  int *piVar26;
  ulong uVar27;
  int iVar28;
  uint uVar29;
  long lVar30;
  undefined8 *puVar31;
  ulong uVar32;
  ulong uVar33;
  short *psVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  int iVar39;
  uint uVar40;
  long lVar41;
  short sVar42;
  uint uVar43;
  long lVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  short sVar55;
  short sVar56;
  undefined8 uVar54;
  int iVar57;
  short sVar58;
  short sVar60;
  short sVar61;
  undefined8 uVar59;
  short sVar62;
  undefined auVar63 [16];
  undefined auVar64 [16];
  short sVar65;
  short sVar67;
  short sVar68;
  undefined8 uVar66;
  short sVar69;
  short sVar70;
  short sVar72;
  short sVar73;
  undefined8 uVar71;
  short sVar74;
  uint local_f4;
  ulong local_f0;
  undefined local_e8 [8];
  undefined auStack_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  undefined8 uStack_b0;
  undefined auStack_a8 [4];
  undefined8 local_a4;
  undefined8 local_9c;
  int local_94;
  int iStack_90;
  int local_8c;
  int iStack_88;
  long local_70;
  
  lVar4 = tpidr_el0;
  uVar1 = (int)param_3 >> 1;
  uVar17 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  uVar25 = 0x10000;
  local_70 = *(long *)(lVar4 + 0x28);
  *(undefined4 *)((long)&local_a4 + uVar17) = 0x10000;
  uVar33 = (long)((ulong)param_3 << 0x20) >> 0x21;
  local_e8 = (undefined  [8])&local_a4;
  auStack_e0 = (undefined  [8])&local_d8;
  *(undefined4 *)((long)&local_d8 + uVar17) = 0x10000;
  if ((int)param_3 < 2) {
joined_r0x00e93064:
    if ((int)param_3 < 2) {
      bVar5 = false;
      if ((int)uVar25 < 0) {
        uVar25 = *(uint *)((long)&local_d8 + uVar33 * 4);
LAB_00e935fc:
        puVar19 = &local_d8;
        uVar14 = 1;
        *param_1 = 0;
        goto LAB_00e93604;
      }
    }
    else {
      uVar17 = (uVar33 & 0xffffffff) + 1;
      do {
        iVar15 = (int)uVar17;
        uVar17 = uVar17 - 1;
        uVar25 = *(int *)((long)&local_a4 + (ulong)(iVar15 - 2) * 4) +
                 (int)((ulong)((long)(int)uVar25 * 0x20000) >> 0x10);
      } while (1 < uVar17);
      if ((int)uVar25 < 0) {
        *param_1 = 0;
        uVar25 = *(uint *)((long)&local_d8 + uVar33 * 4);
        if (1 < (int)param_3) {
          uVar17 = (uVar33 & 0xffffffff) + 1;
          do {
            iVar15 = (int)uVar17;
            uVar17 = uVar17 - 1;
            uVar25 = *(int *)((long)&local_d8 + (ulong)(iVar15 - 2) * 4) +
                     (int)((ulong)((long)(int)uVar25 * 0x20000) >> 0x10);
          } while (1 < uVar17);
        }
        puVar19 = &local_d8;
        bVar5 = false;
        uVar14 = 1;
        goto LAB_00e93604;
      }
      bVar5 = false;
    }
  }
  else {
    uVar17 = uVar33 & 0xffffffff;
    if (param_3 < 8) {
      uVar18 = 0;
LAB_00e92f98:
      lVar30 = uVar17 - uVar18;
      iVar15 = ~(uint)uVar18 + uVar1;
      piVar16 = (int *)(param_2 + (uVar18 + uVar33) * 4);
      piVar21 = (int *)((long)&local_d8 + uVar18 * 4);
      piVar26 = (int *)((long)&local_a4 + uVar18 * 4);
      do {
        iVar39 = *(int *)(param_2 + (long)iVar15 * 4);
        lVar30 = lVar30 + -1;
        iVar57 = *piVar16;
        iVar15 = iVar15 + -1;
        *piVar21 = iVar57 - iVar39;
        *piVar26 = -(iVar39 + iVar57);
        piVar16 = piVar16 + 1;
        piVar21 = piVar21 + 1;
        piVar26 = piVar26 + 1;
      } while (lVar30 != 0);
    }
    else {
      uVar22 = uVar17 - 1;
      uVar18 = 0;
      if (((int)uVar1 <= (int)(uVar1 + ~(uint)uVar22)) || (uVar22 >> 0x20 != 0)) goto LAB_00e92f98;
      uVar18 = uVar33 & 0xfffffffc;
      puVar19 = (undefined8 *)(param_2 + uVar33 * 4);
      puVar20 = &local_a4;
      puVar31 = &local_d8;
      uVar35 = uVar18;
      do {
        uVar47 = uVar22 & 0xffffffff;
        uVar45 = uVar22 >> 0x1f;
        uVar35 = uVar35 - 4;
        uVar22 = (ulong)((int)uVar22 - 4);
        auVar51 = NEON_rev64(*(undefined (*) [16])
                              (param_2 + -0xc + (-(uVar45 & 1) & 0xfffffffc00000000 | uVar47 << 2)),
                             4);
        auVar51 = NEON_ext(auVar51,auVar51,8,1);
        iVar15 = (int)*puVar19;
        auVar63._0_4_ = auVar51._0_4_ + iVar15;
        iVar57 = (int)((ulong)*puVar19 >> 0x20);
        auVar63._4_4_ = auVar51._4_4_ + iVar57;
        iVar39 = (int)puVar19[1];
        auVar63._8_4_ = auVar51._8_4_ + iVar39;
        iVar10 = (int)((ulong)puVar19[1] >> 0x20);
        auVar63._12_4_ = auVar51._12_4_ + iVar10;
        auVar49._0_8_ = CONCAT44(iVar57 - auVar51._4_4_,iVar15 - auVar51._0_4_);
        auVar49._8_4_ = iVar39 - auVar51._8_4_;
        auVar49._12_4_ = iVar10 - auVar51._12_4_;
        auVar51 = NEON_neg(auVar63,4);
        puVar31[1] = auVar49._8_8_;
        *puVar31 = auVar49._0_8_;
        puVar20[1] = auVar51._8_8_;
        *puVar20 = auVar51._0_8_;
        puVar19 = puVar19 + 2;
        puVar20 = puVar20 + 2;
        puVar31 = puVar31 + 2;
      } while (uVar35 != 0);
      if (uVar18 != uVar17) goto LAB_00e92f98;
    }
    uVar18 = (uVar17 - (1 < param_3)) + 1;
    uVar22 = uVar17;
    if (uVar18 < 4) {
LAB_00e9300c:
      do {
        bVar5 = uVar22 != 0;
        uVar18 = uVar22 - 1;
        lVar30 = (uVar22 - 1 & 0xffffffff) * 4;
        iVar15 = *(int *)((long)&local_d8 + uVar22 * 4);
        *(int *)((long)&local_a4 + lVar30) =
             *(int *)((long)&local_a4 + lVar30) - *(int *)((long)&local_a4 + uVar22 * 4);
        *(int *)((long)&local_d8 + lVar30) = *(int *)((long)&local_d8 + lVar30) + iVar15;
        uVar22 = uVar18;
      } while (bVar5 && uVar18 != 0);
    }
    else {
      uVar35 = uVar17 - (1 < param_3);
      bVar5 = uVar35 >> 0x3e != 0;
      if (((((((uVar1 - 1 < (uint)uVar35) || (uVar35 >> 0x20 != 0)) ||
             (lVar30 = (ulong)(uVar1 - 1) * 4, uVar45 = (long)&local_a4 + lVar30,
             uVar45 < uVar45 + uVar35 * -4)) ||
            ((bVar5 || (lVar41 = uVar17 * 4,
                       (ulong)((long)&local_a4 + lVar41) < (long)&local_a4 + lVar41 + uVar35 * -4)))
            ) || ((bVar5 || ((uVar45 = (long)&local_d8 + lVar30, uVar45 < uVar45 + uVar35 * -4 ||
                             (bVar5)))))) ||
          ((ulong)((long)&local_d8 + lVar41) < (long)&local_d8 + lVar41 + uVar35 * -4)) || (bVar5))
      goto LAB_00e9300c;
      uVar35 = (ulong)(uVar1 - 1);
      uVar22 = uVar35;
      if (1 < param_3) {
        uVar22 = uVar35 + 1;
      }
      lVar30 = (uVar22 - uVar17) * 4;
      lVar46 = (ulong)(1 < param_3) * 4;
      uVar22 = uVar17;
      if (((ulong)((long)&local_a4 + lVar30) < (ulong)((long)&local_a4 + lVar41 + 4) &&
           (ulong)((long)&local_a4 + lVar46) < (long)&local_a4 + uVar35 * 4 + 4) ||
         ((ulong)((long)&local_d8 + lVar30) < (ulong)((long)&local_d8 + lVar41 + 4) &&
          (ulong)((long)&local_d8 + lVar46) < (long)&local_d8 + uVar35 * 4 + 4)) goto LAB_00e9300c;
      uVar47 = uVar18 & 0xfffffffffffffffc;
      uVar22 = uVar17 - uVar47;
      uVar35 = uVar17 + 0xffffffff;
      pauVar23 = (undefined (*) [16])((long)&uStack_b0 + lVar41);
      puVar19 = (undefined8 *)(local_e8 + lVar41 + 4);
      uVar45 = uVar47;
      do {
        lVar30 = (uVar35 & 0xffffffff) * 4;
        uVar45 = uVar45 - 4;
        auVar51 = *pauVar23;
        uVar59 = puVar19[1];
        uVar54 = *puVar19;
        auVar49 = *(undefined (*) [16])((long)&uStack_b0 + lVar30);
        uVar35 = uVar35 - 4;
        uVar71 = *(undefined8 *)(auStack_e0 + lVar30 + 4);
        uVar66 = *(undefined8 *)(local_e8 + lVar30 + 4);
        auVar50._0_8_ = CONCAT44(auVar49._4_4_ - auVar51._4_4_,auVar49._0_4_ - auVar51._0_4_);
        auVar50._8_4_ = auVar49._8_4_ - auVar51._8_4_;
        auVar50._12_4_ = auVar49._12_4_ - auVar51._12_4_;
        *(long *)(auStack_a8 + lVar30) = auVar50._8_8_;
        *(undefined8 *)((long)&uStack_b0 + lVar30) = auVar50._0_8_;
        *(ulong *)(auStack_e0 + lVar30 + 4) =
             CONCAT44((int)((ulong)uVar71 >> 0x20) + (int)((ulong)uVar59 >> 0x20),
                      (int)uVar71 + (int)uVar59);
        *(ulong *)(local_e8 + lVar30 + 4) =
             CONCAT44((int)((ulong)uVar66 >> 0x20) + (int)((ulong)uVar54 >> 0x20),
                      (int)uVar66 + (int)uVar54);
        pauVar23 = pauVar23 + -1;
        puVar19 = puVar19 + -2;
      } while (uVar45 != 0);
      if (uVar18 != uVar47) goto LAB_00e9300c;
    }
    if ((int)param_3 < 4) {
      uVar25 = *(uint *)((long)&local_a4 + uVar33 * 4);
      goto joined_r0x00e93064;
    }
    uVar35 = uVar17 - 2;
    lVar30 = 0;
    uVar18 = 2;
    uVar22 = uVar35;
    do {
      if (uVar18 < uVar17) {
        uVar47 = uVar35 - lVar30;
        uVar45 = uVar17;
        if (1 < uVar47) {
          uVar13 = uVar22 & 0xfffffffffffffffe;
          uVar45 = uVar17 - (uVar47 & 0xfffffffffffffffe);
          puVar19 = (undefined8 *)((long)&uStack_b0 + uVar17 * 4);
          do {
            uVar13 = uVar13 - 2;
            *puVar19 = CONCAT44((int)((ulong)*puVar19 >> 0x20) - (int)((ulong)puVar19[1] >> 0x20),
                                (int)*puVar19 - (int)puVar19[1]);
            puVar19 = puVar19 + -1;
          } while (uVar13 != 0);
          if (uVar47 == (uVar47 & 0xfffffffffffffffe)) goto LAB_00e932f0;
        }
        do {
          lVar41 = uVar45 * 4;
          uVar45 = uVar45 - 1;
          *(int *)(auStack_a8 + lVar41 + -4) =
               *(int *)(auStack_a8 + lVar41 + -4) - *(int *)((long)&local_a4 + lVar41);
        } while ((long)uVar18 < (long)uVar45);
      }
LAB_00e932f0:
      lVar41 = uVar18 * 4;
      uVar18 = uVar18 + 1;
      lVar30 = lVar30 + 1;
      uVar22 = uVar22 - 1;
      *(int *)(auStack_a8 + lVar41 + -4) =
           *(int *)(auStack_a8 + lVar41 + -4) + *(int *)((long)&local_a4 + lVar41) * -2;
    } while (uVar18 != uVar1 + 1);
    lVar30 = 0;
    uVar18 = 2;
    uVar22 = uVar35;
    do {
      if (uVar18 < uVar17) {
        uVar47 = uVar35 - lVar30;
        uVar45 = uVar17;
        if (1 < uVar47) {
          uVar13 = uVar22 & 0xfffffffffffffffe;
          uVar45 = uVar17 - (uVar47 & 0xfffffffffffffffe);
          puVar19 = (undefined8 *)(local_e8 + uVar17 * 4 + 4);
          do {
            uVar13 = uVar13 - 2;
            *puVar19 = CONCAT44((int)((ulong)*puVar19 >> 0x20) - (int)((ulong)puVar19[1] >> 0x20),
                                (int)*puVar19 - (int)puVar19[1]);
            puVar19 = puVar19 + -1;
          } while (uVar13 != 0);
          if (uVar47 == (uVar47 & 0xfffffffffffffffe)) goto LAB_00e9339c;
        }
        do {
          lVar41 = uVar45 * 4;
          uVar45 = uVar45 - 1;
          *(int *)(auStack_e0 + lVar41) =
               *(int *)(auStack_e0 + lVar41) - *(int *)((long)&local_d8 + lVar41);
        } while ((long)uVar18 < (long)uVar45);
      }
LAB_00e9339c:
      lVar41 = uVar18 * 4;
      uVar18 = uVar18 + 1;
      lVar30 = lVar30 + 1;
      uVar22 = uVar22 - 1;
      *(int *)(auStack_e0 + lVar41) =
           *(int *)(auStack_e0 + lVar41) + *(int *)((long)&local_d8 + lVar41) * -2;
    } while (uVar18 != uVar1 + 1);
    uVar25 = *(uint *)((long)&local_a4 + uVar33 * 4);
    if (uVar1 != 8) goto joined_r0x00e93064;
    uVar25 = (int)local_a4 +
             (int)((ulong)((long)(local_a4._4_4_ +
                                 (int)((ulong)((long)((int)local_9c +
                                                     (int)((ulong)((long)(local_9c._4_4_ +
                                                                         (int)((ulong)((long)(
                                                  local_94 +
                                                  (int)((ulong)((long)(iStack_90 +
                                                                      (int)((ulong)((long)(local_8c 
                                                  + (int)((ulong)((long)(iStack_88 +
                                                                        (int)((ulong)((long)(int)
                                                  uVar25 * 0x20000) >> 0x10)) * 0x20000) >> 0x10)) *
                                                  0x20000) >> 0x10)) * 0x20000) >> 0x10)) * 0x20000)
                                                  >> 0x10)) * 0x20000) >> 0x10)) * 0x20000) >> 0x10)
                                 ) * 0x20000) >> 0x10);
    if ((int)uVar25 < 0) {
      bVar5 = true;
      uVar25 = (int)local_d8 +
               (int)((ulong)((long)(local_d8._4_4_ +
                                   (int)((ulong)((long)((int)local_d0 +
                                                       (int)((ulong)((long)(local_d0._4_4_ +
                                                                           (int)((ulong)((long)(
                                                  local_c8 +
                                                  (int)((ulong)((long)(iStack_c4 +
                                                                      (int)((ulong)((long)(local_c0 
                                                  + (int)((ulong)((long)(iStack_bc +
                                                                        (int)((ulong)((long)*(int *)
                                                  ((long)&local_d8 + uVar33 * 4) * 0x20000) >> 0x10)
                                                  ) * 0x20000) >> 0x10)) * 0x20000) >> 0x10)) *
                                                  0x20000) >> 0x10)) * 0x20000) >> 0x10)) * 0x20000)
                                                  >> 0x10)) * 0x20000) >> 0x10)) * 0x20000) >> 0x10)
      ;
      goto LAB_00e935fc;
    }
    bVar5 = true;
  }
  uVar14 = 0;
  puVar19 = &local_a4;
LAB_00e93604:
  local_f0 = 0x2000;
  uVar47 = uVar33 & 0xffffffff;
  uVar3 = uVar1 - 1;
  uVar45 = (ulong)uVar3;
  uVar18 = uVar47 - 1;
  uVar22 = uVar47 - 2;
  uVar35 = (ulong)(1 < param_3);
  uVar17 = uVar45;
  if (1 < param_3) {
    uVar17 = uVar45 + 1;
  }
  uVar13 = uVar47 - uVar35;
  lVar41 = uVar45 * 4;
  lVar30 = uVar47 * 4;
  uVar45 = uVar47 + 1;
  bVar7 = uVar13 >> 0x3e != 0;
  uVar48 = uVar45 - uVar35;
  lVar46 = (uVar17 - uVar47) * 4;
  uVar36 = uVar33 & 0xfffffffc;
  uVar37 = uVar48 & 0xfffffffffffffffc;
  local_f4 = 0;
  uVar29 = 0;
  uVar17 = local_f0;
  iVar15 = 1;
LAB_00e937d8:
  do {
    while( true ) {
      iVar57 = (int)uVar17;
      uVar40 = *(uint *)((long)puVar19 + uVar33 * 4);
      sVar2 = (&silk_LSFCosTab_FIX_Q12)[iVar15];
      uVar8 = (ulong)sVar2;
      iVar39 = (int)sVar2;
      lVar44 = (long)(int)uVar40;
      uVar17 = (uVar8 & 0xffffffff) << 4;
      if (bVar5) {
        iVar10 = (int)uVar17;
        uVar43 = *(int *)puVar19 +
                 (int)((ulong)((long)(*(int *)((long)puVar19 + 4) +
                                     (int)((ulong)((long)(*(int *)(puVar19 + 1) +
                                                         (int)((ulong)((long)(*(int *)((long)puVar19
                                                                                      + 0xc) +
                                                                             (int)((ulong)((long)(*(
                                                  int *)(puVar19 + 2) +
                                                  (int)((ulong)((long)(*(int *)((long)puVar19 + 0x14
                                                                               ) +
                                                                      (int)((ulong)((long)(*(int *)(
                                                  puVar19 + 3) +
                                                  (int)((ulong)((long)(*(int *)((long)puVar19 + 0x1c
                                                                               ) +
                                                                      (int)((ulong)(iVar10 * lVar44)
                                                                           >> 0x10)) * (long)iVar10)
                                                       >> 0x10)) * (long)iVar10) >> 0x10)) *
                                                  (long)iVar10) >> 0x10)) * (long)iVar10) >> 0x10))
                                                  * (long)iVar10) >> 0x10)) * (long)iVar10) >> 0x10)
                                     ) * (long)iVar10) >> 0x10);
      }
      else {
        uVar27 = uVar45;
        uVar43 = uVar40;
        if (1 < (int)param_3) {
          do {
            iVar10 = (int)uVar27;
            uVar27 = uVar27 - 1;
            uVar43 = *(int *)((long)puVar19 + (ulong)(iVar10 - 2) * 4) +
                     (int)((long)(int)uVar43 * (-(uVar8 >> 0x1f & 1) & 0xfffffff000000000 | uVar17)
                          >> 0x10);
          } while (1 < uVar27);
        }
      }
      if (((0 < (int)uVar25) || ((int)uVar43 < (int)uVar29)) &&
         (((int)uVar25 < 0 ||
          (uVar43 != -uVar29 && (int)(uVar43 + uVar29) < 0 == SBORROW4(uVar43,-uVar29))))) break;
      uVar29 = iVar57 + sVar2;
      iVar10 = (uVar29 & 1) + ((int)uVar29 >> 1);
      iVar28 = iVar10 * 0x10;
      if (bVar5) {
        uVar29 = *(int *)puVar19 +
                 (int)((ulong)((long)(*(int *)((long)puVar19 + 4) +
                                     (int)((ulong)((long)(*(int *)(puVar19 + 1) +
                                                         (int)((ulong)((long)(*(int *)((long)puVar19
                                                                                      + 0xc) +
                                                                             (int)((ulong)((long)(*(
                                                  int *)(puVar19 + 2) +
                                                  (int)((ulong)((long)(*(int *)((long)puVar19 + 0x14
                                                                               ) +
                                                                      (int)((ulong)((long)(*(int *)(
                                                  puVar19 + 3) +
                                                  (int)((ulong)((long)(*(int *)((long)puVar19 + 0x1c
                                                                               ) +
                                                                      (int)((ulong)(iVar28 * lVar44)
                                                                           >> 0x10)) * (long)iVar28)
                                                       >> 0x10)) * (long)iVar28) >> 0x10)) *
                                                  (long)iVar28) >> 0x10)) * (long)iVar28) >> 0x10))
                                                  * (long)iVar28) >> 0x10)) * (long)iVar28) >> 0x10)
                                     ) * (long)iVar28) >> 0x10);
      }
      else {
        uVar29 = uVar40;
        if (1 < (int)param_3) {
          uVar17 = uVar45;
          do {
            iVar12 = (int)uVar17;
            uVar17 = uVar17 - 1;
            uVar29 = *(int *)((long)puVar19 + (ulong)(iVar12 - 2) * 4) +
                     (int)((ulong)((long)(int)uVar29 * (long)iVar28) >> 0x10);
          } while (1 < uVar17);
        }
      }
      if ((((int)uVar25 < 1) && (-1 < (int)uVar29)) || ((-1 < (int)uVar25 && ((int)uVar29 < 1)))) {
        uVar9 = 0xffffff00;
        iVar28 = (iVar10 + iVar57 & 1U) + (iVar10 + iVar57 >> 1);
        iVar12 = iVar28 * 0x10;
        iVar39 = iVar10;
        if (!bVar5) goto LAB_00e93b50;
LAB_00e9394c:
        iVar39 = iVar10;
        uVar11 = *(int *)puVar19 +
                 (int)((ulong)((long)(*(int *)((long)puVar19 + 4) +
                                     (int)((ulong)((long)(*(int *)(puVar19 + 1) +
                                                         (int)((ulong)((long)(*(int *)((long)puVar19
                                                                                      + 0xc) +
                                                                             (int)((ulong)((long)(*(
                                                  int *)(puVar19 + 2) +
                                                  (int)((ulong)((long)(*(int *)((long)puVar19 + 0x14
                                                                               ) +
                                                                      (int)((ulong)((long)(*(int *)(
                                                  puVar19 + 3) +
                                                  (int)((ulong)((long)(*(int *)((long)puVar19 + 0x1c
                                                                               ) +
                                                                      (int)((ulong)(iVar12 * lVar44)
                                                                           >> 0x10)) * (long)iVar12)
                                                       >> 0x10)) * (long)iVar12) >> 0x10)) *
                                                  (long)iVar12) >> 0x10)) * (long)iVar12) >> 0x10))
                                                  * (long)iVar12) >> 0x10)) * (long)iVar12) >> 0x10)
                                     ) * (long)iVar12) >> 0x10);
      }
      else {
        uVar9 = 0xffffff80;
        uVar25 = sVar2 + iVar10;
        iVar28 = (uVar25 & 1) + ((int)uVar25 >> 1);
        iVar12 = iVar28 * 0x10;
        uVar25 = uVar29;
        iVar57 = iVar10;
        uVar29 = uVar43;
        iVar10 = (int)sVar2;
        if (bVar5) goto LAB_00e9394c;
LAB_00e93b50:
        uVar11 = uVar40;
        if (1 < (int)param_3) {
          uVar17 = uVar45;
          do {
            iVar10 = (int)uVar17;
            uVar17 = uVar17 - 1;
            uVar11 = *(int *)((long)puVar19 + (ulong)(iVar10 - 2) * 4) +
                     (int)((ulong)((long)(int)uVar11 * (long)iVar12) >> 0x10);
          } while (1 < uVar17);
        }
      }
      if ((((int)uVar25 < 1) && (-1 < (int)uVar11)) || ((-1 < (int)uVar25 && ((int)uVar11 < 1)))) {
        iVar57 = ((iVar28 + iVar57 & 1U) + ((uint)(iVar28 + iVar57) >> 1)) * 0x10;
        uVar29 = uVar11;
        if (!bVar5) goto LAB_00e93bb0;
LAB_00e939f8:
        uVar40 = *(int *)puVar19 +
                 (int)((ulong)((long)(*(int *)((long)puVar19 + 4) +
                                     (int)((ulong)((long)(*(int *)(puVar19 + 1) +
                                                         (int)((ulong)((long)(*(int *)((long)puVar19
                                                                                      + 0xc) +
                                                                             (int)((ulong)((long)(*(
                                                  int *)(puVar19 + 2) +
                                                  (int)((ulong)((long)(*(int *)((long)puVar19 + 0x14
                                                                               ) +
                                                                      (int)((ulong)((long)(*(int *)(
                                                  puVar19 + 3) +
                                                  (int)((ulong)((long)(*(int *)((long)puVar19 + 0x1c
                                                                               ) +
                                                                      (int)((ulong)(iVar57 * lVar44)
                                                                           >> 0x10)) * (long)iVar57)
                                                       >> 0x10)) * (long)iVar57) >> 0x10)) *
                                                  (long)iVar57) >> 0x10)) * (long)iVar57) >> 0x10))
                                                  * (long)iVar57) >> 0x10)) * (long)iVar57) >> 0x10)
                                     ) * (long)iVar57) >> 0x10);
      }
      else {
        uVar9 = uVar9 | 0x40;
        iVar57 = ((iVar39 + iVar28 & 1U) + ((uint)(iVar39 + iVar28) >> 1)) * 0x10;
        uVar25 = uVar11;
        if (bVar5) goto LAB_00e939f8;
LAB_00e93bb0:
        if (1 < (int)param_3) {
          uVar17 = uVar45;
          do {
            iVar39 = (int)uVar17;
            uVar17 = uVar17 - 1;
            uVar40 = *(int *)((long)puVar19 + (ulong)(iVar39 - 2) * 4) +
                     (int)((ulong)((long)(int)uVar40 * (long)iVar57) >> 0x10);
          } while (1 < uVar17);
        }
      }
      if (((0 < (int)uVar25) || ((int)uVar40 < 0)) && (((int)uVar25 < 0 || (0 < (int)uVar40)))) {
        uVar9 = uVar9 + 0x20;
        uVar25 = uVar40;
        uVar40 = uVar29;
      }
      uVar29 = (uint)(uVar43 == 0);
      uVar43 = -uVar25;
      if (-1 < (int)uVar25) {
        uVar43 = uVar25;
      }
      iVar57 = uVar25 - uVar40;
      if (uVar43 >> 0x10 == 0) {
        if (iVar57 != 0) {
          iVar39 = 0;
          if (iVar57 != 0) {
            iVar39 = (int)((iVar57 >> 1) + uVar25 * 0x20) / iVar57;
          }
          goto LAB_00e93c28;
        }
      }
      else {
        iVar39 = 0;
        if (iVar57 >> 5 != 0) {
          iVar39 = (int)uVar25 / (iVar57 >> 5);
        }
LAB_00e93c28:
        uVar9 = iVar39 + uVar9;
      }
      iVar57 = uVar9 + iVar15 * 0x100;
      if (0x7ffe < iVar57) {
        iVar57 = 0x7fff;
      }
      param_1[(int)uVar14] = (short)iVar57;
      uVar14 = uVar14 + 1;
      if ((int)param_3 <= (int)uVar14) goto LAB_00e942a0;
      puVar19 = *(undefined8 **)(local_e8 + (ulong)(uVar14 & 1) * 8);
      uVar17 = (long)*(short *)(&UNK_00563d1c + (long)iVar15 * 2);
      uVar25 = 0x1000 - (uVar14 * 0x1000 & 0x2000);
    }
    uVar29 = 0;
    bVar6 = iVar15 < 0x80;
    uVar17 = uVar8 & 0xffffffff;
    uVar25 = uVar43;
    iVar15 = iVar15 + 1;
  } while (bVar6);
  if (0xf < (int)local_f4) {
    iVar15 = 0;
    if (param_3 + 1 != 0) {
      iVar15 = 0x8000 / (int)(param_3 + 1);
    }
    sVar2 = (short)iVar15;
    *param_1 = sVar2;
    if (1 < (int)param_3) {
      uVar33 = (ulong)param_3 - 1;
      if (uVar33 < 0x10) {
        uVar17 = 1;
        iVar57 = iVar15;
        goto LAB_00e94288;
      }
      uVar22 = uVar33 & 0xfffffffffffffff0;
      uVar17 = uVar22 | 1;
      iVar57 = iVar15 + (int)uVar22 * iVar15;
      puVar19 = (undefined8 *)(param_1 + 9);
      uVar54 = CONCAT26(sVar2 + sVar2 * SUB162(_DAT_004c3180,6),
                        CONCAT24(sVar2 + sVar2 * SUB162(_DAT_004c3180,4),
                                 CONCAT22(sVar2 + sVar2 * SUB162(_DAT_004c3180,2),
                                          sVar2 + sVar2 * SUB162(_DAT_004c3180,0))));
      uVar59 = CONCAT26(sVar2 + sVar2 * SUB162(_DAT_004c3180,0xe),
                        CONCAT24(sVar2 + sVar2 * SUB162(_DAT_004c3180,0xc),
                                 CONCAT22(sVar2 + sVar2 * SUB162(_DAT_004c3180,10),
                                          sVar2 + sVar2 * SUB162(_DAT_004c3180,8))));
      sVar42 = (short)(iVar15 << 3);
      uVar18 = uVar22;
      do {
        sVar65 = (short)uVar54 + sVar42;
        sVar55 = (short)((ulong)uVar54 >> 0x10);
        sVar67 = sVar55 + sVar42;
        sVar56 = (short)((ulong)uVar54 >> 0x20);
        sVar68 = sVar56 + sVar42;
        sVar58 = (short)((ulong)uVar54 >> 0x30);
        sVar69 = sVar58 + sVar42;
        sVar70 = (short)uVar59 + sVar42;
        sVar60 = (short)((ulong)uVar59 >> 0x10);
        sVar72 = sVar60 + sVar42;
        sVar61 = (short)((ulong)uVar59 >> 0x20);
        sVar73 = sVar61 + sVar42;
        sVar62 = (short)((ulong)uVar59 >> 0x30);
        sVar74 = sVar62 + sVar42;
        uVar18 = uVar18 - 0x10;
        puVar19[-1] = CONCAT26(sVar62 + sVar2,
                               CONCAT24(sVar61 + sVar2,
                                        CONCAT22(sVar60 + sVar2,(short)uVar59 + sVar2)));
        puVar19[-2] = CONCAT26(sVar58 + sVar2,
                               CONCAT24(sVar56 + sVar2,
                                        CONCAT22(sVar55 + sVar2,(short)uVar54 + sVar2)));
        puVar19[1] = CONCAT26(sVar74 + sVar2,
                              CONCAT24(sVar73 + sVar2,CONCAT22(sVar72 + sVar2,sVar70 + sVar2)));
        *puVar19 = CONCAT26(sVar69 + sVar2,
                            CONCAT24(sVar68 + sVar2,CONCAT22(sVar67 + sVar2,sVar65 + sVar2)));
        puVar19 = puVar19 + 4;
        uVar54 = CONCAT26(sVar69 + sVar42,
                          CONCAT24(sVar68 + sVar42,CONCAT22(sVar67 + sVar42,sVar65 + sVar42)));
        uVar59 = CONCAT26(sVar74 + sVar42,
                          CONCAT24(sVar73 + sVar42,CONCAT22(sVar72 + sVar42,sVar70 + sVar42)));
      } while (uVar18 != 0);
      if (uVar33 != uVar22) {
LAB_00e94288:
        lVar30 = param_3 - uVar17;
        psVar34 = param_1 + uVar17;
        do {
          iVar57 = iVar57 + iVar15;
          lVar30 = lVar30 + -1;
          *psVar34 = (short)iVar57;
          psVar34 = psVar34 + 1;
        } while (lVar30 != 0);
      }
    }
LAB_00e942a0:
    if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  local_f4 = local_f4 + 1;
  silk_bwexpander_32(param_2,param_3,(-1 << (ulong)(local_f4 & 0x1f)) + 0x10000);
  *(undefined4 *)((long)&local_a4 + uVar33 * 4) = 0x10000;
  *(undefined4 *)((long)&local_d8 + uVar33 * 4) = 0x10000;
  if ((int)param_3 < 2) {
    uVar25 = 0x10000;
    uVar14 = 0;
    uVar29 = 0;
    iVar15 = 1;
    puVar19 = &local_a4;
    uVar17 = 0x2000;
    uVar40 = 0x10000;
    if (!bVar5) goto LAB_00e937d8;
  }
  else {
    if (param_3 < 8 || ((int)uVar1 <= (int)(uVar1 + ~(uint)uVar18) || uVar18 >> 0x20 != 0)) {
      uVar17 = 0;
LAB_00e93d10:
      lVar44 = uVar47 - uVar17;
      iVar15 = uVar3 - (int)uVar17;
      piVar16 = (int *)((long)&local_d8 + uVar17 * 4);
      piVar21 = (int *)((long)&local_a4 + uVar17 * 4);
      piVar26 = (int *)(param_2 + (uVar33 + uVar17) * 4);
      do {
        iVar39 = *(int *)(param_2 + (long)iVar15 * 4);
        lVar44 = lVar44 + -1;
        iVar57 = *piVar26;
        iVar15 = iVar15 + -1;
        *piVar16 = iVar57 - iVar39;
        *piVar21 = -(iVar39 + iVar57);
        piVar16 = piVar16 + 1;
        piVar21 = piVar21 + 1;
        piVar26 = piVar26 + 1;
      } while (lVar44 != 0);
    }
    else {
      puVar19 = &local_a4;
      puVar20 = &local_d8;
      uVar17 = uVar18;
      uVar8 = uVar36;
      puVar31 = (undefined8 *)(param_2 + uVar33 * 4);
      do {
        uVar32 = uVar17 & 0xffffffff;
        uVar27 = uVar17 >> 0x1f;
        uVar8 = uVar8 - 4;
        uVar17 = (ulong)((int)uVar17 - 4);
        auVar51 = NEON_rev64(*(undefined (*) [16])
                              (param_2 + -0xc + (-(uVar27 & 1) & 0xfffffffc00000000 | uVar32 << 2)),
                             4);
        auVar51 = NEON_ext(auVar51,auVar51,8,1);
        iVar15 = (int)*puVar31;
        auVar64._0_4_ = auVar51._0_4_ + iVar15;
        iVar57 = (int)((ulong)*puVar31 >> 0x20);
        auVar64._4_4_ = auVar51._4_4_ + iVar57;
        iVar39 = (int)puVar31[1];
        auVar64._8_4_ = auVar51._8_4_ + iVar39;
        iVar10 = (int)((ulong)puVar31[1] >> 0x20);
        auVar64._12_4_ = auVar51._12_4_ + iVar10;
        auVar52._0_8_ = CONCAT44(iVar57 - auVar51._4_4_,iVar15 - auVar51._0_4_);
        auVar52._8_4_ = iVar39 - auVar51._8_4_;
        auVar52._12_4_ = iVar10 - auVar51._12_4_;
        auVar51 = NEON_neg(auVar64,4);
        puVar20[1] = auVar52._8_8_;
        *puVar20 = auVar52._0_8_;
        puVar19[1] = auVar51._8_8_;
        *puVar19 = auVar51._0_8_;
        puVar19 = puVar19 + 2;
        puVar20 = puVar20 + 2;
        puVar31 = puVar31 + 2;
      } while (uVar8 != 0);
      uVar17 = uVar36;
      if (uVar36 != uVar47) goto LAB_00e93d10;
    }
    uVar17 = uVar47;
    puVar19 = (undefined8 *)(local_e8 + lVar30 + 4);
    uVar8 = uVar47 + 0xffffffff;
    pauVar23 = (undefined (*) [16])((long)&uStack_b0 + lVar30);
    uVar27 = uVar37;
    if ((uVar48 < 4 ||
        (((((uVar3 < (uint)uVar13 || uVar13 >> 0x20 != 0) ||
           ((ulong)((long)&local_a4 + lVar41) < (long)&local_a4 + lVar41 + uVar13 * -4 || bVar7)) ||
          ((ulong)((long)&local_a4 + lVar30) < (long)&local_a4 + lVar30 + uVar13 * -4 || bVar7)) ||
         ((ulong)((long)&local_d8 + lVar41) < (long)&local_d8 + lVar41 + uVar13 * -4 || bVar7)) ||
        ((ulong)((long)&local_d8 + lVar30) < (long)&local_d8 + lVar30 + uVar13 * -4 || bVar7))) ||
        ((ulong)((long)&local_a4 + lVar46) < (long)&local_a4 + uVar45 * 4 &&
         (long)&local_a4 + uVar35 * 4 < (ulong)((long)&local_a4 + lVar41 + 4) ||
        (ulong)((long)&local_d8 + lVar46) < (long)&local_d8 + uVar45 * 4 &&
        (long)&local_d8 + uVar35 * 4 < (ulong)((long)&local_d8 + lVar41 + 4))) {
LAB_00e93dd8:
      do {
        uVar8 = uVar17 - 1;
        lVar44 = uVar17 * 4;
        bVar6 = uVar17 != 0;
        uVar17 = uVar17 - 1;
        lVar24 = (uVar8 & 0xffffffff) * 4;
        iVar15 = *(int *)((long)&local_d8 + lVar44);
        *(int *)((long)&local_a4 + lVar24) =
             *(int *)((long)&local_a4 + lVar24) - *(int *)((long)&local_a4 + lVar44);
        *(int *)((long)&local_d8 + lVar24) = *(int *)((long)&local_d8 + lVar24) + iVar15;
      } while (bVar6 && uVar17 != 0);
    }
    else {
      do {
        lVar44 = (uVar8 & 0xffffffff) * 4;
        uVar27 = uVar27 - 4;
        auVar51 = *pauVar23;
        uVar59 = puVar19[1];
        uVar54 = *puVar19;
        auVar49 = *(undefined (*) [16])((long)&uStack_b0 + lVar44);
        uVar71 = *(undefined8 *)(auStack_e0 + lVar44 + 4);
        uVar66 = *(undefined8 *)(local_e8 + lVar44 + 4);
        auVar53._0_8_ = CONCAT44(auVar49._4_4_ - auVar51._4_4_,auVar49._0_4_ - auVar51._0_4_);
        auVar53._8_4_ = auVar49._8_4_ - auVar51._8_4_;
        auVar53._12_4_ = auVar49._12_4_ - auVar51._12_4_;
        *(long *)(auStack_a8 + lVar44) = auVar53._8_8_;
        *(undefined8 *)((long)&uStack_b0 + lVar44) = auVar53._0_8_;
        *(ulong *)(auStack_e0 + lVar44 + 4) =
             CONCAT44((int)((ulong)uVar71 >> 0x20) + (int)((ulong)uVar59 >> 0x20),
                      (int)uVar71 + (int)uVar59);
        *(ulong *)(local_e8 + lVar44 + 4) =
             CONCAT44((int)((ulong)uVar66 >> 0x20) + (int)((ulong)uVar54 >> 0x20),
                      (int)uVar66 + (int)uVar54);
        puVar19 = puVar19 + -2;
        uVar8 = uVar8 - 4;
        pauVar23 = pauVar23 + -1;
      } while (uVar27 != 0);
      uVar17 = uVar47 - uVar37;
      if (uVar48 != uVar37) goto LAB_00e93dd8;
    }
    if (3 < (int)param_3) {
      lVar44 = 0;
      uVar17 = 2;
      uVar8 = uVar22;
      do {
        if (uVar17 < uVar47) {
          uVar32 = uVar22 - lVar44;
          uVar27 = uVar47;
          if (1 < uVar32) {
            uVar38 = uVar8 & 0xfffffffffffffffe;
            uVar27 = uVar47 - (uVar32 & 0xfffffffffffffffe);
            pauVar23 = (undefined (*) [16])((long)&uStack_b0 + lVar30);
            do {
              uVar38 = uVar38 - 2;
              *(ulong *)*pauVar23 =
                   CONCAT44((int)((ulong)*(undefined8 *)*pauVar23 >> 0x20) -
                            (int)((ulong)*(undefined8 *)(*pauVar23 + 8) >> 0x20),
                            (int)*(undefined8 *)*pauVar23 - (int)*(undefined8 *)(*pauVar23 + 8));
              pauVar23 = (undefined (*) [16])(pauVar23[-1] + 8);
            } while (uVar38 != 0);
            if (uVar32 == (uVar32 & 0xfffffffffffffffe)) goto LAB_00e93f98;
          }
          do {
            lVar24 = uVar27 * 4;
            uVar27 = uVar27 - 1;
            *(int *)(auStack_a8 + lVar24 + -4) =
                 *(int *)(auStack_a8 + lVar24 + -4) - *(int *)((long)&local_a4 + lVar24);
          } while ((long)uVar17 < (long)uVar27);
        }
LAB_00e93f98:
        lVar24 = uVar17 * 4;
        uVar17 = uVar17 + 1;
        lVar44 = lVar44 + 1;
        uVar8 = uVar8 - 1;
        *(int *)(auStack_a8 + lVar24 + -4) =
             *(int *)(auStack_a8 + lVar24 + -4) + *(int *)((long)&local_a4 + lVar24) * -2;
      } while (uVar17 != uVar1 + 1);
      lVar44 = 0;
      uVar17 = 2;
      uVar8 = uVar22;
      do {
        if (uVar17 < uVar47) {
          uVar32 = uVar22 - lVar44;
          uVar27 = uVar47;
          if (1 < uVar32) {
            uVar38 = uVar8 & 0xfffffffffffffffe;
            uVar27 = uVar47 - (uVar32 & 0xfffffffffffffffe);
            puVar19 = (undefined8 *)(local_e8 + lVar30 + 4);
            do {
              uVar38 = uVar38 - 2;
              *puVar19 = CONCAT44((int)((ulong)*puVar19 >> 0x20) - (int)((ulong)puVar19[1] >> 0x20),
                                  (int)*puVar19 - (int)puVar19[1]);
              puVar19 = puVar19 + -1;
            } while (uVar38 != 0);
            if (uVar32 == (uVar32 & 0xfffffffffffffffe)) goto LAB_00e94038;
          }
          do {
            lVar24 = uVar27 * 4;
            uVar27 = uVar27 - 1;
            *(int *)(auStack_e0 + lVar24) =
                 *(int *)(auStack_e0 + lVar24) - *(int *)((long)&local_d8 + lVar24);
          } while ((long)uVar17 < (long)uVar27);
        }
LAB_00e94038:
        lVar24 = uVar17 * 4;
        uVar17 = uVar17 + 1;
        lVar44 = lVar44 + 1;
        uVar8 = uVar8 - 1;
        *(int *)(auStack_e0 + lVar24) =
             *(int *)(auStack_e0 + lVar24) + *(int *)((long)&local_d8 + lVar24) * -2;
      } while (uVar17 != uVar1 + 1);
    }
    uVar25 = *(uint *)((long)&local_a4 + uVar33 * 4);
    uVar17 = uVar45;
    uVar40 = uVar25;
    if (!bVar5) {
      do {
        iVar15 = (int)uVar17;
        uVar17 = uVar17 - 1;
        uVar25 = *(int *)((long)&local_a4 + (ulong)(iVar15 - 2) * 4) +
                 (int)((ulong)((long)(int)uVar25 * 0x20000) >> 0x10);
      } while (1 < uVar17);
      uVar14 = 0;
      uVar29 = 0;
      puVar19 = &local_a4;
      iVar15 = 1;
      uVar17 = 0x2000;
      if ((int)uVar25 < 0) {
        uVar25 = *(uint *)((long)&local_d8 + uVar33 * 4);
        *param_1 = 0;
        uVar29 = 0;
        uVar14 = 1;
        puVar19 = &local_d8;
        uVar17 = 0x2000;
        iVar15 = 1;
        uVar8 = uVar45;
        if (1 < (int)param_3) {
          do {
            iVar15 = (int)uVar8;
            uVar8 = uVar8 - 1;
            uVar25 = *(int *)((long)puVar19 + (ulong)(iVar15 - 2) * 4) +
                     (int)((ulong)((long)(int)uVar25 * 0x20000) >> 0x10);
            uVar14 = 1;
          } while (1 < uVar8);
          uVar29 = 0;
          uVar17 = 0x2000;
          iVar15 = 1;
        }
      }
      goto LAB_00e937d8;
    }
  }
  uVar14 = 0;
  uVar29 = 0;
  puVar19 = &local_a4;
  uVar25 = (int)local_a4 +
           (int)((ulong)((long)(local_a4._4_4_ +
                               (int)((ulong)((long)((int)local_9c +
                                                   (int)((ulong)((long)(local_9c._4_4_ +
                                                                       (int)((ulong)((long)(local_94
                                                                                           + (int)((
                                                  ulong)((long)(iStack_90 +
                                                               (int)((ulong)((long)(local_8c +
                                                                                   (int)((ulong)((
                                                  long)(iStack_88 +
                                                       (int)((ulong)((long)(int)uVar40 * 0x20000) >>
                                                            0x10)) * 0x20000) >> 0x10)) * 0x20000)
                                                  >> 0x10)) * 0x20000) >> 0x10)) * 0x20000) >> 0x10)
                                                  ) * 0x20000) >> 0x10)) * 0x20000) >> 0x10)) *
                        0x20000) >> 0x10);
  iVar15 = 1;
  uVar17 = local_f0;
  if ((int)uVar25 < 0) {
    iVar15 = *(int *)((long)&local_d8 + uVar33 * 4);
    *param_1 = 0;
                    /* WARNING: Read-only address (ram,0x004c3180) is written */
    uVar29 = 0;
    puVar19 = &local_d8;
    uVar14 = 1;
    uVar25 = (int)local_d8 +
             (int)((ulong)((long)(local_d8._4_4_ +
                                 (int)((ulong)((long)((int)local_d0 +
                                                     (int)((ulong)((long)(local_d0._4_4_ +
                                                                         (int)((ulong)((long)(
                                                  local_c8 +
                                                  (int)((ulong)((long)(iStack_c4 +
                                                                      (int)((ulong)((long)(local_c0 
                                                  + (int)((ulong)((long)(iStack_bc +
                                                                        (int)((ulong)((long)iVar15 *
                                                                                     0x20000) >>
                                                                             0x10)) * 0x20000) >>
                                                         0x10)) * 0x20000) >> 0x10)) * 0x20000) >>
                                                  0x10)) * 0x20000) >> 0x10)) * 0x20000) >> 0x10)) *
                                              0x20000) >> 0x10)) * 0x20000) >> 0x10);
    uVar17 = 0x2000;
    iVar15 = 1;
  }
  goto LAB_00e937d8;
}


