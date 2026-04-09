// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d5dee4
// Entry Point: 00d5dee4
// Size: 3616 bytes
// Signature: undefined FUN_00d5dee4(void)


/* WARNING: Type propagation algorithm not settling */

void FUN_00d5dee4(long *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  long lVar6;
  undefined (*pauVar7) [16];
  ushort *puVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  ushort uVar19;
  undefined8 uVar20;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  double dVar21;
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined8 uVar28;
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined8 uVar36;
  double dVar37;
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined8 uVar46;
  double dVar47;
  double dVar48;
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  double dVar58;
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  double dVar65;
  double dVar66;
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  double dVar72;
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  double dVar76;
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  double dVar81;
  undefined auVar82 [16];
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined auVar85 [16];
  undefined auVar86 [16];
  undefined auVar87 [16];
  undefined auVar88 [16];
  undefined auVar89 [16];
  undefined auVar90 [16];
  undefined auVar91 [16];
  undefined auVar92 [16];
  undefined auVar93 [16];
  undefined auVar94 [16];
  undefined auVar95 [16];
  undefined auVar96 [16];
  undefined auVar97 [16];
  uint uVar98;
  undefined auVar99 [16];
  undefined auVar100 [16];
  undefined auVar101 [16];
  undefined auVar102 [16];
  double dVar103;
  undefined auVar104 [16];
  double dVar105;
  
  if (0 < *(int *)((long)param_1 + 0x5c)) {
    auVar104 = NEON_fmov(0x3ff0000000000000,8);
    lVar14 = 0;
    iVar17 = 0;
    lVar15 = param_1[0x43];
    lVar16 = param_1[0xd];
    dVar105 = auVar104._8_8_;
    dVar103 = auVar104._0_8_;
    do {
      iVar3 = *(int *)(lVar16 + 0x28) + *(int *)(lVar16 + 0x24) * 0x100;
      if (iVar3 < 0x70e) {
        if (iVar3 < 0x404) {
          if (iVar3 < 0x204) {
            if (iVar3 < 0x201) {
              if (iVar3 == 0x101) {
                *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_1x1;
                uVar98 = *(uint *)(lVar16 + 0x10);
                goto joined_r0x00d5e25c;
              }
              if (iVar3 == 0x102) {
                *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_1x2;
                uVar98 = *(uint *)(lVar16 + 0x10);
                goto joined_r0x00d5e558;
              }
            }
            else {
              if (iVar3 == 0x201) {
                *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_2x1;
                uVar98 = *(uint *)(lVar16 + 0x10);
joined_r0x00d5e2d8:
                iVar17 = 0;
                goto joined_r0x00d5e690;
              }
              if (iVar3 == 0x202) {
                *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_2x2;
                uVar98 = *(uint *)(lVar16 + 0x10);
                goto joined_r0x00d5e690;
              }
            }
          }
          else if (iVar3 < 0x306) {
            if (iVar3 == 0x204) {
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_2x4;
              uVar98 = *(uint *)(lVar16 + 0x10);
              goto joined_r0x00d5e558;
            }
            if (iVar3 == 0x303) {
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_3x3;
              uVar98 = *(uint *)(lVar16 + 0x10);
              goto joined_r0x00d5e648;
            }
          }
          else {
            if (iVar3 == 0x306) {
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_3x6;
              uVar98 = *(uint *)(lVar16 + 0x10);
joined_r0x00d5e690:
              iVar17 = 0;
              goto joined_r0x00d5e690;
            }
            if (iVar3 == 0x402) {
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_4x2;
              uVar98 = *(uint *)(lVar16 + 0x10);
              goto joined_r0x00d5e25c;
            }
          }
        }
        else if (iVar3 < 0x603) {
          if (iVar3 < 0x505) {
            if (iVar3 == 0x404) {
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_4x4;
              uVar98 = *(uint *)(lVar16 + 0x10);
joined_r0x00d5e558:
              iVar17 = 0;
              goto joined_r0x00d5e558;
            }
            if (iVar3 == 0x408) {
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_4x8;
              uVar98 = *(uint *)(lVar16 + 0x10);
              goto joined_r0x00d5e690;
            }
          }
          else {
            if (iVar3 == 0x505) {
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_5x5;
              uVar98 = *(uint *)(lVar16 + 0x10);
joined_r0x00d5e25c:
              iVar17 = 0;
              goto joined_r0x00d5e690;
            }
            if (iVar3 == 0x50a) {
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_5x10;
              uVar98 = *(uint *)(lVar16 + 0x10);
              goto joined_r0x00d5e558;
            }
          }
        }
        else {
          if (iVar3 < 0x60c) {
            if (iVar3 == 0x603) {
              iVar17 = 0;
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_6x3;
              uVar98 = *(uint *)(lVar16 + 0x10);
            }
            else {
              if (iVar3 != 0x606) goto LAB_00d5e6e0;
              iVar17 = 0;
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_6x6;
              uVar98 = *(uint *)(lVar16 + 0x10);
            }
            goto joined_r0x00d5e690;
          }
          if (iVar3 == 0x60c) {
            *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_6x12;
            uVar98 = *(uint *)(lVar16 + 0x10);
            goto joined_r0x00d5e25c;
          }
          if (iVar3 == 0x707) {
            *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_7x7;
            uVar98 = *(uint *)(lVar16 + 0x10);
            goto joined_r0x00d5e690;
          }
        }
LAB_00d5e6e0:
        lVar6 = *param_1;
        *(int *)(lVar6 + 0x2c) = *(int *)(lVar16 + 0x24);
        uVar13 = *(undefined4 *)(lVar16 + 0x28);
        *(undefined4 *)(lVar6 + 0x28) = 7;
        *(undefined4 *)(*param_1 + 0x30) = uVar13;
        (**(code **)*param_1)(param_1);
LAB_00d5e76c:
        uVar98 = *(uint *)(lVar16 + 0x10);
joined_r0x00d5e558:
        uVar18 = (ulong)uVar98;
        if (3 < uVar98) goto LAB_00d5e790;
LAB_00d5e784:
        if (param_1[uVar18 + 0xe] == 0) goto LAB_00d5e790;
      }
      else {
        if (0xc05 < iVar3) {
          if (iVar3 < 0xe0e) {
            if (iVar3 < 0xd0d) {
              if (iVar3 == 0xc06) {
                *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_12x6;
                uVar98 = *(uint *)(lVar16 + 0x10);
                goto joined_r0x00d5e25c;
              }
              if (iVar3 == 0xc0c) {
                *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_12x12;
                uVar98 = *(uint *)(lVar16 + 0x10);
                goto joined_r0x00d5e690;
              }
            }
            else {
              if (iVar3 == 0xd0d) {
                *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_13x13;
                uVar98 = *(uint *)(lVar16 + 0x10);
joined_r0x00d5e648:
                iVar17 = 0;
                goto joined_r0x00d5e690;
              }
              if (iVar3 == 0xe07) {
                *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_14x7;
                uVar98 = *(uint *)(lVar16 + 0x10);
                goto joined_r0x00d5e558;
              }
            }
          }
          else if (iVar3 < 0x1008) {
            if (iVar3 == 0xe0e) {
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_14x14;
              uVar98 = *(uint *)(lVar16 + 0x10);
              goto joined_r0x00d5e690;
            }
            if (iVar3 == 0xf0f) {
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_15x15;
              uVar98 = *(uint *)(lVar16 + 0x10);
              goto joined_r0x00d5e2d8;
            }
          }
          else {
            if (iVar3 == 0x1008) {
              iVar17 = 0;
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_16x8;
              uVar98 = *(uint *)(lVar16 + 0x10);
              goto joined_r0x00d5e558;
            }
            if (iVar3 == 0x1010) {
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_16x16;
              uVar98 = *(uint *)(lVar16 + 0x10);
              goto joined_r0x00d5e25c;
            }
          }
          goto LAB_00d5e6e0;
        }
        if (0x908 < iVar3) {
          if (iVar3 < 0xa0a) {
            if (iVar3 == 0x909) {
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_9x9;
              uVar98 = *(uint *)(lVar16 + 0x10);
              goto joined_r0x00d5e558;
            }
            if (iVar3 == 0xa05) {
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_10x5;
              uVar98 = *(uint *)(lVar16 + 0x10);
              goto joined_r0x00d5e25c;
            }
          }
          else {
            if (iVar3 == 0xa0a) {
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_10x10;
              uVar98 = *(uint *)(lVar16 + 0x10);
              goto joined_r0x00d5e690;
            }
            if (iVar3 == 0xb0b) {
              *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_11x11;
              uVar98 = *(uint *)(lVar16 + 0x10);
              goto joined_r0x00d5e558;
            }
          }
          goto LAB_00d5e6e0;
        }
        if (iVar3 < 0x808) {
          if (iVar3 == 0x70e) {
            *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_7x14;
            uVar98 = *(uint *)(lVar16 + 0x10);
          }
          else {
            if (iVar3 != 0x804) goto LAB_00d5e6e0;
            *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_8x4;
            uVar98 = *(uint *)(lVar16 + 0x10);
          }
          iVar17 = 0;
          goto joined_r0x00d5e558;
        }
        if (iVar3 != 0x808) {
          if (iVar3 == 0x810) {
            *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_8x16;
            uVar98 = *(uint *)(lVar16 + 0x10);
            goto joined_r0x00d5e25c;
          }
          goto LAB_00d5e6e0;
        }
        iVar3 = *(int *)((long)param_1 + 300);
        if (iVar3 != 2) {
          if (iVar3 == 1) {
            iVar17 = 1;
            *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_ifast;
            uVar98 = *(uint *)(lVar16 + 0x10);
            goto joined_r0x00d5e690;
          }
          if (iVar3 == 0) {
            *(code **)(lVar15 + lVar14 * 8 + 0x58) = jpeg_fdct_islow;
            uVar98 = *(uint *)(lVar16 + 0x10);
            goto joined_r0x00d5e690;
          }
          ppcVar9 = (code **)*param_1;
          *(undefined4 *)(ppcVar9 + 5) = 0x31;
          (**ppcVar9)(param_1);
          goto LAB_00d5e76c;
        }
        iVar17 = 2;
        *(code **)(lVar15 + lVar14 * 8 + 0xa8) = jpeg_fdct_float;
        uVar98 = *(uint *)(lVar16 + 0x10);
joined_r0x00d5e690:
        uVar18 = (ulong)uVar98;
        if (uVar98 < 4) goto LAB_00d5e784;
LAB_00d5e790:
        lVar6 = *param_1;
        *(int *)(lVar6 + 0x2c) = (int)uVar18;
        ppcVar9 = (code **)*param_1;
        *(undefined4 *)(lVar6 + 0x28) = 0x36;
        (**ppcVar9)(param_1);
      }
      pauVar7 = (undefined (*) [16])param_1[(long)(int)uVar18 + 0xe];
      if (iVar17 == 2) {
        lVar6 = 0;
        puVar8 = (ushort *)(*pauVar7 + 8);
        dVar21 = 8.0;
        if (*(char *)(lVar16 + 0x34) != '\0') {
          dVar21 = 16.0;
        }
        puVar10 = (undefined8 *)(*(long *)(lVar16 + 0x58) + 0x10);
        do {
          dVar58 = *(double *)((long)&DAT_00547d50 + lVar6);
          lVar6 = lVar6 + 8;
          dVar37 = (double)NEON_ucvtf((ulong)puVar8[-2]);
          dVar47 = (double)NEON_ucvtf((ulong)puVar8[-1]);
          dVar65 = (double)NEON_ucvtf((ulong)*(ushort *)*(undefined (*) [16])(puVar8 + -4));
          dVar81 = (double)NEON_ucvtf((ulong)*puVar8);
          dVar66 = (double)NEON_ucvtf((ulong)puVar8[1]);
          dVar48 = (double)NEON_ucvtf((ulong)puVar8[-3]);
          puVar1 = puVar8 + 2;
          puVar2 = puVar8 + 3;
          puVar8 = puVar8 + 8;
          dVar72 = (double)NEON_ucvtf((ulong)*puVar1);
          dVar76 = (double)NEON_ucvtf((ulong)*puVar2);
          puVar10[-1] = CONCAT44((float)(dVar105 / (dVar58 * dVar47 * 1.175875602 * dVar21)),
                                 (float)(dVar103 / (dVar58 * dVar37 * 1.306562965 * dVar21)));
          puVar10[-2] = CONCAT44((float)(dVar105 / (dVar58 * dVar48 * 1.387039845 * dVar21)),
                                 (float)(dVar103 / (dVar58 * dVar65 * dVar21)));
          puVar10[1] = CONCAT44((float)(dVar105 / (dVar58 * dVar76 * 0.275899379 * dVar21)),
                                (float)(dVar103 / (dVar58 * dVar72 * 0.5411961 * dVar21)));
          *puVar10 = CONCAT44((float)(dVar105 / (dVar58 * dVar66 * 0.785694958 * dVar21)),
                              (float)(dVar103 / (dVar58 * dVar81 * dVar21)));
          puVar10 = puVar10 + 4;
        } while (lVar6 != 0x40);
        *(code **)(lVar15 + lVar14 * 8 + 8) = FUN_00d5ee2c;
      }
      else if (iVar17 == 1) {
        auVar104 = *pauVar7;
        auVar30 = pauVar7[1];
        uVar98 = 10;
        if (*(char *)(lVar16 + 0x34) == '\0') {
          uVar98 = 0xb;
        }
        auVar26._4_4_ = 0;
        auVar26._0_4_ = uVar98;
        auVar52._0_8_ = CONCAT26(0,CONCAT24(auVar104._2_2_,(uint)auVar104._0_2_));
        auVar52._8_2_ = auVar104._4_2_;
        auVar52._10_2_ = 0;
        auVar52._12_2_ = auVar104._6_2_;
        auVar52._14_2_ = 0;
        auVar42._0_8_ = CONCAT26(0,CONCAT24(auVar104._10_2_,(uint)auVar104._8_2_));
        auVar42._8_2_ = auVar104._12_2_;
        auVar42._10_2_ = 0;
        auVar42._12_2_ = auVar104._14_2_;
        auVar42._14_2_ = 0;
        auVar26._8_4_ = uVar98;
        auVar26._12_4_ = 0;
        lVar11 = 1L << ((ulong)(uVar98 - 1) & 0x3f);
        auVar67._0_8_ = CONCAT26(0,CONCAT24(auVar30._2_2_,(uint)auVar30._0_2_));
        auVar67._8_2_ = auVar30._4_2_;
        auVar67._10_2_ = 0;
        auVar67._12_2_ = auVar30._6_2_;
        auVar67._14_2_ = 0;
        auVar62._0_8_ = CONCAT26(0,CONCAT24(auVar30._10_2_,(uint)auVar30._8_2_));
        auVar62._8_2_ = auVar30._12_2_;
        auVar62._10_2_ = 0;
        auVar62._12_2_ = auVar30._14_2_;
        auVar62._14_2_ = 0;
        auVar39 = NEON_ext(auVar42,auVar42,8,1);
        puVar12 = *(undefined4 **)(lVar16 + 0x58);
        auVar50 = NEON_ext(auVar52,auVar52,8,1);
        lVar6 = lVar11 + (ulong)auVar104._10_2_ * 0x3249;
        auVar85 = NEON_ext(auVar67,auVar67,8,1);
        auVar26 = NEON_neg(auVar26,8);
        auVar89._0_8_ = lVar11 + (auVar52._0_8_ & 0xffffffff) * 0x4000;
        auVar89._8_8_ = lVar11 + (ulong)auVar104._2_2_ * 0x58c5;
        auVar94._0_8_ = lVar11 + (ulong)auVar50._0_4_ * 0x539f;
        auVar94._8_8_ = lVar11 + (ulong)auVar50._4_4_ * 0x4b42;
        auVar104 = NEON_ext(auVar62,auVar62,8,1);
        auVar99._0_8_ = lVar11 + (ulong)auVar39._0_4_ * 0x22a3;
        auVar99._8_8_ = lVar11 + (ulong)auVar39._4_4_ * 0x11a8;
        auVar53._0_8_ = lVar11 + (auVar62._0_8_ & 0xffffffff) * 0x58c5;
        auVar53._8_8_ = lVar11 + (ulong)auVar30._10_2_ * 0x45bf;
        auVar63 = NEON_ushl(auVar94,auVar26,8);
        auVar68 = NEON_ushl(auVar89,auVar26,8);
        auVar77._0_8_ = lVar11 + (ulong)auVar104._0_4_ * 0x300b;
        auVar77._8_8_ = lVar11 + (ulong)auVar104._4_4_ * 0x187e;
        auVar50 = NEON_ushl(auVar99,auVar26,8);
        auVar104._8_4_ = (int)lVar6;
        auVar104._0_8_ = lVar11 + (auVar42._0_8_ & 0xffffffff) * 0x4000;
        auVar104._12_4_ = (int)((ulong)lVar6 >> 0x20);
        auVar74 = NEON_ushl(auVar104,auVar26,8);
        auVar104 = pauVar7[2];
        auVar39 = pauVar7[3];
        auVar4._8_8_ = lVar11 + (ulong)auVar85._4_4_ * 0x6862;
        auVar4._0_8_ = lVar11 + (ulong)auVar85._0_4_ * 0x73fc;
        auVar82 = NEON_ushl(auVar4,auVar26,8);
        auVar85._8_8_ = lVar11 + (ulong)auVar30._2_2_ * 0x7b21;
        auVar85._0_8_ = lVar11 + (auVar67._0_8_ & 0xffffffff) * 0x58c5;
        auVar85 = NEON_ushl(auVar85,auVar26,8);
        auVar90._0_8_ = CONCAT26(0,CONCAT24(auVar104._10_2_,(uint)auVar104._8_2_));
        auVar90._8_2_ = auVar104._12_2_;
        auVar90._10_2_ = 0;
        auVar90._12_2_ = auVar104._14_2_;
        auVar90._14_2_ = 0;
        auVar78 = NEON_ushl(auVar77,auVar26,8);
        auVar69._0_8_ = CONCAT26(0,CONCAT24(auVar104._2_2_,(uint)auVar104._0_2_));
        auVar69._8_2_ = auVar104._4_2_;
        auVar69._10_2_ = 0;
        auVar69._12_2_ = auVar104._6_2_;
        auVar69._14_2_ = 0;
        auVar30 = NEON_ushl(auVar53,auVar26,8);
        puVar12[4] = auVar63._0_4_;
        puVar12[5] = auVar63._8_4_;
        *puVar12 = auVar68._0_4_;
        puVar12[1] = auVar68._8_4_;
        puVar12[8] = auVar50._0_4_;
        puVar12[9] = auVar50._8_4_;
        puVar12[4] = auVar74._0_4_;
        puVar12[5] = auVar74._8_4_;
        auVar63 = NEON_ext(auVar90,auVar90,8,1);
        auVar50 = NEON_ext(auVar69,auVar69,8,1);
        lVar6 = lVar11 + (ulong)auVar63._4_4_ * 0x1712;
        puVar12[0xc] = auVar82._0_4_;
        puVar12[0xd] = auVar82._8_4_;
        puVar12[8] = auVar85._0_4_;
        puVar12[9] = auVar85._8_4_;
        puVar12[0x10] = auVar78._0_4_;
        puVar12[0x11] = auVar78._8_4_;
        puVar12[0xc] = auVar30._0_4_;
        puVar12[0xd] = auVar30._8_4_;
        auVar79._0_8_ = lVar11 + (ulong)auVar50._0_4_ * 0x6d41;
        auVar79._8_8_ = lVar11 + (ulong)auVar50._4_4_ * 0x6254;
        auVar43._0_8_ = CONCAT26(0,CONCAT24(auVar39._2_2_,(uint)auVar39._0_2_));
        auVar43._8_2_ = auVar39._4_2_;
        auVar43._10_2_ = 0;
        auVar43._12_2_ = auVar39._6_2_;
        auVar43._14_2_ = 0;
        auVar100._0_8_ = lVar11 + (auVar69._0_8_ & 0xffffffff) * 0x539f;
        auVar100._8_8_ = lVar11 + (ulong)auVar104._2_2_ * 0x73fc;
        auVar50 = NEON_ushl(auVar79,auVar26,8);
        auVar68 = NEON_ushl(auVar100,auVar26,8);
        auVar91._0_8_ = CONCAT26(0,CONCAT24(auVar39._10_2_,(uint)auVar39._8_2_));
        auVar91._8_2_ = auVar39._12_2_;
        auVar91._10_2_ = 0;
        auVar91._12_2_ = auVar39._14_2_;
        auVar91._14_2_ = 0;
        auVar30._8_4_ = (int)lVar6;
        auVar30._0_8_ = lVar11 + (ulong)auVar63._0_4_ * 0x2d41;
        auVar30._12_4_ = (int)((ulong)lVar6 >> 0x20);
        auVar30 = NEON_ushl(auVar30,auVar26,8);
        auVar78._8_8_ = lVar11 + (ulong)auVar104._10_2_ * 0x41b3;
        auVar78._0_8_ = lVar11 + (auVar90._0_8_ & 0xffffffff) * 0x539f;
        auVar104 = NEON_ushl(auVar78,auVar26,8);
        auVar63 = NEON_ext(auVar91,auVar91,8,1);
        auVar74 = NEON_ext(auVar43,auVar43,8,1);
        auVar95._0_8_ = lVar11 + (ulong)auVar63._0_4_ * 0x28ba;
        auVar95._8_8_ = lVar11 + (ulong)auVar63._4_4_ * 0x14c3;
        puVar12[0x14] = auVar50._0_4_;
        puVar12[0x15] = auVar50._8_4_;
        puVar12[0x10] = auVar68._0_4_;
        puVar12[0x11] = auVar68._8_4_;
        puVar12[0x18] = auVar30._0_4_;
        puVar12[0x19] = auVar30._8_4_;
        puVar12[0x14] = auVar104._0_4_;
        puVar12[0x15] = auVar104._8_4_;
        auVar70._0_8_ = lVar11 + (ulong)auVar74._0_4_ * 0x6254;
        auVar70._8_8_ = lVar11 + (ulong)auVar74._4_4_ * 0x587e;
        lVar6 = lVar11 + (ulong)auVar39._2_2_ * 0x6862;
        auVar63 = NEON_ushl(auVar70,auVar26,8);
        auVar101._0_8_ = lVar11 + (auVar91._0_8_ & 0xffffffff) * 0x4b42;
        auVar101._8_8_ = lVar11 + (ulong)auVar39._10_2_ * 0x3b21;
        auVar104 = pauVar7[4];
        auVar30 = pauVar7[5];
        auVar50 = NEON_ushl(auVar95,auVar26,8);
        auVar39._8_4_ = (int)lVar6;
        auVar39._0_8_ = lVar11 + (auVar43._0_8_ & 0xffffffff) * 0x4b42;
        auVar39._12_4_ = (int)((ulong)lVar6 >> 0x20);
        auVar68 = NEON_ushl(auVar39,auVar26,8);
        auVar39 = NEON_ushl(auVar101,auVar26,8);
        auVar54._0_8_ = CONCAT26(0,CONCAT24(auVar104._2_2_,(uint)auVar104._0_2_));
        auVar54._8_2_ = auVar104._4_2_;
        auVar54._10_2_ = 0;
        auVar54._12_2_ = auVar104._6_2_;
        auVar54._14_2_ = 0;
        auVar74 = NEON_ext(auVar54,auVar54,8,1);
        auVar96._0_8_ = CONCAT26(0,CONCAT24(auVar104._10_2_,(uint)auVar104._8_2_));
        auVar96._8_2_ = auVar104._12_2_;
        auVar96._10_2_ = 0;
        auVar96._12_2_ = auVar104._14_2_;
        auVar96._14_2_ = 0;
        auVar102._0_8_ = lVar11 + (auVar54._0_8_ & 0xffffffff) * 0x4000;
        auVar102._8_8_ = lVar11 + (ulong)auVar104._2_2_ * 0x58c5;
        puVar12[0x1c] = auVar63._0_4_;
        puVar12[0x1d] = auVar63._8_4_;
        puVar12[0x18] = auVar68._0_4_;
        puVar12[0x19] = auVar68._8_4_;
        puVar12[0x20] = auVar50._0_4_;
        puVar12[0x21] = auVar50._8_4_;
        puVar12[0x1c] = auVar39._0_4_;
        puVar12[0x1d] = auVar39._8_4_;
        auVar75._0_8_ = lVar11 + (ulong)auVar74._0_4_ * 0x539f;
        auVar75._8_8_ = lVar11 + (ulong)auVar74._4_4_ * 0x4b42;
        auVar39 = NEON_ext(auVar96,auVar96,8,1);
        auVar64._0_8_ = CONCAT26(0,CONCAT24(auVar30._2_2_,(uint)auVar30._0_2_));
        auVar64._8_2_ = auVar30._4_2_;
        auVar64._10_2_ = 0;
        auVar64._12_2_ = auVar30._6_2_;
        auVar64._14_2_ = 0;
        auVar68 = NEON_ushl(auVar102,auVar26,8);
        auVar63 = NEON_ushl(auVar75,auVar26,8);
        lVar6 = lVar11 + (ulong)auVar39._4_4_ * 0x11a8;
        auVar83._0_8_ = CONCAT26(0,CONCAT24(auVar30._10_2_,(uint)auVar30._8_2_));
        auVar83._8_2_ = auVar30._12_2_;
        auVar83._10_2_ = 0;
        auVar83._12_2_ = auVar30._14_2_;
        auVar83._14_2_ = 0;
        auVar74 = NEON_ext(auVar64,auVar64,8,1);
        auVar50._8_4_ = (int)lVar6;
        auVar50._0_8_ = lVar11 + (ulong)auVar39._0_4_ * 0x22a3;
        auVar50._12_4_ = (int)((ulong)lVar6 >> 0x20);
        auVar39 = NEON_ushl(auVar50,auVar26,8);
        auVar82._8_8_ = lVar11 + (ulong)auVar104._10_2_ * 0x3249;
        auVar82._0_8_ = lVar11 + (auVar96._0_8_ & 0xffffffff) * 0x4000;
        auVar104 = NEON_ushl(auVar82,auVar26,8);
        auVar80._0_8_ = lVar11 + (ulong)auVar74._0_4_ * 0x41b3;
        auVar80._8_8_ = lVar11 + (ulong)auVar74._4_4_ * 0x3b21;
        auVar50 = NEON_ext(auVar83,auVar83,8,1);
        lVar6 = lVar11 + (ulong)auVar30._2_2_ * 0x45bf;
        puVar12[0x24] = auVar63._0_4_;
        puVar12[0x25] = auVar63._8_4_;
        puVar12[0x20] = auVar68._0_4_;
        puVar12[0x21] = auVar68._8_4_;
        puVar12[0x28] = auVar39._0_4_;
        puVar12[0x29] = auVar39._8_4_;
        puVar12[0x24] = auVar104._0_4_;
        puVar12[0x25] = auVar104._8_4_;
        auVar86._0_8_ = lVar11 + (ulong)auVar50._0_4_ * 0x1b37;
        auVar86._8_8_ = lVar11 + (ulong)auVar50._4_4_ * 0xde0;
        auVar92._0_8_ = lVar11 + (auVar83._0_8_ & 0xffffffff) * 0x3249;
        auVar92._8_8_ = lVar11 + (ulong)auVar30._10_2_ * 0x2782;
        auVar104 = pauVar7[6];
        auVar30 = pauVar7[7];
        auVar85 = NEON_ushl(auVar86,auVar26,8);
        auVar39 = NEON_ushl(auVar80,auVar26,8);
        auVar78 = NEON_ushl(auVar92,auVar26,8);
        auVar63._8_4_ = (int)lVar6;
        auVar63._0_8_ = lVar11 + (auVar64._0_8_ & 0xffffffff) * 0x3249;
        auVar63._12_4_ = (int)((ulong)lVar6 >> 0x20);
        auVar50 = NEON_ushl(auVar63,auVar26,8);
        uVar98 = CONCAT22(0,auVar104._8_2_);
        uVar19 = auVar104._10_2_;
        auVar55._0_8_ = CONCAT26(0,CONCAT24(auVar30._2_2_,(uint)auVar30._0_2_));
        auVar55._8_2_ = auVar30._4_2_;
        auVar55._10_2_ = 0;
        auVar55._12_2_ = auVar30._6_2_;
        auVar55._14_2_ = 0;
        auVar44._0_8_ = CONCAT26(0,CONCAT24(auVar104._2_2_,(uint)auVar104._0_2_));
        auVar44._8_2_ = auVar104._4_2_;
        auVar44._10_2_ = 0;
        auVar44._12_2_ = auVar104._6_2_;
        auVar44._14_2_ = 0;
        auVar87._0_8_ = CONCAT26(0,CONCAT24(auVar30._10_2_,(uint)auVar30._8_2_));
        auVar87._8_2_ = auVar30._12_2_;
        auVar87._10_2_ = 0;
        auVar87._12_2_ = auVar30._14_2_;
        auVar87._14_2_ = 0;
        auVar82 = NEON_ext(auVar55,auVar55,8,1);
        auVar97._0_8_ = lVar11 + (auVar55._0_8_ & 0xffffffff) * 0x11a8;
        auVar97._8_8_ = lVar11 + (ulong)auVar30._2_2_ * 0x187e;
        auVar68._4_2_ = uVar19;
        auVar68._0_4_ = uVar98;
        auVar68._6_2_ = 0;
        auVar68._8_2_ = auVar104._12_2_;
        auVar68._10_2_ = 0;
        auVar68._12_2_ = auVar104._14_2_;
        auVar68._14_2_ = 0;
        auVar74._4_2_ = uVar19;
        auVar74._0_4_ = uVar98;
        auVar74._6_2_ = 0;
        auVar74._8_2_ = auVar104._12_2_;
        auVar74._10_2_ = 0;
        auVar74._12_2_ = auVar104._14_2_;
        auVar74._14_2_ = 0;
        auVar63 = NEON_ext(auVar68,auVar74,8,1);
        puVar12[0x2c] = auVar39._0_4_;
        puVar12[0x2d] = auVar39._8_4_;
        puVar12[0x28] = auVar50._0_4_;
        puVar12[0x29] = auVar50._8_4_;
        puVar12[0x30] = auVar85._0_4_;
        puVar12[0x31] = auVar85._8_4_;
        puVar12[0x2c] = auVar78._0_4_;
        puVar12[0x2d] = auVar78._8_4_;
        auVar39 = NEON_ext(auVar44,auVar44,8,1);
        auVar50 = NEON_ext(auVar87,auVar87,8,1);
        auVar93._0_8_ = lVar11 + (auVar87._0_8_ & 0xffffffff) * 0x11a8;
        auVar93._8_8_ = lVar11 + (ulong)auVar30._10_2_ * 0xde0;
        *(code **)(lVar15 + lVar14 * 8 + 8) = FUN_00d5ed04;
        auVar34._0_8_ = lVar11 + (ulong)auVar50._0_4_ * 0x98e;
        auVar34._8_8_ = lVar11 + (ulong)auVar50._4_4_ * 0x4df;
        auVar56._0_8_ = lVar11 + (ulong)auVar39._0_4_ * 0x2d41;
        auVar56._8_8_ = lVar11 + (ulong)auVar39._4_4_ * 0x28ba;
        auVar88._0_8_ = lVar11 + (ulong)auVar63._0_4_ * 0x12bf;
        auVar88._8_8_ = lVar11 + (ulong)auVar63._4_4_ * 0x98e;
        auVar71._0_8_ = lVar11 + (ulong)uVar98 * 0x22a3;
        auVar71._8_8_ = lVar11 + (ulong)uVar19 * 0x1b37;
        auVar84._0_8_ = lVar11 + (auVar44._0_8_ & 0xffffffff) * 0x22a3;
        auVar84._8_8_ = lVar11 + (ulong)auVar104._2_2_ * 0x300b;
        auVar50 = NEON_ushl(auVar56,auVar26,8);
        auVar39 = NEON_ushl(auVar88,auVar26,8);
        auVar63 = NEON_ushl(auVar71,auVar26,8);
        auVar68 = NEON_ushl(auVar84,auVar26,8);
        auVar30 = NEON_ushl(auVar34,auVar26,8);
        auVar74 = NEON_ushl(auVar93,auVar26,8);
        auVar5._8_8_ = lVar11 + (ulong)auVar82._4_4_ * 0x14c3;
        auVar5._0_8_ = lVar11 + (ulong)auVar82._0_4_ * 0x1712;
        auVar85 = NEON_ushl(auVar5,auVar26,8);
        auVar104 = NEON_ushl(auVar97,auVar26,8);
        auVar45._0_8_ = CONCAT44(auVar63._8_4_,auVar63._0_4_);
        auVar45._8_4_ = auVar39._0_4_;
        auVar45._12_4_ = auVar39._8_4_;
        auVar57._0_8_ = CONCAT44(auVar68._8_4_,auVar68._0_4_);
        auVar57._8_4_ = auVar50._0_4_;
        auVar57._12_4_ = auVar50._8_4_;
        auVar35._0_8_ = CONCAT44(auVar74._8_4_,auVar74._0_4_);
        auVar35._8_4_ = auVar30._0_4_;
        auVar35._12_4_ = auVar30._8_4_;
        auVar27._0_8_ = CONCAT44(auVar104._8_4_,auVar104._0_4_);
        auVar27._8_4_ = auVar85._0_4_;
        auVar27._12_4_ = auVar85._8_4_;
        *(long *)(puVar12 + 0x32) = auVar57._8_8_;
        *(undefined8 *)(puVar12 + 0x30) = auVar57._0_8_;
        *(long *)(puVar12 + 0x36) = auVar45._8_8_;
        *(undefined8 *)(puVar12 + 0x34) = auVar45._0_8_;
        *(long *)(puVar12 + 0x3a) = auVar27._8_8_;
        *(undefined8 *)(puVar12 + 0x38) = auVar27._0_8_;
        *(long *)(puVar12 + 0x3e) = auVar35._8_8_;
        *(undefined8 *)(puVar12 + 0x3c) = auVar35._0_8_;
      }
      else if (iVar17 == 0) {
        uVar20 = *(undefined8 *)*pauVar7;
        uVar28 = *(undefined8 *)(*pauVar7 + 8);
        uVar36 = *(undefined8 *)pauVar7[1];
        uVar46 = *(undefined8 *)(pauVar7[1] + 8);
        uVar13 = 3;
        if (*(char *)(lVar16 + 0x34) != '\0') {
          uVar13 = 4;
        }
        auVar22._2_2_ = 0;
        auVar22._0_2_ = (ushort)uVar20;
        auVar22._4_2_ = (short)((ulong)uVar20 >> 0x10);
        auVar22._6_2_ = 0;
        auVar22._8_2_ = (short)((ulong)uVar20 >> 0x20);
        auVar22._10_2_ = 0;
        auVar22._12_2_ = (short)((ulong)uVar20 >> 0x30);
        auVar22._14_2_ = 0;
        auVar29._2_2_ = 0;
        auVar29._0_2_ = (ushort)uVar28;
        auVar29._4_2_ = (short)((ulong)uVar28 >> 0x10);
        auVar29._6_2_ = 0;
        auVar29._8_2_ = (short)((ulong)uVar28 >> 0x20);
        auVar29._10_2_ = 0;
        auVar29._12_2_ = (short)((ulong)uVar28 >> 0x30);
        auVar29._14_2_ = 0;
        puVar10 = *(undefined8 **)(lVar16 + 0x58);
        auVar38._2_2_ = 0;
        auVar38._0_2_ = (ushort)uVar36;
        auVar38._4_2_ = (short)((ulong)uVar36 >> 0x10);
        auVar38._6_2_ = 0;
        auVar38._8_2_ = (short)((ulong)uVar36 >> 0x20);
        auVar38._10_2_ = 0;
        auVar38._12_2_ = (short)((ulong)uVar36 >> 0x30);
        auVar38._14_2_ = 0;
        auVar49._2_2_ = 0;
        auVar49._0_2_ = (ushort)uVar46;
        auVar49._4_2_ = (short)((ulong)uVar46 >> 0x10);
        auVar49._6_2_ = 0;
        auVar49._8_2_ = (short)((ulong)uVar46 >> 0x20);
        auVar49._10_2_ = 0;
        auVar49._12_2_ = (short)((ulong)uVar46 >> 0x30);
        auVar49._14_2_ = 0;
        auVar73._4_4_ = uVar13;
        auVar73._0_4_ = uVar13;
        auVar73._8_4_ = uVar13;
        auVar73._12_4_ = uVar13;
        uVar20 = *(undefined8 *)pauVar7[2];
        uVar28 = *(undefined8 *)(pauVar7[2] + 8);
        auVar104 = NEON_ushl(auVar22,auVar73,4);
        uVar36 = *(undefined8 *)pauVar7[3];
        uVar46 = *(undefined8 *)(pauVar7[3] + 8);
        auVar30 = NEON_ushl(auVar29,auVar73,4);
        auVar39 = NEON_ushl(auVar38,auVar73,4);
        auVar50 = NEON_ushl(auVar49,auVar73,4);
        auVar59._2_2_ = 0;
        auVar59._0_2_ = (ushort)uVar20;
        auVar59._4_2_ = (short)((ulong)uVar20 >> 0x10);
        auVar59._6_2_ = 0;
        auVar59._8_2_ = (short)((ulong)uVar20 >> 0x20);
        auVar59._10_2_ = 0;
        auVar59._12_2_ = (short)((ulong)uVar20 >> 0x30);
        auVar59._14_2_ = 0;
        puVar10[1] = auVar104._8_8_;
        *puVar10 = auVar104._0_8_;
        puVar10[3] = auVar30._8_8_;
        puVar10[2] = auVar30._0_8_;
        auVar23._2_2_ = 0;
        auVar23._0_2_ = (ushort)uVar28;
        auVar23._4_2_ = (short)((ulong)uVar28 >> 0x10);
        auVar23._6_2_ = 0;
        auVar23._8_2_ = (short)((ulong)uVar28 >> 0x20);
        auVar23._10_2_ = 0;
        auVar23._12_2_ = (short)((ulong)uVar28 >> 0x30);
        auVar23._14_2_ = 0;
        auVar31._2_2_ = 0;
        auVar31._0_2_ = (ushort)uVar36;
        auVar31._4_2_ = (short)((ulong)uVar36 >> 0x10);
        auVar31._6_2_ = 0;
        auVar31._8_2_ = (short)((ulong)uVar36 >> 0x20);
        auVar31._10_2_ = 0;
        auVar31._12_2_ = (short)((ulong)uVar36 >> 0x30);
        auVar31._14_2_ = 0;
        puVar10[5] = auVar39._8_8_;
        puVar10[4] = auVar39._0_8_;
        puVar10[7] = auVar50._8_8_;
        puVar10[6] = auVar50._0_8_;
        auVar40._2_2_ = 0;
        auVar40._0_2_ = (ushort)uVar46;
        auVar40._4_2_ = (short)((ulong)uVar46 >> 0x10);
        auVar40._6_2_ = 0;
        auVar40._8_2_ = (short)((ulong)uVar46 >> 0x20);
        auVar40._10_2_ = 0;
        auVar40._12_2_ = (short)((ulong)uVar46 >> 0x30);
        auVar40._14_2_ = 0;
        auVar50 = NEON_ushl(auVar59,auVar73,4);
        uVar20 = *(undefined8 *)pauVar7[4];
        uVar28 = *(undefined8 *)(pauVar7[4] + 8);
        auVar104 = NEON_ushl(auVar23,auVar73,4);
        uVar36 = *(undefined8 *)pauVar7[5];
        uVar46 = *(undefined8 *)(pauVar7[5] + 8);
        auVar30 = NEON_ushl(auVar31,auVar73,4);
        auVar39 = NEON_ushl(auVar40,auVar73,4);
        auVar60._2_2_ = 0;
        auVar60._0_2_ = (ushort)uVar20;
        auVar60._4_2_ = (short)((ulong)uVar20 >> 0x10);
        auVar60._6_2_ = 0;
        auVar60._8_2_ = (short)((ulong)uVar20 >> 0x20);
        auVar60._10_2_ = 0;
        auVar60._12_2_ = (short)((ulong)uVar20 >> 0x30);
        auVar60._14_2_ = 0;
        puVar10[9] = auVar50._8_8_;
        puVar10[8] = auVar50._0_8_;
        puVar10[0xb] = auVar104._8_8_;
        puVar10[10] = auVar104._0_8_;
        auVar24._2_2_ = 0;
        auVar24._0_2_ = (ushort)uVar28;
        auVar24._4_2_ = (short)((ulong)uVar28 >> 0x10);
        auVar24._6_2_ = 0;
        auVar24._8_2_ = (short)((ulong)uVar28 >> 0x20);
        auVar24._10_2_ = 0;
        auVar24._12_2_ = (short)((ulong)uVar28 >> 0x30);
        auVar24._14_2_ = 0;
        auVar51._2_2_ = 0;
        auVar51._0_2_ = (ushort)uVar36;
        auVar51._4_2_ = (short)((ulong)uVar36 >> 0x10);
        auVar51._6_2_ = 0;
        auVar51._8_2_ = (short)((ulong)uVar36 >> 0x20);
        auVar51._10_2_ = 0;
        auVar51._12_2_ = (short)((ulong)uVar36 >> 0x30);
        auVar51._14_2_ = 0;
        puVar10[0xd] = auVar30._8_8_;
        puVar10[0xc] = auVar30._0_8_;
        puVar10[0xf] = auVar39._8_8_;
        puVar10[0xe] = auVar39._0_8_;
        auVar32._2_2_ = 0;
        auVar32._0_2_ = (ushort)uVar46;
        auVar32._4_2_ = (short)((ulong)uVar46 >> 0x10);
        auVar32._6_2_ = 0;
        auVar32._8_2_ = (short)((ulong)uVar46 >> 0x20);
        auVar32._10_2_ = 0;
        auVar32._12_2_ = (short)((ulong)uVar46 >> 0x30);
        auVar32._14_2_ = 0;
        auVar39 = NEON_ushl(auVar60,auVar73,4);
        uVar20 = *(undefined8 *)pauVar7[6];
        uVar28 = *(undefined8 *)(pauVar7[6] + 8);
        auVar104 = NEON_ushl(auVar24,auVar73,4);
        uVar36 = *(undefined8 *)pauVar7[7];
        uVar46 = *(undefined8 *)(pauVar7[7] + 8);
        auVar50 = NEON_ushl(auVar51,auVar73,4);
        auVar30 = NEON_ushl(auVar32,auVar73,4);
        auVar61._2_2_ = 0;
        auVar61._0_2_ = (ushort)uVar20;
        auVar61._4_2_ = (short)((ulong)uVar20 >> 0x10);
        auVar61._6_2_ = 0;
        auVar61._8_2_ = (short)((ulong)uVar20 >> 0x20);
        auVar61._10_2_ = 0;
        auVar61._12_2_ = (short)((ulong)uVar20 >> 0x30);
        auVar61._14_2_ = 0;
        puVar10[0x11] = auVar39._8_8_;
        puVar10[0x10] = auVar39._0_8_;
        puVar10[0x13] = auVar104._8_8_;
        puVar10[0x12] = auVar104._0_8_;
        auVar25._2_2_ = 0;
        auVar25._0_2_ = (ushort)uVar28;
        auVar25._4_2_ = (short)((ulong)uVar28 >> 0x10);
        auVar25._6_2_ = 0;
        auVar25._8_2_ = (short)((ulong)uVar28 >> 0x20);
        auVar25._10_2_ = 0;
        auVar25._12_2_ = (short)((ulong)uVar28 >> 0x30);
        auVar25._14_2_ = 0;
        auVar41._2_2_ = 0;
        auVar41._0_2_ = (ushort)uVar36;
        auVar41._4_2_ = (short)((ulong)uVar36 >> 0x10);
        auVar41._6_2_ = 0;
        auVar41._8_2_ = (short)((ulong)uVar36 >> 0x20);
        auVar41._10_2_ = 0;
        auVar41._12_2_ = (short)((ulong)uVar36 >> 0x30);
        auVar41._14_2_ = 0;
        *(code **)(lVar15 + lVar14 * 8 + 8) = FUN_00d5ed04;
        puVar10[0x15] = auVar50._8_8_;
        puVar10[0x14] = auVar50._0_8_;
        puVar10[0x17] = auVar30._8_8_;
        puVar10[0x16] = auVar30._0_8_;
        auVar33._2_2_ = 0;
        auVar33._0_2_ = (ushort)uVar46;
        auVar33._4_2_ = (short)((ulong)uVar46 >> 0x10);
        auVar33._6_2_ = 0;
        auVar33._8_2_ = (short)((ulong)uVar46 >> 0x20);
        auVar33._10_2_ = 0;
        auVar33._12_2_ = (short)((ulong)uVar46 >> 0x30);
        auVar33._14_2_ = 0;
        auVar50 = NEON_ushl(auVar61,auVar73,4);
        auVar104 = NEON_ushl(auVar25,auVar73,4);
        auVar39 = NEON_ushl(auVar41,auVar73,4);
        auVar30 = NEON_ushl(auVar33,auVar73,4);
        puVar10[0x19] = auVar50._8_8_;
        puVar10[0x18] = auVar50._0_8_;
        puVar10[0x1b] = auVar104._8_8_;
        puVar10[0x1a] = auVar104._0_8_;
        puVar10[0x1d] = auVar39._8_8_;
        puVar10[0x1c] = auVar39._0_8_;
        puVar10[0x1f] = auVar30._8_8_;
        puVar10[0x1e] = auVar30._0_8_;
      }
      else {
        ppcVar9 = (code **)*param_1;
        *(undefined4 *)(ppcVar9 + 5) = 0x31;
        (**ppcVar9)(param_1);
      }
      lVar14 = lVar14 + 1;
      lVar16 = lVar16 + 0x60;
    } while (lVar14 < *(int *)((long)param_1 + 0x5c));
  }
  return;
}


