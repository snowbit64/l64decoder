// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillTerrainHeights
// Entry Point: 0072a4f4
// Size: 308 bytes
// Signature: undefined __thiscall fillTerrainHeights(VehicleNavigationMapGenerator * this, uint param_1, uint param_2, PhysicsTask * param_3)


/* VehicleNavigationMapGenerator::fillTerrainHeights(unsigned int, unsigned int,
   VehicleNavigationMapGenerator::PhysicsTask*) */

void __thiscall
VehicleNavigationMapGenerator::fillTerrainHeights
          (VehicleNavigationMapGenerator *this,uint param_1,uint param_2,PhysicsTask *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  lVar1 = *(long *)(this + 0x110);
  fVar13 = *(float *)(*(long *)(this + 0x108) + 0xc0);
  fVar6 = (float)BaseTerrain::getTerrainHalfSize();
  fVar6 = fVar6 + fVar6;
  lVar5 = 0;
  fVar9 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(this + 0x108) + 0xc4));
  fVar11 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(this + 0x108) + 200));
  uVar2 = 0;
  uVar14 = NEON_fmadd((float)(ulong)param_1,fVar13 * 64.0,fVar9 * -0.5);
  uVar15 = NEON_fmadd((float)(ulong)param_2,fVar13 * 64.0,fVar11 * -0.5);
  do {
    uVar3 = 0;
    fVar9 = (float)NEON_fmadd((float)(uVar2 & 0xffffffff),fVar13,uVar14);
    lVar4 = lVar5;
    do {
      fVar11 = (float)NEON_fmadd((float)(uVar3 & 0xffffffff),fVar13,uVar15);
      fVar10 = fVar9 / *(float *)(lVar1 + 0x218) + *(float *)(lVar1 + 0x204);
      fVar12 = fVar11 / *(float *)(lVar1 + 0x218) + *(float *)(lVar1 + 0x204);
      fVar11 = fVar6;
      if (fVar10 <= fVar6) {
        fVar11 = fVar10;
      }
      fVar7 = 0.0;
      if (0.0 <= fVar10) {
        fVar7 = fVar11;
      }
      fVar11 = fVar6;
      if (fVar12 <= fVar6) {
        fVar11 = fVar12;
      }
      fVar10 = 0.0;
      if (0.0 <= fVar12) {
        fVar10 = fVar11;
      }
      uVar8 = BaseTerrain::getInterpolatedHeightAtPoint((BaseTerrain *)(lVar1 + 0x170),fVar7,fVar10)
      ;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(*(long *)(param_3 + 0x20) + lVar4) = uVar8;
      lVar4 = lVar4 + 0x104;
    } while (uVar3 != 0x41);
    uVar2 = uVar2 + 1;
    lVar5 = lVar5 + 4;
  } while (uVar2 != 0x41);
  return;
}


