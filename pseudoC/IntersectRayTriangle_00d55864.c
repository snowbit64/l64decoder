// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IntersectRayTriangle
// Entry Point: 00d55864
// Size: 620 bytes
// Signature: undefined __cdecl IntersectRayTriangle(Vec3 * param_1, Vec3 * param_2, Vec3 * param_3, Vec3 * param_4, Vec3 * param_5, double * param_6)


/* HACD::IntersectRayTriangle(HACD::Vec3<double> const&, HACD::Vec3<double> const&,
   HACD::Vec3<double> const&, HACD::Vec3<double> const&, HACD::Vec3<double> const&, double&) */

bool HACD::IntersectRayTriangle
               (Vec3 *param_1,Vec3 *param_2,Vec3 *param_3,Vec3 *param_4,Vec3 *param_5,
               double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  *param_6 = 0.0;
  dVar2 = *(double *)(param_5 + 8) - *(double *)(param_3 + 8);
  dVar1 = *(double *)(param_5 + 0x10) - *(double *)(param_3 + 0x10);
  dVar3 = *(double *)param_5 - *(double *)param_3;
  dVar5 = *(double *)param_4 - *(double *)param_5;
  dVar4 = *(double *)(param_4 + 8) - *(double *)(param_5 + 8);
  dVar12 = (double)NEON_fmadd(*(double *)(param_2 + 0x10),dVar3,dVar1 * -*(double *)param_2);
  uVar14 = NEON_fmadd(*(double *)(param_2 + 8),dVar1,dVar2 * -*(double *)(param_2 + 0x10));
  dVar6 = *(double *)(param_4 + 0x10) - *(double *)(param_5 + 0x10);
  uVar10 = NEON_fmadd(*(double *)param_2,dVar2,dVar3 * -*(double *)(param_2 + 8));
  uVar14 = NEON_fmadd(dVar5,uVar14,dVar4 * dVar12);
  dVar12 = (double)NEON_fmadd(dVar6,uVar10,uVar14);
  if ((dVar12 < 1e-09) && (-1e-09 < dVar12)) {
    return false;
  }
  dVar11 = *(double *)param_1 - *(double *)param_3;
  dVar9 = *(double *)(param_1 + 8) - *(double *)(param_3 + 8);
  dVar7 = *(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10);
  dVar8 = (double)NEON_fmadd(dVar7,dVar5,dVar6 * -dVar11);
  uVar10 = NEON_fmadd(dVar9,dVar6,dVar4 * -dVar7);
  uVar14 = NEON_fmadd(dVar11,dVar4,dVar5 * -dVar9);
  uVar10 = NEON_fmadd(dVar3,uVar10,dVar2 * dVar8);
  dVar7 = (double)NEON_fmadd(dVar1,uVar14,uVar10);
  dVar7 = dVar7 / dVar12;
  *param_6 = dVar7;
  if (dVar7 < 0.0) {
    return false;
  }
  dVar12 = (double)NEON_fmadd(dVar6,dVar3,dVar1 * -dVar5);
  uVar10 = NEON_fmadd(dVar4,dVar1,dVar2 * -dVar6);
  uVar14 = NEON_fmadd(dVar5,dVar2,dVar3 * -dVar4);
  dVar15 = dVar7 * *(double *)param_2 + *(double *)param_1;
  uVar10 = NEON_fmadd(uVar10,uVar10,dVar12 * dVar12);
  dVar19 = *(double *)(param_3 + 8) - *(double *)(param_4 + 8);
  dVar18 = *(double *)(param_3 + 0x10) - *(double *)(param_4 + 0x10);
  dVar8 = (double)NEON_fmadd(uVar14,uVar14,uVar10);
  dVar9 = dVar7 * *(double *)(param_2 + 0x10) + *(double *)(param_1 + 0x10);
  dVar11 = dVar15 - *(double *)param_3;
  dVar12 = dVar7 * *(double *)(param_2 + 8) + *(double *)(param_1 + 8);
  dVar7 = *(double *)param_3 - *(double *)param_4;
  dVar16 = dVar9 - *(double *)(param_3 + 0x10);
  dVar13 = dVar12 - *(double *)(param_3 + 8);
  dVar17 = (double)NEON_fmadd(dVar16,dVar7,dVar18 * -dVar11);
  uVar14 = NEON_fmadd(dVar13,dVar18,dVar19 * -dVar16);
  dVar16 = dVar12 - *(double *)(param_4 + 8);
  uVar10 = NEON_fmadd(dVar11,dVar19,dVar7 * -dVar13);
  uVar14 = NEON_fmadd(uVar14,uVar14,dVar17 * dVar17);
  dVar13 = dVar9 - *(double *)(param_4 + 0x10);
  dVar7 = (double)NEON_fmadd(uVar10,uVar10,uVar14);
  dVar11 = dVar15 - *(double *)param_4;
  uVar14 = NEON_fmadd(dVar16,dVar6,dVar4 * -dVar13);
  dVar6 = (double)NEON_fmadd(dVar13,dVar5,dVar6 * -dVar11);
  uVar10 = NEON_fmadd(dVar11,dVar4,dVar5 * -dVar16);
  uVar14 = NEON_fmadd(uVar14,uVar14,dVar6 * dVar6);
  dVar4 = (double)NEON_fmadd(uVar10,uVar10,uVar14);
  dVar5 = (double)NEON_fmadd(dVar9 - *(double *)(param_5 + 0x10),dVar3,
                             dVar1 * -(dVar15 - *(double *)param_5));
  uVar10 = NEON_fmadd(dVar12 - *(double *)(param_5 + 8),dVar1,
                      dVar2 * -(dVar9 - *(double *)(param_5 + 0x10)));
  uVar14 = NEON_fmadd(dVar15 - *(double *)param_5,dVar2,dVar3 * -(dVar12 - *(double *)(param_5 + 8))
                     );
  uVar10 = NEON_fmadd(uVar10,uVar10,dVar5 * dVar5);
  dVar1 = (double)NEON_fmadd(uVar14,uVar14,uVar10);
  dVar1 = ((SQRT(dVar8) - SQRT(dVar7)) - SQRT(dVar4)) - SQRT(dVar1);
  return dVar1 < 1e-06 && -1e-06 < dVar1;
}


