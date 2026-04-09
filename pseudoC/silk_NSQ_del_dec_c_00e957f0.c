// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_NSQ_del_dec_c
// Entry Point: 00e957f0
// Size: 5628 bytes
// Signature: undefined silk_NSQ_del_dec_c(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined4 param_12, undefined4 param_13)


void silk_NSQ_del_dec_c(long param_1,void *param_2,long param_3,undefined (*param_4) [16],
                       long param_5,long param_6,long param_7,long param_8,long param_9,
                       long param_10,long param_11_00,long param_11,long param_13_00,
                       undefined4 param_12,short param_13)

{
  undefined (*pauVar1) [16];
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  bool bVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  undefined (*pauVar22) [16];
  int iVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  undefined *puVar31;
  byte bVar32;
  undefined2 *puVar33;
  int iVar34;
  int iVar35;
  undefined8 *puVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  uint uVar40;
  int iVar41;
  ulong uVar42;
  int *piVar43;
  long lVar44;
  ulong uVar45;
  short *psVar46;
  long lVar47;
  long lVar48;
  undefined8 *extraout_x16;
  undefined8 *puVar49;
  ulong uVar50;
  ulong extraout_x17;
  uint uVar51;
  undefined8 *puVar52;
  void *pvVar53;
  undefined8 uVar54;
  undefined auVar55 [16];
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined auVar62 [16];
  int *piStack_180;
  undefined (*local_178) [16];
  undefined8 *local_170;
  long local_168;
  undefined *local_160;
  int *local_158;
  long local_150;
  int local_144;
  ulong local_140;
  undefined8 *local_138;
  int local_12c;
  long local_128;
  long local_120;
  uint local_114;
  long local_110;
  int local_108;
  undefined4 local_104;
  long local_100;
  long local_f8;
  long lStack_f0;
  ulong local_e8;
  undefined8 *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  uint local_bc;
  long local_b8;
  long local_b0;
  int local_a4;
  undefined8 *local_a0;
  uint local_94;
  long local_90;
  long local_88;
  undefined (*local_80) [16];
  int local_74;
  long local_70;
  
  lVar24 = tpidr_el0;
  local_70 = *(long *)(lVar24 + 0x28);
  uVar51 = *(uint *)(param_1 + 0x1214);
  local_a4 = *(int *)((long)param_2 + 0x10e8);
  lVar27 = -((long)(int)uVar51 * 0x514 + 0xfU & 0xfffffffffffffff0);
  puVar49 = (undefined8 *)((long)&piStack_180 + lVar27);
  local_d8 = param_6;
  local_d0 = param_7;
  local_c8 = param_8;
  local_b8 = param_3;
  local_80 = param_4;
  memset(puVar49,0,(long)(int)uVar51 * 0x514);
  puVar20 = (undefined8 *)((long)param_2 + 0xf00);
  pauVar22 = (undefined (*) [16])((long)param_2 + 0x1080);
  if (0 < (int)uVar51) {
    uVar30 = (ulong)uVar51;
    uVar54 = *(undefined8 *)((long)param_2 + 0x10e0);
    uVar25 = (uint)*(byte *)(local_b8 + 0x22);
    iVar35 = *(int *)((long)param_2 + (long)*(int *)(param_1 + 0x11f0) * 4 + 0x4fc);
    puVar36 = puVar49;
    do {
      uVar59 = *(undefined8 *)((long)param_2 + 0xf08);
      uVar56 = *puVar20;
      auVar55 = *(undefined (*) [16])((long)param_2 + 0xf10);
      uVar26 = uVar25 & 3;
      *(int *)(puVar36 + 0xa2) = 0;
      puVar36[0xa0] = uVar54;
      uVar25 = uVar25 + 1;
      *(int *)(puVar36 + 0x80) = iVar35;
      uVar30 = uVar30 - 1;
      *(uint *)(puVar36 + 0xa1) = uVar26;
      *(uint *)((long)puVar36 + 0x50c) = uVar26;
      uVar61 = *(undefined8 *)((long)param_2 + 0xf28);
      uVar58 = *(undefined8 *)((long)param_2 + 0xf20);
      uVar60 = *(undefined8 *)((long)param_2 + 0xf38);
      uVar57 = *(undefined8 *)((long)param_2 + 0xf30);
      puVar36[1] = uVar59;
      *puVar36 = uVar56;
      puVar36[3] = auVar55._8_8_;
      puVar36[2] = auVar55._0_8_;
      uVar59 = *(undefined8 *)((long)param_2 + 0x10a8);
      uVar56 = *(undefined8 *)((long)param_2 + 0x10a0);
      auVar55 = *(undefined (*) [16])((long)param_2 + 0x10b0);
      puVar36[5] = uVar61;
      puVar36[4] = uVar58;
      puVar36[7] = uVar60;
      puVar36[6] = uVar57;
      puVar36[0x99] = uVar59;
      puVar36[0x98] = uVar56;
      uVar61 = *(undefined8 *)((long)param_2 + 0x10c8);
      uVar58 = *(undefined8 *)((long)param_2 + 0x10c0);
      uVar60 = *(undefined8 *)((long)param_2 + 0x10d8);
      uVar57 = *(undefined8 *)((long)param_2 + 0x10d0);
      puVar36[0x9b] = auVar55._8_8_;
      puVar36[0x9a] = auVar55._0_8_;
      puVar36[0x9d] = uVar61;
      puVar36[0x9c] = uVar58;
      puVar36[0x9f] = uVar60;
      puVar36[0x9e] = uVar57;
      auVar55 = *pauVar22;
      uVar61 = *(undefined8 *)((long)param_2 + 0x1098);
      uVar58 = *(undefined8 *)((long)param_2 + 0x1090);
      puVar36[0x95] = auVar55._8_8_;
      puVar36[0x94] = auVar55._0_8_;
      puVar36[0x97] = uVar61;
      puVar36[0x96] = uVar58;
      puVar36 = (undefined8 *)((long)puVar36 + 0x514);
    } while (uVar30 != 0);
  }
  uVar26 = *(uint *)(param_1 + 0x11ec);
  local_74 = 0;
  bVar32 = *(byte *)(local_b8 + 0x1d);
  cVar9 = *(char *)(local_b8 + 0x1e);
  uVar25 = uVar26;
  if (0x27 < (int)uVar26) {
    uVar25 = 0x28;
  }
  uVar30 = (ulong)uVar25;
  if (bVar32 == 2) {
    uVar29 = *(uint *)(param_1 + 0x11e4);
    uVar37 = (ulong)uVar29;
    if (0 < (int)uVar29) {
      if (uVar29 < 8) {
        uVar42 = 0;
      }
      else {
        auVar55._0_8_ = CONCAT44(uVar25,uVar25);
        auVar55._8_4_ = uVar25;
        auVar55._12_4_ = uVar25;
        uVar42 = uVar37 & 0xfffffff8;
        puVar36 = (undefined8 *)(param_13_00 + 0x10);
        auVar62._8_8_ = auVar55._8_8_;
        auVar62._0_8_ = auVar55._0_8_;
        uVar30 = uVar42;
        do {
          puVar52 = puVar36 + -2;
          puVar14 = puVar36 + -1;
          puVar15 = puVar36 + 1;
          uVar54 = *puVar36;
          puVar36 = puVar36 + 4;
          uVar30 = uVar30 - 8;
          auVar16._4_4_ = (int)((ulong)*puVar52 >> 0x20) + -3;
          auVar16._0_4_ = (int)*puVar52 + -3;
          auVar16._8_4_ = (int)*puVar14 + -3;
          auVar16._12_4_ = (int)((ulong)*puVar14 >> 0x20) + -3;
          auVar55 = NEON_smin(auVar55,auVar16,4);
          auVar17._4_4_ = (int)((ulong)uVar54 >> 0x20) + -3;
          auVar17._0_4_ = (int)uVar54 + -3;
          auVar17._8_4_ = (int)*puVar15 + -3;
          auVar17._12_4_ = (int)((ulong)*puVar15 >> 0x20) + -3;
          auVar62 = NEON_smin(auVar62,auVar17,4);
        } while (uVar30 != 0);
        auVar55 = NEON_smin(auVar55,auVar62,4);
        uVar25 = NEON_sminv(auVar55,4);
        uVar30 = (ulong)uVar25;
        if (uVar42 == uVar37) goto LAB_00e959d8;
      }
      lVar38 = uVar37 - uVar42;
      piVar43 = (int *)(param_13_00 + uVar42 * 4);
      do {
        uVar25 = (uint)uVar30;
        if ((int)(*piVar43 - 3U) <= (int)(uint)uVar30) {
          uVar25 = *piVar43 - 3U;
        }
        uVar30 = (ulong)uVar25;
        lVar38 = lVar38 + -1;
        piVar43 = piVar43 + 1;
      } while (lVar38 != 0);
    }
  }
  else if (0 < local_a4) {
    if ((int)(local_a4 - 3U) <= (int)uVar25) {
      uVar25 = local_a4 - 3U;
    }
    uVar30 = (ulong)uVar25;
  }
LAB_00e959d8:
  uVar25 = (uint)uVar30;
  iVar23 = *(int *)(param_1 + 0x11f0);
  lVar38 = (long)*(int *)(param_1 + 0x11e8) + (long)iVar23;
  local_88 = (long)puVar49 - (lVar38 * 4 + 0xfU & 0xfffffffffffffff0);
  local_110 = local_88 - (lVar38 * 2 + 0xfU & 0xfffffffffffffff0);
  puVar36 = (undefined8 *)(local_110 - ((long)(int)uVar26 * 4 + 0xfU & 0xfffffffffffffff0));
  local_a0 = puVar36;
  bVar18 = *(char *)(local_b8 + 0x1f) == '\x04';
  local_e8 = (ulong)bVar18;
  local_e0 = puVar36 + -0x14;
  iVar35 = *(int *)(param_1 + 0x11e4);
  pvVar53 = (void *)((long)param_2 + (long)iVar23 * 2);
  local_114 = 3;
  if (!bVar18) {
    local_114 = 1;
  }
  *(int *)((long)param_2 + 0x10f0) = iVar23;
  *(int *)((long)param_2 + 0x10ec) = iVar23;
  puVar52 = puVar49;
  if (0 < iVar35) {
    lVar38 = 0;
    local_178 = pauVar22;
    iVar23 = 0;
    local_170 = puVar20;
    local_168 = lVar24;
    local_f8 = param_10;
    lStack_f0 = param_11_00;
    local_bc = uVar25;
    local_100 = param_9;
    local_128 = param_13_00;
    local_120 = (long)param_13;
    local_b0 = param_11;
    local_108 = (int)*(short *)((long)&silk_Quantization_Offsets_Q10 +
                               (long)cVar9 * 2 + (long)((int)((uint)bVar32 << 0x18) >> 0x19) * 4);
    local_104 = param_12;
    local_140 = uVar30;
    local_138 = puVar49;
    local_160 = &stack0x00000390 + lVar27;
    local_158 = (int *)(&stack0x000008a4 + lVar27);
    local_144 = -uVar25;
    local_150 = -(long)(int)uVar25;
    do {
      local_94 = *(uint *)(local_100 + lVar38 * 4);
      *(undefined4 *)((long)param_2 + 0x10fc) = 0;
      uVar51 = (uint)lVar38;
      lVar24 = local_d8 + (ulong)(((uint)local_e8 | uVar51 >> 1) << 4) * 2;
      local_90 = lVar24;
      if (bVar32 == 2) {
        local_a4 = *(int *)(param_13_00 + lVar38 * 4);
        if ((local_114 & uVar51) != 0) {
          bVar32 = 2;
          goto LAB_00e95b74;
        }
        if (lVar38 == 2) {
          uVar25 = *(uint *)(param_1 + 0x1214);
          uVar37 = (ulong)uVar25;
          if ((int)uVar25 < 2) {
            uVar29 = 0;
          }
          else {
            uVar29 = 0;
            uVar42 = 1;
            piVar43 = local_158;
            iVar35 = *(int *)(puVar52 + 0xa2);
            do {
              iVar23 = *piVar43;
              piVar43 = piVar43 + 0x145;
              uVar11 = (uint)uVar42;
              if (iVar35 <= iVar23) {
                iVar23 = iVar35;
                uVar11 = uVar29;
              }
              uVar29 = uVar11;
              uVar42 = uVar42 + 1;
              iVar35 = iVar23;
            } while (uVar37 != uVar42);
          }
          if (0 < (int)uVar25) {
            uVar42 = (ulong)uVar29;
            if (uVar25 == 1) {
              uVar39 = 0;
            }
            else {
              uVar50 = 0;
              uVar39 = uVar37 & 0xfffffffe;
              uVar45 = uVar42;
              puVar20 = puVar52;
              do {
                if (uVar45 != 0) {
                  puVar49 = (undefined8 *)(ulong)*(uint *)(puVar20 + 0xa2);
                }
                if ((uVar50 | 1) != uVar42) {
                  uVar30 = (ulong)*(uint *)((long)puVar20 + 0xa24);
                }
                if (uVar45 != 0) {
                  uVar25 = (int)puVar49 + 0x7ffffff;
                  puVar49 = (undefined8 *)(ulong)uVar25;
                  *(uint *)(puVar20 + 0xa2) = uVar25;
                }
                if ((uVar50 | 1) != uVar42) {
                  uVar25 = (int)uVar30 + 0x7ffffff;
                  puVar49 = (undefined8 *)(ulong)uVar25;
                  *(uint *)((long)puVar20 + 0xa24) = uVar25;
                }
                uVar50 = uVar50 + 2;
                puVar20 = puVar20 + 0x145;
                uVar45 = uVar45 - 2;
              } while (uVar50 != uVar39);
              lVar24 = local_90;
              if (uVar39 == uVar37) goto LAB_00e96a78;
            }
            lVar48 = uVar42 - uVar39;
            lVar27 = uVar37 - uVar39;
            piVar43 = (int *)(local_160 + uVar39 * 0x514);
            do {
              if (lVar48 != 0) {
                *piVar43 = *piVar43 + 0x7ffffff;
              }
              lVar48 = lVar48 + -1;
              piVar43 = piVar43 + 0x145;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
          }
LAB_00e96a78:
          if ((int)local_bc < 1) {
            iVar23 = 0;
          }
          else {
            uVar25 = local_74 + local_bc;
            puVar31 = (undefined *)(param_5 + local_150);
            puVar33 = (undefined2 *)((long)pvVar53 + local_150 * 2);
            uVar30 = local_140;
            iVar35 = local_144;
            do {
              uVar26 = (int)(uVar25 - 1) % 0x28;
              uVar25 = uVar26 + 0x28;
              if (-1 < (int)uVar26) {
                uVar25 = uVar26;
              }
              lVar27 = (ulong)uVar25 * 4 + (long)(int)uVar29 * 0x514;
              iVar23 = *(int *)((long)puVar52 + lVar27 + 0x2c0);
              uVar4 = *(undefined4 *)((long)puVar52 + lVar27 + 0x400);
              *puVar31 = (char)((*(uint *)((long)puVar52 + lVar27 + 0x220) >> 9) + 1 >> 1);
              uVar37 = (long)*(int *)(local_b0 + 4) * (long)iVar23;
              iVar23 = (int)(uVar37 >> 0x10);
              uVar2 = 0x8000;
              if (-0x20002001 < iVar23) {
                uVar2 = (short)(((uint)(uVar37 >> 0x1d) & 0x7ffff) + 1 >> 1);
              }
              iVar41 = iVar35 + *(int *)((long)param_2 + 0x10f0);
              uVar3 = 0x7fff;
              if (iVar23 < 0x1fffe000) {
                uVar3 = uVar2;
              }
              iVar35 = iVar35 + 1;
              uVar30 = uVar30 - 1;
              *puVar33 = uVar3;
              *(undefined4 *)((long)param_2 + (long)iVar41 * 4 + 0x500) = uVar4;
              puVar31 = puVar31 + 1;
              puVar33 = puVar33 + 1;
            } while (uVar30 != 0);
            iVar23 = 0;
            uVar26 = *(uint *)(param_1 + 0x11ec);
          }
        }
        iVar35 = (*(int *)(param_1 + 0x11f0) - (local_a4 + *(int *)(param_1 + 0x1220))) + -2;
        silk_LPC_analysis_filter
                  (local_110 + (long)iVar35 * 2,
                   (void *)((long)param_2 + (long)(int)(iVar35 + uVar26 * uVar51) * 2),lVar24,
                   *(int *)(param_1 + 0x11f0) - iVar35,*(int *)(param_1 + 0x1220),
                   *(undefined4 *)(param_1 + 0x13f4));
        bVar18 = false;
        bVar32 = *(byte *)(local_b8 + 0x1d);
        *(undefined4 *)((long)param_2 + 0x10ec) = *(undefined4 *)(param_1 + 0x11f0);
        *(undefined4 *)((long)param_2 + 0x10fc) = 1;
      }
      else {
LAB_00e95b74:
        bVar18 = true;
      }
      lVar24 = local_b0;
      lVar27 = lVar38 * 4;
      uVar26 = *(uint *)(local_b0 + lVar27);
      uVar25 = uVar26;
      if ((int)uVar26 < 2) {
        uVar25 = 1;
      }
      iVar34 = (int)LZCOUNT(uVar25);
      uVar12 = iVar34 - 0xf;
      iVar41 = uVar25 << (ulong)(iVar34 - 1U & 0x1f);
      uVar29 = 0x7fffffff >> (ulong)(uVar12 & 0x1f);
      iVar35 = iVar41 >> 0x10;
      uVar11 = 0;
      if (iVar35 != 0) {
        uVar11 = 0x1fffffff / iVar35;
      }
      iVar35 = *(int *)(param_13_00 + lVar27);
      uVar11 = (int)((ulong)(((long)-((-((ulong)(uVar11 >> 0xf) & 1) & 0xfffffff800000000 |
                                      ((ulong)uVar11 & 0xffff) << 0x13) * (long)iVar41 &
                                     0xfffffff800000000) >> 0x20) * (long)(int)uVar11) >> 0x10) +
               uVar11 * 0x10000;
      uVar40 = -0x80000000 >> (uVar12 & 0x1f);
      if ((int)uVar40 <= (int)uVar11) {
        uVar40 = uVar11;
      }
      if ((int)uVar11 <= (int)uVar29) {
        uVar29 = uVar40;
      }
      uVar40 = *(uint *)(param_1 + 0x11ec);
      uVar37 = (ulong)uVar40;
      uVar28 = *(uint *)(param_1 + 0x1214);
      uVar30 = (ulong)uVar28;
      uVar11 = (int)uVar11 >> (0xfU - iVar34 & 0x1f);
      if (uVar25 >> 0x11 == 0) {
        uVar11 = uVar29 << (ulong)(uVar12 & 0x1f);
      }
      if (0 < (int)uVar40) {
        lVar48 = (long)((ulong)(((int)uVar11 >> 4) + 1) << 0x20) >> 0x21;
        if (uVar40 < 8) {
          uVar50 = 0;
        }
        else {
          uVar50 = uVar37 & 0xfffffff8;
          uVar42 = uVar50;
          puVar20 = local_a0;
          pauVar22 = local_80;
          do {
            auVar55 = *pauVar22;
            uVar42 = uVar42 - 8;
            puVar20[1] = CONCAT44((int)((ulong)(lVar48 * (int)auVar55._6_2_) >> 0x10),
                                  (int)((ulong)(lVar48 * (int)auVar55._4_2_) >> 0x10));
            *puVar20 = CONCAT44((int)((ulong)(lVar48 * (int)auVar55._2_2_) >> 0x10),
                                (int)((ulong)(lVar48 * (int)auVar55._0_2_) >> 0x10));
            puVar20[3] = CONCAT44((int)((ulong)(lVar48 * (int)auVar55._14_2_) >> 0x10),
                                  (int)((ulong)(lVar48 * (int)auVar55._12_2_) >> 0x10));
            puVar20[2] = CONCAT44((int)((ulong)(lVar48 * (int)auVar55._10_2_) >> 0x10),
                                  (int)((ulong)(lVar48 * (int)auVar55._8_2_) >> 0x10));
            puVar20 = puVar20 + 4;
            pauVar22 = pauVar22 + 1;
          } while (uVar42 != 0);
          param_13_00 = local_128;
          if (uVar50 == uVar37) goto LAB_00e95d28;
        }
        lVar19 = uVar37 - uVar50;
        puVar21 = (undefined4 *)((long)local_a0 + uVar50 * 4);
        psVar46 = (short *)(*local_80 + uVar50 * 2);
        do {
          lVar19 = lVar19 + -1;
          *puVar21 = (int)((ulong)(*psVar46 * lVar48) >> 0x10);
          puVar21 = puVar21 + 1;
          psVar46 = psVar46 + 1;
        } while (lVar19 != 0);
      }
LAB_00e95d28:
      if (!bVar18) {
        iVar41 = *(int *)((long)param_2 + 0x10ec);
        uVar25 = (uint)((ulong)(local_120 * (int)uVar11) >> 0xe) & 0xfffffffc;
        if (lVar38 != 0) {
          uVar25 = uVar11;
        }
        iVar34 = (iVar41 - iVar35) + -2;
        if (iVar34 < iVar41) {
          lVar19 = (long)iVar34;
          lVar44 = (long)(int)uVar25;
          uVar37 = iVar41 - lVar19;
          lVar48 = lVar19;
          if (7 < uVar37) {
            uVar50 = uVar37 & 0xfffffffffffffff8;
            lVar48 = uVar50 + lVar19;
            local_12c = iVar23;
            pauVar22 = (undefined (*) [16])(local_110 + lVar19 * 2);
            puVar20 = (undefined8 *)(local_88 + lVar19 * 4);
            uVar42 = uVar50;
            do {
              auVar55 = *pauVar22;
              uVar42 = uVar42 - 8;
              puVar20[1] = CONCAT44((int)((ulong)(lVar44 * (int)auVar55._6_2_) >> 0x10),
                                    (int)((ulong)(lVar44 * (int)auVar55._4_2_) >> 0x10));
              *puVar20 = CONCAT44((int)((ulong)(lVar44 * (int)auVar55._2_2_) >> 0x10),
                                  (int)((ulong)(lVar44 * (int)auVar55._0_2_) >> 0x10));
              puVar20[3] = CONCAT44((int)((ulong)(lVar44 * (int)auVar55._14_2_) >> 0x10),
                                    (int)((ulong)(lVar44 * (int)auVar55._12_2_) >> 0x10));
              puVar20[2] = CONCAT44((int)((ulong)(lVar44 * (int)auVar55._10_2_) >> 0x10),
                                    (int)((ulong)(lVar44 * (int)auVar55._8_2_) >> 0x10));
              pauVar22 = pauVar22 + 1;
              puVar20 = puVar20 + 4;
            } while (uVar42 != 0);
            puVar52 = local_138;
            param_13_00 = local_128;
            if (uVar37 == uVar50) goto LAB_00e95e70;
          }
          lVar19 = iVar41 - lVar48;
          psVar46 = (short *)(local_110 + lVar48 * 2);
          puVar21 = (undefined4 *)(local_88 + lVar48 * 4);
          do {
            lVar19 = lVar19 + -1;
            *puVar21 = (int)((ulong)(*psVar46 * lVar44) >> 0x10);
            psVar46 = psVar46 + 1;
            puVar21 = puVar21 + 1;
          } while (lVar19 != 0);
        }
      }
LAB_00e95e70:
      uVar25 = *(uint *)((long)param_2 + 0x10f8);
      if (uVar26 != uVar25) {
        uVar29 = -uVar25;
        if (-1 < (int)uVar25) {
          uVar29 = uVar25;
        }
        uVar11 = -uVar26;
        if (-1 < (int)uVar26) {
          uVar11 = uVar26;
        }
        iVar34 = uVar26 << (ulong)((int)LZCOUNT(uVar11) - 1U & 0x1f);
        iVar41 = iVar34 >> 0x10;
        sVar10 = 0;
        if (iVar41 != 0) {
          sVar10 = (short)(0x1fffffff / iVar41);
        }
        iVar13 = (int)LZCOUNT(uVar29) - (int)LZCOUNT(uVar11);
        uVar11 = -iVar13 - 0xd;
        iVar41 = uVar25 << (ulong)((int)LZCOUNT(uVar29) - 1U & 0x1f);
        lVar48 = (long)sVar10 * (long)iVar41;
        uVar26 = -0x80000000 >> (uVar11 & 0x1f);
        uVar25 = (int)((ulong)((long)sVar10 *
                              (long)(int)(iVar41 - ((uint)((ulong)((lVar48 >> 0x10) * (long)iVar34)
                                                          >> 0x1d) & 0xfffffff8))) >> 0x10) +
                 (int)((ulong)lVar48 >> 0x10);
        iVar41 = (int)uVar25 >> (iVar13 + 0xdU & 0x1f);
        uVar29 = 0x7fffffff >> (ulong)(uVar11 & 0x1f);
        if (0x2f < iVar13 + 0x1dU) {
          iVar41 = 0;
        }
        if ((int)uVar26 <= (int)uVar25) {
          uVar26 = uVar25;
        }
        if ((int)uVar25 <= (int)uVar29) {
          uVar29 = uVar26;
        }
        if (iVar13 == -0xe || iVar13 + 0xe < 0 != SCARRY4(iVar13,0xe)) {
          iVar41 = uVar29 << (ulong)(uVar11 & 0x1f);
        }
        lVar48 = (long)iVar41;
        if (0 < *(int *)(param_1 + 0x11f0)) {
          lVar19 = (long)(*(int *)((long)param_2 + 0x10f0) - *(int *)(param_1 + 0x11f0));
          do {
            lVar44 = lVar19 * 4;
            lVar19 = lVar19 + 1;
            *(int *)((long)param_2 + lVar44 + 0x500) =
                 (int)((ulong)(*(int *)((long)param_2 + lVar44 + 0x500) * lVar48) >> 0x10);
          } while (lVar19 < *(int *)((long)param_2 + 0x10f0));
        }
        if (((char)bVar32 == 2) && (*(int *)((long)param_2 + 0x10fc) == 0)) {
          iVar35 = (*(int *)((long)param_2 + 0x10ec) - iVar35) + -2;
          iVar41 = *(int *)((long)param_2 + 0x10ec) - local_bc;
          if (iVar35 < iVar41) {
            lVar47 = (long)iVar35;
            lVar44 = (long)iVar41;
            lVar19 = lVar44;
            if (lVar44 <= lVar47 + 1) {
              lVar19 = lVar47 + 1;
            }
            uVar37 = lVar19 - lVar47;
            lVar19 = lVar47;
            if (3 < uVar37) {
              uVar50 = uVar37 & 0xfffffffffffffffc;
              lVar19 = uVar50 + lVar47;
              pauVar22 = (undefined (*) [16])(local_88 + lVar47 * 4);
              uVar42 = uVar50;
              do {
                auVar55 = *pauVar22;
                uVar42 = uVar42 - 4;
                *(ulong *)(*pauVar22 + 8) =
                     CONCAT44((int)((ulong)(lVar48 * auVar55._12_4_) >> 0x10),
                              (int)((ulong)(lVar48 * auVar55._8_4_) >> 0x10));
                *(ulong *)*pauVar22 =
                     CONCAT44((int)((ulong)(lVar48 * auVar55._4_4_) >> 0x10),
                              (int)((ulong)(lVar48 * auVar55._0_4_) >> 0x10));
                pauVar22 = pauVar22 + 1;
              } while (uVar42 != 0);
              if (uVar37 == uVar50) goto LAB_00e96054;
            }
            do {
              lVar47 = lVar19 * 4;
              lVar19 = lVar19 + 1;
              *(int *)(local_88 + lVar47) =
                   (int)((ulong)(*(int *)(local_88 + lVar47) * lVar48) >> 0x10);
            } while (lVar19 < lVar44);
          }
        }
LAB_00e96054:
        puVar20 = puVar52;
        if (0 < (int)uVar28) {
          do {
            uVar30 = uVar30 - 1;
            *(int *)(puVar20 + 0xa0) = (int)((ulong)(*(int *)(puVar20 + 0xa0) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0x504) =
                 (int)((ulong)(*(int *)((long)puVar20 + 0x504) * lVar48) >> 0x10);
            *(int *)puVar20 = (int)((ulong)(*(int *)puVar20 * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 4) = (int)((ulong)(*(int *)(puVar20 + 1) * lVar48) >> 0x10);
            *(int *)(puVar20 + 1) = (int)((ulong)(*(int *)(puVar20 + 1) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0xc) = (int)((ulong)(*(int *)(puVar20 + 2) * lVar48) >> 0x10);
            *(int *)(puVar20 + 2) = (int)((ulong)(*(int *)(puVar20 + 2) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0x14) = (int)((ulong)(*(int *)(puVar20 + 3) * lVar48) >> 0x10);
            auVar55 = *(undefined (*) [16])(puVar20 + 0x6c);
            *(int *)(puVar20 + 3) = (int)((ulong)(*(int *)(puVar20 + 3) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0x1c) = (int)((ulong)(*(int *)(puVar20 + 4) * lVar48) >> 0x10);
            *(int *)(puVar20 + 4) = (int)((ulong)(*(int *)(puVar20 + 4) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0x24) = (int)((ulong)(*(int *)(puVar20 + 5) * lVar48) >> 0x10);
            *(int *)(puVar20 + 5) = (int)((ulong)(*(int *)(puVar20 + 5) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0x2c) = (int)((ulong)(*(int *)(puVar20 + 6) * lVar48) >> 0x10);
            *(int *)(puVar20 + 6) = (int)((ulong)(*(int *)(puVar20 + 6) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0x34) = (int)((ulong)(*(int *)(puVar20 + 7) * lVar48) >> 0x10);
            *(int *)(puVar20 + 7) = (int)((ulong)(*(int *)(puVar20 + 7) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0x3c) = (int)((ulong)(*(int *)(puVar20 + 8) * lVar48) >> 0x10);
            *(int *)(puVar20 + 0x94) = (int)((ulong)(*(int *)(puVar20 + 0x94) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0x4a4) =
                 (int)((ulong)(*(int *)((long)puVar20 + 0x4a4) * lVar48) >> 0x10);
            *(int *)(puVar20 + 0x95) = (int)((ulong)(*(int *)(puVar20 + 0x95) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0x4ac) =
                 (int)((ulong)(*(int *)((long)puVar20 + 0x4ac) * lVar48) >> 0x10);
            *(int *)(puVar20 + 0x96) = (int)((ulong)(*(int *)(puVar20 + 0x96) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0x4b4) =
                 (int)((ulong)(*(int *)((long)puVar20 + 0x4b4) * lVar48) >> 0x10);
            *(int *)(puVar20 + 0x97) = (int)((ulong)(*(int *)(puVar20 + 0x97) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0x4bc) =
                 (int)((ulong)(*(int *)((long)puVar20 + 0x4bc) * lVar48) >> 0x10);
            *(int *)(puVar20 + 0x98) = (int)((ulong)(*(int *)(puVar20 + 0x98) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0x4c4) =
                 (int)((ulong)(*(int *)((long)puVar20 + 0x4c4) * lVar48) >> 0x10);
            *(int *)(puVar20 + 0x99) = (int)((ulong)(*(int *)(puVar20 + 0x99) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0x4cc) =
                 (int)((ulong)(*(int *)((long)puVar20 + 0x4cc) * lVar48) >> 0x10);
            *(int *)(puVar20 + 0x9a) = (int)((ulong)(*(int *)(puVar20 + 0x9a) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0x4d4) =
                 (int)((ulong)(*(int *)((long)puVar20 + 0x4d4) * lVar48) >> 0x10);
            *(int *)(puVar20 + 0x9b) = (int)((ulong)(*(int *)(puVar20 + 0x9b) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0x4dc) =
                 (int)((ulong)(*(int *)((long)puVar20 + 0x4dc) * lVar48) >> 0x10);
            puVar20[0x81] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x81] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x81]) >> 0x10));
            puVar20[0x80] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x80] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x80]) >> 0x10));
            *(int *)(puVar20 + 0x9c) = (int)((ulong)(*(int *)(puVar20 + 0x9c) * lVar48) >> 0x10);
            auVar62 = *(undefined (*) [16])(puVar20 + 0x70);
            puVar20[0x6d] =
                 CONCAT44((int)((ulong)(lVar48 * auVar55._12_4_) >> 0x10),
                          (int)((ulong)(lVar48 * auVar55._8_4_) >> 0x10));
            puVar20[0x6c] =
                 CONCAT44((int)((ulong)(lVar48 * auVar55._4_4_) >> 0x10),
                          (int)((ulong)(lVar48 * auVar55._0_4_) >> 0x10));
            puVar20[0x6f] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x6f] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x6f]) >> 0x10));
            puVar20[0x6e] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x6e] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x6e]) >> 0x10));
            *(int *)((long)puVar20 + 0x4e4) =
                 (int)((ulong)(*(int *)((long)puVar20 + 0x4e4) * lVar48) >> 0x10);
            puVar20[0x83] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x83] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x83]) >> 0x10));
            puVar20[0x82] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x82] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x82]) >> 0x10));
            auVar55 = *(undefined (*) [16])(puVar20 + 0x86);
            puVar20[0x85] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x85] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x85]) >> 0x10));
            puVar20[0x84] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x84] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x84]) >> 0x10));
            auVar16 = *(undefined (*) [16])(puVar20 + 0x76);
            puVar20[0x71] =
                 CONCAT44((int)((ulong)(lVar48 * auVar62._12_4_) >> 0x10),
                          (int)((ulong)(lVar48 * auVar62._8_4_) >> 0x10));
            puVar20[0x70] =
                 CONCAT44((int)((ulong)(lVar48 * auVar62._4_4_) >> 0x10),
                          (int)((ulong)(lVar48 * auVar62._0_4_) >> 0x10));
            puVar20[0x73] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x73] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x73]) >> 0x10));
            puVar20[0x72] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x72] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x72]) >> 0x10));
            puVar20[0x87] =
                 CONCAT44((int)((ulong)(lVar48 * auVar55._12_4_) >> 0x10),
                          (int)((ulong)(lVar48 * auVar55._8_4_) >> 0x10));
            puVar20[0x86] =
                 CONCAT44((int)((ulong)(lVar48 * auVar55._4_4_) >> 0x10),
                          (int)((ulong)(lVar48 * auVar55._0_4_) >> 0x10));
            puVar20[0x89] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x89] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x89]) >> 0x10));
            puVar20[0x88] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x88] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x88]) >> 0x10));
            auVar55 = *(undefined (*) [16])(puVar20 + 0x7a);
            puVar20[0x75] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x75] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x75]) >> 0x10));
            puVar20[0x74] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x74] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x74]) >> 0x10));
            puVar20[0x77] =
                 CONCAT44((int)((ulong)(lVar48 * auVar16._12_4_) >> 0x10),
                          (int)((ulong)(lVar48 * auVar16._8_4_) >> 0x10));
            puVar20[0x76] =
                 CONCAT44((int)((ulong)(lVar48 * auVar16._4_4_) >> 0x10),
                          (int)((ulong)(lVar48 * auVar16._0_4_) >> 0x10));
            *(int *)(puVar20 + 0x9d) = (int)((ulong)(*(int *)(puVar20 + 0x9d) * lVar48) >> 0x10);
            puVar20[0x8b] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x8b] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x8b]) >> 0x10));
            puVar20[0x8a] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x8a] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x8a]) >> 0x10));
            puVar20[0x8d] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x8d] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x8d]) >> 0x10));
            puVar20[0x8c] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x8c] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x8c]) >> 0x10));
            puVar20[0x79] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x79] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x79]) >> 0x10));
            puVar20[0x78] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x78] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x78]) >> 0x10));
            puVar20[0x7b] =
                 CONCAT44((int)((ulong)(lVar48 * auVar55._12_4_) >> 0x10),
                          (int)((ulong)(lVar48 * auVar55._8_4_) >> 0x10));
            puVar20[0x7a] =
                 CONCAT44((int)((ulong)(lVar48 * auVar55._4_4_) >> 0x10),
                          (int)((ulong)(lVar48 * auVar55._0_4_) >> 0x10));
            puVar20[0x8f] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x8f] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x8f]) >> 0x10));
            puVar20[0x8e] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x8e] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x8e]) >> 0x10));
            auVar55 = *(undefined (*) [16])(puVar20 + 0x92);
            puVar20[0x91] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x91] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x91]) >> 0x10));
            puVar20[0x90] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x90] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x90]) >> 0x10));
            *(int *)((long)puVar20 + 0x4ec) =
                 (int)((ulong)(*(int *)((long)puVar20 + 0x4ec) * lVar48) >> 0x10);
            *(int *)(puVar20 + 0x9e) = (int)((ulong)(*(int *)(puVar20 + 0x9e) * lVar48) >> 0x10);
            *(int *)((long)puVar20 + 0x4f4) =
                 (int)((ulong)(*(int *)((long)puVar20 + 0x4f4) * lVar48) >> 0x10);
            *(int *)(puVar20 + 0x9f) = (int)((ulong)(*(int *)(puVar20 + 0x9f) * lVar48) >> 0x10);
            puVar20[0x7d] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x7d] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x7d]) >> 0x10));
            puVar20[0x7c] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x7c] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x7c]) >> 0x10));
            puVar20[0x7f] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x7f] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x7f]) >> 0x10));
            puVar20[0x7e] =
                 CONCAT44((int)((ulong)(lVar48 * (int)((ulong)puVar20[0x7e] >> 0x20)) >> 0x10),
                          (int)((ulong)(lVar48 * (int)puVar20[0x7e]) >> 0x10));
            *(int *)((long)puVar20 + 0x4fc) =
                 (int)((ulong)(*(int *)((long)puVar20 + 0x4fc) * lVar48) >> 0x10);
            puVar20[0x93] =
                 CONCAT44((int)((ulong)(lVar48 * auVar55._12_4_) >> 0x10),
                          (int)((ulong)(lVar48 * auVar55._8_4_) >> 0x10));
            puVar20[0x92] =
                 CONCAT44((int)((ulong)(lVar48 * auVar55._4_4_) >> 0x10),
                          (int)((ulong)(lVar48 * auVar55._0_4_) >> 0x10));
            puVar20 = (undefined8 *)((long)puVar20 + 0x514);
          } while (uVar30 != 0);
        }
        uVar40 = *(uint *)(param_1 + 0x11ec);
        *(undefined4 *)((long)param_2 + 0x10f8) = *(undefined4 *)(lVar24 + lVar27);
        uVar28 = *(uint *)(param_1 + 0x1214);
        uVar26 = *(uint *)(lVar24 + lVar27);
      }
      uVar11 = local_bc;
      lVar24 = local_d0 + (ulong)(uVar51 * 5) * 2;
      uVar7 = *(undefined4 *)(local_f8 + lVar27);
      uVar8 = *(undefined4 *)(lStack_f0 + lVar27);
      uVar29 = local_94 & 0x1fffe;
      uVar4 = *(undefined4 *)(param_1 + 0x1220);
      uVar25 = (int)local_94 >> 2;
      uVar5 = *(undefined4 *)(param_1 + 0x1240);
      lVar27 = local_c8 + (ulong)(uVar51 * 0x18) * 2;
      uVar6 = *(undefined4 *)(param_1 + 0x121c);
      *(uint *)(puVar36 + -0x17) = uVar28;
      iVar35 = local_108;
      *(undefined4 *)(puVar36 + -0x20) = uVar8;
      iVar41 = local_a4;
      *(undefined4 *)(puVar36 + -0x18) = uVar5;
      *(uint *)(puVar36 + -0x15) = uVar11;
      *(int *)(puVar36 + -0x1d) = iVar35;
      uVar5 = local_104;
      *(int *)(puVar36 + -0x23) = iVar41;
      puVar36[-0x16] = &local_74;
      lVar19 = local_88;
      puVar49 = local_a0;
      puVar20 = local_e0;
      *(undefined4 *)(puVar36 + -0x19) = uVar4;
      lVar48 = local_90;
      *(undefined4 *)(puVar36 + -0x1a) = uVar6;
      *(int *)(puVar36 + -0x1b) = iVar23;
      *(uint *)(puVar36 + -0x1c) = uVar40;
      *(undefined4 *)(puVar36 + -0x1e) = uVar5;
      *(uint *)(puVar36 + -0x1f) = uVar26;
      *(undefined4 *)(puVar36 + -0x21) = uVar7;
      *(uint *)(puVar36 + -0x22) = uVar29 << 0xf | uVar25;
      puVar36[-0x25] = lVar24;
      puVar36[-0x24] = lVar27;
      puVar36[-0x26] = lVar48;
      FUN_00e96dec(param_2,puVar52,(int)(char)bVar32,puVar49,param_5,pvVar53,lVar19,puVar20);
      uVar26 = *(uint *)(param_1 + 0x11ec);
      lVar38 = lVar38 + 1;
      iVar35 = *(int *)(param_1 + 0x11e4);
      pvVar53 = (void *)((long)pvVar53 + (long)(int)uVar26 * 2);
      param_5 = param_5 + (int)uVar26;
      if (iVar35 <= lVar38) goto LAB_00e96bd4;
      iVar23 = iVar23 + 1;
      local_80 = (undefined (*) [16])(*local_80 + (long)(int)uVar26 * 2);
      bVar32 = *(byte *)(local_b8 + 0x1d);
      puVar49 = extraout_x16;
      uVar30 = extraout_x17;
    } while( true );
  }
LAB_00e96bf8:
  if ((int)uVar51 < 2) {
    lVar27 = 0;
  }
  else {
    iVar23 = 0;
    piVar43 = (int *)((long)puVar52 + 0xa24);
    uVar30 = 1;
    iVar41 = *(int *)(puVar52 + 0xa2);
    do {
      iVar34 = *piVar43;
      piVar43 = piVar43 + 0x145;
      iVar13 = (int)uVar30;
      if (iVar41 <= iVar34) {
        iVar34 = iVar41;
        iVar13 = iVar23;
      }
      iVar23 = iVar13;
      uVar30 = uVar30 + 1;
      iVar41 = iVar34;
    } while (uVar51 != uVar30);
    lVar27 = (long)iVar23;
  }
  *(char *)(local_b8 + 0x22) = (char)*(undefined4 *)((long)puVar52 + lVar27 * 0x514 + 0x50c);
  if (0 < (int)uVar25) {
    uVar26 = *(uint *)(param_11 + (long)(iVar35 + -1) * 4);
    uVar51 = local_74 + uVar25;
    lVar38 = -(ulong)uVar25;
    do {
      uVar25 = (int)(uVar51 - 1) % 0x28;
      uVar51 = uVar25 + 0x28;
      if (-1 < (int)uVar25) {
        uVar51 = uVar25;
      }
      lVar48 = (ulong)uVar51 * 4 + lVar27 * 0x514;
      *(char *)(param_5 + lVar38) =
           (char)((*(uint *)((long)puVar52 + lVar48 + 0x220) >> 9) + 1 >> 1);
      iVar35 = *(int *)((long)param_2 + 0x10f0);
      uVar4 = *(undefined4 *)((long)puVar52 + lVar48 + 0x400);
      uVar30 = (long)*(int *)((long)puVar52 + lVar48 + 0x2c0) *
               ((long)((ulong)uVar26 << 0x20) >> 0x26);
      iVar23 = (int)(uVar30 >> 0x10);
      uVar2 = 0x8000;
      if (-0x800081 < iVar23) {
        uVar2 = (short)(((uint)(uVar30 >> 0x17) & 0x1ffffff) + 1 >> 1);
      }
      iVar41 = (int)lVar38;
      uVar3 = 0x7fff;
      if (iVar23 < 0x7fff80) {
        uVar3 = uVar2;
      }
      *(undefined2 *)((long)pvVar53 + lVar38 * 2) = uVar3;
      bVar18 = lVar38 != -1;
      lVar38 = lVar38 + 1;
      *(undefined4 *)((long)param_2 + (long)(iVar41 + iVar35) * 4 + 0x500) = uVar4;
    } while (bVar18);
    uVar26 = *(uint *)(param_1 + 0x11ec);
  }
  pauVar1 = (undefined (*) [16])((long)puVar52 + (long)(int)uVar26 * 4 + lVar27 * 0x514);
  auVar55 = *(undefined (*) [16])((long)puVar52 + lVar27 * 0x514 + 0x4c0);
  uVar57 = *(undefined8 *)((long)puVar52 + lVar27 * 0x514 + 0x4d8);
  uVar61 = *(undefined8 *)((long)puVar52 + lVar27 * 0x514 + 0x4d0);
  auVar62 = *(undefined (*) [16])((long)puVar52 + lVar27 * 0x514 + 0x4e0);
  uVar58 = *(undefined8 *)((long)puVar52 + lVar27 * 0x514 + 0x4f8);
  uVar54 = *(undefined8 *)((long)puVar52 + lVar27 * 0x514 + 0x4f0);
  *(long *)(pauVar22[2] + 8) = auVar55._8_8_;
  *(long *)pauVar22[2] = auVar55._0_8_;
  *(undefined8 *)(pauVar22[3] + 8) = uVar57;
  *(undefined8 *)pauVar22[3] = uVar61;
  auVar55 = *pauVar1;
  uVar57 = *(undefined8 *)(pauVar1[1] + 8);
  uVar61 = *(undefined8 *)pauVar1[1];
  *(long *)(pauVar22[4] + 8) = auVar62._8_8_;
  *(long *)pauVar22[4] = auVar62._0_8_;
  *(undefined8 *)(pauVar22[5] + 8) = uVar58;
  *(undefined8 *)pauVar22[5] = uVar54;
  auVar62 = pauVar1[2];
  uVar58 = *(undefined8 *)(pauVar1[3] + 8);
  uVar54 = *(undefined8 *)pauVar1[3];
  puVar20[1] = auVar55._8_8_;
  *puVar20 = auVar55._0_8_;
  puVar20[3] = uVar57;
  puVar20[2] = uVar61;
  auVar55 = *(undefined (*) [16])((long)puVar52 + lVar27 * 0x514 + 0x4a0);
  puVar20[5] = auVar62._8_8_;
  puVar20[4] = auVar62._0_8_;
  puVar20[7] = uVar58;
  puVar20[6] = uVar54;
  uVar58 = *(undefined8 *)((long)puVar52 + lVar27 * 0x514 + 0x4b8);
  uVar54 = *(undefined8 *)((long)puVar52 + lVar27 * 0x514 + 0x4b0);
  uVar61 = *(undefined8 *)((long)puVar52 + lVar27 * 0x514 + 0x500);
  *(long *)(*pauVar22 + 8) = auVar55._8_8_;
  *(long *)*pauVar22 = auVar55._0_8_;
  *(undefined8 *)(pauVar22[1] + 8) = uVar58;
  *(undefined8 *)pauVar22[1] = uVar54;
  *(undefined8 *)((long)param_2 + 0x10e0) = uVar61;
  iVar35 = *(int *)(param_1 + 0x11e8);
  iVar23 = *(int *)(param_1 + 0x11f0);
  *(undefined4 *)((long)param_2 + 0x10e8) =
       *(undefined4 *)(param_13_00 + (long)*(int *)(param_1 + 0x11e4) * 4 + -4);
  memmove(param_2,(void *)((long)param_2 + (long)iVar35 * 2),(long)iVar23 << 1);
  memmove((void *)((long)param_2 + 0x500),
          (void *)((long)(void *)((long)param_2 + 0x500) + (long)*(int *)(param_1 + 0x11e8) * 4),
          (long)*(int *)(param_1 + 0x11f0) << 2);
  if (*(long *)(lVar24 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00e96bd4:
  uVar51 = *(uint *)(param_1 + 0x1214);
  param_11 = local_b0;
  puVar20 = local_170;
  pauVar22 = local_178;
  lVar24 = local_168;
  uVar25 = local_bc;
  goto LAB_00e96bf8;
}


