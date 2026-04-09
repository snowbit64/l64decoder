// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IntersectRayTriangle2
// Entry Point: 00d55c30
// Size: 436 bytes
// Signature: undefined __cdecl IntersectRayTriangle2(Vec3 * param_1, Vec3 * param_2, Vec3 * param_3, Vec3 * param_4, Vec3 * param_5, double * param_6)


/* HACD::IntersectRayTriangle2(HACD::Vec3<double> const&, HACD::Vec3<double> const&,
   HACD::Vec3<double> const&, HACD::Vec3<double> const&, HACD::Vec3<double> const&, double&) */

ulong HACD::IntersectRayTriangle2
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
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  
  dVar7 = *(double *)param_3;
  dVar9 = *(double *)(param_3 + 8);
  dVar1 = *(double *)param_4 - dVar7;
  dVar8 = *(double *)(param_3 + 0x10);
  dVar6 = *(double *)(param_4 + 8) - dVar9;
  dVar5 = *(double *)(param_5 + 8) - dVar9;
  dVar2 = *(double *)(param_4 + 0x10) - dVar8;
  dVar3 = *(double *)(param_5 + 0x10) - dVar8;
  dVar4 = *(double *)param_5 - dVar7;
  dVar12 = (double)NEON_fmadd(dVar2,dVar4,dVar3 * -dVar1);
  uVar10 = NEON_fmadd(dVar6,dVar3,dVar5 * -dVar2);
  uVar11 = NEON_fmadd(dVar1,dVar5,dVar4 * -dVar6);
  uVar14 = NEON_fmadd(uVar10,uVar10,dVar12 * dVar12);
  dVar15 = (double)NEON_fmadd(uVar11,uVar11,uVar14);
  if (SQRT(dVar15) == 0.0) {
    return 0xffffffffffffffff;
  }
  uVar14 = NEON_fmadd(uVar10,*(undefined8 *)param_2,dVar12 * *(double *)(param_2 + 8));
  uVar10 = NEON_fmsub(uVar10,*(double *)param_1 - dVar7,(*(double *)(param_1 + 8) - dVar9) * -dVar12
                     );
  dVar9 = (double)NEON_fmadd(uVar11,*(undefined8 *)(param_2 + 0x10),uVar14);
  dVar7 = (double)NEON_fmsub(uVar11,*(double *)(param_1 + 0x10) - dVar8,uVar10);
  if (dVar9 == 0.0) {
    return (ulong)(dVar7 == 0.0) << 1;
  }
  dVar7 = dVar7 / dVar9;
  *param_6 = dVar7;
  if (dVar7 < 0.0) {
    return 0;
  }
  dVar15 = (double)NEON_fmadd(dVar4,dVar4,dVar5 * dVar5);
  dVar9 = (dVar7 * *(double *)(param_2 + 8) + *(double *)(param_1 + 8)) - *(double *)(param_3 + 8);
  dVar8 = (dVar7 * *(double *)(param_2 + 0x10) + *(double *)(param_1 + 0x10)) -
          *(double *)(param_3 + 0x10);
  dVar7 = (dVar7 * *(double *)param_2 + *(double *)param_1) - *(double *)param_3;
  dVar13 = (double)NEON_fmadd(dVar3,dVar3,dVar15);
  uVar11 = NEON_fmadd(dVar7,dVar1,dVar6 * dVar9);
  dVar12 = (double)NEON_fmadd(dVar1,dVar1,dVar6 * dVar6);
  uVar10 = NEON_fmadd(dVar1,dVar4,dVar6 * dVar5);
  uVar14 = NEON_fmadd(dVar7,dVar4,dVar5 * dVar9);
  dVar1 = (double)NEON_fmadd(dVar8,dVar2,uVar11);
  dVar4 = (double)NEON_fnmadd(dVar2,dVar2,-dVar12);
  dVar6 = (double)NEON_fnmadd(dVar3,dVar3,-dVar15);
  uVar10 = NEON_fmadd(dVar2,dVar3,uVar10);
  dVar5 = (double)NEON_fmadd(dVar8,dVar3,uVar14);
  dVar3 = (double)NEON_fmadd(uVar10,uVar10,dVar13 * dVar4);
  dVar2 = (double)NEON_fmadd(uVar10,dVar5,dVar1 * dVar6);
  dVar2 = dVar2 / dVar3;
  if ((dVar2 < 0.0 || dVar2 != 1.0) && (dVar2 < 0.0 || 1.0 <= dVar2)) {
    return 0;
  }
  dVar1 = (double)NEON_fmadd(uVar10,dVar1,dVar5 * dVar4);
  return (ulong)(0.0 <= dVar1 / dVar3 && dVar2 + dVar1 / dVar3 <= 1.0);
}


