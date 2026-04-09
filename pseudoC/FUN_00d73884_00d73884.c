// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d73884
// Entry Point: 00d73884
// Size: 3952 bytes
// Signature: undefined FUN_00d73884(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d73884(long *param_1)

{
  int iVar1;
  char cVar2;
  undefined (*pauVar3) [12];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined8 uVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined auVar47 [14];
  undefined auVar48 [14];
  undefined auVar49 [14];
  undefined auVar50 [14];
  undefined auVar51 [14];
  undefined auVar52 [14];
  undefined auVar53 [14];
  undefined auVar54 [14];
  undefined auVar55 [12];
  undefined auVar56 [12];
  undefined auVar57 [12];
  undefined auVar58 [12];
  code **ppcVar59;
  code **ppcVar60;
  undefined (*pauVar61) [12];
  undefined8 *puVar62;
  long lVar63;
  ulong *puVar64;
  uint *puVar65;
  long lVar66;
  code **ppcVar67;
  code *pcVar68;
  uint uVar69;
  char *pcVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  undefined8 uVar75;
  ulong uVar76;
  double dVar77;
  double dVar78;
  undefined auVar79 [16];
  double dVar81;
  double dVar82;
  double dVar83;
  undefined auVar80 [16];
  undefined4 uVar84;
  uint uVar85;
  undefined8 uVar86;
  ulong uVar87;
  double dVar88;
  double dVar89;
  uint uVar91;
  undefined auVar90 [16];
  undefined4 uVar92;
  undefined8 uVar93;
  double dVar94;
  undefined auVar95 [16];
  uint uVar96;
  undefined8 uVar97;
  double dVar98;
  double dVar99;
  double dVar100;
  double dVar101;
  undefined auVar102 [16];
  double dVar103;
  double dVar104;
  double dVar105;
  double dVar106;
  double dVar107;
  double dVar108;
  double dVar109;
  double dVar110;
  double dVar111;
  double dVar112;
  double dVar113;
  double dVar114;
  double dVar115;
  double dVar116;
  double dVar117;
  double dVar118;
  double dVar119;
  double dVar120;
  double dVar121;
  double dVar122;
  double dVar123;
  double dVar124;
  double dVar125;
  double dVar126;
  double dVar127;
  double dVar128;
  double dVar129;
  double dVar130;
  double dVar131;
  
  if (0 < *(int *)(param_1 + 7)) {
    auVar79 = NEON_fmov(0x3ff0000000000000,8);
    ppcVar59 = (code **)param_1[0x4b];
    pcVar70 = (char *)(param_1[0x24] + 0x34);
    lVar66 = 0;
    uVar69 = 0;
    dVar71 = auVar79._0_8_;
    pcVar68 = (code *)0x0;
    dVar81 = SUB168(_DAT_004c5a20,8);
    dVar72 = SUB168(_DAT_004c5a20,0);
    dVar82 = SUB168(_DAT_004c35c0,8);
    dVar73 = SUB168(_DAT_004c35c0,0);
    auVar79 = NEON_fmov(0x3fc0000000000000,8);
    dVar83 = auVar79._8_8_;
    dVar74 = auVar79._0_8_;
    ppcVar67 = ppcVar59;
    do {
      ppcVar67 = ppcVar67 + 1;
      iVar1 = *(int *)(pcVar70 + -0xc) + *(int *)(pcVar70 + -0x10) * 0x100;
      if (0x70d < iVar1) {
        if (iVar1 < 0xc06) {
          if (iVar1 < 0x909) {
            if (iVar1 < 0x808) {
              if (iVar1 != 0x70e) {
                if (iVar1 == 0x804) {
                  pcVar68 = jpeg_idct_8x4;
                  cVar2 = *pcVar70;
                  *ppcVar67 = jpeg_idct_8x4;
                  goto joined_r0x00d73af4;
                }
                goto LAB_00d73f7c;
              }
              pcVar68 = jpeg_idct_7x14;
              cVar2 = *pcVar70;
              *ppcVar67 = jpeg_idct_7x14;
joined_r0x00d73dd8:
              uVar69 = 0;
            }
            else {
              if (iVar1 != 0x808) {
                if (iVar1 == 0x810) {
                  pcVar68 = jpeg_idct_8x16;
                  cVar2 = *pcVar70;
                  *ppcVar67 = jpeg_idct_8x16;
                  goto joined_r0x00d73c94;
                }
                goto LAB_00d73f7c;
              }
              uVar26 = *(uint *)((long)param_1 + 0x5c);
              if (uVar26 < 3) {
                pcVar68 = (code *)(&PTR_jpeg_idct_islow_01012bd8)[(int)uVar26];
                cVar2 = *pcVar70;
                *ppcVar67 = pcVar68;
                uVar69 = uVar26;
              }
              else {
                ppcVar60 = (code **)*param_1;
                *(undefined4 *)(ppcVar60 + 5) = 0x31;
                (**ppcVar60)(param_1);
                cVar2 = *pcVar70;
                *ppcVar67 = pcVar68;
              }
            }
            goto joined_r0x00d73dd8;
          }
          if (iVar1 < 0xa0a) {
            if (iVar1 == 0x909) {
              pcVar68 = jpeg_idct_9x9;
              cVar2 = *pcVar70;
              *ppcVar67 = jpeg_idct_9x9;
              goto joined_r0x00d73e48;
            }
            if (iVar1 == 0xa05) {
              pcVar68 = jpeg_idct_10x5;
              cVar2 = *pcVar70;
              *ppcVar67 = jpeg_idct_10x5;
              goto joined_r0x00d73bd4;
            }
          }
          else {
            if (iVar1 == 0xa0a) {
              pcVar68 = jpeg_idct_10x10;
              cVar2 = *pcVar70;
              *ppcVar67 = jpeg_idct_10x10;
              goto joined_r0x00d73f3c;
            }
            if (iVar1 == 0xb0b) {
              pcVar68 = jpeg_idct_11x11;
              cVar2 = *pcVar70;
              *ppcVar67 = jpeg_idct_11x11;
              goto joined_r0x00d73d44;
            }
          }
        }
        else if (iVar1 < 0xe0e) {
          if (iVar1 < 0xd0d) {
            if (iVar1 == 0xc06) {
              pcVar68 = jpeg_idct_12x6;
              cVar2 = *pcVar70;
              *ppcVar67 = jpeg_idct_12x6;
              goto joined_r0x00d73f3c;
            }
            if (iVar1 == 0xc0c) {
              pcVar68 = jpeg_idct_12x12;
              cVar2 = *pcVar70;
              *ppcVar67 = jpeg_idct_12x12;
              goto joined_r0x00d73b6c;
            }
          }
          else {
            if (iVar1 == 0xd0d) {
              pcVar68 = jpeg_idct_13x13;
              cVar2 = *pcVar70;
              *ppcVar67 = jpeg_idct_13x13;
              goto joined_r0x00d73c94;
            }
            if (iVar1 == 0xe07) {
              pcVar68 = jpeg_idct_14x7;
              cVar2 = *pcVar70;
              *ppcVar67 = jpeg_idct_14x7;
              goto joined_r0x00d73cec;
            }
          }
        }
        else if (iVar1 < 0x1008) {
          if (iVar1 == 0xe0e) {
            pcVar68 = jpeg_idct_14x14;
            cVar2 = *pcVar70;
            *ppcVar67 = jpeg_idct_14x14;
            goto joined_r0x00d73d44;
          }
          if (iVar1 == 0xf0f) {
            pcVar68 = jpeg_idct_15x15;
            cVar2 = *pcVar70;
            *ppcVar67 = jpeg_idct_15x15;
            goto joined_r0x00d73dd8;
          }
        }
        else {
          if (iVar1 == 0x1008) {
            pcVar68 = jpeg_idct_16x8;
            cVar2 = *pcVar70;
            *ppcVar67 = jpeg_idct_16x8;
            goto joined_r0x00d73af4;
          }
          if (iVar1 == 0x1010) {
            uVar69 = 0;
            pcVar68 = jpeg_idct_16x16;
            cVar2 = *pcVar70;
            *ppcVar67 = jpeg_idct_16x16;
            goto joined_r0x00d73dd8;
          }
        }
        goto LAB_00d73f7c;
      }
      if (0x403 < iVar1) {
        if (iVar1 < 0x603) {
          if (iVar1 < 0x505) {
            if (iVar1 != 0x404) {
              if (iVar1 == 0x408) {
                pcVar68 = jpeg_idct_4x8;
                cVar2 = *pcVar70;
                *ppcVar67 = jpeg_idct_4x8;
                goto joined_r0x00d73d44;
              }
              goto LAB_00d73f7c;
            }
            pcVar68 = jpeg_idct_4x4;
            cVar2 = *pcVar70;
            *ppcVar67 = jpeg_idct_4x4;
joined_r0x00d73e48:
            uVar69 = 0;
          }
          else if (iVar1 == 0x505) {
            pcVar68 = jpeg_idct_5x5;
            cVar2 = *pcVar70;
            *ppcVar67 = jpeg_idct_5x5;
            uVar69 = 0;
          }
          else {
            if (iVar1 != 0x50a) goto LAB_00d73f7c;
            pcVar68 = jpeg_idct_5x10;
            cVar2 = *pcVar70;
            *ppcVar67 = jpeg_idct_5x10;
joined_r0x00d73bd4:
            uVar69 = 0;
          }
        }
        else if (iVar1 < 0x60c) {
          if (iVar1 == 0x603) {
            pcVar68 = jpeg_idct_6x3;
            cVar2 = *pcVar70;
            *ppcVar67 = jpeg_idct_6x3;
            goto joined_r0x00d73c94;
          }
          if (iVar1 != 0x606) goto LAB_00d73f7c;
          uVar69 = 0;
          pcVar68 = jpeg_idct_6x6;
          cVar2 = *pcVar70;
          *ppcVar67 = jpeg_idct_6x6;
        }
        else {
          if (iVar1 != 0x60c) {
            if (iVar1 == 0x707) {
              pcVar68 = jpeg_idct_7x7;
              cVar2 = *pcVar70;
              *ppcVar67 = jpeg_idct_7x7;
              goto joined_r0x00d73dd8;
            }
            goto LAB_00d73f7c;
          }
          pcVar68 = jpeg_idct_6x12;
          cVar2 = *pcVar70;
          *ppcVar67 = jpeg_idct_6x12;
joined_r0x00d73af4:
          uVar69 = 0;
        }
        goto joined_r0x00d73dd8;
      }
      if (iVar1 < 0x204) {
        if (iVar1 < 0x201) {
          if (iVar1 == 0x101) {
            pcVar68 = jpeg_idct_1x1;
            cVar2 = *pcVar70;
            *ppcVar67 = jpeg_idct_1x1;
joined_r0x00d73d44:
            uVar69 = 0;
          }
          else {
            if (iVar1 == 0x102) {
              pcVar68 = jpeg_idct_1x2;
              cVar2 = *pcVar70;
              *ppcVar67 = jpeg_idct_1x2;
              goto joined_r0x00d73af4;
            }
LAB_00d73f7c:
            lVar63 = *param_1;
            *(int *)(lVar63 + 0x2c) = *(int *)(pcVar70 + -0x10);
            uVar84 = *(undefined4 *)(pcVar70 + -0xc);
            *(undefined4 *)(lVar63 + 0x28) = 7;
            *(undefined4 *)(*param_1 + 0x30) = uVar84;
            (**(code **)*param_1)(param_1);
            cVar2 = *pcVar70;
            *ppcVar67 = pcVar68;
          }
        }
        else {
          if (iVar1 != 0x201) {
            if (iVar1 == 0x202) {
              pcVar68 = jpeg_idct_2x2;
              cVar2 = *pcVar70;
              *ppcVar67 = jpeg_idct_2x2;
              goto joined_r0x00d73dd8;
            }
            goto LAB_00d73f7c;
          }
          pcVar68 = jpeg_idct_2x1;
          cVar2 = *pcVar70;
          *ppcVar67 = jpeg_idct_2x1;
joined_r0x00d73c94:
          uVar69 = 0;
        }
      }
      else if (iVar1 < 0x306) {
        if (iVar1 == 0x204) {
          pcVar68 = jpeg_idct_2x4;
          cVar2 = *pcVar70;
          *ppcVar67 = jpeg_idct_2x4;
joined_r0x00d73f3c:
          uVar69 = 0;
        }
        else {
          if (iVar1 != 0x303) goto LAB_00d73f7c;
          pcVar68 = jpeg_idct_3x3;
          cVar2 = *pcVar70;
          *ppcVar67 = jpeg_idct_3x3;
joined_r0x00d73cec:
          uVar69 = 0;
        }
      }
      else {
        if (iVar1 == 0x306) {
          pcVar68 = jpeg_idct_3x6;
          cVar2 = *pcVar70;
          *ppcVar67 = jpeg_idct_3x6;
          goto joined_r0x00d73f3c;
        }
        if (iVar1 != 0x402) goto LAB_00d73f7c;
        pcVar68 = jpeg_idct_4x2;
        cVar2 = *pcVar70;
        *ppcVar67 = jpeg_idct_4x2;
joined_r0x00d73b6c:
        uVar69 = 0;
      }
joined_r0x00d73dd8:
      if (((cVar2 != '\0') && (*(uint *)((long)ppcVar59 + lVar66 * 4 + 0x58) != uVar69)) &&
         (pauVar61 = *(undefined (**) [12])(pcVar70 + 0x1c), pauVar61 != (undefined (*) [12])0x0)) {
        *(uint *)((long)ppcVar59 + lVar66 * 4 + 0x58) = uVar69;
        if (uVar69 == 2) {
          dVar98 = (double)NEON_ucvtf((ulong)*(ushort *)*pauVar61);
          dVar77 = (double)NEON_ucvtf((ulong)*(ushort *)(*pauVar61 + 4));
          dVar12 = (double)NEON_ucvtf((ulong)*(ushort *)(*pauVar61 + 2));
          dVar94 = (double)NEON_ucvtf((ulong)*(ushort *)(*pauVar61 + 6));
          dVar27 = (double)NEON_ucvtf((ulong)*(ushort *)(*pauVar61 + 8));
          dVar99 = (double)NEON_ucvtf((ulong)*(ushort *)(*pauVar61 + 10));
          dVar13 = (double)NEON_ucvtf((ulong)*(ushort *)pauVar61[1]);
          dVar18 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[1] + 2));
          dVar23 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[1] + 6));
          dVar100 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[1] + 10));
          dVar28 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[1] + 8));
          dVar123 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[5] + 6));
          dVar32 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[1] + 4));
          dVar125 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[5] + 10));
          dVar110 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[7] + 6));
          dVar112 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[8] + 2));
          dVar33 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[2] + 2));
          dVar38 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[2] + 4));
          dVar35 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[2] + 6));
          dVar101 = (double)NEON_ucvtf((ulong)*(ushort *)pauVar61[2]);
          dVar34 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[2] + 10));
          dVar42 = (double)NEON_ucvtf((ulong)*(ushort *)pauVar61[3]);
          dVar39 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[3] + 2));
          dVar36 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[2] + 8));
          dVar37 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[3] + 6));
          dVar118 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[3] + 8));
          dVar115 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[3] + 10));
          dVar40 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[3] + 4));
          dVar41 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[4] + 2));
          dVar45 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[4] + 4));
          dVar116 = (double)NEON_ucvtf((ulong)*(ushort *)pauVar61[4]);
          dVar43 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[4] + 6));
          dVar117 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[4] + 10));
          dVar120 = (double)NEON_ucvtf((ulong)*(ushort *)pauVar61[5]);
          dVar46 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[5] + 2));
          dVar44 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[4] + 8));
          dVar128 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[5] + 4));
          dVar119 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[5] + 8));
          dVar129 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[6] + 2));
          dVar121 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[6] + 4));
          dVar122 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[6] + 6));
          dVar126 = (double)NEON_ucvtf((ulong)*(ushort *)pauVar61[6]);
          dVar124 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[6] + 10));
          dVar130 = (double)NEON_ucvtf((ulong)*(ushort *)pauVar61[7]);
          dVar105 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[7] + 2));
          dVar127 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[6] + 8));
          dVar29 = (double)NEON_ucvtf((ulong)*(ushort *)pauVar61[8]);
          dVar107 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[7] + 8));
          dVar131 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[7] + 10));
          dVar106 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[7] + 4));
          dVar108 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[8] + 4));
          dVar109 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[8] + 6));
          dVar111 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[8] + 10));
          dVar78 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[9] + 2));
          dVar113 = (double)NEON_ucvtf((ulong)*(ushort *)pauVar61[9]);
          dVar30 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[8] + 8));
          dVar103 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[9] + 6));
          dVar88 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[9] + 4));
          dVar104 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[9] + 8));
          dVar31 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[9] + 10));
          dVar19 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[10] + 2));
          dVar114 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[10] + 4));
          dVar14 = (double)NEON_ucvtf((ulong)*(ushort *)(pauVar61[10] + 6));
          puVar62 = *(undefined8 **)(pcVar70 + 0x24);
          dVar89 = (double)NEON_ucvtf((ulong)*(ushort *)pauVar61[10]);
          fVar24 = (float)(dVar12 * 1.387039845 * dVar83);
          puVar62[1] = CONCAT44((float)(dVar94 * dVar81 * dVar83),(float)(dVar77 * dVar72 * dVar74))
          ;
          *puVar62 = CONCAT26((short)((uint)fVar24 >> 0x10),
                              CONCAT24(SUB42(fVar24,0),(float)(dVar71 * dVar98 * dVar74)));
          puVar62[3] = CONCAT44((float)(dVar18 * dVar82 * dVar83),(float)(dVar13 * dVar73 * dVar74))
          ;
          puVar62[2] = CONCAT44((float)(dVar99 * 0.785694958 * dVar83),
                                (float)(dVar71 * dVar27 * dVar74));
          fVar24 = (float)(dVar23 * 1.387039845 * 1.387039845 * dVar83);
          puVar62[5] = CONCAT44((float)(dVar100 * 1.387039845 * dVar81 * dVar83),
                                (float)(dVar28 * 1.387039845 * dVar72 * dVar74));
          puVar62[4] = CONCAT26((short)((uint)fVar24 >> 0x10),
                                CONCAT24(SUB42(fVar24,0),(float)(dVar32 * 1.387039845 * dVar74)));
          puVar62[7] = CONCAT44((float)(dVar35 * 1.387039845 * dVar82 * dVar83),
                                (float)(dVar38 * 1.387039845 * dVar73 * dVar74));
          puVar62[6] = CONCAT44((float)(dVar33 * 1.387039845 * 0.785694958 * dVar83),
                                (float)(dVar101 * 1.387039845 * dVar74));
          dVar12 = dVar116 * 1.175875602 * dVar74;
          dVar13 = dVar41 * 1.175875602 * 1.387039845 * dVar83;
          auVar102._8_4_ = SUB84(dVar13,0);
          auVar102._0_8_ = dVar12;
          auVar102._12_4_ = (int)((ulong)dVar13 >> 0x20);
          puVar62[9] = CONCAT44((float)(dVar39 * 1.306562965 * dVar81 * dVar83),
                                (float)(dVar42 * 1.306562965 * dVar72 * dVar74));
          puVar62[8] = CONCAT44((float)(dVar34 * 1.306562965 * 1.387039845 * dVar83),
                                (float)(dVar36 * 1.306562965 * dVar74));
          puVar62[0xb] = CONCAT44((float)(dVar115 * 1.306562965 * dVar82 * dVar83),
                                  (float)(dVar118 * 1.306562965 * dVar73 * dVar74));
          puVar62[10] = CONCAT44((float)(dVar37 * 1.306562965 * 0.785694958 * dVar83),
                                 (float)(dVar40 * 1.306562965 * dVar74));
          fVar25 = (float)(dVar124 * 0.785694958 * 1.387039845 * dVar83);
          puVar62[0xd] = CONCAT44((float)(dVar43 * 1.175875602 * dVar81 * dVar83),
                                  (float)(dVar45 * 1.175875602 * dVar72 * dVar74));
          puVar62[0xc] = CONCAT26((short)((uint)(float)auVar102._8_8_ >> 0x10),
                                  CONCAT24(SUB42((float)auVar102._8_8_,0),(float)dVar12));
          puVar62[0xf] = CONCAT44((float)(dVar46 * 1.175875602 * dVar82 * dVar83),
                                  (float)(dVar120 * 1.175875602 * dVar73 * dVar74));
          puVar62[0xe] = CONCAT44((float)(dVar117 * 1.175875602 * 0.785694958 * dVar83),
                                  (float)(dVar44 * 1.175875602 * dVar74));
          dVar12 = dVar88 * 0.275899379 * dVar74;
          dVar13 = dVar103 * 0.275899379 * 1.387039845 * dVar83;
          fVar24 = (float)(dVar110 * 0.785694958 * 0.785694958 * dVar83);
          auVar79._8_4_ = SUB84(dVar13,0);
          auVar79._0_8_ = dVar12;
          auVar79._12_4_ = (int)((ulong)dVar13 >> 0x20);
          puVar62[0x11] =
               CONCAT44((float)(dVar125 * dVar81 * dVar83),(float)(dVar119 * dVar72 * dVar74));
          puVar62[0x10] =
               CONCAT44((float)(dVar123 * 1.387039845 * dVar83),(float)(dVar71 * dVar128 * dVar74));
          puVar62[0x13] =
               CONCAT44((float)(dVar122 * dVar82 * dVar83),(float)(dVar121 * dVar73 * dVar74));
          puVar62[0x12] =
               CONCAT44((float)(dVar129 * 0.785694958 * dVar83),(float)(dVar71 * dVar126 * dVar74));
          puVar62[0x15] =
               CONCAT44((float)(dVar105 * 0.785694958 * dVar81 * dVar83),
                        (float)(dVar130 * 0.785694958 * dVar72 * dVar74));
          puVar62[0x14] =
               CONCAT26((short)((uint)fVar25 >> 0x10),
                        CONCAT24(SUB42(fVar25,0),(float)(dVar127 * 0.785694958 * dVar74)));
          puVar62[0x17] =
               CONCAT44((float)(dVar131 * 0.785694958 * dVar82 * dVar83),
                        (float)(dVar107 * 0.785694958 * dVar73 * dVar74));
          puVar62[0x16] =
               CONCAT26((short)((uint)fVar24 >> 0x10),
                        CONCAT24(SUB42(fVar24,0),(float)(dVar106 * 0.785694958 * dVar74)));
          puVar62[0x19] =
               CONCAT44((float)(dVar109 * 0.5411961 * dVar81 * dVar83),
                        (float)(dVar108 * 0.5411961 * dVar72 * dVar74));
          puVar62[0x18] =
               CONCAT44((float)(dVar112 * 0.5411961 * 1.387039845 * dVar83),
                        (float)(dVar29 * 0.5411961 * dVar74));
          puVar62[0x1b] =
               CONCAT44((float)(dVar78 * 0.5411961 * dVar82 * dVar83),
                        (float)(dVar113 * 0.5411961 * dVar73 * dVar74));
          puVar62[0x1a] =
               CONCAT44((float)(dVar111 * 0.5411961 * 0.785694958 * dVar83),
                        (float)(dVar30 * 0.5411961 * dVar74));
          puVar62[0x1d] =
               CONCAT44((float)(dVar31 * 0.275899379 * dVar81 * dVar83),
                        (float)(dVar104 * 0.275899379 * dVar72 * dVar74));
          puVar62[0x1c] = CONCAT44((float)auVar79._8_8_,(float)dVar12);
          puVar62[0x1f] =
               CONCAT44((float)(dVar14 * 0.275899379 * dVar82 * dVar83),
                        (float)(dVar114 * 0.275899379 * dVar73 * dVar74));
          puVar62[0x1e] =
               CONCAT44((float)(dVar19 * 0.275899379 * 0.785694958 * dVar83),
                        (float)(dVar89 * 0.275899379 * dVar74));
        }
        else if (uVar69 == 1) {
          uVar84 = (undefined4)((ulong)*(undefined8 *)(*pauVar61 + 8) >> 0x20);
          uVar11 = *(undefined8 *)*pauVar61;
          pauVar3 = (undefined (*) [12])(pauVar61[1] + 4);
          uVar92 = (undefined4)((ulong)*(undefined8 *)pauVar61[2] >> 0x20);
          uVar17 = *(undefined8 *)*pauVar3;
          auVar95._12_4_ = uVar84;
          auVar95._0_12_ = *pauVar61;
          auVar4._12_4_ = uVar84;
          auVar4._0_12_ = *pauVar61;
          auVar79 = NEON_ext(auVar95,auVar4,8,1);
          auVar15._12_4_ = uVar92;
          auVar15._0_12_ = *pauVar3;
          auVar16._12_4_ = uVar92;
          auVar16._0_12_ = *pauVar3;
          auVar102 = NEON_ext(auVar15,auVar16,8,1);
          puVar65 = *(uint **)(pcVar70 + 0x24);
          uVar85 = (uint)auVar79._0_2_ * 0x4000 + 0x800;
          uVar91 = (uint)auVar79._2_2_ * 0x3249 + 0x800;
          uVar26 = (uint)auVar102._0_2_ * 0x58c5 + 0x800;
          uVar96 = (uint)auVar102._2_2_ * 0x45bf + 0x800;
          pauVar3 = (undefined (*) [12])(pauVar61[2] + 8);
          uVar92 = (undefined4)((ulong)*(undefined8 *)(pauVar61[3] + 4) >> 0x20);
          uVar22 = *(undefined8 *)*pauVar3;
          auVar56 = *pauVar3;
          auVar55 = *pauVar3;
          puVar65[4] = (uint)(ushort)((ulong)uVar11 >> 0x20) * 0x539f + 0x800 >> 0xc;
          puVar65[5] = (uint)(ushort)((ulong)uVar11 >> 0x30) * 0x4b42 + 0x800 >> 0xc;
          *puVar65 = (uint)(ushort)uVar11 * 0x4000 + 0x800 >> 0xc;
          puVar65[1] = (uint)(ushort)((ulong)uVar11 >> 0x10) * 0x58c5 + 0x800 >> 0xc;
          *(ulong *)(puVar65 + 6) =
               CONCAT44((uint)auVar79._6_2_ * 0x11a8 + 0x800 >> 0xc,
                        (uint)auVar79._4_2_ * 0x22a3 + 0x800 >> 0xc);
          *(ulong *)(puVar65 + 4) =
               CONCAT26((ushort)(uVar91 >> 0x1c),
                        CONCAT24((short)(uVar91 >> 0xc),
                                 CONCAT22((ushort)(uVar85 >> 0x1c),(short)(uVar85 >> 0xc))));
          pauVar3 = pauVar61 + 4;
          uVar84 = (undefined4)((ulong)*(undefined8 *)(pauVar61[4] + 8) >> 0x20);
          uVar11 = *(undefined8 *)*pauVar3;
          auVar58 = *pauVar3;
          auVar57 = *pauVar3;
          puVar65[0xc] = (uint)(ushort)((ulong)uVar17 >> 0x20) * 0x73fc + 0x800 >> 0xc;
          puVar65[0xd] = (uint)(ushort)((ulong)uVar17 >> 0x30) * 0x6862 + 0x800 >> 0xc;
          puVar65[8] = (uint)(ushort)uVar17 * 0x58c5 + 0x800 >> 0xc;
          puVar65[9] = (uint)(ushort)((ulong)uVar17 >> 0x10) * 0x7b21 + 0x800 >> 0xc;
          *(ulong *)(puVar65 + 0xe) =
               CONCAT44((uint)auVar102._6_2_ * 0x187e + 0x800 >> 0xc,
                        (uint)auVar102._4_2_ * 0x300b + 0x800 >> 0xc);
          *(ulong *)(puVar65 + 0xc) =
               CONCAT26((ushort)(uVar96 >> 0x1c),
                        CONCAT24((short)(uVar96 >> 0xc),
                                 CONCAT22((ushort)(uVar26 >> 0x1c),(short)(uVar26 >> 0xc))));
          auVar20._12_4_ = uVar92;
          auVar20._0_12_ = auVar55;
          auVar21._12_4_ = uVar92;
          auVar21._0_12_ = auVar56;
          auVar79 = NEON_ext(auVar20,auVar21,8,1);
          auVar5._12_4_ = uVar84;
          auVar5._0_12_ = auVar57;
          auVar6._12_4_ = uVar84;
          auVar6._0_12_ = auVar58;
          auVar102 = NEON_ext(auVar5,auVar6,8,1);
          uVar26 = (uint)auVar79._0_2_ * 0x539f + 0x800;
          uVar85 = (uint)auVar79._2_2_ * 0x41b3 + 0x800;
          uVar91 = (uint)auVar102._0_2_ * 0x4b42 + 0x800;
          uVar96 = (uint)auVar102._2_2_ * 0x3b21 + 0x800;
          puVar65[0x14] = (uint)(ushort)((ulong)uVar22 >> 0x20) * 0x6d41 + 0x800 >> 0xc;
          puVar65[0x15] = (uint)(ushort)((ulong)uVar22 >> 0x30) * 0x6254 + 0x800 >> 0xc;
          puVar65[0x10] = (uint)(ushort)uVar22 * 0x539f + 0x800 >> 0xc;
          puVar65[0x11] = (uint)(ushort)((ulong)uVar22 >> 0x10) * 0x73fc + 0x800 >> 0xc;
          *(ulong *)(puVar65 + 0x16) =
               CONCAT44((uint)auVar79._6_2_ * 0x1712 + 0x800 >> 0xc,
                        (uint)auVar79._4_2_ * 0x2d41 + 0x800 >> 0xc);
          *(ulong *)(puVar65 + 0x14) =
               CONCAT26((ushort)(uVar85 >> 0x1c),
                        CONCAT24((short)(uVar85 >> 0xc),
                                 CONCAT22((ushort)(uVar26 >> 0x1c),(short)(uVar26 >> 0xc))));
          auVar79 = *(undefined (*) [16])(pauVar61[5] + 4);
          pauVar3 = (undefined (*) [12])(pauVar61[6] + 8);
          uVar84 = (undefined4)((ulong)*(undefined8 *)(pauVar61[7] + 4) >> 0x20);
          uVar17 = *(undefined8 *)*pauVar3;
          auVar56 = *pauVar3;
          auVar55 = *pauVar3;
          puVar65[0x1c] = (uint)(ushort)((ulong)uVar11 >> 0x20) * 0x6254 + 0x800 >> 0xc;
          puVar65[0x1d] = (uint)(ushort)((ulong)uVar11 >> 0x30) * 0x587e + 0x800 >> 0xc;
          puVar65[0x18] = (uint)(ushort)uVar11 * 0x4b42 + 0x800 >> 0xc;
          puVar65[0x19] = (uint)(ushort)((ulong)uVar11 >> 0x10) * 0x6862 + 0x800 >> 0xc;
          *(ulong *)(puVar65 + 0x1e) =
               CONCAT44((uint)auVar102._6_2_ * 0x14c3 + 0x800 >> 0xc,
                        (uint)auVar102._4_2_ * 0x28ba + 0x800 >> 0xc);
          *(ulong *)(puVar65 + 0x1c) =
               CONCAT26((ushort)(uVar96 >> 0x1c),
                        CONCAT24((short)(uVar96 >> 0xc),
                                 CONCAT22((ushort)(uVar91 >> 0x1c),(short)(uVar91 >> 0xc))));
          auVar102 = NEON_ext(auVar79,auVar79,8,1);
          auVar7._12_4_ = uVar84;
          auVar7._0_12_ = auVar55;
          auVar8._12_4_ = uVar84;
          auVar8._0_12_ = auVar56;
          auVar95 = NEON_ext(auVar7,auVar8,8,1);
          uVar26 = (uint)auVar102._0_2_ * 0x4000 + 0x800;
          uVar85 = (uint)auVar102._2_2_ * 0x3249 + 0x800;
          uVar91 = (uint)auVar95._0_2_ * 0x3249 + 0x800;
          uVar96 = (uint)auVar95._2_2_ * 0x2782 + 0x800;
          puVar65[0x24] = (uint)auVar79._4_2_ * 0x539f + 0x800 >> 0xc;
          puVar65[0x25] = (uint)auVar79._6_2_ * 0x4b42 + 0x800 >> 0xc;
          puVar65[0x20] = (uint)auVar79._0_2_ * 0x4000 + 0x800 >> 0xc;
          puVar65[0x21] = (uint)auVar79._2_2_ * 0x58c5 + 0x800 >> 0xc;
          *(ulong *)(puVar65 + 0x26) =
               CONCAT44((uint)auVar102._6_2_ * 0x11a8 + 0x800 >> 0xc,
                        (uint)auVar102._4_2_ * 0x22a3 + 0x800 >> 0xc);
          *(ulong *)(puVar65 + 0x24) =
               CONCAT26((ushort)(uVar85 >> 0x1c),
                        CONCAT24((short)(uVar85 >> 0xc),
                                 CONCAT22((ushort)(uVar26 >> 0x1c),(short)(uVar26 >> 0xc))));
          auVar79 = *(undefined (*) [16])(pauVar61 + 8);
          pauVar3 = (undefined (*) [12])(pauVar61[9] + 4);
          uVar84 = (undefined4)((ulong)*(undefined8 *)pauVar61[10] >> 0x20);
          uVar11 = *(undefined8 *)*pauVar3;
          auVar56 = *pauVar3;
          auVar55 = *pauVar3;
          puVar65[0x2c] = (uint)(ushort)((ulong)uVar17 >> 0x20) * 0x41b3 + 0x800 >> 0xc;
          puVar65[0x2d] = (uint)(ushort)((ulong)uVar17 >> 0x30) * 0x3b21 + 0x800 >> 0xc;
          puVar65[0x28] = (uint)(ushort)uVar17 * 0x3249 + 0x800 >> 0xc;
          puVar65[0x29] = (uint)(ushort)((ulong)uVar17 >> 0x10) * 0x45bf + 0x800 >> 0xc;
          *(ulong *)(puVar65 + 0x2e) =
               CONCAT44((uint)auVar95._6_2_ * 0xde0 + 0x800 >> 0xc,
                        (uint)auVar95._4_2_ * 0x1b37 + 0x800 >> 0xc);
          *(ulong *)(puVar65 + 0x2c) =
               CONCAT26((ushort)(uVar96 >> 0x1c),
                        CONCAT24((short)(uVar96 >> 0xc),
                                 CONCAT22((ushort)(uVar91 >> 0x1c),(short)(uVar91 >> 0xc))));
          auVar102 = NEON_ext(auVar79,auVar79,8,1);
          auVar9._12_4_ = uVar84;
          auVar9._0_12_ = auVar55;
          auVar10._12_4_ = uVar84;
          auVar10._0_12_ = auVar56;
          auVar95 = NEON_ext(auVar9,auVar10,8,1);
          uVar26 = (uint)auVar102._0_2_ * 0x22a3 + 0x800;
          uVar85 = (uint)auVar102._2_2_ * 0x1b37 + 0x800;
          uVar91 = (uint)auVar95._0_2_ * 0x11a8 + 0x800;
          uVar96 = (uint)auVar95._2_2_ * 0xde0 + 0x800;
          auVar80._0_8_ =
               CONCAT44((uint)auVar79._2_2_ * 0x300b + 0x800 >> 0xc,
                        (uint)auVar79._0_2_ * 0x22a3 + 0x800 >> 0xc);
          auVar80._8_4_ = (uint)auVar79._4_2_ * 0x2d41 + 0x800 >> 0xc;
          auVar80._12_4_ = (uint)auVar79._6_2_ * 0x28ba + 0x800 >> 0xc;
          auVar90._0_8_ =
               CONCAT44((uint)(ushort)((ulong)uVar11 >> 0x10) * 0x187e + 0x800 >> 0xc,
                        (uint)(ushort)uVar11 * 0x11a8 + 0x800 >> 0xc);
          auVar90._8_4_ = (uint)(ushort)((ulong)uVar11 >> 0x20) * 0x1712 + 0x800 >> 0xc;
          auVar90._12_4_ = (uint)(ushort)((ulong)uVar11 >> 0x30) * 0x14c3 + 0x800 >> 0xc;
          *(long *)(puVar65 + 0x32) = auVar80._8_8_;
          *(undefined8 *)(puVar65 + 0x30) = auVar80._0_8_;
          *(ulong *)(puVar65 + 0x36) =
               CONCAT44((uint)auVar102._6_2_ * 0x98e + 0x800 >> 0xc,
                        (uint)auVar102._4_2_ * 0x12bf + 0x800 >> 0xc);
          *(ulong *)(puVar65 + 0x34) =
               CONCAT26((ushort)(uVar85 >> 0x1c),
                        CONCAT24((short)(uVar85 >> 0xc),
                                 CONCAT22((ushort)(uVar26 >> 0x1c),(short)(uVar26 >> 0xc))));
          *(long *)(puVar65 + 0x3a) = auVar90._8_8_;
          *(undefined8 *)(puVar65 + 0x38) = auVar90._0_8_;
          *(ulong *)(puVar65 + 0x3e) =
               CONCAT44((uint)auVar95._6_2_ * 0x4df + 0x800 >> 0xc,
                        (uint)auVar95._4_2_ * 0x98e + 0x800 >> 0xc);
          *(ulong *)(puVar65 + 0x3c) =
               CONCAT26((ushort)(uVar96 >> 0x1c),
                        CONCAT24((short)(uVar96 >> 0xc),
                                 CONCAT22((ushort)(uVar91 >> 0x1c),(short)(uVar91 >> 0xc))));
        }
        else if (uVar69 == 0) {
          uVar75 = *(undefined8 *)*pauVar61;
          uVar11 = *(undefined8 *)(*pauVar61 + 8);
          uVar86 = *(undefined8 *)(pauVar61[1] + 4);
          uVar17 = *(undefined8 *)pauVar61[2];
          uVar22 = *(undefined8 *)(pauVar61[2] + 8);
          uVar93 = *(undefined8 *)(pauVar61[3] + 4);
          uVar76 = CONCAT26(0,CONCAT24((short)((ulong)uVar75 >> 0x10),(uint)(ushort)uVar75));
          auVar47._8_2_ = (short)((ulong)uVar75 >> 0x20);
          auVar47._0_8_ = uVar76;
          auVar47._10_2_ = 0;
          auVar47._12_2_ = (short)((ulong)uVar75 >> 0x30);
          uVar75 = *(undefined8 *)pauVar61[4];
          uVar97 = *(undefined8 *)(pauVar61[4] + 8);
          uVar87 = CONCAT26(0,CONCAT24((short)((ulong)uVar86 >> 0x10),(uint)(ushort)uVar86));
          auVar48._8_2_ = (short)((ulong)uVar86 >> 0x20);
          auVar48._0_8_ = uVar87;
          auVar48._10_2_ = 0;
          auVar48._12_2_ = (short)((ulong)uVar86 >> 0x30);
          puVar64 = *(ulong **)(pcVar70 + 0x24);
          puVar64[1] = (ulong)auVar47._8_6_;
          *puVar64 = uVar76;
          puVar64[3] = (ulong)CONCAT24((short)((ulong)uVar11 >> 0x30),
                                       (uint)(ushort)((ulong)uVar11 >> 0x20));
          puVar64[2] = (ulong)CONCAT24((short)((ulong)uVar11 >> 0x10),(uint)(ushort)uVar11);
          uVar76 = CONCAT26(0,CONCAT24((short)((ulong)uVar93 >> 0x10),(uint)(ushort)uVar93));
          auVar49._8_2_ = (short)((ulong)uVar93 >> 0x20);
          auVar49._0_8_ = uVar76;
          auVar49._10_2_ = 0;
          auVar49._12_2_ = (short)((ulong)uVar93 >> 0x30);
          puVar64[5] = (ulong)auVar48._8_6_;
          puVar64[4] = uVar87;
          puVar64[7] = (ulong)CONCAT24((short)((ulong)uVar17 >> 0x30),
                                       (uint)(ushort)((ulong)uVar17 >> 0x20));
          puVar64[6] = (ulong)CONCAT24((short)((ulong)uVar17 >> 0x10),(uint)(ushort)uVar17);
          uVar87 = CONCAT26(0,CONCAT24((short)((ulong)uVar97 >> 0x10),(uint)(ushort)uVar97));
          auVar50._8_2_ = (short)((ulong)uVar97 >> 0x20);
          auVar50._0_8_ = uVar87;
          auVar50._10_2_ = 0;
          auVar50._12_2_ = (short)((ulong)uVar97 >> 0x30);
          uVar11 = *(undefined8 *)(pauVar61[5] + 4);
          uVar97 = *(undefined8 *)(pauVar61[8] + 8);
          uVar86 = *(undefined8 *)(pauVar61[9] + 4);
          puVar64[9] = (ulong)CONCAT24((short)((ulong)uVar22 >> 0x30),
                                       (uint)(ushort)((ulong)uVar22 >> 0x20));
          puVar64[8] = (ulong)CONCAT24((short)((ulong)uVar22 >> 0x10),(uint)(ushort)uVar22);
          puVar64[0xb] = (ulong)auVar49._8_6_;
          puVar64[10] = uVar76;
          uVar93 = *(undefined8 *)pauVar61[6];
          uVar22 = *(undefined8 *)(pauVar61[6] + 8);
          puVar64[0xd] = (ulong)CONCAT24((short)((ulong)uVar75 >> 0x30),
                                         (uint)(ushort)((ulong)uVar75 >> 0x20));
          puVar64[0xc] = (ulong)CONCAT24((short)((ulong)uVar75 >> 0x10),(uint)(ushort)uVar75);
          puVar64[0xf] = (ulong)auVar50._8_6_;
          puVar64[0xe] = uVar87;
          uVar87 = CONCAT26(0,CONCAT24((short)((ulong)uVar11 >> 0x10),(uint)(ushort)uVar11));
          auVar51._8_2_ = (short)((ulong)uVar11 >> 0x20);
          auVar51._0_8_ = uVar87;
          auVar51._10_2_ = 0;
          auVar51._12_2_ = (short)((ulong)uVar11 >> 0x30);
          uVar11 = *(undefined8 *)(pauVar61[7] + 4);
          uVar17 = *(undefined8 *)pauVar61[8];
          uVar76 = CONCAT26(0,CONCAT24((short)((ulong)uVar93 >> 0x10),(uint)(ushort)uVar93));
          auVar52._8_2_ = (short)((ulong)uVar93 >> 0x20);
          auVar52._0_8_ = uVar76;
          auVar52._10_2_ = 0;
          auVar52._12_2_ = (short)((ulong)uVar93 >> 0x30);
          uVar75 = *(undefined8 *)pauVar61[10];
          puVar64[0x11] = (ulong)auVar51._8_6_;
          puVar64[0x10] = uVar87;
          puVar64[0x13] = (ulong)auVar52._8_6_;
          puVar64[0x12] = uVar76;
          uVar76 = CONCAT26(0,CONCAT24((short)((ulong)uVar97 >> 0x10),(uint)(ushort)uVar97));
          auVar53._8_2_ = (short)((ulong)uVar97 >> 0x20);
          auVar53._0_8_ = uVar76;
          auVar53._10_2_ = 0;
          auVar53._12_2_ = (short)((ulong)uVar97 >> 0x30);
          uVar87 = CONCAT26(0,CONCAT24((short)((ulong)uVar86 >> 0x10),(uint)(ushort)uVar86));
          auVar54._8_2_ = (short)((ulong)uVar86 >> 0x20);
          auVar54._0_8_ = uVar87;
          auVar54._10_2_ = 0;
          auVar54._12_2_ = (short)((ulong)uVar86 >> 0x30);
          puVar64[0x15] =
               (ulong)CONCAT24((short)((ulong)uVar22 >> 0x30),(uint)(ushort)((ulong)uVar22 >> 0x20))
          ;
          puVar64[0x14] = (ulong)CONCAT24((short)((ulong)uVar22 >> 0x10),(uint)(ushort)uVar22);
          puVar64[0x17] =
               (ulong)CONCAT24((short)((ulong)uVar11 >> 0x30),(uint)(ushort)((ulong)uVar11 >> 0x20))
          ;
          puVar64[0x16] = (ulong)CONCAT24((short)((ulong)uVar11 >> 0x10),(uint)(ushort)uVar11);
          puVar64[0x19] =
               (ulong)CONCAT24((short)((ulong)uVar17 >> 0x30),(uint)(ushort)((ulong)uVar17 >> 0x20))
          ;
          puVar64[0x18] = (ulong)CONCAT24((short)((ulong)uVar17 >> 0x10),(uint)(ushort)uVar17);
          puVar64[0x1b] = (ulong)auVar53._8_6_;
          puVar64[0x1a] = uVar76;
          puVar64[0x1d] = (ulong)auVar54._8_6_;
          puVar64[0x1c] = uVar87;
          puVar64[0x1f] =
               (ulong)CONCAT24((short)((ulong)uVar75 >> 0x30),(uint)(ushort)((ulong)uVar75 >> 0x20))
          ;
          puVar64[0x1e] = (ulong)CONCAT24((short)((ulong)uVar75 >> 0x10),(uint)(ushort)uVar75);
        }
        else {
          ppcVar60 = (code **)*param_1;
          *(undefined4 *)(ppcVar60 + 5) = 0x31;
          (**ppcVar60)(param_1);
        }
      }
      lVar66 = lVar66 + 1;
      pcVar70 = pcVar70 + 0x60;
    } while (lVar66 < *(int *)(param_1 + 7));
  }
  return;
}


