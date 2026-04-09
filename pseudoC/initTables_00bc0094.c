// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initTables
// Entry Point: 00bc0094
// Size: 1852 bytes
// Signature: undefined initTables(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CustomCipher::initTables() */

void CustomCipher::initTables(void)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  uint auStack_4b4 [33];
  ulong local_430 [17];
  undefined4 auStack_3a4 [29];
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  iVar17 = 1;
  lVar6 = 0x1b;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  do {
    pbVar1 = s_bK_D + lVar6;
    bVar9 = s_bK_C[lVar6];
    lVar6 = lVar6 + -1;
    *(int *)((long)&uStack_258 + (ulong)*pbVar1 * 4 + 4) = iVar17;
    *(int *)((long)&uStack_158 + (ulong)bVar9 * 4 + 4) = iVar17;
    iVar17 = iVar17 << 1;
  } while (lVar6 != -1);
  uVar10 = 0;
  do {
    uVar12 = (int)uVar10 >> 3;
    uVar3 = -(ulong)(uVar12 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar12 << 6;
    uVar4 = -(ulong)(uVar12 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar12 << 5;
    uVar7 = 0;
    do {
      if ((8U >> (ulong)(uVar10 & 3) & (uint)uVar7) != 0) {
        lVar8 = (long)(int)uVar10 * 4;
        lVar6 = uVar7 * 4;
        uVar12 = *(uint *)((long)&local_250 + lVar8);
        *(uint *)((long)&s_wC_K4 + lVar6 + uVar3) =
             *(uint *)((long)&s_wC_K4 + lVar6 + uVar3) | *(uint *)((long)&local_150 + lVar8);
        *(uint *)((long)&s_wD_K4 + lVar6 + uVar3) =
             *(uint *)((long)&s_wD_K4 + lVar6 + uVar3) | uVar12;
        if (uVar7 < 8) {
          lVar8 = ((long)(int)uVar10 + 3) * 4;
          uVar12 = *(uint *)((long)&local_250 + lVar8);
          *(uint *)((long)&s_wC_K3 + lVar6 + uVar4) =
               *(uint *)((long)&s_wC_K3 + lVar6 + uVar4) | *(uint *)((long)&local_150 + lVar8);
          *(uint *)((long)&s_wD_K3 + lVar6 + uVar4) =
               *(uint *)((long)&s_wD_K3 + lVar6 + uVar4) | uVar12;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x10);
    uVar12 = uVar10 + 4;
    if ((uVar10 & 3) != 3) {
      uVar12 = uVar10;
    }
    uVar10 = uVar12 + 1;
  } while ((int)uVar12 < 0x3f);
  uVar7 = 0;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_288 = 0;
  local_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_2a8 = 0;
  local_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2c8 = 0;
  local_2d0 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  uStack_328 = 0;
  local_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  local_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  local_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  auStack_3a4[DAT_01045437] = 1;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_0104541f * 4 + 4) = 1;
  auStack_3a4[DAT_01045436] = 2;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_0104541e * 4 + 4) = 2;
  auStack_3a4[DAT_01045435] = 4;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_0104541d * 4 + 4) = 4;
  auStack_3a4[DAT_01045434] = 8;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_0104541c * 4 + 4) = 8;
  auStack_3a4[DAT_01045433] = 0x10;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_0104541b * 4 + 4) = 0x10;
  auStack_3a4[DAT_01045432] = 0x20;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_0104541a * 4 + 4) = 0x20;
  auStack_3a4[DAT_01045431] = 0x100;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_01045419 * 4 + 4) = 0x100;
  auStack_3a4[DAT_01045430] = 0x200;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_01045418 * 4 + 4) = 0x200;
  auStack_3a4[DAT_0104542f] = 0x400;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_01045417 * 4 + 4) = 0x400;
  auStack_3a4[DAT_0104542e] = 0x800;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_01045416 * 4 + 4) = 0x800;
  auStack_3a4[DAT_0104542d] = 0x1000;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_01045415 * 4 + 4) = 0x1000;
  auStack_3a4[DAT_0104542c] = 0x2000;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_01045414 * 4 + 4) = 0x2000;
  auStack_3a4[DAT_0104542b] = 0x10000;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_01045413 * 4 + 4) = 0x10000;
  auStack_3a4[DAT_0104542a] = 0x20000;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_01045412 * 4 + 4) = 0x20000;
  auStack_3a4[DAT_01045429] = 0x40000;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_01045411 * 4 + 4) = 0x40000;
  auStack_3a4[DAT_01045428] = 0x80000;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_01045410 * 4 + 4) = 0x80000;
  auStack_3a4[DAT_01045427] = 0x100000;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_0104540f * 4 + 4) = 0x100000;
  auStack_3a4[DAT_01045426] = 0x200000;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_0104540e * 4 + 4) = 0x200000;
  auStack_3a4[DAT_01045425] = 0x1000000;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_0104540d * 4 + 4) = 0x1000000;
  auStack_3a4[DAT_01045424] = 0x2000000;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_0104540c * 4 + 4) = 0x2000000;
  auStack_3a4[DAT_01045423] = 0x4000000;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_0104540b * 4 + 4) = 0x4000000;
  auStack_3a4[DAT_01045422] = 0x8000000;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_0104540a * 4 + 4) = 0x8000000;
  auStack_3a4[DAT_01045421] = 0x10000000;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)DAT_01045409 * 4 + 4) = 0x10000000;
  auStack_3a4[DAT_01045420] = 0x20000000;
  *(undefined4 *)((long)&uStack_2c8 + (ulong)s_bCD_KS * 4 + 4) = 0x20000000;
  do {
    uVar3 = uVar7 & 0xffffffffffffffc;
    lVar6 = 0;
    do {
      if ((8U >> (ulong)((uint)uVar7 & 3) & (uint)lVar6) != 0) {
        uVar10 = *(uint *)((long)&local_330 + uVar7 * 4);
        uVar12 = (&s_lKS_D4)[uVar3 * 4 + lVar6];
        (&s_hKS_C4)[uVar3 * 4 + lVar6] =
             (&s_hKS_C4)[uVar3 * 4 + lVar6] | *(uint *)((long)&local_2c0 + uVar7 * 4);
        (&s_lKS_D4)[uVar3 * 4 + lVar6] = uVar12 | uVar10;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x1c);
  lVar6 = 0;
  lVar21 = 0x300000002;
  lVar18 = 0x100000000;
  lVar8 = lVar18;
  lVar23 = lVar21;
  lVar11 = lVar18;
  lVar15 = lVar21;
  lVar32 = lVar18;
  lVar33 = lVar21;
  do {
    iVar17 = (int)lVar18;
    iVar19 = (int)((ulong)lVar18 >> 0x20);
    iVar20 = (int)lVar21;
    iVar22 = (int)((ulong)lVar21 >> 0x20);
    iVar24 = (int)lVar8;
    iVar25 = (int)((ulong)lVar8 >> 0x20);
    iVar26 = (int)lVar23;
    iVar27 = (int)((ulong)lVar23 >> 0x20);
    uVar7 = (ulong)lVar32 >> 0x20;
    uVar3 = (ulong)lVar33 >> 0x20;
    iVar28 = (int)lVar11;
    iVar29 = (int)((ulong)lVar11 >> 0x20);
    iVar30 = (int)lVar15;
    iVar31 = (int)((ulong)lVar15 >> 0x20);
    lVar18 = CONCAT44(iVar19 + 4,iVar17 + 4);
    lVar21 = CONCAT44(iVar22 + 4,iVar20 + 4);
    lVar8 = CONCAT44(iVar25 + 4,iVar24 + 4);
    lVar23 = CONCAT44(iVar27 + 4,iVar26 + 4);
    lVar11 = CONCAT44(iVar29 + 4,iVar28 + 4);
    lVar15 = CONCAT44(iVar31 + 4,iVar30 + 4);
    lVar32 = (ulong)((int)((ulong)lVar32 >> 0x20) + 4) << 0x20;
    lVar33 = (ulong)((int)((ulong)lVar33 >> 0x20) + 4) << 0x20;
    *(ulong *)(s_wL_I8 + lVar6 + 8) =
         ((ulong)CONCAT16((char)((uint)(iVar22 << 0x12) >> 0x18),
                          CONCAT15((char)((uint)(iVar27 << 0xc) >> 0x10),
                                   CONCAT14((char)((uint)(iVar31 << 6) >> 8),
                                            CONCAT13((char)uVar3,
                                                     CONCAT12((char)((uint)(iVar20 << 0x12) >> 0x18)
                                                              ,CONCAT11((char)((uint)(iVar26 << 0xc)
                                                                              >> 0x10),
                                                                        (char)((uint)(iVar30 << 6)
                                                                              >> 8))))))) &
         0x1010101010101) << 8;
    *(ulong *)(s_wL_I8 + lVar6) =
         ((ulong)CONCAT16((char)((uint)(iVar19 << 0x12) >> 0x18),
                          CONCAT15((char)((uint)(iVar25 << 0xc) >> 0x10),
                                   CONCAT14((char)((uint)(iVar29 << 6) >> 8),
                                            CONCAT13((char)uVar7,
                                                     CONCAT12((char)((uint)(iVar17 << 0x12) >> 0x18)
                                                              ,CONCAT11((char)((uint)(iVar24 << 0xc)
                                                                              >> 0x10),
                                                                        (char)((uint)(iVar28 << 6)
                                                                              >> 8))))))) &
         0x1010101010101) << 8;
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x150);
  lVar6 = 0;
  s_wO_L4._8_8_ = 0x101000000010000;
  s_wO_L4._0_8_ = 0x100000000000000;
  s_wO_L4._24_8_ = 0x101010000010100;
  s_wO_L4._16_8_ = 0x100010000000100;
  lVar15 = 0x300000002;
  lVar11 = 0x100000000;
  s_wO_L4._40_8_ = 0x101000100010001;
  s_wO_L4._32_8_ = 0x100000100000001;
  s_wO_L4._56_8_ = 0x101010100010101;
  s_wO_L4._48_8_ = 0x100010100000101;
  s_wL_I8._336_4_ = 0x1010100;
  s_wL_I8._340_4_ = 0x1010101;
  lVar8 = lVar11;
  lVar23 = lVar15;
  do {
    iVar17 = (int)((ulong)lVar8 >> 0x20);
    iVar19 = (int)((ulong)lVar23 >> 0x20);
    bVar9 = (byte)lVar11;
    uVar7 = (ulong)lVar11 >> 0x20;
    bVar13 = (byte)lVar15;
    uVar3 = (ulong)lVar15 >> 0x20;
    uVar10 = (uint)lVar11;
    uVar12 = (uint)((ulong)lVar11 >> 0x20);
    uVar14 = (uint)lVar15;
    uVar16 = (uint)((ulong)lVar15 >> 0x20);
    lVar11 = CONCAT44(uVar12 + 4,uVar10 + 4);
    lVar15 = CONCAT44(uVar16 + 4,uVar14 + 4);
    lVar8 = (ulong)(iVar17 + 4) << 0x20;
    lVar23 = (ulong)(iVar19 + 4) << 0x20;
    *(ulong *)((long)local_430 + lVar6 + 8) =
         (ulong)CONCAT14((byte)(iVar19 << 4) & 0x10 | (byte)uVar3 & 0x20 | (byte)(uVar16 >> 1) & 0xf
                         ,(uint)(bVar13 & 0x20 | (byte)(uVar14 >> 1) & 0xf));
    *(ulong *)((long)local_430 + lVar6) =
         (ulong)CONCAT14((byte)(iVar17 << 4) & 0x10 | (byte)uVar7 & 0x20 | (byte)(uVar12 >> 1) & 0xf
                         ,(uint)(bVar9 & 0x20 | (byte)(uVar10 >> 1) & 0xf));
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x100);
  uVar10 = 1;
  lVar6 = 0x1f;
  do {
    pbVar1 = P + lVar6;
    lVar6 = lVar6 + -1;
    auStack_4b4[*pbVar1] = uVar10;
    uVar10 = uVar10 << 1;
  } while (lVar6 != -1);
  lVar6 = 0;
  puVar5 = &s_wPS;
  do {
    lVar8 = 0;
    do {
      bVar9 = S[(long)*(int *)((long)local_430 + lVar8) + lVar6 * 0x40];
      if ((bVar9 >> 3 & 1) != 0) {
        *(uint *)((long)puVar5 + lVar8) =
             *(uint *)((long)puVar5 + lVar8) | auStack_4b4[lVar6 * 4 + 1];
      }
      if ((bVar9 >> 2 & 1) != 0) {
        *(uint *)((long)puVar5 + lVar8) =
             *(uint *)((long)puVar5 + lVar8) | auStack_4b4[(lVar6 << 2 | 1U) + 1];
      }
      if ((bVar9 >> 1 & 1) != 0) {
        *(uint *)((long)puVar5 + lVar8) =
             *(uint *)((long)puVar5 + lVar8) | auStack_4b4[(lVar6 << 2 | 2U) + 1];
      }
      if ((bVar9 & 1) != 0) {
        *(uint *)((long)puVar5 + lVar8) =
             *(uint *)((long)puVar5 + lVar8) | auStack_4b4[(lVar6 << 2 | 3U) + 1];
      }
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0x100);
    lVar6 = lVar6 + 1;
    puVar5 = puVar5 + 0x40;
  } while (lVar6 != 8);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


