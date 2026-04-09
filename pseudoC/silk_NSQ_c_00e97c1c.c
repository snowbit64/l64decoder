// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_NSQ_c
// Entry Point: 00e97c1c
// Size: 4404 bytes
// Signature: undefined silk_NSQ_c(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined4 param_13, undefined2 param_14)


void silk_NSQ_c(long param_1,void *param_2,long param_3,undefined8 *param_4,long param_5,
               long param_6,long param_7,long param_8,long param_9,long param_10,long param_11_00,
               long param_11,long param_12,uint param_13,short param_14)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  char cVar17;
  char cVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  bool bVar28;
  int *piVar29;
  uint uVar30;
  short *psVar31;
  int iVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  int iVar36;
  long lVar37;
  int *piVar38;
  int iVar39;
  short *psVar40;
  ulong uVar41;
  ulong uVar42;
  undefined4 *puVar43;
  undefined8 *puVar44;
  long lVar45;
  ulong uVar46;
  long lVar47;
  int iVar48;
  int iVar49;
  long lVar50;
  undefined8 *puVar51;
  undefined8 *puVar52;
  uint uVar53;
  uint uVar54;
  long lVar55;
  int iVar56;
  int iVar57;
  ulong uVar58;
  int iVar59;
  int iVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  long alStack_1d0 [3];
  uint local_1b4;
  long local_1b0;
  long local_1a8;
  int *local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  undefined8 *local_170;
  long local_168;
  ulong local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  undefined8 *local_130;
  ulong local_128;
  long local_120;
  ulong local_118;
  int local_110;
  uint local_10c;
  int iStack_108;
  int local_104;
  int *local_100;
  short *local_f8;
  int local_f0;
  uint local_ec;
  int local_e8;
  int local_e4;
  long local_e0;
  long local_d8;
  int local_d0;
  uint local_cc;
  int local_c8;
  int local_c4;
  long local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  long local_a8;
  uint local_9c;
  void *local_98;
  long local_90;
  uint local_84;
  long local_80;
  
  lVar37 = tpidr_el0;
  local_80 = *(long *)(lVar37 + 0x28);
  iVar25 = *(int *)(param_1 + 0x11f0);
  lVar34 = (long)iVar25;
  local_140 = param_12;
  iVar32 = *(int *)(param_1 + 0x11e8);
  iVar59 = *(int *)((long)param_2 + 0x10e8);
  uVar53 = iVar32 + iVar25;
  cVar17 = *(char *)(param_3 + 0x1d);
  *(int *)((long)param_2 + 0x10f4) = (int)*(char *)(param_3 + 0x22);
  cVar18 = *(char *)(param_3 + 0x1e);
  local_a8 = (long)alStack_1d0 -
             ((-(ulong)(uVar53 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar53 << 2) + 0xf &
             0xfffffffffffffff0);
  local_1b0 = local_a8 -
              ((-(ulong)(uVar53 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar53 << 1) + 0xf &
              0xfffffffffffffff0);
  lVar35 = (long)*(int *)(param_1 + 0x11ec);
  bVar28 = *(char *)(param_3 + 0x1f) == '\x04';
  local_b0 = (undefined8 *)(local_1b0 - (lVar35 * 4 + 0xfU & 0xfffffffffffffff0));
  local_160 = (ulong)bVar28;
  iVar56 = *(int *)(param_1 + 0x11e4);
  local_1b4 = 3;
  if (!bVar28) {
    local_1b4 = 1;
  }
  *(int *)((long)param_2 + 0x10f0) = iVar25;
  *(int *)((long)param_2 + 0x10ec) = iVar25;
  local_180 = param_7;
  local_158 = param_6;
  local_150 = param_3;
  local_90 = param_5;
  if (0 < iVar56) {
    local_118 = 0;
    local_98 = (void *)((long)param_2 + lVar34 * 2);
    local_148 = param_11;
    local_cc = param_13;
    local_190 = param_11_00;
    local_1a8 = param_8 + 4;
    local_178 = (long)param_2 + 0x500;
    local_198 = param_10;
    local_168 = param_9;
    sVar24 = *(short *)((long)&silk_Quantization_Offsets_Q10 +
                       (long)cVar18 * 2 + (long)((int)cVar17 >> 1) * 4);
    local_b8 = (undefined8 *)((long)param_2 + 0x10ec);
    alStack_1d0[2] = (long)param_14;
    local_84 = (uint)sVar24;
    local_1a0 = (int *)((long)param_2 + 0xf3c);
    local_170 = (undefined8 *)((long)param_2 + 0xf00);
    local_e4 = (param_13 >> 1) - 0x200;
    local_110 = 0x200 - (param_13 >> 1);
    local_e8 = (int)(short)param_13;
    local_104 = (int)sVar24;
    local_ec = local_104 + 0x3b0;
    iStack_108 = ((int)(local_84 * -0x10000 + 0x3b00000) >> 0x10) * local_e8;
    local_10c = local_104 - 0x3b0;
    local_f0 = (short)local_ec * local_e8;
    local_d0 = local_e8 * local_104;
    local_104 = local_104 + -0x50;
    local_100 = (int *)((long)param_2 + 0x1088);
    lVar34 = 0;
    alStack_1d0[1] = lVar37;
    local_188 = param_8;
    local_138 = param_1;
    do {
      lVar55 = lVar34;
      puVar52 = param_4;
      lVar34 = local_138;
      lVar37 = local_178;
      uVar53 = (uint)lVar55;
      local_9c = (uint)*(byte *)(local_150 + 0x1d);
      iVar32 = *(int *)(local_168 + lVar55 * 4);
      *(undefined4 *)((long)param_2 + 0x10fc) = 0;
      psVar4 = (short *)(local_158 + (ulong)(((uint)local_160 | uVar53 >> 1) << 4) * 2);
      if (local_9c == 2) {
        iVar59 = *(int *)(local_140 + lVar55 * 4);
        if ((local_1b4 & uVar53) != 0) {
          local_9c = 2;
          goto LAB_00e97f0c;
        }
        iVar56 = (*(int *)(local_138 + 0x11f0) - (iVar59 + *(int *)(local_138 + 0x1220))) + -2;
        silk_LPC_analysis_filter
                  (local_1b0 + (long)iVar56 * 2,
                   (void *)((long)param_2 + (long)(int)(iVar56 + (int)lVar35 * uVar53) * 2),psVar4,
                   *(int *)(local_138 + 0x11f0) - iVar56,*(int *)(local_138 + 0x1220),
                   *(undefined4 *)(local_138 + 0x13f4));
        bVar28 = false;
        bVar16 = *(byte *)(local_150 + 0x1d);
        *(undefined4 *)((long)param_2 + 0x10ec) = *(undefined4 *)(lVar34 + 0x11f0);
        local_9c = (uint)bVar16;
        *(undefined4 *)((long)param_2 + 0x10fc) = 1;
      }
      else {
LAB_00e97f0c:
        bVar28 = true;
      }
      lVar35 = lVar55 * 4;
      uVar13 = *(uint *)(lVar34 + 0x11ec);
      uVar58 = (ulong)uVar13;
      uVar14 = *(uint *)(local_148 + lVar35);
      uVar10 = uVar14;
      if ((int)uVar14 < 2) {
        uVar10 = 1;
      }
      iVar36 = (int)LZCOUNT(uVar10);
      uVar26 = iVar36 - 0xf;
      iVar25 = uVar10 << (ulong)(iVar36 - 1U & 0x1f);
      uVar30 = 0x7fffffff >> (ulong)(uVar26 & 0x1f);
      iVar56 = iVar25 >> 0x10;
      uVar54 = 0;
      if (iVar56 != 0) {
        uVar54 = 0x1fffffff / iVar56;
      }
      uVar54 = (int)((ulong)(((long)-((-((ulong)(uVar54 >> 0xf) & 1) & 0xfffffff800000000 |
                                      ((ulong)uVar54 & 0xffff) << 0x13) * (long)iVar25 &
                                     0xfffffff800000000) >> 0x20) * (long)(int)uVar54) >> 0x10) +
               uVar54 * 0x10000;
      uVar7 = -0x80000000 >> (uVar26 & 0x1f);
      iVar56 = *(int *)(local_140 + lVar35);
      if ((int)uVar7 <= (int)uVar54) {
        uVar7 = uVar54;
      }
      if ((int)uVar54 <= (int)uVar30) {
        uVar30 = uVar7;
      }
      uVar54 = (int)uVar54 >> (0xfU - iVar36 & 0x1f);
      if (uVar10 >> 0x11 == 0) {
        uVar54 = uVar30 << (ulong)(uVar26 & 0x1f);
      }
      if (0 < (int)uVar13) {
        lVar47 = (long)((ulong)(((int)uVar54 >> 4) + 1) << 0x20) >> 0x21;
        if (uVar13 < 8) {
          uVar41 = 0;
        }
        else {
          uVar41 = uVar58 & 0xfffffff8;
          uVar42 = uVar41;
          puVar44 = local_b0;
          puVar51 = puVar52;
          do {
            uVar62 = puVar51[1];
            uVar61 = *puVar51;
            uVar42 = uVar42 - 8;
            puVar44[1] = CONCAT44((int)((ulong)(lVar47 * (int)(short)((ulong)uVar61 >> 0x30)) >>
                                       0x10),
                                  (int)((ulong)(lVar47 * (int)(short)((ulong)uVar61 >> 0x20)) >>
                                       0x10));
            *puVar44 = CONCAT44((int)((ulong)(lVar47 * (int)(short)((ulong)uVar61 >> 0x10)) >> 0x10)
                                ,(int)((ulong)(lVar47 * (int)(short)uVar61) >> 0x10));
            puVar44[3] = CONCAT44((int)((ulong)(lVar47 * (int)(short)((ulong)uVar62 >> 0x30)) >>
                                       0x10),
                                  (int)((ulong)(lVar47 * (int)(short)((ulong)uVar62 >> 0x20)) >>
                                       0x10));
            puVar44[2] = CONCAT44((int)((ulong)(lVar47 * (int)(short)((ulong)uVar62 >> 0x10)) >>
                                       0x10),(int)((ulong)(lVar47 * (int)(short)uVar62) >> 0x10));
            puVar44 = puVar44 + 4;
            puVar51 = puVar51 + 2;
          } while (uVar42 != 0);
          if (uVar41 == uVar58) goto LAB_00e980ac;
        }
        lVar45 = uVar58 - uVar41;
        psVar40 = (short *)((long)puVar52 + uVar41 * 2);
        puVar43 = (undefined4 *)((long)local_b0 + uVar41 * 4);
        do {
          lVar45 = lVar45 + -1;
          *puVar43 = (int)((ulong)(*psVar40 * lVar47) >> 0x10);
          psVar40 = psVar40 + 1;
          puVar43 = puVar43 + 1;
        } while (lVar45 != 0);
      }
LAB_00e980ac:
      if (!bVar28) {
        iVar25 = *(int *)local_b8;
        uVar10 = (uint)((ulong)(alStack_1d0[2] * (int)uVar54) >> 0xe) & 0xfffffffc;
        if (lVar55 != 0) {
          uVar10 = uVar54;
        }
        iVar36 = (iVar25 - iVar56) + -2;
        if (iVar36 < iVar25) {
          lVar50 = (long)iVar36;
          lVar45 = (long)(int)uVar10;
          uVar42 = iVar25 - lVar50;
          lVar47 = lVar50;
          if (7 < uVar42) {
            uVar46 = uVar42 & 0xfffffffffffffff8;
            lVar47 = uVar46 + lVar50;
            uVar41 = uVar46;
            puVar44 = (undefined8 *)(local_1b0 + lVar50 * 2);
            puVar51 = (undefined8 *)(local_a8 + lVar50 * 4);
            do {
              uVar62 = puVar44[1];
              uVar61 = *puVar44;
              uVar41 = uVar41 - 8;
              puVar51[1] = CONCAT44((int)((ulong)(lVar45 * (int)(short)((ulong)uVar61 >> 0x30)) >>
                                         0x10),
                                    (int)((ulong)(lVar45 * (int)(short)((ulong)uVar61 >> 0x20)) >>
                                         0x10));
              *puVar51 = CONCAT44((int)((ulong)(lVar45 * (int)(short)((ulong)uVar61 >> 0x10)) >>
                                       0x10),(int)((ulong)(lVar45 * (int)(short)uVar61) >> 0x10));
              puVar51[3] = CONCAT44((int)((ulong)(lVar45 * (int)(short)((ulong)uVar62 >> 0x30)) >>
                                         0x10),
                                    (int)((ulong)(lVar45 * (int)(short)((ulong)uVar62 >> 0x20)) >>
                                         0x10));
              puVar51[2] = CONCAT44((int)((ulong)(lVar45 * (int)(short)((ulong)uVar62 >> 0x10)) >>
                                         0x10),(int)((ulong)(lVar45 * (int)(short)uVar62) >> 0x10));
              puVar44 = puVar44 + 2;
              puVar51 = puVar51 + 4;
            } while (uVar41 != 0);
            if (uVar42 == uVar46) goto LAB_00e981f0;
          }
          lVar50 = iVar25 - lVar47;
          psVar40 = (short *)(local_1b0 + lVar47 * 2);
          puVar43 = (undefined4 *)(local_a8 + lVar47 * 4);
          do {
            lVar50 = lVar50 + -1;
            *puVar43 = (int)((ulong)(*psVar40 * lVar45) >> 0x10);
            psVar40 = psVar40 + 1;
            puVar43 = puVar43 + 1;
          } while (lVar50 != 0);
        }
      }
LAB_00e981f0:
      uVar10 = *(uint *)((long)param_2 + 0x10f8);
      if (uVar14 != uVar10) {
        uVar13 = -uVar10;
        if (-1 < (int)uVar10) {
          uVar13 = uVar10;
        }
        uVar30 = -uVar14;
        if (-1 < (int)uVar14) {
          uVar30 = uVar14;
        }
        iVar36 = uVar14 << (ulong)((int)LZCOUNT(uVar30) - 1U & 0x1f);
        iVar25 = iVar36 >> 0x10;
        sVar24 = 0;
        if (iVar25 != 0) {
          sVar24 = (short)(0x1fffffff / iVar25);
        }
        iVar25 = uVar10 << (ulong)((int)LZCOUNT(uVar13) - 1U & 0x1f);
        lVar47 = (long)sVar24 * (long)iVar25;
        iVar60 = (int)LZCOUNT(uVar13) - (int)LZCOUNT(uVar30);
        uVar30 = -iVar60 - 0xd;
        uVar13 = -0x80000000 >> (uVar30 & 0x1f);
        uVar10 = (int)((ulong)((long)sVar24 *
                              (long)(int)(iVar25 - ((uint)((ulong)((lVar47 >> 0x10) * (long)iVar36)
                                                          >> 0x1d) & 0xfffffff8))) >> 0x10) +
                 (int)((ulong)lVar47 >> 0x10);
        iVar25 = (int)uVar10 >> (iVar60 + 0xdU & 0x1f);
        uVar14 = 0x7fffffff >> (ulong)(uVar30 & 0x1f);
        if (0x2f < iVar60 + 0x1dU) {
          iVar25 = 0;
        }
        if ((int)uVar13 <= (int)uVar10) {
          uVar13 = uVar10;
        }
        if ((int)uVar10 <= (int)uVar14) {
          uVar14 = uVar13;
        }
        if (iVar60 == -0xe || iVar60 + 0xe < 0 != SCARRY4(iVar60,0xe)) {
          iVar25 = uVar14 << (ulong)(uVar30 & 0x1f);
        }
        lVar47 = (long)iVar25;
        if (0 < *(int *)(lVar34 + 0x11f0)) {
          lVar45 = (long)(*(int *)((long)param_2 + 0x10f0) - *(int *)(lVar34 + 0x11f0));
          do {
            lVar50 = lVar45 * 4;
            lVar45 = lVar45 + 1;
            *(int *)(lVar37 + lVar50) = (int)((ulong)(*(int *)(lVar37 + lVar50) * lVar47) >> 0x10);
          } while (lVar45 < *(int *)((long)param_2 + 0x10f0));
        }
        if ((local_9c == 2) && (*(int *)((long)param_2 + 0x10fc) == 0)) {
          iVar25 = *(int *)local_b8;
          iVar56 = (iVar25 - iVar56) + -2;
          if (iVar56 < iVar25) {
            lVar45 = (long)iVar56;
            uVar58 = iVar25 - lVar45;
            lVar37 = lVar45;
            if (3 < uVar58) {
              uVar41 = uVar58 & 0xfffffffffffffffc;
              lVar37 = uVar41 + lVar45;
              puVar44 = (undefined8 *)(local_a8 + lVar45 * 4);
              uVar42 = uVar41;
              do {
                uVar42 = uVar42 - 4;
                puVar44[1] = CONCAT44((int)((ulong)(lVar47 * (int)((ulong)puVar44[1] >> 0x20)) >>
                                           0x10),(int)((ulong)(lVar47 * (int)puVar44[1]) >> 0x10));
                *puVar44 = CONCAT44((int)((ulong)(lVar47 * (int)((ulong)*puVar44 >> 0x20)) >> 0x10),
                                    (int)((ulong)(lVar47 * (int)*puVar44) >> 0x10));
                puVar44 = puVar44 + 2;
              } while (uVar42 != 0);
              if (uVar58 == uVar41) goto LAB_00e983c8;
            }
            lVar45 = iVar25 - lVar37;
            piVar38 = (int *)(local_a8 + lVar37 * 4);
            do {
              lVar45 = lVar45 + -1;
              *piVar38 = (int)((ulong)(*piVar38 * lVar47) >> 0x10);
              piVar38 = piVar38 + 1;
            } while (lVar45 != 0);
          }
        }
LAB_00e983c8:
        *(int *)((long)param_2 + 0x10e0) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10e0) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10e4) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10e4) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0xf00) =
             (int)((ulong)(*(int *)((long)param_2 + 0xf00) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0xf04) =
             (int)((ulong)(*(int *)((long)param_2 + 0xf04) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0xf08) =
             (int)((ulong)(*(int *)((long)param_2 + 0xf08) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0xf0c) =
             (int)((ulong)(*(int *)((long)param_2 + 0xf0c) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0xf10) =
             (int)((ulong)(*(int *)((long)param_2 + 0xf10) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0xf14) =
             (int)((ulong)(*(int *)((long)param_2 + 0xf14) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0xf18) =
             (int)((ulong)(*(int *)((long)param_2 + 0xf18) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0xf1c) =
             (int)((ulong)(*(int *)((long)param_2 + 0xf1c) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0xf20) =
             (int)((ulong)(*(int *)((long)param_2 + 0xf20) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0xf24) =
             (int)((ulong)(*(int *)((long)param_2 + 0xf24) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0xf28) =
             (int)((ulong)(*(int *)((long)param_2 + 0xf28) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0xf2c) =
             (int)((ulong)(*(int *)((long)param_2 + 0xf2c) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0xf30) =
             (int)((ulong)(*(int *)((long)param_2 + 0xf30) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0xf34) =
             (int)((ulong)(*(int *)((long)param_2 + 0xf34) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0xf38) =
             (int)((ulong)(*(int *)((long)param_2 + 0xf38) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0xf3c) =
             (int)((ulong)(*(int *)((long)param_2 + 0xf3c) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x1080) =
             (int)((ulong)(*(int *)((long)param_2 + 0x1080) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x1084) =
             (int)((ulong)(*(int *)((long)param_2 + 0x1084) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x1088) =
             (int)((ulong)(*(int *)((long)param_2 + 0x1088) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x108c) =
             (int)((ulong)(*(int *)((long)param_2 + 0x108c) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x1090) =
             (int)((ulong)(*(int *)((long)param_2 + 0x1090) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x1094) =
             (int)((ulong)(*(int *)((long)param_2 + 0x1094) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x1098) =
             (int)((ulong)(*(int *)((long)param_2 + 0x1098) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x109c) =
             (int)((ulong)(*(int *)((long)param_2 + 0x109c) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10a0) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10a0) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10a4) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10a4) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10a8) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10a8) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10ac) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10ac) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10b0) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10b0) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10b4) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10b4) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10b8) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10b8) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10bc) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10bc) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10c0) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10c0) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10c4) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10c4) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10c8) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10c8) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10cc) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10cc) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10d0) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10d0) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10d4) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10d4) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10d8) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10d8) * lVar47) >> 0x10);
        *(int *)((long)param_2 + 0x10dc) =
             (int)((ulong)(*(int *)((long)param_2 + 0x10dc) * lVar47) >> 0x10);
        uVar58 = (ulong)*(uint *)(lVar34 + 0x11ec);
        *(undefined4 *)((long)param_2 + 0x10f8) = *(undefined4 *)(local_148 + lVar35);
        uVar14 = *(uint *)(local_148 + lVar35);
      }
      iVar56 = (int)uVar58;
      if (0 < iVar56) {
        uVar42 = 0;
        uVar13 = *(uint *)(local_190 + lVar35);
        lVar45 = (long)(short)uVar13;
        psVar6 = (short *)(local_1a8 + (local_118 & 0x1fffffff) * 0x10);
        psVar40 = (short *)(local_180 + (ulong)(uVar53 * 5) * 2);
        uVar10 = *(uint *)(local_138 + 0x121c);
        iVar36 = *(int *)(local_138 + 0x1220);
        iVar25 = iVar36 >> 1;
        psVar5 = (short *)(local_188 + (ulong)(uVar53 * 0x18) * 2);
        uVar53 = iVar32 >> 2;
        lVar50 = (long)(short)uVar53;
        lVar47 = (long)((ulong)(uVar53 | iVar32 << 0xf) << 0x20) >> 0x30;
        sVar24 = *(short *)(local_198 + lVar35);
        lVar37 = local_a8 + (long)((*(int *)((long)param_2 + 0x10ec) - iVar59) + 2) * 4;
        lVar34 = (long)param_2 + (long)((*(int *)((long)param_2 + 0x10f0) - iVar59) + 1) * 4 + 0x500
        ;
        iVar32 = *(int *)((long)param_2 + 0x10f4);
        piVar38 = local_1a0;
        do {
          sVar19 = psVar4[3];
          sVar20 = *psVar4;
          sVar21 = psVar4[1];
          sVar22 = psVar4[4];
          sVar23 = psVar4[2];
          *(int *)((long)param_2 + 0x10f4) = iVar32 * 0xbb38435 + 0x3619636b;
          iVar32 = iVar25 + (int)((ulong)((long)sVar20 * (long)piVar38[1]) >> 0x10) +
                   (int)((ulong)((long)sVar21 * (long)piVar38[-1]) >> 0x10) +
                   (int)((ulong)((long)sVar23 * (long)piVar38[-1]) >> 0x10) +
                   (int)((ulong)((long)sVar19 * (long)piVar38[-3]) >> 0x10) +
                   (int)((ulong)((long)sVar22 * (long)piVar38[-3]) >> 0x10) +
                   (int)((ulong)((long)psVar4[5] * (long)piVar38[-5]) >> 0x10) +
                   (int)((ulong)((long)psVar4[6] * (long)piVar38[-5]) >> 0x10) +
                   (int)((ulong)((long)psVar4[7] * (long)piVar38[-7]) >> 0x10) +
                   (int)((ulong)((long)psVar4[8] * (long)piVar38[-7]) >> 0x10) +
                   (int)((ulong)((long)psVar4[9] * (long)piVar38[-9]) >> 0x10);
          if (iVar36 == 0x10) {
            iVar32 = iVar32 + (int)((ulong)((long)psVar4[10] * (long)piVar38[-9]) >> 0x10) +
                     (int)((ulong)((long)psVar4[0xb] * (long)piVar38[-0xb]) >> 0x10) +
                     (int)((ulong)((long)psVar4[0xc] * (long)piVar38[-0xb]) >> 0x10) +
                     (int)((ulong)((long)psVar4[0xd] * (long)piVar38[-0xd]) >> 0x10) +
                     (int)((ulong)((long)psVar4[0xe] * (long)piVar38[-0xd]) >> 0x10) +
                     (int)((ulong)((long)psVar4[0xf] * (long)piVar38[-0xf]) >> 0x10);
          }
          if (local_9c == 2) {
            piVar2 = (int *)(lVar37 + -4);
            piVar11 = (int *)(lVar37 + 4);
            piVar3 = (int *)(lVar37 + -0xc);
            piVar12 = (int *)(lVar37 + -4);
            piVar29 = (int *)(lVar37 + -0x10);
            lVar37 = lVar37 + 4;
            iVar60 = (int)(((long)*piVar2 * (long)psVar40[1] * 0x10000 & 0xffffffff00000000U) +
                           (long)*piVar11 * (long)*psVar40 * 0x10000 +
                           ((long)*piVar12 * (long)psVar40[2] * 0x10000 & 0xffffffff00000000U) +
                           ((long)*piVar3 * (long)psVar40[3] * 0x10000 & 0xffffffff00000000U) +
                           0x200000000 >> 0x20) +
                     (int)((ulong)((long)psVar40[4] * (long)*piVar29) >> 0x10);
          }
          else {
            iVar60 = 0;
          }
          iVar33 = *(int *)((long)param_2 + 0x1080);
          iVar39 = ((int)uVar10 >> 1) +
                   (int)((ulong)((long)*psVar5 * (long)*(int *)((long)param_2 + 0x10e4)) >> 0x10);
          *(int *)((long)param_2 + 0x1080) = *(int *)((long)param_2 + 0x10e4);
          if (2 < (int)uVar10) {
            uVar41 = 2;
            piVar29 = local_100;
            psVar31 = psVar6;
            do {
              sVar20 = psVar31[-1];
              lVar35 = (long)iVar33;
              iVar49 = piVar29[-1];
              piVar29[-1] = iVar33;
              sVar19 = *psVar31;
              uVar41 = uVar41 + 2;
              psVar31 = psVar31 + 2;
              iVar33 = *piVar29;
              iVar39 = iVar39 + (int)((ulong)(sVar20 * lVar35) >> 0x10) +
                       (int)((ulong)((long)sVar19 * (long)iVar49) >> 0x10);
              *piVar29 = iVar49;
              piVar29 = piVar29 + 2;
            } while (uVar41 < uVar10);
          }
          *(int *)((long)param_2 + ((long)(int)uVar10 + -1) * 4 + 0x1080) = iVar33;
          iVar39 = (int)((ulong)((long)sVar24 * (long)*(int *)((long)param_2 + 0x10e0)) >> 0x10) +
                   (iVar39 + (int)((ulong)((long)psVar5[(long)(int)uVar10 + -1] * (long)iVar33) >>
                                  0x10)) * 2;
          iVar33 = (int)((ulong)(lVar45 * *(int *)((long)param_2 +
                                                  (long)*(int *)((long)param_2 + 0x10f0) * 4 + 0x4fc
                                                  )) >> 0x10) +
                   (int)((ulong)((long)*(int *)((long)param_2 + 0x10e0) *
                                ((long)((ulong)uVar13 << 0x20) >> 0x30)) >> 0x10);
          iVar49 = iVar32 * 4 - (iVar39 + iVar33);
          if (iVar59 < 1) {
            iVar49 = iVar49 >> 1;
          }
          else {
            piVar2 = (int *)(lVar34 + -4);
            piVar3 = (int *)(lVar34 + 4);
            piVar29 = (int *)(lVar34 + -8);
            lVar34 = lVar34 + 4;
            iVar49 = iVar60 + (iVar49 - ((int)((ulong)(lVar50 * ((long)*piVar29 + (long)*piVar3)) >>
                                              0x10) + (int)((ulong)(*piVar2 * lVar47) >> 0x10))) * 2
                     >> 2;
          }
          iVar15 = *(int *)((long)local_b0 + uVar42 * 4);
          iVar57 = iVar15 - (iVar49 + 1 >> 1);
          iVar49 = -iVar57;
          if (-1 < *(int *)((long)param_2 + 0x10f4)) {
            iVar49 = iVar57;
          }
          if (iVar49 < -0x7bff) {
            iVar49 = -0x7c00;
          }
          if (0x77ff < iVar49) {
            iVar49 = 0x7800;
          }
          uVar26 = iVar49 - local_84;
          uVar30 = uVar26;
          uVar54 = local_ec;
          uVar53 = local_84;
          iVar57 = local_d0;
          iVar48 = local_f0;
          if (((int)local_cc < 0x801) ||
             (uVar30 = uVar26 - local_e4, uVar30 != 0 && local_e4 <= (int)uVar26)) {
            if ((int)uVar30 < 0x400) goto LAB_00e98bd0;
LAB_00e98778:
            uVar53 = local_104 + (uVar30 & 0xfffffc00);
            uVar54 = uVar53 + 0x400;
            iVar57 = (short)uVar53 * local_e8;
            iVar48 = (short)(uVar53 + 0x400) * local_e8;
          }
          else if ((int)uVar26 < local_110) {
            uVar30 = uVar26 + local_e4;
            if (0x3ff < (int)uVar30) goto LAB_00e98778;
LAB_00e98bd0:
            if (((int)uVar30 >> 10 != 0) &&
               (uVar53 = local_10c, uVar54 = local_84, iVar57 = iStack_108, iVar48 = local_d0,
               (int)uVar30 >> 10 != -1)) {
              iVar57 = local_84 + (uVar30 & 0xfffffc00);
              uVar53 = iVar57 + 0x50;
              uVar54 = iVar57 + 0x450;
              iVar57 = ((int)(uVar53 * -0x10000) >> 0x10) * local_e8;
              iVar48 = ((int)(uVar53 * -0x10000 + -0x4000000) >> 0x10) * local_e8;
            }
          }
          else if ((int)uVar26 < 0) {
            uVar53 = local_10c;
            uVar54 = local_84;
            iVar57 = iStack_108;
            iVar48 = local_d0;
          }
          iVar27 = (int)(short)((short)iVar49 - (short)uVar53);
          iVar49 = (int)(short)((short)iVar49 - (short)uVar54);
          if (iVar57 + iVar27 * iVar27 <= iVar48 + iVar49 * iVar49) {
            uVar54 = uVar53;
          }
          *(char *)(local_90 + uVar42) = (char)((uVar54 >> 9) + 1 >> 1);
          iVar49 = uVar54 * -0x10;
          if (-1 < *(int *)((long)param_2 + 0x10f4)) {
            iVar49 = uVar54 * 0x10;
          }
          iVar49 = iVar49 + iVar60 * 2;
          iVar32 = iVar49 + iVar32 * 0x10;
          iVar60 = iVar32 + iVar15 * -0x10;
          iVar39 = iVar60 + iVar39 * -4;
          piVar38 = piVar38 + 1;
          *piVar38 = iVar32;
          *(int *)((long)param_2 + 0x10e0) = iVar39;
          uVar41 = (long)iVar32 * ((long)((ulong)uVar14 << 0x20) >> 0x26);
          *(int *)((long)param_2 + 0x10e4) = iVar60;
          *(int *)((long)param_2 + (long)*(int *)((long)param_2 + 0x10f0) * 4 + 0x500) =
               iVar39 + iVar33 * -4;
          iVar32 = (int)(uVar41 >> 0x10);
          uVar8 = 0x8000;
          if (-0x800081 < iVar32) {
            uVar8 = (short)(((uint)(uVar41 >> 0x17) & 0x1ffffff) + 1 >> 1);
          }
          iVar60 = (int)*local_b8;
          uVar9 = 0x7fff;
          if (iVar32 < 0x7fff80) {
            uVar9 = uVar8;
          }
          *local_b8 = CONCAT44((int)((ulong)*local_b8 >> 0x20) + 1,iVar60 + 1);
          *(undefined2 *)((long)local_98 + uVar42 * 2) = uVar9;
          pcVar1 = (char *)(local_90 + uVar42);
          uVar42 = uVar42 + 1;
          iVar32 = *(int *)((long)param_2 + 0x10f4) + (int)*pcVar1;
          *(int *)(local_a8 + (long)iVar60 * 4) = iVar49 * 2;
          *(int *)((long)param_2 + 0x10f4) = iVar32;
          local_f8 = psVar6;
          local_e0 = lVar47;
          local_d8 = lVar50;
          local_c8 = (int)uVar10 >> 1;
          local_c4 = iVar25;
          local_c0 = lVar45;
        } while (uVar42 != uVar58);
      }
      uVar62 = *(undefined8 *)((long)param_2 + (long)iVar56 * 4 + 0xf38);
      uVar61 = *(undefined8 *)((long)param_2 + (long)iVar56 * 4 + 0xf30);
      uVar63 = *(undefined8 *)((long)param_2 + (long)iVar56 * 4 + 0xf20);
      uVar65 = *(undefined8 *)((long)param_2 + (long)iVar56 * 4 + 0xf18);
      uVar64 = *(undefined8 *)((long)param_2 + (long)iVar56 * 4 + 0xf10);
      uVar67 = *(undefined8 *)((long)param_2 + (long)iVar56 * 4 + 0xf08);
      uVar66 = *(undefined8 *)((long)param_2 + (long)iVar56 * 4 + 0xf00);
      local_170[5] = *(undefined8 *)((long)param_2 + (long)iVar56 * 4 + 0xf28);
      local_170[4] = uVar63;
      local_170[7] = uVar62;
      local_170[6] = uVar61;
      local_170[1] = uVar67;
      *local_170 = uVar66;
      local_170[3] = uVar65;
      local_170[2] = uVar64;
      lVar35 = (long)*(int *)(local_138 + 0x11ec);
      iVar56 = *(int *)(local_138 + 0x11e4);
      local_98 = (void *)((long)local_98 + lVar35 * 2);
      local_90 = local_90 + lVar35;
      local_118 = (ulong)((int)local_118 + 3);
      param_4 = (undefined8 *)((long)puVar52 + lVar35 * 2);
      lVar34 = lVar55 + 1;
      local_130 = puVar52;
      local_128 = uVar58;
      local_120 = lVar55;
    } while (lVar55 + 1 < (long)iVar56);
    iVar32 = *(int *)(local_138 + 0x11e8);
    lVar34 = (long)*(int *)(local_138 + 0x11f0);
    lVar37 = alStack_1d0[1];
    param_1 = local_138;
  }
  *(undefined4 *)((long)param_2 + 0x10e8) = *(undefined4 *)(local_140 + (long)(iVar56 + -1) * 4);
  memmove(param_2,(void *)((long)param_2 + (long)iVar32 * 2),lVar34 << 1);
  memmove((void *)((long)param_2 + 0x500),
          (void *)((long)(void *)((long)param_2 + 0x500) + (long)*(int *)(param_1 + 0x11e8) * 4),
          (long)*(int *)(param_1 + 0x11f0) << 2);
  if (*(long *)(lVar37 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


