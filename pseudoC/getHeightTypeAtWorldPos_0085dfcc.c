// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHeightTypeAtWorldPos
// Entry Point: 0085dfcc
// Size: 1576 bytes
// Signature: undefined __thiscall getHeightTypeAtWorldPos(DensityMapHeightUpdater * this, float param_1, float param_2, float param_3, float param_4)


/* DensityMapHeightUpdater::getHeightTypeAtWorldPos(float, float, float, float) */

void __thiscall
DensityMapHeightUpdater::getHeightTypeAtWorldPos
          (DensityMapHeightUpdater *this,float param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  int local_c8;
  uint local_c4;
  uint local_c0;
  int local_bc;
  uint local_ac;
  uint local_a8;
  uint local_9c;
  uint local_98;
  int local_94;
  float local_90;
  float fStack_8c;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  lVar3 = *(long *)(*(long *)(this + 0xa40) + 0x58);
  uVar7 = DensityMap::getSquareSize();
  lVar18 = *(long *)(*(long *)(this + 0xa40) + 0x40);
  RawTransformGroup::updateWorldTransformation();
  fVar20 = param_2 - *(float *)(lVar18 + 0xec);
  fVar21 = param_1 - *(float *)(lVar18 + 0xe8);
  fVar24 = param_3 - *(float *)(lVar18 + 0xf0);
  uVar23 = NEON_fmadd(fVar21,*(undefined4 *)(lVar18 + 0xb8),fVar20 * *(float *)(lVar18 + 0xbc));
  uVar22 = NEON_fmadd(fVar21,*(undefined4 *)(lVar18 + 0xd8),fVar20 * *(float *)(lVar18 + 0xdc));
  fVar20 = (float)NEON_fmadd(fVar24,*(undefined4 *)(lVar18 + 0xc0),uVar23);
  fVar21 = (float)NEON_fmadd(fVar24,*(undefined4 *)(lVar18 + 0xe0),uVar22);
  TerrainDataPlane::localToDensityMap
            (*(TerrainDataPlane **)(this + 0xa40),fVar20,fVar21,&fStack_8c,&local_90);
  uVar13 = (uint)(local_90 + 0.5);
  uVar19 = (uint)(fStack_8c + 0.5);
  iVar8 = BaseTerrain::getHeightMapSize();
  fVar20 = (float)BaseTerrain::getUnitsPerPixel();
  uVar14 = (uint)(((float)uVar7 * param_4) / (fVar20 * (float)(ulong)(iVar8 - 1)));
  if (6 < uVar14) {
    uVar14 = 7;
  }
  if ((uVar19 < uVar7) && (uVar13 < uVar7)) {
    if (*(ChunkedBitSquare **)(lVar3 + 0x10) == (ChunkedBitSquare *)0x0) {
      uVar9 = *(uint *)(this + 0xa48) +
              (uVar19 + *(int *)(lVar3 + 0x24) * uVar13) * *(int *)(lVar3 + 0x2c);
      lVar17 = **(long **)(lVar3 + 0x18);
      uVar11 = (ulong)(uVar9 >> 3) & 0xffff;
      lVar18 = *(long *)(lVar17 + (ulong)(uVar9 >> 0x13) * 8);
      if ((uint)uVar11 < 0xfffd) {
        uVar15 = *(uint *)(lVar18 + uVar11);
      }
      else {
        uVar15 = (uVar9 >> 3) + 1;
        uVar2 = (uVar9 >> 3) + 2;
        uVar15 = (uint)CONCAT12(*(undefined *)
                                 (*(long *)(lVar17 + (ulong)(uVar2 >> 0x10) * 8) +
                                 ((ulong)uVar2 & 0xffff)),
                                CONCAT11(*(undefined *)
                                          (*(long *)(lVar17 + (ulong)(uVar15 >> 0x10) * 8) +
                                          ((ulong)uVar15 & 0xffff)),*(undefined *)(lVar18 + uVar11))
                               );
      }
      uVar9 = uVar15 >> (ulong)(uVar9 & 7) &
              (-1 << (ulong)(*(uint *)(this + 0xa4c) & 0x1f) ^ 0xffffffffU) & 0xffff;
      uVar11 = (ulong)uVar9;
    }
    else {
      uVar11 = ChunkedBitSquare::readBits
                         (*(ChunkedBitSquare **)(lVar3 + 0x10),uVar19,uVar13,*(uint *)(this + 0xa48)
                          ,*(uint *)(this + 0xa4c));
      uVar9 = (uint)uVar11;
    }
    if (uVar9 != 0) goto LAB_0085e5b4;
  }
  if (uVar14 == 0) {
    uVar11 = 0;
  }
  else {
    local_94 = 0;
    local_c8 = 2;
    local_bc = 1;
    local_c4 = uVar13;
    local_c0 = uVar19;
    local_9c = uVar13;
    local_98 = uVar19;
    local_ac = uVar13;
    local_a8 = uVar13;
    do {
      local_a8 = local_a8 - 1;
      local_ac = local_ac + 1;
      iVar8 = 2;
      uVar4 = uVar19 - local_bc;
      uVar2 = local_bc + uVar19;
      uVar15 = local_c0;
      uVar9 = local_c4;
      do {
        uVar10 = *(uint *)(this + 0xa48);
        uVar12 = *(uint *)(this + 0xa4c);
        if ((uVar4 < uVar7) && (uVar16 = (local_9c + iVar8) - 2, uVar16 < uVar7)) {
          if (*(ChunkedBitSquare **)(lVar3 + 0x10) == (ChunkedBitSquare *)0x0) {
            lVar17 = **(long **)(lVar3 + 0x18);
            uVar10 = uVar10 + (uVar4 + *(int *)(lVar3 + 0x24) * uVar16) * *(int *)(lVar3 + 0x2c);
            uVar11 = (ulong)(uVar10 >> 3) & 0xffff;
            lVar18 = *(long *)(lVar17 + (ulong)(uVar10 >> 0x13) * 8);
            if ((uint)uVar11 < 0xfffd) {
              uVar16 = *(uint *)(lVar18 + uVar11);
            }
            else {
              uVar16 = (uVar10 >> 3) + 1;
              uVar1 = (uVar10 >> 3) + 2;
              uVar16 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar17 + (ulong)(uVar1 >> 0x10) * 8) +
                                       ((ulong)uVar1 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar17 + (ulong)(uVar16 >> 0x10) * 8) +
                                                ((ulong)uVar16 & 0xffff)),
                                               *(undefined *)(lVar18 + uVar11)));
            }
            uVar10 = uVar16 >> (ulong)(uVar10 & 7) & (-1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU) &
                     0xffff;
            uVar11 = (ulong)uVar10;
          }
          else {
            uVar11 = ChunkedBitSquare::readBits
                               (*(ChunkedBitSquare **)(lVar3 + 0x10),uVar4,uVar16,uVar10,uVar12);
            uVar10 = (uint)uVar11;
          }
          if (uVar10 != 0) goto LAB_0085e5b4;
          uVar10 = *(uint *)(this + 0xa48);
          uVar12 = *(uint *)(this + 0xa4c);
        }
        if ((uVar13 - local_bc < uVar7) && (uVar15 < uVar7)) {
          if (*(ChunkedBitSquare **)(lVar3 + 0x10) == (ChunkedBitSquare *)0x0) {
            uVar10 = uVar10 + (uVar15 + local_a8 * *(int *)(lVar3 + 0x24)) * *(int *)(lVar3 + 0x2c);
            lVar17 = **(long **)(lVar3 + 0x18);
            uVar11 = (ulong)(uVar10 >> 3) & 0xffff;
            lVar18 = *(long *)(lVar17 + (ulong)(uVar10 >> 0x13) * 8);
            if ((uint)uVar11 < 0xfffd) {
              uVar16 = *(uint *)(lVar18 + uVar11);
            }
            else {
              uVar16 = (uVar10 >> 3) + 1;
              uVar1 = (uVar10 >> 3) + 2;
              uVar16 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar17 + (ulong)(uVar1 >> 0x10) * 8) +
                                       ((ulong)uVar1 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar17 + (ulong)(uVar16 >> 0x10) * 8) +
                                                ((ulong)uVar16 & 0xffff)),
                                               *(undefined *)(lVar18 + uVar11)));
            }
            uVar10 = uVar16 >> (ulong)(uVar10 & 7) & (-1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU) &
                     0xffff;
            uVar11 = (ulong)uVar10;
          }
          else {
            uVar11 = ChunkedBitSquare::readBits
                               (*(ChunkedBitSquare **)(lVar3 + 0x10),uVar15,uVar13 - local_bc,uVar10
                                ,uVar12);
            uVar10 = (uint)uVar11;
          }
          if (uVar10 != 0) goto LAB_0085e5b4;
          uVar10 = *(uint *)(this + 0xa48);
          uVar12 = *(uint *)(this + 0xa4c);
        }
        if ((uVar2 < uVar7) && (uVar9 < uVar7)) {
          if (*(ChunkedBitSquare **)(lVar3 + 0x10) == (ChunkedBitSquare *)0x0) {
            lVar17 = **(long **)(lVar3 + 0x18);
            uVar10 = uVar10 + (uVar2 + *(int *)(lVar3 + 0x24) * uVar9) * *(int *)(lVar3 + 0x2c);
            uVar11 = (ulong)(uVar10 >> 3) & 0xffff;
            lVar18 = *(long *)(lVar17 + (ulong)(uVar10 >> 0x13) * 8);
            if ((uint)uVar11 < 0xfffd) {
              uVar16 = *(uint *)(lVar18 + uVar11);
            }
            else {
              uVar16 = (uVar10 >> 3) + 1;
              uVar1 = (uVar10 >> 3) + 2;
              uVar16 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar17 + (ulong)(uVar1 >> 0x10) * 8) +
                                       ((ulong)uVar1 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar17 + (ulong)(uVar16 >> 0x10) * 8) +
                                                ((ulong)uVar16 & 0xffff)),
                                               *(undefined *)(lVar18 + uVar11)));
            }
            uVar10 = uVar16 >> (ulong)(uVar10 & 7) & (-1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU) &
                     0xffff;
            uVar11 = (ulong)uVar10;
          }
          else {
            uVar11 = ChunkedBitSquare::readBits
                               (*(ChunkedBitSquare **)(lVar3 + 0x10),uVar2,uVar9,uVar10,uVar12);
            uVar10 = (uint)uVar11;
          }
          if (uVar10 != 0) goto LAB_0085e5b4;
          uVar10 = *(uint *)(this + 0xa48);
          uVar12 = *(uint *)(this + 0xa4c);
        }
        if ((local_bc + uVar13 < uVar7) && (uVar16 = (local_98 + iVar8) - 2, uVar16 < uVar7)) {
          if (*(ChunkedBitSquare **)(lVar3 + 0x10) == (ChunkedBitSquare *)0x0) {
            uVar10 = uVar10 + (local_98 + iVar8 + local_ac * *(int *)(lVar3 + 0x24) + -2) *
                              *(int *)(lVar3 + 0x2c);
            lVar17 = **(long **)(lVar3 + 0x18);
            uVar11 = (ulong)(uVar10 >> 3) & 0xffff;
            lVar18 = *(long *)(lVar17 + (ulong)(uVar10 >> 0x13) * 8);
            if ((uint)uVar11 < 0xfffd) {
              uVar16 = *(uint *)(lVar18 + uVar11);
            }
            else {
              uVar16 = (uVar10 >> 3) + 1;
              uVar1 = (uVar10 >> 3) + 2;
              uVar16 = (uint)CONCAT12(*(undefined *)
                                       (*(long *)(lVar17 + (ulong)(uVar1 >> 0x10) * 8) +
                                       ((ulong)uVar1 & 0xffff)),
                                      CONCAT11(*(undefined *)
                                                (*(long *)(lVar17 + (ulong)(uVar16 >> 0x10) * 8) +
                                                ((ulong)uVar16 & 0xffff)),
                                               *(undefined *)(lVar18 + uVar11)));
            }
            uVar10 = uVar16 >> (ulong)(uVar10 & 7) & (-1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU) &
                     0xffff;
            uVar11 = (ulong)uVar10;
          }
          else {
            uVar11 = ChunkedBitSquare::readBits
                               (*(ChunkedBitSquare **)(lVar3 + 0x10),uVar16,local_bc + uVar13,uVar10
                                ,uVar12);
            uVar10 = (uint)uVar11;
          }
          if (uVar10 != 0) goto LAB_0085e5b4;
        }
        iVar8 = iVar8 + -1;
        uVar9 = uVar9 + 1;
        uVar15 = uVar15 + 1;
      } while (local_94 != iVar8);
      uVar11 = 0;
      local_bc = local_bc + 1;
      bVar6 = local_c8 != uVar14 + 1;
      local_c8 = local_c8 + 1;
      local_94 = local_94 + -2;
      local_98 = local_98 + 1;
      local_c4 = local_c4 - 1;
      local_c0 = local_c0 - 1;
      local_9c = local_9c + 1;
    } while (bVar6);
  }
LAB_0085e5b4:
  if (*(long *)(lVar5 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


