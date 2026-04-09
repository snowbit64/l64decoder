// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPoint
// Entry Point: 009c092c
// Size: 972 bytes
// Signature: undefined __thiscall addPoint(DistanceMatrixTypeField * this, int param_1, int param_2)


/* ProceduralPlacementCacheManager::DistanceMatrixTypeField::addPoint(int, int) */

void __thiscall
ProceduralPlacementCacheManager::DistanceMatrixTypeField::addPoint
          (DistanceMatrixTypeField *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  bool bVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  byte bVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  byte bVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  uVar5 = *(uint *)(this + 0x40);
  fVar30 = 1.0;
  lVar3 = *(long *)this;
  lVar4 = *(long *)(this + 8);
  *(undefined4 *)(lVar4 + (ulong)(param_1 + uVar5 * param_2) * 4) = 0;
  if (1.0 < *(float *)(lVar3 + 0x30)) {
    iVar19 = param_2 + -1;
    bVar25 = true;
    iVar24 = param_1 + uVar5 * iVar19;
    iVar23 = param_1 + uVar5 + uVar5 * param_2 + -1;
    iVar6 = uVar5 * uVar5;
    fVar28 = (float)param_2;
    fVar29 = (float)param_1;
    iVar21 = param_1 + -1;
    uVar22 = iVar24 - 1;
    uVar16 = iVar24 + 1;
    bVar10 = true;
    iVar20 = 3;
    bVar13 = true;
    bVar7 = true;
    bVar17 = 1;
    bVar18 = 1;
    bVar9 = 1;
    bVar8 = 1;
    iVar24 = 1;
    bVar15 = 1;
    bVar14 = 1;
    bVar12 = 1;
    bVar11 = 1;
    do {
      if (bVar25) {
        iVar27 = param_1 - iVar24;
        if (iVar24 + param_1 < iVar27) {
          bVar26 = 0;
        }
        else {
          bVar26 = 0;
          fVar31 = (fVar28 - fVar30) - fVar28;
          iVar2 = iVar20;
          uVar1 = uVar22;
          do {
            if ((0 < (int)uVar1) && ((int)uVar1 < iVar6)) {
              fVar33 = *(float *)(lVar4 + (ulong)uVar1 * 4);
              fVar32 = (float)NEON_fmadd(fVar31,fVar31,
                                         ((float)iVar27 - fVar29) * ((float)iVar27 - fVar29));
              if (SQRT(fVar32) < fVar33) {
                bVar26 = 1;
                *(float *)(lVar4 + (ulong)uVar1 * 4) = SQRT(fVar32);
              }
              else if (fVar33 == 0.0) {
                bVar17 = param_1 < iVar27 & bVar17;
                bVar18 = iVar27 < param_1 & bVar18;
              }
            }
            iVar27 = iVar27 + 1;
            iVar2 = iVar2 + -1;
            uVar1 = uVar1 + 1;
          } while (iVar2 != 0);
        }
        bVar25 = (bool)((bVar17 | bVar18) & bVar26);
        if (bVar10) goto LAB_009c0a64;
LAB_009c0a48:
        bVar10 = false;
        if (bVar13) goto LAB_009c0a84;
LAB_009c0a50:
        bVar13 = false;
        if (!bVar7) goto LAB_009c09e8;
LAB_009c0aa4:
        if (iVar24 + param_2 < param_2 - iVar24) {
          bVar26 = 0;
        }
        else {
          iVar27 = 0;
          bVar26 = 0;
          fVar30 = (fVar30 + fVar29) - fVar29;
          uVar1 = uVar16;
          do {
            if ((0 < (int)uVar1) && ((int)uVar1 < iVar6)) {
              iVar2 = iVar19 + iVar27;
              fVar32 = *(float *)(lVar4 + (ulong)uVar1 * 4);
              fVar31 = (float)NEON_fmadd((float)iVar2 - fVar28,(float)iVar2 - fVar28,fVar30 * fVar30
                                        );
              if (SQRT(fVar31) <= fVar32) {
                bVar26 = 1;
                *(float *)(lVar4 + (ulong)uVar1 * 4) = SQRT(fVar31);
              }
              else if (fVar32 == 0.0) {
                bVar9 = param_2 < iVar2 & bVar9;
                bVar8 = iVar2 < param_2 & bVar8;
              }
            }
            iVar27 = iVar27 + 1;
            uVar1 = uVar1 + uVar5;
          } while (iVar20 != iVar27);
        }
        bVar7 = (bool)((bVar9 | bVar8) & bVar26);
      }
      else {
        bVar25 = false;
        if (!bVar10) goto LAB_009c0a48;
LAB_009c0a64:
        if (iVar24 + param_1 < param_1 - iVar24) {
          bVar26 = 0;
        }
        else {
          iVar27 = 0;
          bVar26 = 0;
          fVar31 = (fVar30 + fVar28) - fVar28;
          do {
            uVar1 = iVar23 + iVar27;
            if ((0 < (int)uVar1) && ((int)uVar1 < iVar6)) {
              iVar2 = iVar21 + iVar27;
              fVar33 = *(float *)(lVar4 + (ulong)uVar1 * 4);
              fVar32 = (float)NEON_fmadd(fVar31,fVar31,
                                         ((float)iVar2 - fVar29) * ((float)iVar2 - fVar29));
              if (SQRT(fVar32) <= fVar33) {
                bVar26 = 1;
                *(float *)(lVar4 + (ulong)uVar1 * 4) = SQRT(fVar32);
              }
              else if (fVar33 == 0.0) {
                bVar12 = param_1 < iVar2 & bVar12;
                bVar11 = iVar2 < param_1 & bVar11;
              }
            }
            iVar27 = iVar27 + 1;
          } while (iVar20 != iVar27);
        }
        bVar10 = (bool)((bVar12 | bVar11) & bVar26);
        if (!bVar13) goto LAB_009c0a50;
LAB_009c0a84:
        if (iVar24 + param_2 < param_2 - iVar24) {
          bVar26 = 0;
        }
        else {
          iVar27 = 0;
          bVar26 = 0;
          fVar31 = (fVar29 - fVar30) - fVar29;
          uVar1 = uVar22;
          do {
            if ((0 < (int)uVar1) && ((int)uVar1 < iVar6)) {
              iVar2 = iVar19 + iVar27;
              fVar33 = *(float *)(lVar4 + (ulong)uVar1 * 4);
              fVar32 = (float)NEON_fmadd((float)iVar2 - fVar28,(float)iVar2 - fVar28,fVar31 * fVar31
                                        );
              if (SQRT(fVar32) <= fVar33) {
                bVar26 = 1;
                *(float *)(lVar4 + (ulong)uVar1 * 4) = SQRT(fVar32);
              }
              else if (fVar33 == 0.0) {
                bVar15 = param_2 < iVar2 & bVar15;
                bVar14 = iVar2 < param_2 & bVar14;
              }
            }
            iVar27 = iVar27 + 1;
            uVar1 = uVar1 + uVar5;
          } while (iVar20 != iVar27);
        }
        bVar13 = (bool)((bVar15 | bVar14) & bVar26);
        if (bVar7) goto LAB_009c0aa4;
LAB_009c09e8:
        bVar7 = false;
      }
      iVar24 = iVar24 + 1;
      iVar20 = iVar20 + 2;
      iVar21 = iVar21 + -1;
      iVar19 = iVar19 + -1;
      uVar22 = uVar22 + ~uVar5;
      fVar30 = (float)iVar24;
      iVar23 = iVar23 + (uVar5 - 1);
      uVar16 = uVar16 + (1 - uVar5);
    } while (fVar30 < *(float *)(lVar3 + 0x30));
  }
  return;
}


