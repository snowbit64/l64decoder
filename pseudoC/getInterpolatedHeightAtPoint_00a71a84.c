// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInterpolatedHeightAtPoint
// Entry Point: 00a71a84
// Size: 556 bytes
// Signature: undefined __thiscall getInterpolatedHeightAtPoint(TerrainFillDataPlane * this, float param_1, float param_2, float * param_3)


/* TerrainFillDataPlane::getInterpolatedHeightAtPoint(float, float, float&) */

undefined  [16] __thiscall
TerrainFillDataPlane::getInterpolatedHeightAtPoint
          (TerrainFillDataPlane *this,float param_1,float param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar4 = *(long *)(this + 0x40);
  fVar7 = (float)BaseTerrain::getUnitsPerPixel();
  fVar8 = (float)BaseTerrain::getTerrainHalfSize();
  fVar18 = param_1 / fVar7 + fVar8;
  fVar8 = param_2 / fVar7 + fVar8;
  if (*(int *)(this + 0x8c) == 0) {
    *param_3 = 0.0;
    auVar13 = BaseTerrain::getInterpolatedHeightAtPoint((BaseTerrain *)(lVar4 + 0x170),fVar18,fVar8)
    ;
    return auVar13;
  }
  iVar3 = DensityMap::getSquareSize();
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x68));
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(this + 100));
  fVar18 = (fVar18 * fVar7) / fVar14;
  if ((0.0 <= fVar18) && (fVar8 = (fVar8 * fVar7) / fVar14, 0.0 <= fVar8)) {
    uVar2 = iVar3 - 1;
    fVar16 = (float)(ulong)uVar2;
    if (fVar18 <= fVar16 && fVar8 == fVar16 || fVar18 <= fVar16 && fVar8 < fVar16) {
      uVar6 = (uint)fVar18;
      uVar5 = (uint)fVar8;
      uVar1 = uVar2;
      if (uVar6 < uVar2) {
        uVar1 = uVar6 + 1;
      }
      if (uVar5 < uVar2) {
        uVar2 = uVar5 + 1;
      }
      fVar17 = *(float *)(this + 0x90) /
               (float)(ulong)(uint)~(-1 << (ulong)(*(uint *)(this + 0x8c) & 0x1f));
      fVar16 = (float)NEON_ucvtf((int)fVar18);
      fVar15 = (float)NEON_ucvtf((int)fVar8);
      fVar16 = fVar18 - fVar16;
      fVar15 = fVar8 - fVar15;
      uVar9 = getDeltaDensityHeight(this,uVar1,uVar5,fVar17);
      fVar10 = (float)getDeltaDensityHeight(this,uVar6,uVar2,fVar17);
      if (fVar16 + fVar15 <= 1.0) {
        uVar11 = getDeltaDensityHeight(this,uVar6,uVar5,fVar17);
        uVar9 = NEON_fmadd(uVar9,fVar16,fVar15 * fVar10);
        fVar15 = (1.0 - fVar16) - fVar15;
      }
      else {
        uVar11 = getDeltaDensityHeight(this,uVar1,uVar2,fVar17);
        uVar9 = NEON_fmadd(uVar9,1.0 - fVar15,(1.0 - fVar16) * fVar10);
        fVar15 = fVar16 + fVar15 + -1.0;
      }
      fVar16 = (float)NEON_fmadd(uVar11,fVar15,uVar9);
      *param_3 = fVar16;
      fVar7 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                               ((BaseTerrain *)(lVar4 + 0x170),fVar18 * (fVar14 / fVar7),
                                fVar8 * (fVar14 / fVar7));
      uVar12 = (ulong)(uint)(fVar16 + fVar7);
      goto LAB_00a71c88;
    }
  }
  uVar12 = 0;
  *param_3 = 0.0;
LAB_00a71c88:
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar12;
  return auVar13;
}


