// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayCastCallback
// Entry Point: 008eff60
// Size: 988 bytes
// Signature: undefined __thiscall rayCastCallback(GeoMipMappingTerrain * this, Vector3 * param_1, Vector3 * param_2, float * param_3, Vector3 * param_4, float param_5, float param_6)


/* GeoMipMappingTerrain::rayCastCallback(Vector3 const&, Vector3 const&, float&, Vector3&, float,
   float) */

undefined4 __thiscall
GeoMipMappingTerrain::rayCastCallback
          (GeoMipMappingTerrain *this,Vector3 *param_1,Vector3 *param_2,float *param_3,
          Vector3 *param_4,float param_5,float param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  fVar14 = (float)NEON_fmadd(*(undefined4 *)param_2,param_5,*(undefined4 *)param_1);
  fVar11 = (float)NEON_fmadd(*(undefined4 *)param_2,param_6,*(undefined4 *)param_1);
  fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),param_5,*(undefined4 *)(param_1 + 8));
  fVar9 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),param_6,*(undefined4 *)(param_1 + 8));
  fVar12 = fVar11;
  if (fVar14 <= fVar11) {
    fVar12 = fVar14;
  }
  if (fVar11 <= fVar14) {
    fVar11 = fVar14;
  }
  fVar14 = fVar9;
  if (fVar7 <= fVar9) {
    fVar14 = fVar7;
  }
  if (fVar9 <= fVar7) {
    fVar9 = fVar7;
  }
  fVar7 = (float)BaseTerrain::getUnitsPerPixel();
  fVar17 = 1.0 / fVar7;
  fVar8 = (float)BaseTerrain::getTerrainHalfSize();
  fVar10 = (float)NEON_fmadd(fVar11,fVar17,fVar8);
  fVar9 = (float)NEON_fmadd(fVar9,fVar17,fVar8);
  fVar13 = fVar8 + fVar8;
  fVar14 = (float)NEON_fmadd(fVar14,fVar17,fVar8);
  fVar11 = (float)(int)fVar10;
  if (fVar13 <= (float)(int)fVar10) {
    fVar11 = fVar13;
  }
  fVar10 = (float)(int)fVar9;
  if (fVar13 <= (float)(int)fVar9) {
    fVar10 = fVar13;
  }
  fVar9 = (float)(int)fVar14;
  if ((float)(int)fVar14 <= 0.0) {
    fVar9 = 0.0;
  }
  if ((uint)(int)fVar9 < (uint)(int)fVar10) {
    fVar12 = (float)NEON_fmadd(fVar12,fVar17,fVar8);
    local_f0 = 0;
    uVar5 = (int)fVar9;
    do {
      uVar1 = uVar5 + 1;
      if ((uint)(int)(float)(int)fVar12 < (uint)(int)fVar11) {
        fVar9 = fVar7 * ((float)(ulong)uVar5 - fVar8);
        uVar6 = (int)(float)(int)fVar12;
        do {
          fVar18 = fVar7 * ((float)(ulong)uVar6 - fVar8);
          fVar14 = (float)BaseTerrain::getScaledHeightAtPoint((BaseTerrain *)this,uVar6,uVar5);
          uVar2 = uVar6 + 1;
          fVar13 = (float)BaseTerrain::getScaledHeightAtPoint((BaseTerrain *)this,uVar2,uVar5);
          fVar17 = (float)BaseTerrain::getScaledHeightAtPoint((BaseTerrain *)this,uVar6,uVar1);
          local_e4 = (float)BaseTerrain::getScaledHeightAtPoint((BaseTerrain *)this,uVar2,uVar1);
          local_e8 = fVar7 + fVar18;
          local_e0 = fVar7 + fVar9;
          local_d8 = fVar18;
          fStack_d4 = fVar17;
          local_d0 = fVar7 + fVar9;
          local_c8 = local_e8;
          local_c4 = fVar13;
          local_c0 = fVar9;
          local_b8 = fVar18;
          fStack_b4 = fVar14;
          local_b0 = fVar9;
          uVar4 = MathUtil::rayTriangleIntersect3D
                            (param_1,param_2,(Vector3 *)&local_b8,(Vector3 *)&local_d8,
                             (Vector3 *)&local_c8,&local_ec);
          if (((uVar4 & 1) != 0) && (local_ec < *param_3)) {
            *param_3 = local_ec;
            fVar14 = (float)NEON_fmadd(local_d0 - local_b0,local_c8 - local_b8,
                                       (local_c0 - local_b0) * -(local_d8 - local_b8));
            fVar17 = (float)NEON_fmadd(fStack_d4 - fStack_b4,local_c0 - local_b0,
                                       (local_c4 - fStack_b4) * -(local_d0 - local_b0));
            fVar13 = (float)NEON_fmadd(local_d8 - local_b8,local_c4 - fStack_b4,
                                       (local_c8 - local_b8) * -(fStack_d4 - fStack_b4));
            uVar15 = NEON_fmadd(fVar17,fVar17,fVar14 * fVar14);
            fVar16 = (float)NEON_fmadd(fVar13,fVar13,uVar15);
            fVar18 = 1.0;
            if (1e-06 < fVar16) {
              fVar18 = 1.0 / SQRT(fVar16);
            }
            local_f0 = 1;
            *(float *)param_4 = fVar17 * fVar18;
            *(float *)(param_4 + 4) = fVar14 * fVar18;
            *(float *)(param_4 + 8) = fVar13 * fVar18;
          }
          uVar4 = MathUtil::rayTriangleIntersect3D
                            (param_1,param_2,(Vector3 *)&local_c8,(Vector3 *)&local_d8,
                             (Vector3 *)&local_e8,&local_ec);
          if (((uVar4 & 1) != 0) && (local_ec < *param_3)) {
            *param_3 = local_ec;
            fVar14 = (float)NEON_fmadd(local_d0 - local_c0,local_e8 - local_c8,
                                       (local_e0 - local_c0) * -(local_d8 - local_c8));
            fVar17 = (float)NEON_fmadd(fStack_d4 - local_c4,local_e0 - local_c0,
                                       (local_e4 - local_c4) * -(local_d0 - local_c0));
            fVar13 = (float)NEON_fmadd(local_d8 - local_c8,local_e4 - local_c4,
                                       (local_e8 - local_c8) * -(fStack_d4 - local_c4));
            uVar15 = NEON_fmadd(fVar17,fVar17,fVar14 * fVar14);
            fVar16 = (float)NEON_fmadd(fVar13,fVar13,uVar15);
            fVar18 = 1.0;
            if (1e-06 < fVar16) {
              fVar18 = 1.0 / SQRT(fVar16);
            }
            local_f0 = 1;
            *(float *)param_4 = fVar17 * fVar18;
            *(float *)(param_4 + 4) = fVar14 * fVar18;
            *(float *)(param_4 + 8) = fVar13 * fVar18;
          }
          uVar6 = uVar2;
        } while (uVar2 != (int)fVar11);
      }
      uVar5 = uVar1;
    } while (uVar1 != (int)fVar10);
  }
  else {
    local_f0 = 0;
  }
  if (*(long *)(lVar3 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_f0;
}


