// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 008539b4
// Size: 736 bytes
// Signature: undefined __thiscall update(FieldCropsUpdater * this, float param_1)


/* FieldCropsUpdater::update(float) */

void __thiscall FieldCropsUpdater::update(FieldCropsUpdater *this,float param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  double dVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  if (this[0xd04] != (FieldCropsUpdater)0x0) {
    uVar4 = *(int *)(this + 0xd0c) * *(int *)(this + 0xd0c);
    uVar17 = (ulong)uVar4;
    if (*(uint *)(this + 0xd14) < uVar4) {
      lVar5 = Watch::getCurrentTicks();
      iVar2 = *(int *)(this + 0x58);
      do {
        uVar8 = *(uint *)(this + 0xd14);
        if (uVar4 <= uVar8) goto LAB_00853a58;
        updateGrowthState(this,uVar8,~(-1 << (ulong)(iVar2 + 1U & 0x1f)));
        *(int *)(this + 0xd14) = *(int *)(this + 0xd14) + 1;
        lVar6 = Watch::getCurrentTicks();
        dVar21 = (double)Watch::convertTicksToMs(lVar6 - lVar5);
      } while (dVar21 <= (double)*(float *)(this + 0xd20));
      uVar8 = *(uint *)(this + 0xd14);
LAB_00853a58:
      if (uVar8 == uVar4) {
        plVar7 = *(long **)(this + 0xd18);
        *(undefined4 *)(this + 0xd14) = 0xffffffff;
        if (plVar7 != (long *)0x0) {
          lVar5 = *plVar7;
          *(undefined8 *)(this + 0xd18) = 0;
          (**(code **)(lVar5 + 0x10))(plVar7,1);
        }
      }
    }
    uVar16 = 0;
    uVar8 = 0;
    uVar3 = *(uint *)(this + 0x58);
    do {
      uVar11 = (ulong)uVar8;
      if (((*(int *)(this + (ulong)uVar8 * 100 + 0x60) != 0) &&
          (0.0 < *(float *)(this + uVar11 * 100 + 0x7c))) &&
         (fVar20 = *(float *)(this + uVar11 * 100 + 0x74),
         *(float *)(this + uVar11 * 100 + 0x74) = fVar20 - param_1, fVar20 - param_1 <= 0.0)) {
        uVar16 = uVar16 | 1 << (ulong)(uVar8 & 0x1f);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 <= uVar3);
    if (uVar16 != 0) {
      uVar3 = *(uint *)(this + 0xd10);
      uVar8 = uVar3;
      if (uVar3 <= *(uint *)(this + 0xd0c)) {
        uVar8 = *(uint *)(this + 0xd0c);
      }
      if ((uVar8 != 0) && (uVar3 != 0)) {
        uVar18 = 0;
        uVar19 = 0;
        lVar5 = *(long *)(this + 0xcf8);
        uVar9 = *(uint *)(this + 0xd00);
        do {
          uVar15 = *(uint *)(lVar5 + (ulong)uVar9 * 4) & uVar16;
          if (uVar15 != 0) {
            updateGrowthState(this,uVar9,uVar15);
            lVar5 = *(long *)(this + 0xcf8);
            *(uint *)(lVar5 + (ulong)*(uint *)(this + 0xd00) * 4) =
                 *(uint *)(lVar5 + (ulong)*(uint *)(this + 0xd00) * 4) & (uVar15 ^ 0xffffffff);
            piVar10 = (int *)(this + 0x78);
            do {
              if ((uVar15 & 1) != 0) {
                *piVar10 = *piVar10 + 1;
              }
              piVar10 = piVar10 + 0x19;
              bVar1 = 1 < uVar15;
              uVar15 = uVar15 >> 1;
            } while (bVar1);
            uVar19 = uVar19 + 1;
            uVar9 = *(uint *)(this + 0xd00);
          }
          uVar18 = uVar18 + 1;
          uVar15 = 0;
          if (uVar9 + 1 < uVar4) {
            uVar15 = uVar9 + 1;
          }
          *(uint *)(this + 0xd00) = uVar15;
        } while ((uVar18 < uVar8) && (uVar9 = uVar15, uVar19 < uVar3));
      }
      uVar8 = 0;
      uVar11 = uVar17 & 0xfffffff8;
      do {
        if (uVar4 <= *(uint *)(this + (ulong)uVar8 * 100 + 0x78)) {
          *(uint *)(this + (ulong)uVar8 * 100 + 0x78) = 0;
          fVar20 = *(float *)(this + (ulong)uVar8 * 100 + 0x7c) +
                   *(float *)(this + (ulong)uVar8 * 100 + 0x74);
          if (fVar20 < 0.0) {
            fVar20 = 0.0;
          }
          *(float *)(this + (ulong)uVar8 * 100 + 0x74) = fVar20;
          if (uVar4 != 0) {
            uVar3 = 1 << (ulong)(uVar8 & 0x1f);
            lVar5 = *(long *)(this + 0xcf8);
            if (uVar4 < 8) {
              uVar14 = 0;
            }
            else {
              puVar13 = (undefined8 *)(lVar5 + 0x10);
              uVar14 = uVar11;
              do {
                uVar27 = puVar13[-1];
                uVar26 = puVar13[-2];
                uVar29 = puVar13[1];
                uVar28 = *puVar13;
                uVar14 = uVar14 - 8;
                bVar22 = (byte)uVar3;
                bVar23 = (byte)(uVar3 >> 8);
                bVar24 = (byte)(uVar3 >> 0x10);
                bVar25 = (byte)(uVar3 >> 0x18);
                puVar13[-1] = CONCAT17((byte)((ulong)uVar27 >> 0x38) | bVar25,
                                       CONCAT16((byte)((ulong)uVar27 >> 0x30) | bVar24,
                                                CONCAT15((byte)((ulong)uVar27 >> 0x28) | bVar23,
                                                         CONCAT14((byte)((ulong)uVar27 >> 0x20) |
                                                                  bVar22,CONCAT13((byte)((ulong)
                                                  uVar27 >> 0x18) | bVar25,
                                                  CONCAT12((byte)((ulong)uVar27 >> 0x10) | bVar24,
                                                           CONCAT11((byte)((ulong)uVar27 >> 8) |
                                                                    bVar23,(byte)uVar27 | bVar22))))
                                                  )));
                puVar13[-2] = CONCAT17((byte)((ulong)uVar26 >> 0x38) | bVar25,
                                       CONCAT16((byte)((ulong)uVar26 >> 0x30) | bVar24,
                                                CONCAT15((byte)((ulong)uVar26 >> 0x28) | bVar23,
                                                         CONCAT14((byte)((ulong)uVar26 >> 0x20) |
                                                                  bVar22,CONCAT13((byte)((ulong)
                                                  uVar26 >> 0x18) | bVar25,
                                                  CONCAT12((byte)((ulong)uVar26 >> 0x10) | bVar24,
                                                           CONCAT11((byte)((ulong)uVar26 >> 8) |
                                                                    bVar23,(byte)uVar26 | bVar22))))
                                                  )));
                puVar13[1] = CONCAT17((byte)((ulong)uVar29 >> 0x38) | bVar25,
                                      CONCAT16((byte)((ulong)uVar29 >> 0x30) | bVar24,
                                               CONCAT15((byte)((ulong)uVar29 >> 0x28) | bVar23,
                                                        CONCAT14((byte)((ulong)uVar29 >> 0x20) |
                                                                 bVar22,CONCAT13((byte)((ulong)
                                                  uVar29 >> 0x18) | bVar25,
                                                  CONCAT12((byte)((ulong)uVar29 >> 0x10) | bVar24,
                                                           CONCAT11((byte)((ulong)uVar29 >> 8) |
                                                                    bVar23,(byte)uVar29 | bVar22))))
                                                  )));
                *puVar13 = CONCAT17((byte)((ulong)uVar28 >> 0x38) | bVar25,
                                    CONCAT16((byte)((ulong)uVar28 >> 0x30) | bVar24,
                                             CONCAT15((byte)((ulong)uVar28 >> 0x28) | bVar23,
                                                      CONCAT14((byte)((ulong)uVar28 >> 0x20) |
                                                               bVar22,CONCAT13((byte)((ulong)uVar28
                                                                                     >> 0x18) |
                                                                               bVar25,CONCAT12((byte
                                                  )((ulong)uVar28 >> 0x10) | bVar24,
                                                  CONCAT11((byte)((ulong)uVar28 >> 8) | bVar23,
                                                           (byte)uVar28 | bVar22)))))));
                puVar13 = puVar13 + 4;
              } while (uVar14 != 0);
              uVar14 = uVar11;
              if (uVar11 == uVar17) goto LAB_00853bc0;
            }
            lVar6 = uVar17 - uVar14;
            puVar12 = (uint *)(lVar5 + uVar14 * 4);
            do {
              lVar6 = lVar6 + -1;
              *puVar12 = *puVar12 | uVar3;
              puVar12 = puVar12 + 1;
            } while (lVar6 != 0);
          }
        }
LAB_00853bc0:
        uVar8 = uVar8 + 1;
      } while (uVar8 <= *(uint *)(this + 0x58));
    }
  }
  return;
}


