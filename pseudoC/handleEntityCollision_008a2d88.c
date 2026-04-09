// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleEntityCollision
// Entry Point: 008a2d88
// Size: 964 bytes
// Signature: undefined __thiscall handleEntityCollision(TerrainDeformation * this, TransformGroup * param_1)


/* TerrainDeformation::handleEntityCollision(TransformGroup*) */

void __thiscall
TerrainDeformation::handleEntityCollision(TerrainDeformation *this,TransformGroup *param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  float *pfVar19;
  ulong uVar20;
  float *pfVar21;
  float *pfVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  uint local_74;
  
  if (((byte)param_1[0x11] >> 3 & 1) != 0) {
    GsShape::updateShapeWorldBoundingVolume();
    uVar13 = *(uint *)(this + 0x10c);
    if (uVar13 != 0) {
      puVar1 = (undefined2 *)(this + 0x130);
      local_74 = 0;
      uVar15 = *(uint *)(this + 0x108);
      bVar10 = true;
      do {
        if (uVar15 != 0) {
          uVar13 = 0;
          do {
            uVar15 = *(uint *)(this + 0x50);
            lVar26 = *(long *)(this + 0x100);
            uVar8 = 0;
            if (uVar15 != 0) {
              uVar8 = (uVar13 + *(int *)(this + 0xf0)) / uVar15;
            }
            uVar9 = 0;
            if (uVar15 != 0) {
              uVar9 = (*(int *)(this + 0xf4) + local_74) / uVar15;
            }
            uVar8 = uVar8 - *(int *)(this + 0xe8);
            uVar4 = *(uint *)(this + 0xf8);
            uVar5 = *(uint *)(this + 0xfc);
            uVar9 = uVar9 - *(int *)(this + 0xec);
            uVar6 = uVar4 - 1;
            uVar15 = uVar8;
            if (uVar4 <= uVar8) {
              uVar15 = uVar6;
            }
            uVar2 = 0;
            if (-1 < (int)uVar8) {
              uVar2 = uVar15;
            }
            uVar7 = uVar5 - 1;
            uVar15 = uVar9;
            if (uVar5 <= uVar9) {
              uVar15 = uVar7;
            }
            uVar3 = 0;
            if (-1 < (int)uVar9) {
              uVar3 = uVar15;
            }
            if (uVar8 + 1 < uVar4) {
              uVar6 = uVar8 + 1;
            }
            uVar15 = 0;
            if (-1 < (int)(uVar8 + 1)) {
              uVar15 = uVar6;
            }
            if (uVar9 + 1 < uVar5) {
              uVar7 = uVar9 + 1;
            }
            uVar8 = 0;
            if (-1 < (int)(uVar9 + 1)) {
              uVar8 = uVar7;
            }
            uVar25 = (ulong)(uVar3 * uVar4 + uVar2);
            uVar24 = (ulong)(uVar3 * uVar4 + uVar15);
            uVar23 = (ulong)(uVar8 * uVar4 + uVar2);
            pfVar21 = (float *)(lVar26 + uVar25 * 0x38);
            pfVar18 = (float *)(lVar26 + uVar24 * 0x38);
            uVar20 = (ulong)(uVar8 * uVar4 + uVar15);
            pfVar22 = (float *)(lVar26 + uVar23 * 0x38);
            pfVar19 = (float *)(lVar26 + uVar20 * 0x38);
            bVar11 = (byte)(*(byte *)(pfVar21 + 6) | *(byte *)(pfVar18 + 6) | *(byte *)(pfVar22 + 6)
                           | *(byte *)(pfVar19 + 6)) == 0;
            if (*(int *)(this + 0x2c) - 1U < 3) {
              if ((((0.0 < *(float *)(lVar26 + uVar25 * 0x38 + 0x14) ||
                    0.0 < *(float *)(lVar26 + uVar24 * 0x38 + 0x14)) ||
                   0.0 < *(float *)(lVar26 + uVar23 * 0x38 + 0x14)) ||
                  0.0 < *(float *)(lVar26 + uVar20 * 0x38 + 0x14)) || !bVar11) goto LAB_008a2ff8;
LAB_008a2e20:
              bVar10 = false;
            }
            else {
              if (*(int *)(this + 0x2c) != 0) {
                if (!bVar11) goto LAB_008a2ff8;
                goto LAB_008a2e20;
              }
              fVar27 = *(float *)(this + 0x58);
              if ((((ABS(*pfVar21 - *(float *)(lVar26 + uVar25 * 0x38 + 4)) < fVar27) &&
                   (ABS(*pfVar18 - *(float *)(lVar26 + uVar24 * 0x38 + 4)) < fVar27)) &&
                  (ABS(*pfVar22 - *(float *)(lVar26 + uVar23 * 0x38 + 4)) < fVar27)) &&
                 (ABS(*pfVar19 - *(float *)(lVar26 + uVar20 * 0x38 + 4)) < fVar27 && bVar11))
              goto LAB_008a2e20;
LAB_008a2ff8:
              fVar27 = (float)NEON_fmadd((float)(ulong)uVar13,*(undefined4 *)(this + 0x154),
                                         *(undefined4 *)(this + 0x14c));
              fVar28 = (float)NEON_fmadd((float)(ulong)local_74,*(undefined4 *)(this + 0x158),
                                         *(undefined4 *)(this + 0x150));
              GsShape::updateShapeWorldBoundingVolume();
              uVar12 = BoundingSphere::overlapsXZTileInexact
                                 ((BoundingSphere *)(param_1 + 0x198),fVar27,fVar28,
                                  *(float *)(this + 0x154),*(float *)(this + 0x158));
              if ((uVar12 & 1) == 0) {
                bVar10 = false;
              }
              else {
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((char *)puVar1);
                lVar14 = lVar26 + uVar25 * 0x38;
                *(byte *)(pfVar21 + 6) = 0;
                lVar16 = lVar26 + uVar24 * 0x38;
                *(byte *)(pfVar18 + 6) = 0;
                lVar17 = lVar26 + uVar23 * 0x38;
                *(byte *)(pfVar22 + 6) = 0;
                *(byte *)(pfVar19 + 6) = 0;
                fVar27 = *(float *)(lVar14 + 4);
                *(undefined *)(lVar14 + 0x10) = 1;
                *(undefined4 *)(lVar14 + 0x14) = 0;
                *(undefined *)(lVar16 + 0x10) = 1;
                *pfVar21 = fVar27;
                fVar27 = *(float *)(lVar16 + 4);
                *(undefined4 *)(lVar16 + 0x14) = 0;
                *(undefined *)(lVar17 + 0x10) = 1;
                lVar26 = lVar26 + uVar20 * 0x38;
                *(undefined4 *)(lVar17 + 0x14) = 0;
                *pfVar18 = fVar27;
                fVar27 = *(float *)(lVar17 + 4);
                *(undefined *)(lVar26 + 0x10) = 1;
                *pfVar22 = fVar27;
                *(undefined4 *)(lVar26 + 0x14) = 0;
                *pfVar19 = *(float *)(lVar26 + 4);
              }
            }
            uVar15 = *(uint *)(this + 0x108);
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar15);
          uVar13 = *(uint *)(this + 0x10c);
        }
        local_74 = local_74 + 1;
      } while (local_74 < uVar13);
      if (!bVar10) {
        if ((*(byte *)puVar1 & 1) == 0) {
          *puVar1 = 0;
          return;
        }
        **(undefined **)(this + 0x140) = 0;
        *(undefined8 *)(this + 0x138) = 0;
        return;
      }
    }
    *(undefined4 *)(this + 0x128) = 2;
  }
  return;
}


