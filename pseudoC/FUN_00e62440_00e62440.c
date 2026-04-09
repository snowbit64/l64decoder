// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e62440
// Entry Point: 00e62440
// Size: 2296 bytes
// Signature: undefined FUN_00e62440(void)


void FUN_00e62440(long param_1,undefined8 *param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  char cVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  short sVar13;
  uint uVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined (*pauVar28) [16];
  ulong uVar29;
  undefined (*pauVar30) [16];
  short *psVar31;
  uint uVar32;
  long lVar33;
  undefined2 uVar34;
  uint uVar35;
  int *piVar36;
  undefined8 *puVar37;
  short sVar38;
  int iVar39;
  short sVar43;
  undefined8 uVar40;
  short sVar42;
  short sVar45;
  undefined8 uVar41;
  int iVar44;
  int iVar46;
  undefined8 uVar47;
  int iVar48;
  int iVar49;
  undefined8 uVar50;
  int iVar51;
  int iVar52;
  undefined8 uVar53;
  int iVar54;
  undefined auVar55 [16];
  undefined auVar56 [16];
  long alStack_100 [2];
  undefined8 *local_f0;
  long local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  ulong local_a8;
  int local_a0;
  int local_9c;
  uint uStack_98;
  uint local_94;
  int local_90;
  int iStack_8c;
  short local_88 [4];
  short local_80;
  short local_7e;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  undefined8 uStack_74;
  long local_68;
  
  local_e8 = tpidr_el0;
  local_68 = *(long *)(local_e8 + 0x28);
  uVar17 = (long)alStack_100 -
           (((long)*(int *)(param_1 + 0x918) + (long)*(int *)(param_1 + 0x920)) * 4 + 0xfU &
           0xfffffffffffffff0);
  lVar33 = uVar17 - ((long)*(int *)(param_1 + 0x920) * 2 + 0xfU & 0xfffffffffffffff0);
  local_90 = *(int *)(param_1 + 0x10ac) >> 6;
  iVar2 = *(int *)(param_1 + 0x10b0) >> 6;
  if (*(int *)(param_1 + 0x948) != 0) {
    *(undefined8 *)(param_1 + 0x108a) = 0;
    *(undefined8 *)(param_1 + 0x1082) = 0;
    *(undefined8 *)(param_1 + 0x107a) = 0;
    *(undefined8 *)(param_1 + 0x1072) = 0;
  }
  local_e0 = param_2;
  local_b8 = param_3;
  iStack_8c = iVar2;
  FUN_00e62f38(&local_9c,&local_94,&local_a0,&uStack_98,param_1 + 4,&local_90,
               *(undefined4 *)(param_1 + 0x91c),*(undefined4 *)(param_1 + 0x914));
  iVar39 = *(int *)(param_1 + 0x10b8);
  if (local_9c >> (uStack_98 & 0x1f) < local_a0 >> (local_94 & 0x1f)) {
    iVar19 = iVar39 + -1;
    iVar39 = *(int *)(param_1 + 0x10bc);
  }
  else {
    iVar19 = *(int *)(param_1 + 0x10bc);
  }
  iVar19 = iVar19 * iVar39;
  uVar35 = *(uint *)(param_1 + 0x1058);
  if (iVar19 < 0x81) {
    iVar19 = 0x80;
  }
  if (0 < (int)uVar35) {
    uVar35 = 1;
  }
  local_d0 = -(ulong)(uVar35 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar35 << 1;
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,iVar19);
  puVar5 = &UNK_00563e24;
  if (*(int *)(param_1 + 0x105c) != 2) {
    puVar5 = &DAT_00563e20;
  }
  uVar35 = (uint)*(ushort *)(param_1 + 0x109c);
  uVar7 = *(ushort *)(puVar5 + local_d0);
  lVar23 = param_1 + 0x1072;
  silk_bwexpander(lVar23,*(undefined4 *)(param_1 + 0x924),0xfd71);
  iVar39 = *(int *)(param_1 + 0x924);
  uVar29 = (ulong)iVar39;
  __memcpy_chk(local_88,lVar23,uVar29 << 1,0x20);
  local_c8 = (ulong)uVar7;
  local_c0 = uVar17;
  if (*(int *)(param_1 + 0x1058) == 0) {
    if (*(int *)(param_1 + 0x105c) == 2) {
      sVar38 = NEON_addv(*(undefined8 *)(param_1 + 0x1068),2);
      uVar12 = 0x4000 - (sVar38 + *(short *)(param_1 + 0x1070));
      if ((short)uVar12 < 0xcce) {
        uVar12 = 0xccd;
      }
      uVar35 = (int)*(short *)(param_1 + 0x10a8) * (uint)uVar12 >> 0xe;
    }
    else {
      iVar39 = silk_LPC_inverse_pred_gain_c(lVar23,iVar39);
      uVar29 = (ulong)*(uint *)(param_1 + 0x924);
      if (0x7ffffff < iVar39) {
        iVar39 = 0x8000000;
      }
      uVar35 = 0x4000;
      if (iVar39 < 0x400001) {
        iVar39 = 0x400000;
      }
      local_c8 = (ulong)(uint)((int)((ulong)(uint)(iVar39 << 3) * (long)(short)uVar7 >> 0x10) >> 0xe
                              );
    }
  }
  uVar34 = (undefined2)uVar35;
  iVar39 = *(int *)(param_1 + 0x920);
  uVar32 = *(uint *)(param_1 + 0x1098);
  iVar19 = (*(int *)(param_1 + 0x1064) >> 7) + 1 >> 1;
  uVar10 = (iVar39 - ((int)uVar29 + iVar19)) - 2;
  uVar17 = -(ulong)(uVar10 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar10 << 1;
  silk_LPC_analysis_filter
            (lVar33 + uVar17,param_1 + uVar17 + 0x544,local_88,iVar39 - uVar10,uVar29 & 0xffffffff,
             param_4);
  uVar14 = *(uint *)(param_1 + 0x10b0);
  uVar1 = -uVar14;
  if (-1 < (int)uVar14) {
    uVar1 = uVar14;
  }
  iVar48 = (int)LZCOUNT(uVar1);
  iVar46 = uVar14 << (ulong)(iVar48 - 1U & 0x1f);
  iVar44 = iVar46 >> 0x10;
  uVar14 = 0;
  if (iVar44 != 0) {
    uVar14 = 0x1fffffff / iVar44;
  }
  uVar14 = (int)((ulong)(((long)-((-((ulong)(uVar14 >> 0xf) & 1) & 0xfffffff800000000 |
                                  ((ulong)uVar14 & 0xffff) << 0x13) * (long)iVar46 &
                                 0xfffffff800000000) >> 0x20) * (long)(int)uVar14) >> 0x10) +
           uVar14 * 0x10000;
  if (uVar1 >> 0x10 == 0) {
    uVar11 = iVar48 - 0x10;
    uVar1 = -0x80000000 >> (uVar11 & 0x1f);
    uVar9 = 0x7fffffff >> (ulong)(uVar11 & 0x1f);
    if ((int)uVar1 <= (int)uVar14) {
      uVar1 = uVar14;
    }
    if ((int)uVar14 <= (int)uVar9) {
      uVar9 = uVar1;
    }
    iVar44 = uVar9 << (ulong)(uVar11 & 0x1f);
  }
  else {
    iVar44 = (int)uVar14 >> (0x10U - iVar48 & 0x1f);
  }
  uVar1 = *(uint *)(param_1 + 0x924);
  uVar17 = (ulong)uVar1;
  iVar46 = *(int *)(param_1 + 0x920);
  lVar23 = (long)iVar46;
  if (0x3ffffffe < iVar44) {
    iVar44 = 0x3fffffff;
  }
  local_a8 = uVar17;
  if ((int)(uVar1 + uVar10) < iVar46) {
    lVar26 = (long)(int)(uVar1 + uVar10);
    lVar20 = (long)iVar44;
    uVar29 = lVar23 - lVar26;
    lVar22 = lVar26;
    if (7 < uVar29) {
      uVar24 = uVar29 & 0xfffffffffffffff8;
      lVar22 = uVar24 + lVar26;
      puVar25 = (undefined8 *)(lVar33 + lVar26 * 2);
      puVar27 = (undefined8 *)(local_c0 + lVar26 * 4);
      uVar21 = uVar24;
      do {
        uVar47 = puVar25[1];
        uVar40 = *puVar25;
        uVar21 = uVar21 - 8;
        puVar27[1] = CONCAT44((int)((ulong)(lVar20 * (int)(short)((ulong)uVar40 >> 0x30)) >> 0x10),
                              (int)((ulong)(lVar20 * (int)(short)((ulong)uVar40 >> 0x20)) >> 0x10));
        *puVar27 = CONCAT44((int)((ulong)(lVar20 * (int)(short)((ulong)uVar40 >> 0x10)) >> 0x10),
                            (int)((ulong)(lVar20 * (int)(short)uVar40) >> 0x10));
        puVar27[3] = CONCAT44((int)((ulong)(lVar20 * (int)(short)((ulong)uVar47 >> 0x30)) >> 0x10),
                              (int)((ulong)(lVar20 * (int)(short)((ulong)uVar47 >> 0x20)) >> 0x10));
        puVar27[2] = CONCAT44((int)((ulong)(lVar20 * (int)(short)((ulong)uVar47 >> 0x10)) >> 0x10),
                              (int)((ulong)(lVar20 * (int)(short)uVar47) >> 0x10));
        puVar25 = puVar25 + 2;
        puVar27 = puVar27 + 4;
      } while (uVar21 != 0);
      if (uVar29 == uVar24) goto LAB_00e62844;
    }
    do {
      *(int *)(local_c0 + lVar22 * 4) =
           (int)((ulong)(*(short *)(lVar33 + lVar22 * 2) * lVar20) >> 0x10);
      lVar22 = lVar22 + 1;
    } while (lVar22 < lVar23);
  }
LAB_00e62844:
  iVar44 = *(int *)(param_1 + 0x914);
  local_b0 = param_1;
  lVar33 = param_1;
  if (0 < iVar44) {
    sVar38 = *(short *)(param_1 + 0x90c);
    iVar48 = 0;
    iVar49 = *(int *)(param_1 + 0x91c);
    sVar8 = *(short *)(&DAT_00563e28 + local_d0);
    iVar51 = sVar38 * 0x1200;
    cVar6 = *(char *)(param_1 + 0xae5);
    uVar40 = *(undefined8 *)(param_1 + 0x1068);
    uVar14 = (uint)*(ushort *)(param_1 + 0x1070);
    alStack_100[1] = lVar23;
    do {
      sVar13 = (short)uVar35;
      sVar42 = (short)((ulong)uVar40 >> 0x10);
      sVar43 = (short)((ulong)uVar40 >> 0x20);
      sVar45 = (short)((ulong)uVar40 >> 0x30);
      if (0 < iVar49) {
        piVar16 = (int *)(local_c0 + (long)iVar39 * 4);
        piVar36 = (int *)((local_c0 - 8) + (long)((iVar39 - iVar19) + 2) * 4);
        iVar19 = iVar49;
        do {
          uVar32 = uVar32 * 0xbb38435 + 0x3619636b;
          iVar39 = iVar39 + 1;
          iVar19 = iVar19 + -1;
          *piVar16 = ((int)(((long)piVar36[1] * (long)sVar42 * 0x10000 & 0xffffffff00000000U) +
                            (long)piVar36[2] * (long)(short)uVar40 * 0x10000 +
                            ((long)piVar36[1] * (long)sVar43 * 0x10000 & 0xffffffff00000000U) +
                            ((long)piVar36[-1] * (long)sVar45 * 0x10000 & 0xffffffff00000000U) +
                            ((long)piVar36[-2] * (long)(short)uVar14 * 0x10000 & 0x3fffffff00000000U
                            ) + 0x200000000 >> 0x20) +
                     (int)((ulong)((long)*(int *)(param_1 + (ulong)((int)local_d8 - 0x80) * 4 + 4 +
                                                 (ulong)(uVar32 >> 0x19) * 4) * (long)sVar13) >>
                          0x10)) * 4;
          piVar16 = piVar16 + 1;
          piVar36 = piVar36 + 1;
        } while (iVar19 != 0);
      }
      iVar48 = iVar48 + 1;
      uVar40 = CONCAT26((short)((uint)((int)sVar8 * (int)sVar45) >> 0xf),
                        CONCAT24((short)((uint)((int)sVar8 * (int)sVar43) >> 0xf),
                                 CONCAT22((short)((uint)((int)sVar8 * (int)sVar42) >> 0xf),
                                          (short)((uint)((int)sVar8 * (int)(short)uVar40) >> 0xf))))
      ;
      uVar14 = (uint)((int)(short)uVar14 * (int)sVar8) >> 0xf;
      iVar52 = *(int *)(param_1 + 0x1064) +
               (int)((ulong)((long)*(int *)(param_1 + 0x1064) * 0x28f) >> 0x10);
      uVar35 = (int)sVar13;
      if (cVar6 != '\0') {
        uVar35 = (uint)((int)(short)local_c8 * (int)sVar13) >> 0xf;
      }
      uVar34 = (undefined2)uVar35;
      if (iVar52 + sVar38 * -0x1200 < 0 == SBORROW4(iVar52,iVar51)) {
        iVar52 = iVar51;
      }
      iVar19 = (iVar52 >> 7) + 1 >> 1;
      *(int *)(param_1 + 0x1064) = iVar52;
    } while (iVar48 != iVar44);
    *(undefined8 *)(param_1 + 0x1068) = uVar40;
    *(short *)(param_1 + 0x1070) = (short)uVar14;
    lVar33 = local_b0;
    local_c8 = local_c0 - 8;
  }
  puVar27 = (undefined8 *)(lVar33 + 0x504);
  uVar35 = *(uint *)(lVar33 + 0x918);
  puVar25 = (undefined8 *)(local_c0 + (long)(iVar46 + -0x10) * 4);
  uVar41 = *puVar27;
  uVar53 = *(undefined8 *)(lVar33 + 0x51c);
  uVar50 = *(undefined8 *)(lVar33 + 0x514);
  local_f0 = puVar27;
  uVar40 = *(undefined8 *)(lVar33 + 0x524);
  uVar47 = *(undefined8 *)(lVar33 + 0x52c);
  auVar55 = *(undefined (*) [16])(lVar33 + 0x534);
  puVar25[1] = *(undefined8 *)(lVar33 + 0x50c);
  *puVar25 = uVar41;
  puVar25[3] = uVar53;
  puVar25[2] = uVar50;
  puVar25[5] = uVar47;
  puVar25[4] = uVar40;
  puVar25[7] = auVar55._8_8_;
  puVar25[6] = auVar55._0_8_;
  if (0 < (int)uVar35) {
    uVar29 = 0;
    lVar23 = local_c0 + (long)(iVar46 + -0x10) * 4;
    uVar21 = uVar17 - 10;
    pauVar28 = (undefined (*) [16])(lVar23 + -8);
    local_c0 = uVar21;
    uVar24 = uVar21 & 0xfffffffffffffff8;
    lVar23 = lVar23 + 0x3c;
    local_c8 = uVar24;
    local_d8 = &uStack_74;
    local_d0 = uVar24 + 10;
    do {
      iVar39 = (int)uVar29;
      iVar39 = ((int)uVar1 >> 1) +
               (int)((ulong)((long)local_88[0] * (long)*(int *)((long)puVar25 + uVar29 * 4 + 0x40))
                    >> 0x10) +
               (int)((ulong)((long)local_88[1] * (long)*(int *)((long)puVar25 + uVar29 * 4 + 0x38))
                    >> 0x10) +
               (int)((ulong)((long)local_88[2] * (long)*(int *)((long)puVar25 + uVar29 * 4 + 0x34))
                    >> 0x10) +
               (int)((ulong)((long)local_88[3] * (long)*(int *)((long)puVar25 + uVar29 * 4 + 0x34))
                    >> 0x10) +
               (int)((ulong)((long)local_80 * (long)*(int *)((long)puVar25 + uVar29 * 4 + 0x2c)) >>
                    0x10) +
               (int)((ulong)((long)local_7e *
                            (long)*(int *)((long)puVar25 + (ulong)(iVar39 + 10) * 4)) >> 0x10) +
               (int)((ulong)((long)local_7c *
                            (long)*(int *)((long)puVar25 + (ulong)(iVar39 + 9) * 4)) >> 0x10) +
               (int)((ulong)((long)local_7a *
                            (long)*(int *)((long)puVar25 + (ulong)(iVar39 + 8) * 4)) >> 0x10) +
               (int)((ulong)((long)local_78 *
                            (long)*(int *)((long)puVar25 + (ulong)(iVar39 + 7) * 4)) >> 0x10) +
               (int)((ulong)((long)local_76 *
                            (long)*(int *)((long)puVar25 + (ulong)(iVar39 + 6) * 4)) >> 0x10);
      if (10 < (int)uVar1) {
        if (uVar21 < 8) {
          uVar15 = 10;
        }
        else {
          iVar46 = 0;
          iVar48 = 0;
          iVar49 = 0;
          iVar51 = 0;
          iVar52 = 0;
          iVar54 = 0;
          iVar44 = 0;
          uVar15 = uVar24;
          pauVar30 = pauVar28;
          puVar37 = &uStack_74;
          do {
            uVar15 = uVar15 - 8;
            auVar55 = NEON_rev64(*pauVar30,4);
            auVar56 = NEON_rev64(pauVar30[1],4);
            uVar47 = puVar37[1];
            uVar40 = *puVar37;
            auVar55 = NEON_ext(auVar55,auVar55,8,1);
            auVar56 = NEON_ext(auVar56,auVar56,8,1);
            iVar49 = iVar49 + (int)((ulong)((long)(int)(short)uVar47 * (long)auVar55._0_4_) >> 0x10)
            ;
            iVar51 = iVar51 + (int)((ulong)((long)(int)(short)((ulong)uVar47 >> 0x10) *
                                           (long)auVar55._4_4_) >> 0x10);
            iVar52 = iVar52 + (int)((ulong)((long)(int)(short)((ulong)uVar47 >> 0x20) *
                                           (long)auVar55._8_4_) >> 0x10);
            iVar54 = iVar54 + (int)((ulong)((long)(int)(short)((ulong)uVar47 >> 0x30) *
                                           (long)auVar55._12_4_) >> 0x10);
            iVar39 = iVar39 + (int)((ulong)((long)(int)(short)uVar40 * (long)auVar56._0_4_) >> 0x10)
            ;
            iVar44 = iVar44 + (int)((ulong)((long)(int)(short)((ulong)uVar40 >> 0x10) *
                                           (long)auVar56._4_4_) >> 0x10);
            iVar46 = iVar46 + (int)((ulong)((long)(int)(short)((ulong)uVar40 >> 0x20) *
                                           (long)auVar56._8_4_) >> 0x10);
            iVar48 = iVar48 + (int)((ulong)((long)(int)(short)((ulong)uVar40 >> 0x30) *
                                           (long)auVar56._12_4_) >> 0x10);
            pauVar30 = pauVar30 + -2;
            puVar37 = puVar37 + 2;
          } while (uVar15 != 0);
          iVar39 = iVar39 + iVar49 + iVar44 + iVar51 + iVar46 + iVar52 + iVar48 + iVar54;
          uVar15 = uVar24 + 10;
          if (uVar21 == uVar24) goto LAB_00e62c9c;
        }
        lVar22 = uVar17 - uVar15;
        piVar16 = (int *)(lVar23 + uVar15 * -4);
        psVar31 = local_88 + uVar15;
        do {
          lVar22 = lVar22 + -1;
          iVar39 = iVar39 + (int)((ulong)((long)*psVar31 * (long)*piVar16) >> 0x10);
          piVar16 = piVar16 + -1;
          psVar31 = psVar31 + 1;
        } while (lVar22 != 0);
      }
LAB_00e62c9c:
      uVar15 = uVar29 + 0x10;
      if (iVar39 < -0x7ffffff) {
        iVar39 = -0x8000000;
      }
      uVar14 = *(uint *)((long)puVar25 + (uVar15 & 0xffffffff) * 4);
      if (0x7fffffe < iVar39) {
        iVar39 = 0x7ffffff;
      }
      uVar10 = iVar39 * 0x10;
      iVar39 = uVar14 + uVar10;
      if (iVar39 < 0) {
        iVar44 = 0x7fffffff;
        if ((int)(uVar14 | uVar10) < 0) {
          iVar44 = iVar39;
        }
      }
      else {
        iVar44 = iVar39;
        if ((int)(uVar14 & uVar10) < 0) {
          iVar44 = -0x80000000;
        }
      }
      pauVar28 = (undefined (*) [16])(*pauVar28 + 4);
      uVar18 = (long)iVar44 * (long)iVar2;
      lVar23 = lVar23 + 4;
      iVar39 = (int)(uVar18 >> 0x10);
      uVar3 = 0x8000;
      if (-0x800081 < iVar39) {
        uVar3 = (short)(((uint)(uVar18 >> 0x17) & 0x1ffffff) + 1 >> 1);
      }
      uVar4 = 0x7fff;
      if (iVar39 < 0x7fff80) {
        uVar4 = uVar3;
      }
      *(undefined2 *)(local_b8 + uVar29 * 2) = uVar4;
      uVar29 = uVar29 + 1;
      *(int *)((long)puVar25 + (uVar15 & 0xffffffff) * 4) = iVar44;
    } while (uVar29 != uVar35);
  }
  puVar25 = (undefined8 *)((long)puVar25 + (long)(int)uVar35 * 4);
  uVar40 = *puVar25;
  uVar41 = puVar25[3];
  uVar47 = puVar25[2];
  *(undefined8 *)(lVar33 + 0x50c) = puVar25[1];
  *puVar27 = uVar40;
  *(undefined8 *)(lVar33 + 0x51c) = uVar41;
  *(undefined8 *)(lVar33 + 0x514) = uVar47;
  auVar55 = *(undefined (*) [16])(puVar25 + 4);
  uVar47 = puVar25[7];
  uVar40 = puVar25[6];
  *(long *)(lVar33 + 0x52c) = auVar55._8_8_;
  *(long *)(lVar33 + 0x524) = auVar55._0_8_;
  *(undefined8 *)(lVar33 + 0x53c) = uVar47;
  *(undefined8 *)(lVar33 + 0x534) = uVar40;
  *(uint *)(param_1 + 0x1098) = uVar32;
  *(undefined2 *)(param_1 + 0x109c) = uVar34;
  local_e0[1] = CONCAT44(iVar19,iVar19);
  *local_e0 = CONCAT44(iVar19,iVar19);
  if (*(long *)(local_e8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


