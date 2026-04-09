// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e73d78
// Entry Point: 00e73d78
// Size: 1968 bytes
// Signature: undefined FUN_00e73d78(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined2 param_9, undefined8 param_10, undefined4 param_11)


ulong FUN_00e73d78(int *param_1,ushort *param_2,ulong param_3,undefined4 param_4,uint param_5,
                  short *param_6,undefined4 param_7,ushort *param_8,undefined2 param_9,
                  short *param_10,uint param_11)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  short sVar9;
  uint uVar10;
  ushort *puVar11;
  short *psVar12;
  ushort *puVar13;
  ushort *puVar14;
  short *psVar15;
  ulong uVar16;
  short *psVar17;
  ushort uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  short *psVar28;
  ushort *puVar29;
  int iVar30;
  ulong uVar31;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  
  bVar8 = param_5 == 1;
  iVar20 = *param_1;
  uVar10 = (uint)param_3;
  if (uVar10 == 1) {
    if (param_1[10] < 8) {
      if (param_1[1] == 0) goto LAB_00e73e94;
      uVar18 = 0x4000;
    }
    else {
      if (iVar20 == 0) {
        uVar10 = ec_dec_bits(*(undefined8 *)(param_1 + 8),1);
        iVar20 = param_1[1];
        param_1[10] = param_1[10] + -8;
      }
      else {
        uVar10 = (uint)(*param_2 >> 0xf);
        ec_enc_bits(*(undefined8 *)(param_1 + 8),*param_2 >> 0xf,1);
        iVar20 = param_1[1];
        param_1[10] = param_1[10] + -8;
      }
      if (iVar20 == 0) goto LAB_00e73e94;
      uVar18 = 0xc000;
      if (uVar10 == 0) {
        uVar18 = 0x4000;
      }
    }
    *param_2 = uVar18;
LAB_00e73e94:
    if (param_8 != (ushort *)0x0) {
      *param_8 = (ushort)((ulong)(long)(short)*param_2 >> 4);
      return 1;
    }
    return 1;
  }
  uVar32 = 0;
  if (param_5 != 0) {
    uVar32 = uVar10 / param_5;
  }
  uVar31 = param_3 & 0xffffffff;
  uVar34 = (ulong)param_11;
  uVar21 = param_1[7];
  if ((param_6 != (short *)0x0) && (param_10 != (short *)0x0)) {
    if ((int)uVar21 < 1) {
      if (((int)param_5 < 2) && ((uVar32 & 1) != 0 || uVar21 == 0)) goto joined_r0x00e73ee0;
    }
    memcpy(param_10,param_6,-(uVar31 >> 0x1f) & 0xfffffffe00000000 | uVar31 << 1);
    param_6 = param_10;
  }
joined_r0x00e73ee0:
  uVar6 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU);
  if (0 < (int)uVar21) {
    uVar19 = 0;
    do {
      uVar3 = (int)uVar10 >> (uVar19 & 0x1f);
      uVar23 = 1 << (ulong)(uVar19 & 0x1f);
      uVar22 = (ulong)uVar23;
      if (((iVar20 != 0) && (uVar19 != 0x1f)) && (1 < (int)uVar3)) {
        uVar33 = 0;
        puVar13 = param_2 + uVar23;
        puVar11 = param_2;
        uVar27 = (ulong)(uVar3 >> 1);
        puVar29 = puVar13;
        puVar14 = param_2;
        do {
          do {
            uVar18 = *puVar13;
            uVar27 = uVar27 - 1;
            iVar30 = (short)*puVar11 * 0x5a82 + 0x4000;
            *puVar11 = (ushort)((uint)(iVar30 + (short)uVar18 * 0x5a82) >> 0xf);
            *puVar13 = (ushort)((uint)(iVar30 + (short)uVar18 * -0x5a82) >> 0xf);
            puVar13 = puVar13 + uVar22 * 2;
            puVar11 = (ushort *)
                      ((long)puVar11 +
                      (-(ulong)((uVar23 << 1) >> 0x1f) & 0xfffffffe00000000 |
                      (ulong)(uVar23 << 1) << 1));
          } while (uVar27 != 0);
          uVar33 = uVar33 + 1;
          puVar13 = puVar29 + 1;
          puVar11 = puVar14 + 1;
          uVar27 = (ulong)(uVar3 >> 1);
          puVar29 = puVar13;
          puVar14 = puVar11;
        } while (uVar33 != uVar22);
      }
      if (((param_6 != (short *)0x0) && (uVar19 != 0x1f)) && (1 < (int)uVar3)) {
        uVar33 = 0;
        psVar17 = param_6 + uVar23;
        psVar15 = param_6;
        uVar27 = (ulong)(uVar3 >> 1);
        psVar28 = psVar17;
        psVar12 = param_6;
        do {
          do {
            sVar9 = *psVar17;
            uVar27 = uVar27 - 1;
            iVar30 = *psVar15 * 0x5a82 + 0x4000;
            *psVar15 = (short)((uint)(iVar30 + sVar9 * 0x5a82) >> 0xf);
            *psVar17 = (short)((uint)(iVar30 + sVar9 * -0x5a82) >> 0xf);
            psVar17 = psVar17 + uVar22 * 2;
            psVar15 = (short *)((long)psVar15 +
                               (-(ulong)((uVar23 << 1) >> 0x1f) & 0xfffffffe00000000 |
                               (ulong)(uVar23 << 1) << 1));
          } while (uVar27 != 0);
          uVar33 = uVar33 + 1;
          psVar17 = psVar28 + 1;
          psVar15 = psVar12 + 1;
          uVar27 = (ulong)(uVar3 >> 1);
          psVar28 = psVar17;
          psVar12 = psVar15;
        } while (uVar33 != uVar22);
      }
      uVar19 = uVar19 + 1;
      uVar34 = (ulong)((uint)(byte)(&DAT_004c5190)[uVar34 & 0xf] |
                      (uint)(byte)(&DAT_004c5190)[(int)uVar34 >> 4] << 2);
    } while (uVar19 != uVar6);
  }
  uVar19 = (uint)uVar34;
  iVar30 = 0;
  uVar32 = uVar32 << (ulong)(uVar6 & 0x1f);
  param_5 = (int)param_5 >> (uVar6 & 0x1f);
  uVar22 = (ulong)param_5;
  if (((uVar32 & 1) == 0) && ((int)uVar21 < 0)) {
    iVar30 = 0;
    uVar33 = uVar22;
    uVar23 = uVar32;
    uVar3 = uVar21;
    do {
      uVar19 = (uint)uVar33;
      uVar4 = uVar19 * 2;
      uVar22 = (ulong)uVar4;
      if (((iVar20 != 0) && (1 < (int)uVar23)) && (0 < (int)uVar19)) {
        uVar27 = 0;
        puVar13 = param_2 + uVar33;
        puVar11 = param_2;
        uVar16 = (ulong)(uVar23 >> 1);
        puVar29 = puVar13;
        puVar14 = param_2;
        do {
          do {
            uVar18 = *puVar13;
            uVar16 = uVar16 - 1;
            iVar5 = (short)*puVar11 * 0x5a82 + 0x4000;
            *puVar11 = (ushort)((uint)(iVar5 + (short)uVar18 * 0x5a82) >> 0xf);
            *puVar13 = (ushort)((uint)(iVar5 + (short)uVar18 * -0x5a82) >> 0xf);
            puVar13 = puVar13 + uVar33 * 2;
            puVar11 = (ushort *)
                      ((long)puVar11 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | uVar22 << 1))
            ;
          } while (uVar16 != 0);
          uVar27 = uVar27 + 1;
          puVar13 = puVar29 + 1;
          puVar11 = puVar14 + 1;
          uVar16 = (ulong)(uVar23 >> 1);
          puVar29 = puVar13;
          puVar14 = puVar11;
        } while (uVar27 != uVar33);
      }
      if (((param_6 != (short *)0x0) && (1 < (int)uVar23)) && (0 < (int)uVar19)) {
        uVar27 = 0;
        psVar17 = param_6 + uVar33;
        psVar15 = param_6;
        uVar16 = (ulong)(uVar23 >> 1);
        psVar28 = psVar17;
        psVar12 = param_6;
        do {
          do {
            sVar9 = *psVar17;
            uVar16 = uVar16 - 1;
            iVar5 = *psVar15 * 0x5a82 + 0x4000;
            *psVar15 = (short)((uint)(iVar5 + sVar9 * 0x5a82) >> 0xf);
            *psVar17 = (short)((uint)(iVar5 + sVar9 * -0x5a82) >> 0xf);
            psVar17 = psVar17 + uVar33 * 2;
            psVar15 = (short *)((long)psVar15 +
                               (-(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | uVar22 << 1));
          } while (uVar16 != 0);
          uVar27 = uVar27 + 1;
          psVar17 = psVar28 + 1;
          psVar15 = psVar12 + 1;
          uVar16 = (ulong)(uVar23 >> 1);
          psVar28 = psVar17;
          psVar12 = psVar15;
        } while (uVar27 != uVar33);
      }
      uVar32 = (int)uVar23 >> 1;
      uVar19 = (uint)uVar34 << (ulong)(uVar19 & 0x1f) | (uint)uVar34;
      uVar34 = (ulong)uVar19;
      iVar30 = iVar30 + 1;
    } while (((uVar23 >> 1 & 1) == 0) &&
            (bVar7 = SCARRY4(uVar3,1), iVar5 = uVar3 + 1, uVar33 = uVar22, uVar23 = uVar32,
            uVar3 = uVar3 + 1, iVar5 < 0 != bVar7));
    if (1 < (int)uVar4) goto LAB_00e741b8;
LAB_00e7425c:
    uVar34 = FUN_00e75068(param_1,param_2,uVar31,param_4,uVar22,param_6,param_7,param_9,uVar19);
    uVar34 = uVar34 & 0xffffffff;
    if (param_1[1] == 0) {
      return uVar34;
    }
  }
  else {
    if ((int)param_5 < 2) goto LAB_00e7425c;
LAB_00e741b8:
    iVar5 = (int)uVar32 >> (uVar6 & 0x1f);
    iVar2 = (int)uVar22 << (ulong)(uVar6 & 0x1f);
    if (iVar20 != 0) {
      FUN_00e74e64(param_2,iVar5,iVar2,bVar8);
    }
    if (param_6 != (short *)0x0) {
      FUN_00e74e64(param_6,iVar5,iVar2,bVar8);
    }
    uVar34 = FUN_00e75068(param_1,param_2,uVar31,param_4,uVar22,param_6,param_7,param_9,uVar19);
    uVar34 = uVar34 & 0xffffffff;
    if (param_1[1] == 0) {
      return uVar34;
    }
    FUN_00e75774(param_2,iVar5,iVar2,bVar8);
  }
  uVar19 = (uint)uVar22;
  if (iVar30 != 0) {
    iVar20 = 0;
    do {
      uVar19 = (int)uVar22 >> 1;
      uVar33 = (ulong)uVar19;
      if ((1 < (int)(uVar32 * 2)) && (1 < (int)uVar22)) {
        uVar27 = 0;
        puVar13 = param_2 + uVar19;
        puVar11 = param_2;
        uVar16 = (ulong)(uVar32 & 0x7fffffff);
        puVar29 = param_2;
        puVar14 = puVar13;
        do {
          do {
            uVar18 = *puVar13;
            uVar16 = uVar16 - 1;
            iVar5 = (short)*puVar11 * 0x5a82 + 0x4000;
            *puVar11 = (ushort)((uint)(iVar5 + (short)uVar18 * 0x5a82) >> 0xf);
            *puVar13 = (ushort)((uint)(iVar5 + (short)uVar18 * -0x5a82) >> 0xf);
            puVar13 = puVar13 + uVar33 * 2;
            puVar11 = puVar11 + (uVar22 & 0xfffffffe);
          } while (uVar16 != 0);
          uVar27 = uVar27 + 1;
          puVar13 = puVar14 + 1;
          puVar11 = puVar29 + 1;
          uVar16 = (ulong)(uVar32 & 0x7fffffff);
          puVar29 = puVar11;
          puVar14 = puVar13;
        } while (uVar27 != uVar33);
      }
      iVar20 = iVar20 + 1;
      uVar34 = (ulong)((uint)uVar34 >> (ulong)(uVar19 & 0x1f) | (uint)uVar34);
      uVar22 = uVar33;
      uVar32 = uVar32 * 2;
    } while (iVar20 != iVar30);
  }
  uVar32 = (uint)uVar34;
  if (0 < (int)uVar21) {
    uVar21 = 0;
    do {
      if ((uVar21 != 0x1f) && (uVar32 = (int)uVar10 >> (uVar21 & 0x1f), 1 < (int)uVar32)) {
        uVar3 = 1 << (ulong)(uVar21 & 0x1f);
        uVar22 = 0;
        uVar27 = (ulong)(uVar32 >> 1);
        puVar13 = param_2 + uVar3;
        puVar11 = param_2;
        uVar33 = uVar27;
        puVar29 = puVar13;
        puVar14 = param_2;
        do {
          do {
            uVar18 = *puVar13;
            uVar33 = uVar33 - 1;
            iVar20 = (short)*puVar11 * 0x5a82 + 0x4000;
            *puVar11 = (ushort)((uint)(iVar20 + (short)uVar18 * 0x5a82) >> 0xf);
            *puVar13 = (ushort)((uint)(iVar20 + (short)uVar18 * -0x5a82) >> 0xf);
            puVar13 = puVar13 + (ulong)uVar3 * 2;
            puVar11 = (ushort *)
                      ((long)puVar11 +
                      (-(ulong)((uVar3 << 1) >> 0x1f) & 0xfffffffe00000000 |
                      (ulong)(uVar3 << 1) << 1));
          } while (uVar33 != 0);
          uVar22 = uVar22 + 1;
          puVar13 = puVar29 + 1;
          puVar11 = puVar14 + 1;
          uVar33 = uVar27;
          puVar29 = puVar13;
          puVar14 = puVar11;
        } while (uVar22 != uVar3);
      }
      pbVar1 = &DAT_004c3b40 + uVar34;
      uVar34 = (ulong)*pbVar1;
      uVar32 = (uint)*pbVar1;
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar6);
  }
  if ((param_8 != (ushort *)0x0) && (sVar9 = celt_sqrt(uVar10 << 0x16), 0 < (int)uVar10)) {
    iVar20 = (int)sVar9;
    if ((uVar10 < 0x10) || ((param_8 < param_2 + uVar31 && (param_2 < param_8 + uVar31)))) {
      param_3 = 0;
    }
    else {
      param_3 = param_3 & 0xfffffff0;
      puVar25 = (undefined8 *)(param_2 + 8);
      puVar26 = (undefined8 *)(param_8 + 8);
      uVar34 = param_3;
      do {
        uVar36 = puVar25[-1];
        uVar35 = puVar25[-2];
        uVar38 = puVar25[1];
        uVar37 = *puVar25;
        puVar25 = puVar25 + 4;
        uVar34 = uVar34 - 0x10;
        puVar26[-1] = CONCAT26((short)((uint)(iVar20 * (short)((ulong)uVar36 >> 0x30)) >> 0xf),
                               CONCAT24((short)((uint)(iVar20 * (short)((ulong)uVar36 >> 0x20)) >>
                                               0xf),
                                        CONCAT22((short)((uint)(iVar20 * (short)((ulong)uVar36 >>
                                                                                0x10)) >> 0xf),
                                                 (short)((uint)(iVar20 * (short)uVar36) >> 0xf))));
        puVar26[-2] = CONCAT26((short)((uint)(iVar20 * (short)((ulong)uVar35 >> 0x30)) >> 0xf),
                               CONCAT24((short)((uint)(iVar20 * (short)((ulong)uVar35 >> 0x20)) >>
                                               0xf),
                                        CONCAT22((short)((uint)(iVar20 * (short)((ulong)uVar35 >>
                                                                                0x10)) >> 0xf),
                                                 (short)((uint)(iVar20 * (short)uVar35) >> 0xf))));
        puVar26[1] = CONCAT26((short)((uint)(iVar20 * (short)((ulong)uVar38 >> 0x30)) >> 0xf),
                              CONCAT24((short)((uint)(iVar20 * (short)((ulong)uVar38 >> 0x20)) >>
                                              0xf),
                                       CONCAT22((short)((uint)(iVar20 * (short)((ulong)uVar38 >>
                                                                               0x10)) >> 0xf),
                                                (short)((uint)(iVar20 * (short)uVar38) >> 0xf))));
        *puVar26 = CONCAT26((short)((uint)(iVar20 * (short)((ulong)uVar37 >> 0x30)) >> 0xf),
                            CONCAT24((short)((uint)(iVar20 * (short)((ulong)uVar37 >> 0x20)) >> 0xf)
                                     ,CONCAT22((short)((uint)(iVar20 * (short)((ulong)uVar37 >> 0x10
                                                                              )) >> 0xf),
                                               (short)((uint)(iVar20 * (short)uVar37) >> 0xf))));
        puVar26 = puVar26 + 4;
      } while (uVar34 != 0);
      if (param_3 == uVar31) goto LAB_00e74490;
    }
    lVar24 = uVar31 - param_3;
    puVar13 = param_8 + param_3;
    puVar11 = param_2 + param_3;
    do {
      lVar24 = lVar24 + -1;
      *puVar13 = (ushort)((uint)(iVar20 * (short)*puVar11) >> 0xf);
      puVar13 = puVar13 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar24 != 0);
  }
LAB_00e74490:
  return (ulong)(uVar32 & (-1 << (ulong)(uVar19 << (ulong)(uVar6 & 0x1f) & 0x1f) ^ 0xffffffffU));
}


