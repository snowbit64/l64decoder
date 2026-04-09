// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IntersectLineLine
// Entry Point: 00d55ad0
// Size: 352 bytes
// Signature: undefined __cdecl IntersectLineLine(Vec3 * param_1, Vec3 * param_2, Vec3 * param_3, Vec3 * param_4, Vec3 * param_5, Vec3 * param_6, double * param_7, double * param_8)


/* HACD::IntersectLineLine(HACD::Vec3<double> const&, HACD::Vec3<double> const&, HACD::Vec3<double>
   const&, HACD::Vec3<double> const&, HACD::Vec3<double>&, HACD::Vec3<double>&, double&, double&) */

undefined8
HACD::IntersectLineLine
          (Vec3 *param_1,Vec3 *param_2,Vec3 *param_3,Vec3 *param_4,Vec3 *param_5,Vec3 *param_6,
          double *param_7,double *param_8)

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
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  
  dVar3 = *(double *)param_4 - *(double *)param_3;
  dVar2 = *(double *)(param_4 + 8) - *(double *)(param_3 + 8);
  dVar1 = *(double *)(param_4 + 0x10) - *(double *)(param_3 + 0x10);
  if (((dVar3 == 0.0) && (dVar2 == 0.0)) && (dVar1 == 0.0)) {
    return 0;
  }
  dVar10 = *(double *)param_2 - *(double *)param_1;
  dVar7 = *(double *)(param_2 + 8) - *(double *)(param_1 + 8);
  dVar5 = *(double *)(param_2 + 0x10) - *(double *)(param_1 + 0x10);
  if (((dVar10 == 0.0) && (dVar7 == 0.0)) && (dVar5 == 0.0)) {
    return 0;
  }
  dVar13 = (double)NEON_fmadd(dVar3,dVar10,dVar2 * dVar7);
  uVar12 = NEON_fmadd(dVar3,dVar3,dVar2 * dVar2);
  uVar15 = NEON_fmadd(dVar10,dVar10,dVar7 * dVar7);
  dVar11 = (double)NEON_fmadd(dVar1,dVar5,dVar13);
  dVar14 = (double)NEON_fnmadd(dVar1,dVar5,-dVar13);
  dVar13 = (double)NEON_fmadd(dVar1,dVar1,uVar12);
  uVar12 = NEON_fmadd(dVar5,dVar5,uVar15);
  dVar14 = (double)NEON_fmadd(uVar12,dVar13,dVar11 * dVar14);
  if (dVar14 == 0.0) {
    return 0;
  }
  dVar8 = *(double *)(param_1 + 8) - *(double *)(param_3 + 8);
  dVar6 = *(double *)param_1 - *(double *)param_3;
  dVar4 = *(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10);
  dVar9 = (double)NEON_fmadd(dVar6,dVar10,dVar8 * dVar7);
  uVar12 = NEON_fmadd(dVar6,dVar3,dVar8 * dVar2);
  dVar6 = (double)NEON_fnmadd(dVar4,dVar5,-dVar9);
  uVar12 = NEON_fmadd(dVar4,dVar1,uVar12);
  dVar4 = (double)NEON_fmadd(uVar12,dVar11,dVar13 * dVar6);
  dVar11 = (double)NEON_fmadd(dVar11,dVar4 / dVar14,uVar12);
  *param_7 = dVar4 / dVar14;
  *param_8 = dVar11 / dVar13;
  uVar12 = NEON_fmadd(*param_7,dVar10,*(undefined8 *)param_1);
  *(undefined8 *)param_5 = uVar12;
  uVar12 = NEON_fmadd(*param_7,dVar7,*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_5 + 8) = uVar12;
  uVar12 = NEON_fmadd(*param_7,dVar5,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_5 + 0x10) = uVar12;
  uVar12 = NEON_fmadd(*param_8,dVar3,*(undefined8 *)param_3);
  *(undefined8 *)param_6 = uVar12;
  uVar12 = NEON_fmadd(*param_8,dVar2,*(undefined8 *)(param_3 + 8));
  *(undefined8 *)(param_6 + 8) = uVar12;
  uVar12 = NEON_fmadd(*param_8,dVar1,*(undefined8 *)(param_3 + 0x10));
  *(undefined8 *)(param_6 + 0x10) = uVar12;
  return 1;
}


