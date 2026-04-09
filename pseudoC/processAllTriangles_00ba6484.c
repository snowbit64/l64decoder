// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processAllTriangles
// Entry Point: 00ba6484
// Size: 952 bytes
// Signature: undefined __thiscall processAllTriangles(Bt2HeightfieldTerrainShape * this, btTriangleCallback * param_1, btVector3 * param_2, btVector3 * param_3)


/* Bt2HeightfieldTerrainShape::processAllTriangles(btTriangleCallback*, btVector3 const&, btVector3
   const&) const */

void __thiscall
Bt2HeightfieldTerrainShape::processAllTriangles
          (Bt2HeightfieldTerrainShape *this,btTriangleCallback *param_1,btVector3 *param_2,
          btVector3 *param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  int iVar12;
  undefined8 uVar11;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  uVar3 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if ((uVar3 & 1) == 0) {
    fVar6 = (float)*(undefined8 *)(this + 0x50);
    fVar8 = (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20);
    uVar15 = *(undefined8 *)(this + 0x40);
    uVar17 = CONCAT44((int)(*(float *)(param_2 + 8) * *(float *)(this + 0xbc) + fVar8),
                      (int)((float)*(undefined8 *)param_2 * (float)*(undefined8 *)(this + 0xb4) +
                           fVar6));
    iVar18 = (int)uVar15 + -1;
    iVar19 = (int)((ulong)uVar15 >> 0x20) + -1;
    iVar9 = (int)((float)*(undefined8 *)(this + 0xb4) * (float)*(undefined8 *)param_3 + fVar6);
    iVar12 = (int)(*(float *)(this + 0xbc) * *(float *)(param_3 + 8) + fVar8);
    uVar11 = CONCAT44(iVar12,iVar9);
    uVar15 = NEON_cmgt(uVar15,uVar17,4);
    uVar20 = NEON_cmgt(CONCAT44(iVar19,iVar18),uVar11,4);
    uVar11 = NEON_cmgt(0xffffffffffffffff,uVar11,4);
    uVar16 = NEON_bsl(uVar15,uVar17,CONCAT44(iVar19,iVar18),1);
    uVar3 = NEON_cmge(uVar17,0,4);
    uVar17 = NEON_bif(CONCAT44(iVar12 + 1,iVar9 + 1),CONCAT44(iVar19,iVar18),uVar20,1);
    uVar3 = uVar3 & uVar16;
    iVar9 = CONCAT13((byte)((ulong)uVar17 >> 0x18) & ~(byte)((ulong)uVar11 >> 0x18),
                     CONCAT12((byte)((ulong)uVar17 >> 0x10) & ~(byte)((ulong)uVar11 >> 0x10),
                              CONCAT11((byte)((ulong)uVar17 >> 8) & ~(byte)((ulong)uVar11 >> 8),
                                       (byte)uVar17 & ~(byte)uVar11)));
    uVar17 = CONCAT17((byte)((ulong)uVar17 >> 0x38) & ~(byte)((ulong)uVar11 >> 0x38),
                      CONCAT16((byte)((ulong)uVar17 >> 0x30) & ~(byte)((ulong)uVar11 >> 0x30),
                               CONCAT15((byte)((ulong)uVar17 >> 0x28) &
                                        ~(byte)((ulong)uVar11 >> 0x28),
                                        CONCAT14((byte)((ulong)uVar17 >> 0x20) &
                                                 ~(byte)((ulong)uVar11 >> 0x20),iVar9))));
    uVar16 = NEON_cmgt(uVar17,uVar3,4);
    if ((uVar16 & 0x100000000) != 0) {
      iVar12 = (int)(uVar3 >> 0x20);
      do {
        iVar18 = (int)uVar3;
        if ((uVar16 & 1) != 0) {
          do {
            processTile(this,param_1,iVar18,iVar12);
            iVar18 = iVar18 + 1;
          } while (iVar9 != iVar18);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != (int)((ulong)uVar17 >> 0x20));
    }
  }
  else {
    fVar26 = *(float *)(param_1 + 8) * *(float *)(this + 0xb4);
    fVar13 = *(float *)(param_1 + 0xc) * *(float *)(this + 0xb8);
    fVar6 = *(float *)(this + 0xb4) * *(float *)(param_1 + 0x18) - fVar26;
    fVar14 = *(float *)(this + 0xb8) * *(float *)(param_1 + 0x1c) - fVar13;
    fVar27 = 1.0 / fVar6;
    fVar28 = *(float *)(param_1 + 0x10) * *(float *)(this + 0xbc);
    fVar8 = *(float *)(this + 0xbc) * *(float *)(param_1 + 0x20) - fVar28;
    fVar25 = (*(float *)(this + 0x20) - fVar26) * fVar27;
    fVar24 = fVar27 * (*(float *)(this + 0x30) - fVar26);
    if (0.0 <= fVar6) {
      fVar22 = 1.0;
      fVar21 = 0.0;
      if ((0.0 < fVar6) && (fVar22 = 1.0, fVar21 = fVar25, fVar24 < 1.0)) {
        fVar22 = fVar24;
      }
    }
    else {
      fVar22 = (float)NEON_fminnm(fVar25,0x3f800000);
      fVar21 = 0.0;
      if (0.0 < fVar24) {
        fVar21 = fVar24;
      }
    }
    fVar25 = 1.0 / fVar8;
    fVar24 = (*(float *)(this + 0x24) - fVar13) * (1.0 / fVar14);
    fVar13 = (1.0 / fVar14) * (*(float *)(this + 0x34) - fVar13);
    if (0.0 <= fVar14) {
      if (0.0 < fVar14) {
        if (fVar24 <= fVar21) {
          fVar24 = fVar21;
        }
        fVar21 = fVar24;
        if (fVar13 < fVar22) {
          fVar22 = fVar13;
        }
      }
    }
    else {
      if (fVar22 <= fVar24) {
        fVar24 = fVar22;
      }
      fVar22 = fVar24;
      if (fVar21 < fVar13) {
        fVar21 = fVar13;
      }
    }
    fVar13 = (*(float *)(this + 0x28) - fVar28) * fVar25;
    fVar14 = fVar25 * (*(float *)(this + 0x38) - fVar28);
    if (0.0 <= fVar8) {
      if (0.0 < fVar8) {
        if (fVar13 <= fVar21) {
          fVar13 = fVar21;
        }
        fVar21 = fVar13;
        if (fVar14 < fVar22) {
          fVar22 = fVar14;
        }
      }
    }
    else {
      if (fVar22 <= fVar13) {
        fVar13 = fVar22;
      }
      fVar22 = fVar13;
      if (fVar21 < fVar14) {
        fVar21 = fVar14;
      }
    }
    if (fVar21 <= fVar22) {
      fVar24 = *(float *)(this + 0x50) + -1.0;
      fVar23 = *(float *)(this + 0x54) + -1.0;
      fVar13 = (float)(int)(fVar21 * fVar6 + fVar26);
      fVar14 = (float)(int)(fVar21 * fVar8 + fVar28);
      if (fVar24 <= fVar13) {
        fVar13 = fVar24;
      }
      if (fVar23 <= fVar14) {
        fVar14 = fVar23;
      }
      bVar2 = fVar6 < 0.0;
      fVar6 = 1.0;
      if (bVar2) {
        fVar6 = -1.0;
      }
      iVar12 = -1;
      iVar9 = iVar12;
      if (!bVar2) {
        iVar9 = 1;
      }
      fVar24 = fVar13;
      if (!bVar2) {
        fVar24 = fVar13 + 1.0;
      }
      bVar2 = fVar8 < 0.0;
      fVar8 = fVar14;
      if (!bVar2) {
        fVar8 = fVar14 + 1.0;
      }
      fVar21 = 1.0;
      if (bVar2) {
        fVar21 = -1.0;
      }
      uVar4 = (uint)(*(float *)(this + 0x50) + fVar13);
      if (!bVar2) {
        iVar12 = 1;
      }
      uVar5 = (uint)(*(float *)(this + 0x54) + fVar14);
      fVar13 = fVar27 * (fVar24 - fVar26);
      fVar14 = fVar25 * (fVar8 - fVar28);
      do {
        processTile(this,param_1,uVar4,uVar5);
        fVar7 = fVar6 + fVar24;
        fVar10 = fVar21 + fVar8;
        uVar1 = uVar5 + iVar12;
        fVar23 = fVar10;
        if (fVar13 < fVar14) {
          uVar4 = uVar4 + iVar9;
          uVar1 = uVar5;
          fVar24 = fVar7;
          fVar23 = fVar8;
        }
        fVar8 = fVar23;
        uVar5 = uVar1;
        fVar10 = fVar25 * (fVar10 - fVar28);
        fVar23 = fVar14;
        if (fVar13 < fVar14) {
          fVar10 = fVar14;
          fVar23 = fVar13;
          fVar13 = fVar27 * (fVar7 - fVar26);
        }
        fVar14 = fVar10;
      } while (((fVar23 <= fVar22) && (uVar4 < *(int *)(this + 0x40) - 1U)) &&
              (uVar5 < *(int *)(this + 0x44) - 1U));
    }
  }
  return;
}


