// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: antiAliasedEuclideanDistanceTransform
// Entry Point: 00a960b0
// Size: 3776 bytes
// Signature: undefined __cdecl antiAliasedEuclideanDistanceTransform(float * param_1, float * param_2, float * param_3, uint param_4, uint param_5, short * param_6, short * param_7, float * param_8)


/* ImageUtil::antiAliasedEuclideanDistanceTransform(float const*, float const*, float const*,
   unsigned int, unsigned int, short*, short*, float*) */

void ImageUtil::antiAliasedEuclideanDistanceTransform
               (float *param_1,float *param_2,float *param_3,uint param_4,uint param_5,
               short *param_6,short *param_7,float *param_8)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  short *psVar23;
  short *psVar24;
  float *pfVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int local_9c;
  int local_98;
  int local_94;
  int local_84;
  uint local_80;
  
  uVar4 = param_5 * param_4;
  uVar16 = (ulong)uVar4;
  pfVar20 = param_3;
  pfVar21 = param_2;
  pfVar22 = param_1;
  psVar23 = param_7;
  psVar24 = param_6;
  pfVar25 = param_8;
  if (uVar4 != 0) {
    do {
      fVar27 = *pfVar22;
      *psVar24 = 0;
      *psVar23 = 0;
      if (fVar27 <= 0.0) {
        fVar29 = 100000.0;
      }
      else {
        fVar29 = 0.0;
        if (fVar27 < 1.0) {
          fVar29 = *pfVar21;
          if (1e-05 < ABS(fVar29)) {
            fVar31 = *pfVar20;
            if (1e-05 < ABS(fVar31)) {
              fVar30 = (float)NEON_fmadd(fVar29,fVar29,fVar31 * fVar31);
              fVar28 = ABS(fVar29) * (1.0 / SQRT(fVar30));
              fVar31 = ABS(fVar31) * (1.0 / SQRT(fVar30));
              fVar29 = fVar31;
              if (fVar31 <= fVar28) {
                fVar29 = fVar28;
                fVar28 = fVar31;
              }
              fVar31 = (fVar28 * 0.5) / fVar29;
              if (fVar31 <= fVar27) {
                if (1.0 - fVar31 <= fVar27) {
                  fVar29 = (float)NEON_fmadd(fVar29 + fVar28,0xbf000000,
                                             SQRT((1.0 - fVar27) * fVar28 * (fVar29 + fVar29)));
                }
                else {
                  fVar29 = (0.5 - fVar27) * fVar29;
                }
              }
              else {
                fVar29 = (float)NEON_fnmsub(fVar29 + fVar28,0x3f000000,
                                            SQRT(fVar27 * fVar28 * (fVar29 + fVar29)));
              }
              goto LAB_00a96134;
            }
          }
          fVar29 = 0.5 - fVar27;
        }
      }
LAB_00a96134:
      uVar16 = uVar16 - 1;
      *pfVar25 = fVar29;
      pfVar20 = pfVar20 + 1;
      pfVar21 = pfVar21 + 1;
      pfVar22 = pfVar22 + 1;
      psVar23 = psVar23 + 1;
      psVar24 = psVar24 + 1;
      pfVar25 = pfVar25 + 1;
    } while (uVar16 != 0);
  }
  uVar6 = param_4 - 1;
  iVar7 = param_5 - 2;
  iVar5 = param_4 * (param_5 - 1);
  iVar8 = param_4 - 2;
  do {
    if (param_5 < 2) {
      bVar9 = false;
    }
    else {
      uVar18 = 1;
      local_84 = 0;
      bVar9 = false;
      local_80 = param_4;
      do {
        uVar15 = uVar18 * param_4;
        uVar16 = (ulong)uVar15;
        if (0.0 < param_8[uVar16]) {
          uVar14 = uVar15 - param_4;
          uVar17 = -(ulong)(uVar14 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar14 << 1;
          iVar10 = (int)*(short *)((long)param_6 + uVar17);
          iVar11 = (int)*(short *)((long)param_7 + uVar17);
          fVar27 = (float)antiAliasedEuclideanDistance
                                    (param_1,param_2,param_3,param_4,uVar14,iVar10,iVar11,iVar10,
                                     iVar11 + 1);
          if (fVar27 < param_8[uVar16] + -0.0001) {
            param_8[uVar16] = fVar27;
            param_6[uVar16] = param_6[(int)uVar14];
            bVar9 = true;
            param_7[uVar16] = param_7[(int)uVar14] + 1;
          }
          uVar14 = (1 - param_4) + uVar15;
          uVar17 = -(ulong)(uVar14 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar14 << 1;
          iVar10 = (int)*(short *)((long)param_6 + uVar17);
          iVar11 = (int)*(short *)((long)param_7 + uVar17);
          fVar27 = (float)antiAliasedEuclideanDistance
                                    (param_1,param_2,param_3,param_4,uVar14,iVar10,iVar11,
                                     iVar10 + -1,iVar11 + 1);
          if (fVar27 < param_8[uVar16] + -0.0001) {
            param_8[uVar16] = fVar27;
            param_6[uVar16] = param_6[(int)uVar14] + -1;
            bVar9 = true;
            param_7[uVar16] = param_7[(int)uVar14] + 1;
          }
        }
        uVar14 = uVar15;
        if (1 < uVar6) {
          iVar10 = 0;
          do {
            uVar2 = local_80 + iVar10;
            uVar14 = uVar2 + 1;
            if (0.0 < param_8[uVar14]) {
              uVar16 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
              iVar11 = (int)*(short *)((long)param_6 + uVar16);
              iVar12 = (int)*(short *)((long)param_7 + uVar16);
              fVar27 = (float)antiAliasedEuclideanDistance
                                        (param_1,param_2,param_3,param_4,uVar2,iVar11,iVar12,
                                         iVar11 + 1,iVar12);
              if (fVar27 < param_8[uVar14] + -0.0001) {
                param_8[uVar14] = fVar27;
                param_6[uVar14] = param_6[(int)uVar2] + 1;
                bVar9 = true;
                param_7[uVar14] = param_7[(int)uVar2];
              }
              uVar2 = local_84 + iVar10;
              uVar16 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
              iVar11 = (int)*(short *)((long)param_6 + uVar16);
              iVar12 = (int)*(short *)((long)param_7 + uVar16);
              fVar27 = (float)antiAliasedEuclideanDistance
                                        (param_1,param_2,param_3,param_4,uVar2,iVar11,iVar12,
                                         iVar11 + 1,iVar12 + 1);
              if (fVar27 < param_8[uVar14] + -0.0001) {
                param_8[uVar14] = fVar27;
                param_6[uVar14] = param_6[(int)uVar2] + 1;
                bVar9 = true;
                param_7[uVar14] = param_7[(int)uVar2] + 1;
              }
              uVar2 = uVar2 + 1;
              uVar16 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
              iVar11 = (int)*(short *)((long)param_6 + uVar16);
              iVar12 = (int)*(short *)((long)param_7 + uVar16);
              fVar27 = (float)antiAliasedEuclideanDistance
                                        (param_1,param_2,param_3,param_4,uVar2,iVar11,iVar12,iVar11,
                                         iVar12 + 1);
              if (fVar27 < param_8[uVar14] + -0.0001) {
                param_8[uVar14] = fVar27;
                param_6[uVar14] = param_6[(int)uVar2];
                bVar9 = true;
                param_7[uVar14] = param_7[(int)uVar2] + 1;
              }
              uVar2 = local_84 + iVar10 + 2;
              uVar16 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
              iVar11 = (int)*(short *)((long)param_6 + uVar16);
              iVar12 = (int)*(short *)((long)param_7 + uVar16);
              fVar27 = (float)antiAliasedEuclideanDistance
                                        (param_1,param_2,param_3,param_4,uVar2,iVar11,iVar12,
                                         iVar11 + -1,iVar12 + 1);
              if (fVar27 < param_8[uVar14] + -0.0001) {
                param_8[uVar14] = fVar27;
                param_6[uVar14] = param_6[(int)uVar2] + -1;
                bVar9 = true;
                param_7[uVar14] = param_7[(int)uVar2] + 1;
              }
            }
            iVar10 = iVar10 + 1;
          } while (iVar8 != iVar10);
          uVar16 = (ulong)(local_80 + iVar10);
          uVar14 = local_80 + iVar10;
        }
        uVar14 = uVar14 + 1;
        if (0.0 < param_8[uVar14]) {
          uVar17 = -(uVar16 >> 0x1f) & 0xfffffffe00000000 | uVar16 << 1;
          iVar10 = (int)uVar16;
          iVar11 = (int)*(short *)((long)param_6 + uVar17);
          iVar12 = (int)*(short *)((long)param_7 + uVar17);
          fVar27 = (float)antiAliasedEuclideanDistance
                                    (param_1,param_2,param_3,param_4,iVar10,iVar11,iVar12,iVar11 + 1
                                     ,iVar12);
          if (fVar27 < param_8[uVar14] + -0.0001) {
            param_8[uVar14] = fVar27;
            param_6[uVar14] = param_6[iVar10] + 1;
            bVar9 = true;
            param_7[uVar14] = param_7[iVar10];
          }
          uVar2 = iVar10 - param_4;
          uVar16 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
          iVar10 = (int)*(short *)((long)param_6 + uVar16);
          iVar11 = (int)*(short *)((long)param_7 + uVar16);
          fVar27 = (float)antiAliasedEuclideanDistance
                                    (param_1,param_2,param_3,param_4,uVar2,iVar10,iVar11,iVar10 + 1,
                                     iVar11 + 1);
          if (fVar27 < param_8[uVar14] + -0.0001) {
            param_8[uVar14] = fVar27;
            param_6[uVar14] = param_6[(int)uVar2] + 1;
            bVar9 = true;
            param_7[uVar14] = param_7[(int)uVar2] + 1;
          }
          uVar2 = uVar14 - param_4;
          uVar16 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
          iVar10 = (int)*(short *)((long)param_6 + uVar16);
          iVar11 = (int)*(short *)((long)param_7 + uVar16);
          fVar27 = (float)antiAliasedEuclideanDistance
                                    (param_1,param_2,param_3,param_4,uVar2,iVar10,iVar11,iVar10,
                                     iVar11 + 1);
          if (fVar27 < param_8[uVar14] + -0.0001) {
            param_8[uVar14] = fVar27;
            param_6[uVar14] = param_6[(int)uVar2];
            bVar9 = true;
            param_7[uVar14] = param_7[(int)uVar2] + 1;
          }
        }
        if (-1 < iVar8) {
          uVar15 = iVar8 + uVar15;
          uVar14 = uVar6;
          do {
            if (0.0 < param_8[uVar15]) {
              uVar2 = uVar15 + 1;
              uVar16 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
              iVar10 = (int)*(short *)((long)param_6 + uVar16);
              iVar11 = (int)*(short *)((long)param_7 + uVar16);
              fVar27 = (float)antiAliasedEuclideanDistance
                                        (param_1,param_2,param_3,param_4,uVar2,iVar10,iVar11,
                                         iVar10 + -1,iVar11);
              if (fVar27 < param_8[uVar15] + -0.0001) {
                param_8[uVar15] = fVar27;
                param_6[uVar15] = param_6[(int)uVar2] + -1;
                bVar9 = true;
                param_7[uVar15] = param_7[(int)uVar2];
              }
            }
            uVar15 = uVar15 - 1;
            uVar14 = uVar14 - 1;
          } while (0 < (int)uVar14);
        }
        local_80 = local_80 + param_4;
        uVar18 = uVar18 + 1;
        local_84 = local_84 + param_4;
      } while (uVar18 != param_5);
    }
    lVar19 = (long)iVar7;
    local_9c = uVar4 - 1;
    local_98 = iVar5 + -1;
    local_94 = uVar4 - 2;
    local_84 = param_4 * iVar7;
    local_80 = iVar5 + -2;
    iVar10 = uVar4 - 3;
    if (-1 < iVar7) {
      do {
        iVar11 = param_4 + (int)lVar19 * param_4;
        uVar18 = iVar11 - 1;
        if (0.0 < param_8[uVar18]) {
          lVar26 = (long)(int)uVar18 + (long)(int)param_4;
          fVar27 = (float)antiAliasedEuclideanDistance
                                    (param_1,param_2,param_3,param_4,(int)lVar26,
                                     (int)param_6[lVar26],(int)param_7[lVar26],(int)param_6[lVar26],
                                     param_7[lVar26] + -1);
          if (fVar27 < param_8[uVar18] + -0.0001) {
            sVar3 = param_6[lVar26];
            param_8[uVar18] = fVar27;
            param_6[uVar18] = sVar3;
            bVar9 = true;
            param_7[uVar18] = param_7[lVar26] + -1;
          }
          uVar15 = iVar8 + iVar11;
          uVar16 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1;
          iVar12 = (int)*(short *)((long)param_6 + uVar16);
          iVar13 = (int)*(short *)((long)param_7 + uVar16);
          fVar27 = (float)antiAliasedEuclideanDistance
                                    (param_1,param_2,param_3,param_4,uVar15,iVar12,iVar13,iVar12 + 1
                                     ,iVar13 + -1);
          if (fVar27 < param_8[uVar18] + -0.0001) {
            param_8[uVar18] = fVar27;
            param_6[uVar18] = param_6[(int)uVar15] + 1;
            bVar9 = true;
            param_7[uVar18] = param_7[(int)uVar15] + -1;
          }
        }
        if (iVar8 == 0) {
          uVar18 = iVar11 - 2;
        }
        else {
          iVar11 = 0;
          do {
            uVar18 = local_80 + iVar11;
            if (0.0 < param_8[uVar18]) {
              uVar15 = local_98 + iVar11;
              uVar16 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1;
              iVar12 = (int)*(short *)((long)param_6 + uVar16);
              iVar13 = (int)*(short *)((long)param_7 + uVar16);
              fVar27 = (float)antiAliasedEuclideanDistance
                                        (param_1,param_2,param_3,param_4,uVar15,iVar12,iVar13,
                                         iVar12 + -1,iVar13);
              if (fVar27 < param_8[uVar18] + -0.0001) {
                param_8[uVar18] = fVar27;
                param_6[uVar18] = param_6[(int)uVar15] + -1;
                bVar9 = true;
                param_7[uVar18] = param_7[(int)uVar15];
              }
              uVar15 = local_9c + iVar11;
              uVar16 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1;
              iVar12 = (int)*(short *)((long)param_6 + uVar16);
              iVar13 = (int)*(short *)((long)param_7 + uVar16);
              fVar27 = (float)antiAliasedEuclideanDistance
                                        (param_1,param_2,param_3,param_4,uVar15,iVar12,iVar13,
                                         iVar12 + -1,iVar13 + -1);
              if (fVar27 < param_8[uVar18] + -0.0001) {
                param_8[uVar18] = fVar27;
                param_6[uVar18] = param_6[(int)uVar15] + -1;
                bVar9 = true;
                param_7[uVar18] = param_7[(int)uVar15] + -1;
              }
              uVar15 = local_94 + iVar11;
              uVar16 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1;
              iVar12 = (int)*(short *)((long)param_6 + uVar16);
              iVar13 = (int)*(short *)((long)param_7 + uVar16);
              fVar27 = (float)antiAliasedEuclideanDistance
                                        (param_1,param_2,param_3,param_4,uVar15,iVar12,iVar13,iVar12
                                         ,iVar13 + -1);
              if (fVar27 < param_8[uVar18] + -0.0001) {
                param_8[uVar18] = fVar27;
                param_6[uVar18] = param_6[(int)uVar15];
                bVar9 = true;
                param_7[uVar18] = param_7[(int)uVar15] + -1;
              }
              uVar15 = iVar10 + iVar11;
              uVar16 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1;
              iVar12 = (int)*(short *)((long)param_6 + uVar16);
              iVar13 = (int)*(short *)((long)param_7 + uVar16);
              fVar27 = (float)antiAliasedEuclideanDistance
                                        (param_1,param_2,param_3,param_4,uVar15,iVar12,iVar13,
                                         iVar12 + 1,iVar13 + -1);
              if (fVar27 < param_8[uVar18] + -0.0001) {
                param_8[uVar18] = fVar27;
                param_6[uVar18] = param_6[(int)uVar15] + 1;
                bVar9 = true;
                param_7[uVar18] = param_7[(int)uVar15] + -1;
              }
            }
            iVar11 = iVar11 + -1;
          } while (iVar8 + iVar11 != 0);
          uVar18 = local_80 + iVar11;
        }
        if (0.0 < param_8[uVar18]) {
          uVar15 = uVar18 + 1;
          uVar16 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1;
          lVar26 = (long)(int)uVar15;
          iVar11 = (int)*(short *)((long)param_6 + uVar16);
          iVar12 = (int)*(short *)((long)param_7 + uVar16);
          fVar27 = (float)antiAliasedEuclideanDistance
                                    (param_1,param_2,param_3,param_4,uVar15,iVar11,iVar12,
                                     iVar11 + -1,iVar12);
          if (fVar27 < param_8[uVar18] + -0.0001) {
            param_8[uVar18] = fVar27;
            param_6[uVar18] = param_6[lVar26] + -1;
            bVar9 = true;
            param_7[uVar18] = param_7[lVar26];
          }
          lVar26 = lVar26 + (int)param_4;
          fVar27 = (float)antiAliasedEuclideanDistance
                                    (param_1,param_2,param_3,param_4,(int)lVar26,
                                     (int)param_6[lVar26],(int)param_7[lVar26],param_6[lVar26] + -1,
                                     param_7[lVar26] + -1);
          if (fVar27 < param_8[uVar18] + -0.0001) {
            sVar3 = param_6[lVar26];
            param_8[uVar18] = fVar27;
            bVar9 = true;
            param_6[uVar18] = sVar3 + -1;
            param_7[uVar18] = param_7[lVar26] + -1;
          }
          lVar26 = (long)(int)param_4 + (long)(int)uVar18;
          fVar27 = (float)antiAliasedEuclideanDistance
                                    (param_1,param_2,param_3,param_4,(int)lVar26,
                                     (int)param_6[lVar26],(int)param_7[lVar26],(int)param_6[lVar26],
                                     param_7[lVar26] + -1);
          if (fVar27 < param_8[uVar18] + -0.0001) {
            sVar3 = param_6[lVar26];
            param_8[uVar18] = fVar27;
            param_6[uVar18] = sVar3;
            bVar9 = true;
            param_7[uVar18] = param_7[lVar26] + -1;
          }
        }
        if (1 < uVar6) {
          iVar11 = 0;
          do {
            uVar15 = local_84 + iVar11;
            uVar18 = uVar15 + 1;
            if ((0.0 < param_8[uVar18]) &&
               (uVar16 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1,
               iVar12 = (int)*(short *)((long)param_6 + uVar16),
               iVar13 = (int)*(short *)((long)param_7 + uVar16),
               fVar27 = (float)antiAliasedEuclideanDistance
                                         (param_1,param_2,param_3,param_4,uVar15,iVar12,iVar13,
                                          iVar12 + 1,iVar13), fVar27 < param_8[uVar18] + -0.0001)) {
              param_8[uVar18] = fVar27;
              param_6[uVar18] = param_6[(int)uVar15] + 1;
              bVar9 = true;
              param_7[uVar18] = param_7[(int)uVar15];
            }
            iVar11 = iVar11 + 1;
          } while (iVar8 != iVar11);
        }
        local_80 = local_80 - param_4;
        local_9c = local_9c - param_4;
        local_98 = local_98 - param_4;
        local_94 = local_94 - param_4;
        iVar10 = iVar10 - param_4;
        local_84 = local_84 - param_4;
        bVar1 = 0 < lVar19;
        lVar19 = lVar19 + -1;
      } while (bVar1);
    }
  } while (bVar9);
  return;
}


