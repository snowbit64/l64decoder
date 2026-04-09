// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doIteration
// Entry Point: 008a1fa4
// Size: 2660 bytes
// Signature: undefined doIteration(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainDeformation::doIteration() */

void TerrainDeformation::doIteration(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  TerrainDeformation *in_x0;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  float *pfVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  char *pcVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  DensityMapModifier aDStack_d8 [16];
  ChunkedBitSquare *local_c8;
  long *local_c0;
  int local_b4;
  int local_ac;
  long local_a8;
  
  lVar8 = tpidr_el0;
  local_a8 = *(long *)(lVar8 + 0x28);
  if (*(ErrorCode *)(in_x0 + 0x128) != 0) {
    onFinished(in_x0,*(ErrorCode *)(in_x0 + 0x128));
    goto LAB_008a2914;
  }
  DensityMapModifier::DensityMapModifier(aDStack_d8);
  if (*(DensityMap **)(in_x0 + 0xa8) != (DensityMap *)0x0) {
                    /* try { // try from 008a2008 to 008a200f has its CatchHandler @ 008a2a08 */
    DensityMapModifier::init(aDStack_d8,*(DensityMap **)(in_x0 + 0xa8));
  }
  uVar9 = *(uint *)(in_x0 + 0xfc);
  if (uVar9 == 0) {
LAB_008a28f8:
    checkForDynamicObjects();
    onFinished(in_x0,*(ErrorCode *)(in_x0 + 0x128));
  }
  else {
    fVar33 = 0.0;
    iVar18 = 0;
    uVar12 = *(uint *)(in_x0 + 0xf8);
    fVar25 = 1.0;
    uVar22 = 0;
    do {
      uVar14 = uVar22 + 1;
      if (uVar12 != 0) {
        uVar16 = 0;
        uVar6 = uVar22 - 1;
        do {
          uVar2 = 0;
          if (-1 < (int)uVar16) {
            uVar2 = uVar16;
          }
          uVar7 = uVar22;
          if (uVar9 <= uVar22) {
            uVar7 = uVar9 - 1;
          }
          uVar9 = 0;
          if (-1 < (int)uVar22) {
            uVar9 = uVar7;
          }
          lVar17 = *(long *)(in_x0 + 0x100);
          uVar20 = (ulong)(uVar2 + uVar9 * uVar12);
          pfVar15 = (float *)(lVar17 + uVar20 * 0x38);
          if (*(long *)(in_x0 + 0xa8) != 0) {
            if (local_c8 == (ChunkedBitSquare *)0x0) {
              uVar9 = *(uint *)(in_x0 + 0xb4) +
                      (uVar16 + *(int *)(in_x0 + 0xe8) +
                      local_b4 * (uVar22 + *(int *)(in_x0 + 0xec))) * local_ac;
              lVar13 = *local_c0;
              lVar10 = *(long *)(lVar13 + (ulong)(uVar9 >> 0x13) * 8);
              uVar21 = (ulong)(uVar9 >> 3) & 0xffff;
              if ((uint)uVar21 < 0xfffd) {
                uVar12 = *(uint *)(lVar10 + uVar21);
              }
              else {
                uVar12 = (uVar9 >> 3) + 1;
                uVar2 = (uVar9 >> 3) + 2;
                uVar12 = (uint)CONCAT12(*(undefined *)
                                         (*(long *)(lVar13 + (ulong)(uVar2 >> 0x10) * 8) +
                                         ((ulong)uVar2 & 0xffff)),
                                        CONCAT11(*(undefined *)
                                                  (*(long *)(lVar13 + (ulong)(uVar12 >> 0x10) * 8) +
                                                  ((ulong)uVar12 & 0xffff)),
                                                 *(undefined *)(lVar10 + uVar21)));
              }
              uVar9 = uVar12 >> (ulong)(uVar9 & 7) & 1;
            }
            else {
                    /* try { // try from 008a20dc to 008a20e3 has its CatchHandler @ 008a2a0c */
              uVar9 = ChunkedBitSquare::readBits
                                (local_c8,uVar16 + *(int *)(in_x0 + 0xe8),
                                 *(int *)(in_x0 + 0xec) + uVar22,*(uint *)(in_x0 + 0xb4),1);
            }
            if ((uVar9 != 0) &&
               (fVar24 = *(float *)(lVar17 + uVar20 * 0x38 + 4),
               *(float *)(in_x0 + 0xb0) <= ABS(*pfVar15 - fVar24))) {
              lVar10 = lVar17 + uVar20 * 0x38;
              *pfVar15 = fVar24;
              *(undefined *)(lVar10 + 0x10) = 1;
              *(undefined *)(lVar10 + 0x18) = 0;
              *(undefined4 *)(lVar10 + 0x14) = 0;
            }
          }
          pcVar23 = (char *)(lVar17 + uVar20 * 0x38 + 0x10);
          cVar3 = *pcVar23;
          if (cVar3 == '\0') {
            uVar2 = *(uint *)(in_x0 + 0xf8);
            uVar7 = uVar16 - 1;
            fVar24 = *pfVar15;
            fVar26 = *(float *)(in_x0 + 0x44);
            uVar12 = uVar2 - 1;
            uVar9 = uVar7;
            if (uVar2 <= uVar7) {
              uVar9 = uVar12;
            }
            uVar1 = 0;
            if (-1 < (int)uVar7) {
              uVar1 = uVar9;
            }
            uVar9 = uVar22;
            if (*(uint *)(in_x0 + 0xfc) <= uVar22) {
              uVar9 = *(uint *)(in_x0 + 0xfc) - 1;
            }
            uVar7 = 0;
            if (-1 < (int)uVar22) {
              uVar7 = uVar9;
            }
            lVar10 = *(long *)(in_x0 + 0x100);
            fVar31 = *(float *)(lVar10 + (ulong)(uVar7 * uVar2 + uVar1) * 0x38);
            fVar29 = *(float *)(lVar17 + uVar20 * 0x38 + 0x20);
            if (uVar16 + 1 < uVar2) {
              uVar12 = uVar16 + 1;
            }
            fVar27 = (fVar24 - fVar31) / fVar26;
            uVar9 = 0;
            if (-1 < (int)(uVar16 + 1)) {
              uVar9 = uVar12;
            }
            if (-fVar29 <= fVar27) {
              if (fVar29 < fVar27) {
                fVar28 = 0.9;
                goto LAB_008a225c;
              }
            }
            else {
              fVar28 = -0.9;
LAB_008a225c:
              lVar13 = lVar17 + uVar20 * 0x38;
              iVar18 = iVar18 + 1;
              fVar33 = fVar33 + ABS(fVar27 - fVar29) / fVar29;
              *(float *)(lVar13 + 0x1c) =
                   ((fVar31 + fVar26 * fVar29 * fVar28) - fVar24) * 0.2 + *(float *)(lVar13 + 0x1c);
            }
            fVar27 = *(float *)(lVar10 + (ulong)(uVar7 * uVar2 + uVar9) * 0x38);
            fVar31 = *(float *)(lVar17 + uVar20 * 0x38 + 0x24);
            fVar29 = (fVar27 - fVar24) / fVar26;
            if (-fVar31 <= fVar29) {
              if (fVar31 < fVar29) {
                fVar28 = -0.9;
                goto LAB_008a22e0;
              }
            }
            else {
              fVar28 = 0.9;
LAB_008a22e0:
              lVar13 = lVar17 + uVar20 * 0x38;
              iVar18 = iVar18 + 1;
              fVar33 = fVar33 + ABS(fVar29 - fVar31) / fVar31;
              *(float *)(lVar13 + 0x1c) =
                   ((fVar27 + fVar26 * fVar31 * fVar28) - fVar24) * 0.2 + *(float *)(lVar13 + 0x1c);
            }
            uVar12 = *(uint *)(in_x0 + 0xf8);
            uVar2 = *(uint *)(in_x0 + 0xfc);
            uVar9 = uVar16;
            if (uVar12 <= uVar16) {
              uVar9 = uVar12 - 1;
            }
            uVar7 = 0;
            if (-1 < (int)uVar16) {
              uVar7 = uVar9;
            }
            uVar9 = uVar6;
            if (uVar2 <= uVar6) {
              uVar9 = uVar2 - 1;
            }
            uVar1 = 0;
            if (-1 < (int)uVar6) {
              uVar1 = uVar9;
            }
            fVar27 = *(float *)(lVar10 + (ulong)(uVar7 + uVar1 * uVar12) * 0x38);
            fVar31 = *(float *)(lVar17 + uVar20 * 0x38 + 0x28);
            fVar29 = (fVar24 - fVar27) / fVar26;
            uVar9 = uVar14;
            if (uVar2 <= uVar14) {
              uVar9 = uVar2 - 1;
            }
            uVar2 = 0;
            if (-1 < (int)uVar14) {
              uVar2 = uVar9;
            }
            if (-fVar31 <= fVar29) {
              if (fVar31 < fVar29) {
                fVar28 = 0.9;
                goto LAB_008a23a8;
              }
            }
            else {
              fVar28 = -0.9;
LAB_008a23a8:
              lVar13 = lVar17 + uVar20 * 0x38;
              iVar18 = iVar18 + 1;
              fVar33 = fVar33 + ABS(fVar29 - fVar31) / fVar31;
              *(float *)(lVar13 + 0x1c) =
                   ((fVar27 + fVar26 * fVar31 * fVar28) - fVar24) * 0.2 + *(float *)(lVar13 + 0x1c);
            }
            fVar27 = *(float *)(lVar10 + (ulong)(uVar7 + uVar2 * uVar12) * 0x38);
            fVar31 = *(float *)(lVar17 + uVar20 * 0x38 + 0x2c);
            fVar29 = (fVar27 - fVar24) / fVar26;
            if (-fVar31 <= fVar29) {
              if (fVar29 <= fVar31) goto LAB_008a2468;
              fVar28 = -0.9;
            }
            else {
              fVar28 = 0.9;
            }
            lVar10 = lVar17 + uVar20 * 0x38;
            iVar18 = iVar18 + 1;
            fVar33 = fVar33 + ABS(fVar29 - fVar31) / fVar31;
            *(float *)(lVar10 + 0x1c) =
                 ((fVar27 + fVar26 * fVar31 * fVar28) - fVar24) * 0.2 + *(float *)(lVar10 + 0x1c);
          }
LAB_008a2468:
          fVar24 = 0.0;
          if ((uVar16 != 0) && (uVar9 = *(uint *)(in_x0 + 0xf8), uVar16 <= uVar9 - 2)) {
            uVar7 = uVar16 - 1;
            uVar2 = uVar9 - 1;
            uVar12 = uVar7;
            if (uVar9 <= uVar7) {
              uVar12 = uVar2;
            }
            uVar1 = 0;
            if (-1 < (int)uVar7) {
              uVar1 = uVar12;
            }
            uVar12 = uVar22;
            if (*(uint *)(in_x0 + 0xfc) <= uVar22) {
              uVar12 = *(uint *)(in_x0 + 0xfc) - 1;
            }
            uVar7 = 0;
            if (-1 < (int)uVar22) {
              uVar7 = uVar12;
            }
            lVar10 = *(long *)(in_x0 + 0x100);
            fVar31 = *pfVar15;
            fVar29 = *(float *)(in_x0 + 0x44);
            uVar21 = (ulong)(uVar7 * uVar9 + uVar1);
            fVar27 = *(float *)(lVar10 + uVar21 * 0x38);
            fVar26 = fVar31 - fVar27;
            if (uVar16 + 1 < uVar9) {
              uVar2 = uVar16 + 1;
            }
            uVar12 = 0;
            if (-1 < (int)(uVar16 + 1)) {
              uVar12 = uVar2;
            }
            if (ABS(fVar26 / fVar29) < *(float *)(lVar17 + uVar20 * 0x38 + 0x20)) {
              uVar19 = (ulong)(uVar7 * uVar9 + uVar12);
              fVar34 = *(float *)(lVar10 + uVar19 * 0x38);
              fVar28 = fVar34 - fVar31;
              if (ABS(fVar28 / fVar29) < *(float *)(lVar17 + uVar20 * 0x38 + 0x24)) {
                fVar30 = (float)NEON_fmadd(fVar29,fVar29,fVar26 * fVar26);
                fVar32 = (float)NEON_fmadd(fVar29,fVar29,fVar28 * fVar28);
                fVar26 = (float)NEON_fmadd(fVar29,fVar29,fVar26 * fVar28);
                fVar26 = acosf(fVar26 * (1.0 / SQRT(fVar30)) * (1.0 / SQRT(fVar32)));
                fVar29 = *(float *)(lVar17 + uVar20 * 0x38 + 0x30);
                if (fVar29 < fVar26) {
                  cVar4 = *(char *)(lVar10 + uVar21 * 0x38 + 0x10);
                  cVar5 = *(char *)(lVar10 + uVar19 * 0x38 + 0x10);
                  if (((cVar4 == '\0') || (cVar3 == '\0')) || (cVar5 == '\0')) {
                    lVar13 = lVar17 + uVar20 * 0x38;
                    fVar28 = (fVar27 + fVar34) * 0.5;
                    fVar27 = fVar25;
                    if (cVar4 != '\0') {
                      fVar27 = fVar24;
                    }
                    fVar34 = 2.0;
                    if (cVar3 != '\0') {
                      fVar34 = fVar24;
                    }
                    fVar30 = fVar25;
                    if (cVar5 != '\0') {
                      fVar30 = fVar24;
                    }
                    fVar32 = fVar27 + fVar34 + fVar30;
                    fVar31 = (fVar28 + ((fVar31 - fVar28) * fVar29 * 0.9) / fVar26) - fVar31;
                    lVar11 = lVar10 + uVar21 * 0x38;
                    iVar18 = iVar18 + 1;
                    *(float *)(lVar11 + 0x1c) =
                         *(float *)(lVar11 + 0x1c) - fVar31 * (fVar27 / fVar32) * 0.4;
                    lVar10 = lVar10 + uVar19 * 0x38;
                    *(float *)(lVar13 + 0x1c) =
                         fVar31 * (fVar34 / fVar32) * 0.4 + *(float *)(lVar13 + 0x1c);
                    fVar33 = fVar33 + ABS(fVar26 - fVar29) / fVar29;
                    *(float *)(lVar10 + 0x1c) =
                         *(float *)(lVar10 + 0x1c) - fVar31 * (fVar30 / fVar32) * 0.4;
                  }
                }
              }
            }
          }
          if ((uVar22 != 0) && (uVar9 = *(uint *)(in_x0 + 0xfc), uVar22 <= uVar9 - 2)) {
            uVar2 = *(uint *)(in_x0 + 0xf8);
            lVar10 = *(long *)(in_x0 + 0x100);
            uVar12 = uVar16;
            if (uVar2 <= uVar16) {
              uVar12 = uVar2 - 1;
            }
            uVar7 = 0;
            if (-1 < (int)uVar16) {
              uVar7 = uVar12;
            }
            uVar12 = uVar6;
            if (uVar9 <= uVar6) {
              uVar12 = uVar9 - 1;
            }
            uVar1 = 0;
            if (-1 < (int)uVar6) {
              uVar1 = uVar12;
            }
            fVar31 = *pfVar15;
            fVar29 = *(float *)(in_x0 + 0x44);
            uVar21 = (ulong)(uVar7 + uVar2 * uVar1);
            fVar27 = *(float *)(lVar10 + uVar21 * 0x38);
            fVar26 = fVar31 - fVar27;
            uVar12 = uVar14;
            if (uVar9 <= uVar14) {
              uVar12 = uVar9 - 1;
            }
            uVar9 = 0;
            if (-1 < (int)uVar14) {
              uVar9 = uVar12;
            }
            if (ABS(fVar26 / fVar29) < *(float *)(lVar17 + uVar20 * 0x38 + 0x28)) {
              uVar19 = (ulong)(uVar7 + uVar2 * uVar9);
              fVar34 = *(float *)(lVar10 + uVar19 * 0x38);
              fVar28 = fVar34 - fVar31;
              if (ABS(fVar28 / fVar29) < *(float *)(lVar17 + uVar20 * 0x38 + 0x2c)) {
                fVar30 = (float)NEON_fmadd(fVar29,fVar29,fVar26 * fVar26);
                fVar32 = (float)NEON_fmadd(fVar29,fVar29,fVar28 * fVar28);
                fVar26 = (float)NEON_fmadd(fVar29,fVar29,fVar26 * fVar28);
                fVar26 = acosf(fVar26 * (1.0 / SQRT(fVar30)) * (1.0 / SQRT(fVar32)));
                fVar29 = *(float *)(lVar17 + uVar20 * 0x38 + 0x34);
                if (fVar29 < fVar26) {
                  cVar3 = *pcVar23;
                  cVar4 = *(char *)(lVar10 + uVar21 * 0x38 + 0x10);
                  cVar5 = *(char *)(lVar10 + uVar19 * 0x38 + 0x10);
                  if (((cVar4 == '\0') || (cVar3 == '\0')) || (cVar5 == '\0')) {
                    fVar28 = (fVar27 + fVar34) * 0.5;
                    fVar27 = fVar25;
                    if (cVar4 != '\0') {
                      fVar27 = fVar24;
                    }
                    lVar17 = lVar17 + uVar20 * 0x38;
                    fVar34 = 2.0;
                    if (cVar3 != '\0') {
                      fVar34 = fVar24;
                    }
                    fVar30 = fVar25;
                    if (cVar5 != '\0') {
                      fVar30 = fVar24;
                    }
                    fVar24 = fVar27 + fVar34 + fVar30;
                    fVar31 = (fVar28 + ((fVar31 - fVar28) * fVar29 * 0.9) / fVar26) - fVar31;
                    lVar13 = lVar10 + uVar21 * 0x38;
                    *(float *)(lVar13 + 0x1c) =
                         *(float *)(lVar13 + 0x1c) - fVar31 * (fVar27 / fVar24) * 0.4;
                    lVar10 = lVar10 + uVar19 * 0x38;
                    iVar18 = iVar18 + 1;
                    *(float *)(lVar17 + 0x1c) =
                         fVar31 * (fVar34 / fVar24) * 0.4 + *(float *)(lVar17 + 0x1c);
                    fVar33 = fVar33 + ABS(fVar26 - fVar29) / fVar29;
                    *(float *)(lVar10 + 0x1c) =
                         *(float *)(lVar10 + 0x1c) - fVar31 * (fVar30 / fVar24) * 0.4;
                  }
                }
              }
            }
          }
          uVar12 = *(uint *)(in_x0 + 0xf8);
          uVar9 = *(uint *)(in_x0 + 0xfc);
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar12);
      }
      uVar22 = uVar14;
    } while (uVar14 < uVar9);
    if (iVar18 == 0) goto LAB_008a28f8;
    iVar18 = *(int *)(in_x0 + 0x11c);
    if (iVar18 == 0) {
      *(float *)(in_x0 + 0x120) = fVar33;
      *(float *)(in_x0 + 0x124) = fVar33;
LAB_008a295c:
      *(int *)(in_x0 + 0x11c) = iVar18 + 1;
      if (uVar9 != 0) {
        uVar12 = 0;
        uVar22 = *(uint *)(in_x0 + 0xf8);
        do {
          if (uVar22 != 0) {
            uVar14 = 0;
            lVar17 = *(long *)(in_x0 + 0x100);
            do {
              uVar16 = uVar12;
              if (*(uint *)(in_x0 + 0xfc) <= uVar12) {
                uVar16 = *(uint *)(in_x0 + 0xfc) - 1;
              }
              uVar6 = 0;
              if (-1 < (int)uVar12) {
                uVar6 = uVar16;
              }
              uVar16 = uVar14 & ((int)uVar14 >> 0x1f ^ 0xffffffffU);
              uVar14 = uVar14 + 1;
              pfVar15 = (float *)(lVar17 + (ulong)(uVar16 + uVar6 * uVar22) * 0x38);
              fVar33 = pfVar15[7];
              pfVar15[7] = 0.0;
              *pfVar15 = fVar33 + *pfVar15;
            } while (uVar22 != uVar14);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar9);
      }
    }
    else {
      fVar25 = *(float *)(in_x0 + 0x124);
      if (fVar33 < *(float *)(in_x0 + 0x124)) {
        *(float *)(in_x0 + 0x124) = fVar33;
        fVar25 = fVar33;
      }
      if (((uint)(iVar18 * -0x3d70a3d7) >> 1 | iVar18 * -0x80000000) < 0x51eb852) {
        if (fVar25 != *(float *)(in_x0 + 0x120)) {
          *(float *)(in_x0 + 0x120) = fVar25;
          goto joined_r0x008a29fc;
        }
        onFinished(in_x0,3);
      }
      else {
joined_r0x008a29fc:
        if (iVar18 != 1000) goto LAB_008a295c;
                    /* try { // try from 008a28e8 to 008a29ef has its CatchHandler @ 008a2a08 */
        onFinished(in_x0,3);
      }
    }
  }
  DensityMapModifier::~DensityMapModifier(aDStack_d8);
LAB_008a2914:
  if (*(long *)(lVar8 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


