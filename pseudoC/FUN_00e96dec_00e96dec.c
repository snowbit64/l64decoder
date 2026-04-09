// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e96dec
// Entry Point: 00e96dec
// Size: 3632 bytes
// Signature: undefined FUN_00e96dec(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined8 param_10, undefined4 param_11, undefined4 param_12, undefined2 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16, undefined4 param_17, undefined4 param_18, undefined4 param_19, undefined4 param_20, undefined4 param_21, undefined2 param_22, undefined4 param_23, undefined8 param_24, undefined4 param_25)


/* WARNING: Type propagation algorithm not settling */

void FUN_00e96dec(short *param_1,undefined8 *param_2,int param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8,short *param_9,short *param_10,
                 short *param_11_00,int param_11,uint param_12,short param_13,uint param_14,
                 int param_15,uint param_16,int param_17,uint param_18,int param_19,int param_20,
                 int param_21,short param_22,uint param_23,int *param_24,uint param_25)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  int iVar25;
  int iVar26;
  int *piVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  undefined8 *puVar31;
  int *piVar32;
  uint *puVar33;
  int iVar34;
  short *psVar35;
  ulong uVar36;
  long lVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  uint uVar41;
  short *extraout_x14;
  int iVar42;
  int *piVar43;
  int *extraout_x15;
  int iVar44;
  long lVar45;
  int iVar46;
  int iVar47;
  long lVar48;
  ulong uVar49;
  long lVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  long local_230;
  undefined local_228 [8];
  undefined8 *local_220;
  short *local_218;
  long local_210;
  long local_208;
  short *local_200;
  undefined8 local_1f8;
  undefined8 *local_1f0;
  int *local_1e8;
  ulong local_1e0;
  short *local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  int *local_1b8;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  undefined8 *local_1a0;
  int local_194;
  ulong local_190;
  long local_188;
  long local_180;
  short *local_178;
  uint *local_170;
  short *local_168;
  long local_160;
  undefined8 *local_158;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  short *local_140;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  long local_120;
  int local_114;
  long local_110;
  int local_108;
  uint local_104;
  int local_100;
  int local_fc;
  long local_f8;
  int *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  int local_94;
  long local_90;
  ulong local_88;
  long local_80;
  
  lVar45 = (long)(int)param_23;
  local_230 = tpidr_el0;
  local_190 = (ulong)param_18;
  local_80 = *(long *)(local_230 + 0x28);
  lVar50 = -(lVar45 * 0x38 + 0xfU & 0xfffffffffffffff0);
  local_90 = (long)&local_230 + lVar50;
  local_210 = param_5;
  local_208 = param_6;
  local_200 = param_1;
  local_1f8 = param_7;
  local_194 = param_3;
  local_160 = param_8;
  local_e8 = param_4;
  if (0 < (int)param_18) {
    uVar49 = (ulong)param_23;
    local_f8 = (long)(short)param_14;
    local_fc = param_21;
    local_1c8 = (long)(short)param_12;
    local_110 = (long)((ulong)param_14 << 0x20) >> 0x30;
    piVar43 = (int *)(long)param_20;
    local_1d0 = (long)((ulong)param_12 << 0x20) >> 0x30;
    local_168 = (short *)(ulong)param_25;
    local_1a0 = (undefined8 *)(param_1 + 0x876);
    local_100 = param_17;
    local_1a8 = param_15 >> 6;
    local_88 = 0;
    lVar48 = (long)param_22;
    local_1a4 = param_19;
    local_108 = param_21 >> 1;
    local_12c = (int)(short)param_16;
    local_104 = param_16;
    local_124 = (short)param_17 * local_12c;
    local_218 = param_10;
    local_128 = (param_16 >> 1) - 0x200;
    local_148 = (param_17 * -0x10000 + 0x3b00000 >> 0x10) * local_12c;
    local_150 = 0x200 - (param_16 >> 1);
    local_1ac = param_11;
    local_130 = param_17 + 0x3b0;
    puVar31 = param_2 + 8;
    local_134 = (short)local_130 * local_12c;
    local_1b8 = (int *)(param_7 + (long)((*(int *)(param_1 + 0x876) - param_11) + 2) * 4);
    local_178 = param_1 + (long)((*(int *)(param_1 + 0x878) - param_11) + 1) * 2 + 0x280;
    local_114 = param_20 >> 1;
    local_a0 = (long)piVar43 - 1;
    local_120 = (long)param_13;
    local_14c = param_17 + -0x3b0;
    local_144 = param_17 + -0x50;
    local_180 = (long)(int)param_25;
    local_1c0 = (ulong)param_23 * 0x514;
    local_1e0 = uVar49 & 0xfffffffe;
    local_1e8 = (int *)((long)param_2 + 0x4a4);
    local_1d8 = param_11_00;
    local_140 = param_11_00 + 2;
    local_170 = (uint *)((long)&local_1f8 + lVar50 + 4);
    local_220 = param_2 + 0x30;
    local_228 = (undefined  [8])((long)&local_210 + lVar50);
    local_1f0 = (undefined8 *)(local_228 + lVar50 + 4);
    local_188 = lVar45;
    local_f0 = piVar43;
    do {
      if (local_194 == 2) {
        piVar43 = local_1b8 + 1;
        iVar28 = ((int)(((long)local_1b8[-1] * (long)local_218[1] * 0x10000 & 0xffffffff00000000U) +
                        (long)local_1b8[1] * (long)*local_218 * 0x10000 +
                        ((long)local_1b8[-1] * (long)local_218[2] * 0x10000 & 0xffffffff00000000U) +
                        ((long)local_1b8[-3] * (long)local_218[3] * 0x10000 & 0x7fffffff00000000U) +
                        0x200000000 >> 0x20) +
                 (int)((ulong)((long)local_218[4] * (long)local_1b8[-4]) >> 0x10)) * 2;
        param_1 = local_218;
        local_1b8 = piVar43;
        if (0 < local_1ac) goto LAB_00e971a4;
LAB_00e97178:
        local_94 = 0;
        if (0 < (int)lVar45) goto LAB_00e971fc;
LAB_00e97188:
        iVar46 = *param_24;
      }
      else {
        iVar28 = 0;
        if (local_1ac < 1) goto LAB_00e97178;
LAB_00e971a4:
        piVar32 = (int *)(local_178 + -2);
        piVar5 = (int *)(local_178 + 2);
        piVar27 = (int *)(local_178 + -4);
        local_178 = local_178 + 2;
        local_94 = iVar28 + ((int)((ulong)(local_1c8 * ((long)*piVar27 + (long)*piVar5)) >> 0x10) +
                            (int)((ulong)(*piVar32 * local_1d0) >> 0x10)) * -4;
        if ((int)lVar45 < 1) goto LAB_00e97188;
LAB_00e971fc:
        sVar11 = *param_9;
        uVar36 = 0;
        sVar12 = param_9[1];
        sVar13 = param_9[8];
        sVar14 = param_9[9];
        sVar15 = param_9[2];
        sVar16 = param_9[3];
        sVar17 = param_9[4];
        sVar18 = param_9[5];
        sVar19 = param_9[6];
        sVar20 = param_9[7];
        sVar24 = local_1d8[local_a0];
        sVar21 = *local_1d8;
        piVar27 = local_1e8;
        do {
          lVar50 = (ulong)((int)local_88 + 0xf) * 4 + uVar36 * 0x514;
          *(int *)((long)param_2 + uVar36 * 0x514 + 0x508) =
               *(int *)((long)param_2 + uVar36 * 0x514 + 0x508) * 0xbb38435 + 0x3619636b;
          iVar30 = local_108 +
                   (int)((ulong)((long)sVar11 * (long)*(int *)((long)param_2 + lVar50 + 4)) >> 0x10)
                   + (int)((ulong)((long)sVar12 * (long)*(int *)((long)param_2 + lVar50 + -4)) >>
                          0x10) +
                   (int)((ulong)((long)sVar15 * (long)*(int *)((long)param_2 + lVar50 + -4)) >> 0x10
                        ) + (int)((ulong)((long)sVar16 *
                                         (long)*(int *)((long)param_2 + lVar50 + -0xc)) >> 0x10) +
                   (int)((ulong)((long)sVar17 * (long)*(int *)((long)param_2 + lVar50 + -0xc)) >>
                        0x10) +
                   (int)((ulong)((long)sVar18 * (long)*(int *)((long)param_2 + lVar50 + -0x14)) >>
                        0x10) +
                   (int)((ulong)((long)sVar19 * (long)*(int *)((long)param_2 + lVar50 + -0x14)) >>
                        0x10) +
                   (int)((ulong)((long)sVar20 * (long)*(int *)((long)param_2 + lVar50 + -0x1c)) >>
                        0x10) +
                   (int)((ulong)((long)sVar13 * (long)*(int *)((long)param_2 + lVar50 + -0x1c)) >>
                        0x10) +
                   (int)((ulong)((long)sVar14 * (long)*(int *)((long)param_2 + lVar50 + -0x24)) >>
                        0x10);
          if (local_fc == 0x10) {
            iVar30 = iVar30 + (int)((ulong)((long)param_9[10] *
                                           (long)*(int *)((long)param_2 + lVar50 + -0x24)) >> 0x10)
                     + (int)((ulong)((long)param_9[0xb] *
                                    (long)*(int *)((long)param_2 + lVar50 + -0x2c)) >> 0x10) +
                     (int)((ulong)((long)param_9[0xc] *
                                  (long)*(int *)((long)param_2 + lVar50 + -0x2c)) >> 0x10) +
                     (int)((ulong)((long)param_9[0xd] *
                                  (long)*(int *)((long)param_2 + lVar50 + -0x34)) >> 0x10) +
                     (int)((ulong)((long)param_9[0xe] *
                                  (long)*(int *)((long)param_2 + lVar50 + -0x34)) >> 0x10) +
                     (int)((ulong)((long)param_9[0xf] *
                                  (long)*(int *)((long)param_2 + lVar50 + -0x3c)) >> 0x10);
          }
          iVar47 = *(int *)((long)param_2 + uVar36 * 0x514 + 0x4a0);
          iVar44 = *(int *)((long)param_2 + uVar36 * 0x514 + 0x504) +
                   (int)((ulong)(lVar48 * iVar47) >> 0x10);
          *(int *)((long)param_2 + uVar36 * 0x514 + 0x4a0) = iVar44;
          iVar47 = iVar47 + (int)((ulong)(lVar48 * ((long)*(int *)((long)param_2 +
                                                                  uVar36 * 0x514 + 0x4a4) -
                                                   (long)iVar44)) >> 0x10);
          iVar44 = local_114 + (int)((ulong)((long)iVar44 * (long)sVar21) >> 0x10);
          if (2 < (int)local_f0) {
            lVar50 = 2;
            psVar35 = local_140;
            piVar43 = piVar27;
            do {
              iVar46 = piVar43[1];
              sVar23 = psVar35[-1];
              lVar50 = lVar50 + 2;
              sVar22 = *psVar35;
              psVar35 = psVar35 + 2;
              iVar40 = *piVar43 + (int)((ulong)(lVar48 * (iVar46 - iVar47)) >> 0x10);
              *piVar43 = iVar47;
              piVar43[1] = iVar40;
              iVar44 = iVar44 + (int)((ulong)((long)sVar23 * (long)iVar47) >> 0x10) +
                       (int)((ulong)((long)iVar40 * (long)sVar22) >> 0x10);
              iVar47 = iVar46 + (int)((ulong)(lVar48 * ((long)piVar43[2] - (long)iVar40)) >> 0x10);
              piVar43 = piVar43 + 2;
            } while (lVar50 < param_20);
          }
          iVar30 = iVar30 * 0x10;
          *(int *)((long)param_2 + local_a0 * 4 + uVar36 * 0x514 + 0x4a0) = iVar47;
          iVar46 = *param_24;
          iVar6 = *(int *)((long)param_2 + uVar36 * 0x514 + 0x508);
          lVar50 = (long)*(int *)((long)param_2 + uVar36 * 0x514 + 0x500);
          iVar44 = (int)((ulong)(local_120 * lVar50) >> 0x10) +
                   (iVar44 + (int)((ulong)((long)sVar24 * (long)iVar47) >> 0x10)) * 2;
          iVar47 = (int)((ulong)(local_f8 *
                                *(int *)((long)param_2 + (long)iVar46 * 4 + uVar36 * 0x514 + 0x400))
                        >> 0x10) + (int)((ulong)(lVar50 * local_110) >> 0x10);
          iVar10 = *(int *)(local_e8 + local_88 * 4);
          iVar34 = iVar10 - (((iVar30 + local_94) - (iVar44 * 4 + iVar47 * 4) >> 3) + 1 >> 1);
          iVar40 = -iVar34;
          if (-1 < iVar6) {
            iVar40 = iVar34;
          }
          if (iVar40 < -0x7bff) {
            iVar40 = -0x7c00;
          }
          if (0x77ff < iVar40) {
            iVar40 = 0x7800;
          }
          uVar29 = iVar40 - local_100;
          uVar41 = uVar29;
          iVar34 = local_100;
          iVar38 = local_130;
          iVar39 = local_124;
          iVar42 = local_134;
          if (((int)local_104 < 0x801) ||
             (uVar41 = uVar29 - local_128, uVar41 != 0 && local_128 <= (int)uVar29)) {
            if ((int)uVar41 < 0x400) goto LAB_00e9763c;
LAB_00e97260:
            iVar34 = local_144 + (uVar41 & 0xfffffc00);
            iVar38 = iVar34 + 0x400;
            iVar39 = (short)iVar34 * local_12c;
            iVar42 = (short)(iVar34 + 0x400) * local_12c;
          }
          else if ((int)uVar29 < local_150) {
            uVar41 = uVar29 + local_128;
            if (0x3ff < (int)uVar41) goto LAB_00e97260;
LAB_00e9763c:
            if (((int)uVar41 >> 10 != 0) &&
               (iVar34 = local_14c, iVar38 = local_100, iVar39 = local_148, iVar42 = local_124,
               (int)uVar41 >> 10 != -1)) {
              iVar38 = local_100 + (uVar41 & 0xfffffc00);
              iVar34 = iVar38 + 0x50;
              iVar38 = iVar38 + 0x450;
              iVar39 = (iVar34 * -0x10000 >> 0x10) * local_12c;
              iVar42 = (iVar34 * -0x10000 + -0x4000000 >> 0x10) * local_12c;
            }
          }
          else if ((int)uVar29 < 0) {
            iVar34 = local_14c;
            iVar38 = local_100;
            iVar39 = local_148;
            iVar42 = local_124;
          }
          iVar25 = (int)(short)((short)iVar40 - (short)iVar34);
          iVar26 = (int)(short)((short)iVar40 - (short)iVar38);
          piVar27 = piVar27 + 0x145;
          uVar41 = *(uint *)((long)param_2 + uVar36 * 0x514 + 0x510);
          param_1 = (short *)(ulong)uVar41;
          iVar40 = iVar39 + iVar25 * iVar25 >> 10;
          iVar39 = iVar42 + iVar26 * iVar26 >> 10;
          piVar43 = (int *)(local_90 + uVar36 * 0x38);
          iVar42 = iVar38;
          iVar25 = iVar39;
          if (iVar39 <= iVar40) {
            iVar42 = iVar34;
            iVar25 = iVar40;
            iVar40 = iVar39;
            iVar34 = iVar38;
          }
          iVar38 = iVar34 * -0x10;
          if (-1 < iVar6) {
            iVar38 = iVar34 * 0x10;
          }
          *piVar43 = iVar34;
          piVar43[1] = uVar41 + iVar40;
          iVar40 = iVar38 + iVar28 + iVar30;
          iVar34 = iVar42 * -0x10;
          if (-1 < iVar6) {
            iVar34 = iVar42 * 0x10;
          }
          iVar6 = iVar40 + iVar10 * -0x10;
          iVar39 = iVar6 + iVar44 * -4;
          piVar43[6] = iVar38 + iVar28;
          piVar43[7] = iVar42;
          iVar30 = iVar34 + iVar28 + iVar30;
          uVar36 = uVar36 + 1;
          piVar43[2] = iVar40;
          piVar43[3] = iVar39;
          piVar43[4] = iVar6;
          piVar43[5] = iVar39 + iVar47 * -4;
          iVar40 = iVar30 + iVar10 * -0x10;
          iVar44 = iVar40 + iVar44 * -4;
          piVar43[8] = uVar41 + iVar25;
          piVar43[9] = iVar30;
          piVar43[10] = iVar44;
          piVar43[0xb] = iVar40;
          piVar43[0xc] = iVar44 + iVar47 * -4;
          piVar43[0xd] = iVar34 + iVar28;
          lVar45 = local_188;
          local_e0 = (long)sVar20;
          local_d8 = (long)sVar19;
          local_d0 = (long)sVar18;
          local_c8 = (long)sVar17;
          local_c0 = (long)sVar16;
          local_b8 = (long)sVar15;
          local_b0 = (long)sVar12;
          local_a8 = (long)sVar11;
        } while (uVar36 != uVar49);
      }
      iVar30 = 0;
      iVar44 = (iVar46 + -1) % 0x28;
      iVar28 = iVar44 + 0x28;
      if (-1 < iVar44) {
        iVar28 = iVar44;
      }
      iVar44 = (int)lVar45;
      uVar41 = *(uint *)(local_90 + 4);
      *param_24 = iVar28;
      if (1 < iVar44) {
        uVar36 = 1;
        puVar33 = local_170;
        iVar47 = iVar30;
        uVar29 = uVar41;
        do {
          uVar9 = *puVar33;
          uVar7 = uVar9;
          if ((int)uVar29 <= (int)uVar9) {
            uVar7 = uVar29;
          }
          iVar30 = (int)uVar36;
          if ((int)uVar29 <= (int)uVar9) {
            iVar30 = iVar47;
          }
          uVar36 = uVar36 + 1;
          puVar33 = puVar33 + 0xe;
          iVar47 = iVar30;
          uVar29 = uVar7;
        } while (uVar49 != uVar36);
      }
      iVar28 = (iVar28 + (int)local_168) % 0x28;
      lVar50 = (long)iVar28;
      if (0 < iVar44) {
        iVar28 = *(int *)((long)param_2 + (long)iVar28 * 4 + (long)iVar30 * 0x514 + 0x180);
        if (iVar44 == 1) {
          uVar36 = 0;
LAB_00e97b38:
          piVar32 = (int *)((long)local_228 + uVar36 * 0x38);
          lVar37 = uVar49 - uVar36;
          piVar27 = (int *)((long)local_220 + (lVar50 + uVar36 * 0x145) * 4);
          do {
            if (*piVar27 != iVar28) {
              piVar32[-7] = piVar32[-7] + 0x7ffffff;
              *piVar32 = *piVar32 + 0x7ffffff;
            }
            piVar27 = piVar27 + 0x145;
            piVar32 = piVar32 + 0xe;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
        }
        else {
          lVar37 = (long)param_2 + lVar50 * 4;
          puVar33 = local_170;
          uVar36 = local_1e0;
          do {
            iVar47 = *(int *)(lVar37 + 0x180);
            if (iVar47 == iVar28) {
              iVar40 = *(int *)(lVar37 + 0x694);
              if (iVar40 != iVar28) goto LAB_00e97830;
LAB_00e977ec:
              iVar46 = (int)param_1;
            }
            else {
              param_1 = (short *)(ulong)puVar33[-0xe];
              iVar40 = *(int *)(lVar37 + 0x694);
              if (iVar40 == iVar28) goto LAB_00e977ec;
LAB_00e97830:
              iVar46 = (int)param_1;
              piVar43 = (int *)(ulong)*puVar33;
            }
            if (iVar47 != iVar28) {
              param_1 = (short *)(ulong)(iVar46 + 0x7ffffffU);
              puVar33[-0xe] = iVar46 + 0x7ffffffU;
            }
            if (iVar40 != iVar28) {
              uVar41 = (int)piVar43 + 0x7ffffff;
              param_1 = (short *)(ulong)uVar41;
              *puVar33 = uVar41;
            }
            if (iVar47 != iVar28) {
              param_1 = (short *)(ulong)puVar33[-7];
            }
            if (iVar40 != iVar28) {
              piVar43 = (int *)(ulong)puVar33[7];
            }
            if (iVar47 != iVar28) {
              puVar33[-7] = (int)param_1 + 0x7ffffff;
            }
            if (iVar40 != iVar28) {
              puVar33[7] = (int)piVar43 + 0x7ffffff;
            }
            lVar37 = lVar37 + 0xa28;
            uVar36 = uVar36 - 2;
            puVar33 = puVar33 + 0x1c;
          } while (uVar36 != 0);
          uVar36 = local_1e0;
          if (local_1e0 != uVar49) goto LAB_00e97b38;
        }
        uVar41 = *(uint *)(local_90 + 4);
      }
      local_158 = puVar31;
      if (iVar44 < 2) {
        iVar28 = 0;
        iVar44 = 0;
        if ((int)*(uint *)(local_90 + 0x20) < (int)uVar41) goto LAB_00e97908;
      }
      else {
        iVar44 = 0;
        iVar28 = 0;
        uVar36 = 1;
        puVar33 = local_170;
        uVar29 = *(uint *)(local_90 + 0x20);
        do {
          uVar7 = *puVar33;
          puVar1 = puVar33 + 7;
          puVar33 = puVar33 + 0xe;
          iVar47 = (int)uVar36;
          if ((int)uVar7 <= (int)uVar41) {
            uVar7 = uVar41;
            iVar47 = iVar28;
          }
          iVar28 = iVar47;
          uVar9 = *puVar1;
          iVar47 = (int)uVar36;
          if ((int)uVar29 <= (int)*puVar1) {
            uVar9 = uVar29;
            iVar47 = iVar44;
          }
          iVar44 = iVar47;
          uVar36 = uVar36 + 1;
          uVar41 = uVar7;
          uVar29 = uVar9;
        } while (uVar49 != uVar36);
        if ((int)uVar9 < (int)uVar7) {
LAB_00e97908:
          memcpy((void *)((long)param_2 + local_88 * 4 + (long)iVar28 * 0x514),
                 (void *)((long)param_2 + local_88 * 4 + (long)iVar44 * 0x514),local_88 * -4 + 0x514
                );
          lVar45 = local_90 + (long)iVar44 * 0x38;
          puVar31 = (undefined8 *)(local_90 + (long)iVar28 * 0x38);
          uVar51 = *(undefined8 *)(lVar45 + 0x1c);
          uVar53 = *(undefined8 *)(lVar45 + 0x30);
          uVar52 = *(undefined8 *)(lVar45 + 0x28);
          puVar31[1] = *(undefined8 *)(lVar45 + 0x24);
          *puVar31 = uVar51;
          *(undefined8 *)((long)puVar31 + 0x14) = uVar53;
          *(undefined8 *)((long)puVar31 + 0xc) = uVar52;
          param_1 = extraout_x14;
          piVar43 = extraout_x15;
          lVar45 = local_188;
        }
      }
      param_23 = (uint)lVar45;
      if ((0 < local_1a4) || (local_180 <= (long)local_88)) {
        lVar37 = lVar50 * 4 + (long)iVar30 * 0x514;
        *(char *)(local_210 + (local_88 - local_180)) =
             (char)((*(uint *)((long)param_2 + lVar37 + 0x220) >> 9) + 1 >> 1);
        uVar36 = (long)*(int *)(local_160 + lVar50 * 4) *
                 (long)*(int *)((long)param_2 + lVar37 + 0x2c0);
        *(undefined4 *)
         (local_200 + (long)(*(int *)(local_200 + 0x878) - (int)local_168) * 2 + 0x280) =
             *(undefined4 *)((long)param_2 + lVar37 + 0x400);
        iVar28 = *(int *)(local_200 + 0x876);
        iVar30 = (int)(uVar36 >> 0x10);
        uVar8 = *(undefined4 *)((long)param_2 + lVar37 + 0x360);
        uVar2 = 0x8000;
        if (-0x800081 < iVar30) {
          uVar2 = (short)(((uint)(uVar36 >> 0x17) & 0x1ffffff) + 1 >> 1);
        }
        uVar3 = 0x7fff;
        if (iVar30 < 0x7fff80) {
          uVar3 = uVar2;
        }
        *(undefined2 *)(local_208 + (local_88 - local_180) * 2) = uVar3;
        *(undefined4 *)(local_1f8 + (long)(iVar28 - (int)local_168) * 4) = uVar8;
        param_1 = local_168;
      }
      *local_1a0 = CONCAT44((int)((ulong)*local_1a0 >> 0x20) + 1,(int)*local_1a0 + 1);
      if (0 < (int)param_23) {
        lVar50 = 0;
        puVar31 = local_1f0;
        do {
          uVar8 = *(undefined4 *)(puVar31 + -1);
          uVar4 = *(undefined4 *)((long)puVar31 + -4);
          uVar41 = *(uint *)(puVar31 + 1);
          piVar43 = (int *)(ulong)uVar41;
          iVar28 = *(int *)((long)puVar31 + 0xc);
          *(undefined8 *)((long)param_2 + lVar50 + 0x500) = *puVar31;
          *(undefined4 *)((long)local_158 + lVar50) = uVar4;
          uVar29 = iVar28 << 1;
          param_1 = (short *)(ulong)uVar29;
          *(undefined4 *)((long)param_2 + lVar50 + (long)*param_24 * 4 + 0x2c0) = uVar4;
          iVar28 = *(int *)((long)puVar31 + -0xc);
          puVar31 = puVar31 + 7;
          *(int *)((long)param_2 + lVar50 + (long)*param_24 * 4 + 0x220) = iVar28;
          *(uint *)((long)param_2 + lVar50 + (long)*param_24 * 4 + 0x360) = uVar29;
          *(uint *)((long)param_2 + lVar50 + (long)*param_24 * 4 + 0x400) = uVar41;
          iVar28 = *(int *)((long)param_2 + lVar50 + 0x508) + ((iVar28 >> 9) + 1 >> 1);
          *(int *)((long)param_2 + lVar50 + 0x508) = iVar28;
          lVar37 = lVar50 + 0x514;
          *(int *)((long)param_2 + lVar50 + (long)*param_24 * 4 + 0x180) = iVar28;
          *(undefined4 *)((long)param_2 + lVar50 + 0x510) = uVar8;
          lVar50 = lVar37;
        } while (local_1c0 != lVar37);
      }
      puVar31 = (undefined8 *)((long)local_158 + 4);
      local_88 = local_88 + 1;
      *(int *)(local_160 + (long)*param_24 * 4) = local_1a8;
    } while (local_88 != local_190);
  }
  if (0 < (int)param_23) {
    uVar49 = (ulong)param_23;
    do {
      puVar31 = (undefined8 *)((long)param_2 + (long)(int)local_190 * 4);
      uVar49 = uVar49 - 1;
      uVar53 = puVar31[4];
      uVar52 = puVar31[7];
      uVar51 = puVar31[6];
      uVar57 = puVar31[1];
      uVar56 = *puVar31;
      uVar55 = puVar31[3];
      uVar54 = puVar31[2];
      param_2[5] = puVar31[5];
      param_2[4] = uVar53;
      param_2[7] = uVar52;
      param_2[6] = uVar51;
      param_2[1] = uVar57;
      *param_2 = uVar56;
      param_2[3] = uVar55;
      param_2[2] = uVar54;
      param_2 = (undefined8 *)((long)param_2 + 0x514);
    } while (uVar49 != 0);
  }
  if (*(long *)(local_230 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


