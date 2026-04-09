// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInterpolatedNormalAtPoint
// Entry Point: 00a71d78
// Size: 736 bytes
// Signature: undefined __thiscall getInterpolatedNormalAtPoint(TerrainFillDataPlane * this, float param_1, float param_2, float * param_3)


/* TerrainFillDataPlane::getInterpolatedNormalAtPoint(float, float, float*) */

void __thiscall
TerrainFillDataPlane::getInterpolatedNormalAtPoint
          (TerrainFillDataPlane *this,float param_1,float param_2,float *param_3)

{
  BaseTerrain *this_00;
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  this_00 = (BaseTerrain *)(*(long *)(this + 0x40) + 0x170);
  fVar7 = (float)BaseTerrain::getUnitsPerPixel();
  fVar8 = (float)BaseTerrain::getTerrainHalfSize();
  fVar13 = param_1 / fVar7 + fVar8;
  fVar8 = param_2 / fVar7 + fVar8;
  if (*(int *)(this + 0x8c) == 0) {
    BaseTerrain::getInterpolatedNormalAtPoint(this_00,fVar13,fVar8,param_3);
  }
  else {
    uVar4 = DensityMap::getSquareSize();
    fVar9 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x68));
    fVar11 = (float)NEON_ucvtf(*(undefined4 *)(this + 100));
    fVar13 = (fVar13 * fVar9) / fVar11;
    if ((0.0 <= fVar13) && (fVar8 = (fVar8 * fVar9) / fVar11, 0.0 <= fVar8)) {
      uVar2 = uVar4 - 1;
      fVar12 = (float)(ulong)uVar2;
      if (fVar13 <= fVar12 && fVar8 == fVar12 || fVar13 <= fVar12 && fVar8 < fVar12) {
        fVar11 = fVar11 / fVar9;
        uVar5 = (uint)fVar13;
        uVar6 = (uint)fVar8;
        uVar1 = uVar2;
        if (uVar5 < uVar2) {
          uVar1 = uVar5 + 1;
        }
        fVar14 = (float)NEON_ucvtf((int)fVar13);
        fVar13 = fVar13 - fVar14;
        fVar12 = *(float *)(this + 0x90) /
                 (float)(ulong)(uint)~(-1 << (ulong)(*(uint *)(this + 0x8c) & 0x1f));
        fVar9 = (float)NEON_ucvtf((int)fVar8);
        if (uVar6 < uVar2) {
          uVar2 = uVar6 + 1;
        }
        fVar7 = fVar7 * fVar11;
        fVar8 = fVar8 - fVar9;
        getDensityHeightNormal
                  (this,uVar1,uVar6,fVar11 * (float)(ulong)uVar1,fVar11 * fVar9,uVar4,fVar11,fVar7,
                   fVar12,this_00,(float *)&local_b8);
        getDensityHeightNormal
                  (this,uVar5,uVar2,fVar11 * fVar14,fVar11 * (float)(ulong)uVar2,uVar4,fVar11,fVar7,
                   fVar12,this_00,(float *)&local_c8);
        fVar15 = fVar13 + fVar8;
        if (fVar15 <= 1.0) {
          getDensityHeightNormal
                    (this,uVar5,uVar6,fVar11 * fVar14,fVar11 * fVar9,uVar4,fVar11,fVar7,fVar12,
                     this_00,(float *)&local_d8);
          fVar15 = (1.0 - fVar13) - fVar8;
        }
        else {
          getDensityHeightNormal
                    (this,uVar1,uVar2,fVar11 * (float)(ulong)uVar1,fVar11 * (float)(ulong)uVar2,
                     uVar4,fVar11,fVar7,fVar12,this_00,(float *)&local_d8);
          fVar7 = 1.0 - fVar8;
          fVar8 = 1.0 - fVar13;
          fVar15 = fVar15 + -1.0;
          fVar13 = fVar7;
        }
        uVar10 = NEON_fmadd(local_b0,fVar13,fVar8 * local_c0);
        fVar7 = (float)NEON_fmadd(local_d0,fVar15,uVar10);
        *(ulong *)param_3 =
             CONCAT44((float)((ulong)local_c8 >> 0x20) * fVar8 +
                      (float)((ulong)local_b8 >> 0x20) * fVar13 +
                      (float)((ulong)local_d8 >> 0x20) * fVar15,
                      (float)local_c8 * fVar8 + (float)local_b8 * fVar13 + (float)local_d8 * fVar15)
        ;
        param_3[2] = fVar7;
        goto LAB_00a72014;
      }
    }
    param_3[2] = 0.0;
    *(undefined8 *)param_3 = 0x3f80000000000000;
  }
LAB_00a72014:
  if (*(long *)(lVar3 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


