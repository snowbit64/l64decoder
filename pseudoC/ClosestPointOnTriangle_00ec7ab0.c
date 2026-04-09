// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ClosestPointOnTriangle
// Entry Point: 00ec7ab0
// Size: 676 bytes
// Signature: undefined __cdecl ClosestPointOnTriangle(XVector3 * param_1, XVector3 * param_2, XVector3 * param_3, XVector3 * param_4, double * param_5, double * param_6)


/* aabbtree::ClosestPointOnTriangle(aabbtree::XVector3<double> const&, aabbtree::XVector3<double>
   const&, aabbtree::XVector3<double> const&, aabbtree::XVector3<double> const&, double&, double&)
    */

undefined  [16]
aabbtree::ClosestPointOnTriangle
          (XVector3 *param_1,XVector3 *param_2,XVector3 *param_3,XVector3 *param_4,double *param_5,
          double *param_6)

{
  double dVar1;
  double dVar6;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  dVar13 = *(double *)(param_1 + 2);
  dVar11 = *(double *)param_1;
  dVar12 = *(double *)param_4;
  dVar19 = *(double *)(param_4 + 2);
  dVar8 = *(double *)param_2 - dVar11;
  dVar9 = *(double *)(param_2 + 2) - dVar13;
  dVar15 = *(double *)(param_1 + 4);
  dVar18 = *(double *)(param_4 + 4);
  dVar1 = *(double *)param_3 - dVar11;
  dVar6 = *(double *)(param_3 + 2) - dVar13;
  dVar10 = *(double *)(param_2 + 4) - dVar15;
  dVar7 = *(double *)(param_3 + 4) - dVar15;
  dVar16 = (double)NEON_fmadd(dVar10,dVar18 - dVar15,
                              (dVar19 - dVar13) * dVar9 + (dVar12 - dVar11) * dVar8);
  dVar11 = (double)NEON_fmadd(dVar7,dVar18 - dVar15,
                              (dVar19 - dVar13) * dVar6 + (dVar12 - dVar11) * dVar1);
  if ((dVar16 <= 0.0) && (dVar11 <= 0.0)) {
    *param_5 = 0.0;
    *param_6 = 0.0;
    return *(undefined (*) [16])param_1;
  }
  dVar13 = dVar12 - *(double *)param_2;
  dVar20 = dVar18 - *(double *)(param_2 + 4);
  dVar15 = dVar19 - *(double *)(param_2 + 2);
  uVar17 = NEON_fmadd(dVar8,dVar13,dVar9 * dVar15);
  uVar14 = NEON_fmadd(dVar1,dVar13,dVar6 * dVar15);
  dVar15 = (double)NEON_fmadd(dVar10,dVar20,uVar17);
  dVar13 = (double)NEON_fmadd(dVar7,dVar20,uVar14);
  if (0.0 <= dVar15 && dVar13 < dVar15 || 0.0 <= dVar15 && dVar13 == dVar15) {
    *param_5 = 1.0;
    *param_6 = 0.0;
    return *(undefined (*) [16])param_2;
  }
  dVar20 = (double)NEON_fmadd(dVar16,dVar13,dVar11 * -dVar15);
  if (((dVar15 <= 0.0) && (0.0 <= dVar16)) && (dVar20 <= 0.0)) {
    *param_5 = dVar16 / (dVar16 - dVar15);
    *param_6 = 0.0;
    auVar2._0_8_ = *(double *)param_1 + dVar8 * *param_5;
    auVar2._8_8_ = *(double *)(param_1 + 2) + dVar9 * *param_5;
    return auVar2;
  }
  dVar12 = dVar12 - *(double *)param_3;
  dVar18 = dVar18 - *(double *)(param_3 + 4);
  dVar19 = dVar19 - *(double *)(param_3 + 2);
  uVar17 = NEON_fmadd(dVar1,dVar12,dVar6 * dVar19);
  uVar14 = NEON_fmadd(dVar8,dVar12,dVar9 * dVar19);
  dVar7 = (double)NEON_fmadd(dVar7,dVar18,uVar17);
  dVar10 = (double)NEON_fmadd(dVar10,dVar18,uVar14);
  if ((0.0 <= dVar7) && (dVar10 <= dVar7)) {
    *param_5 = 0.0;
    *param_6 = 1.0;
    return *(undefined (*) [16])param_3;
  }
  dVar12 = (double)NEON_fmadd(dVar10,dVar11,dVar7 * -dVar16);
  if (((dVar7 <= 0.0) && (0.0 <= dVar11)) && (dVar12 <= 0.0)) {
    *param_5 = 0.0;
    dVar11 = dVar11 / (dVar11 - dVar7);
    *param_6 = dVar11;
    auVar3._0_8_ = dVar1 * dVar11 + *(double *)param_1;
    auVar3._8_8_ = dVar6 * dVar11 + *(double *)(param_1 + 2);
    return auVar3;
  }
  dVar11 = (double)NEON_fmadd(dVar15,dVar7,dVar13 * -dVar10);
  if (((dVar11 <= 0.0) && (dVar13 = dVar13 - dVar15, 0.0 <= dVar13)) && (0.0 <= dVar10 - dVar7)) {
    dVar13 = dVar13 / (dVar13 + (dVar10 - dVar7));
    *param_6 = dVar13;
    *param_5 = 1.0 - dVar13;
    auVar5._0_8_ = *(double *)param_2 + (*(double *)param_3 - *(double *)param_2) * *param_6;
    auVar5._8_8_ = *(double *)(param_2 + 2) +
                   (*(double *)(param_3 + 2) - *(double *)(param_2 + 2)) * *param_6;
    return auVar5;
  }
  dVar11 = 1.0 / (dVar20 + dVar11 + dVar12);
  dVar20 = dVar20 * dVar11;
  *param_5 = dVar12 * dVar11;
  *param_6 = dVar20;
  auVar4._0_8_ = dVar1 * dVar20 + *(double *)param_1 + dVar8 * *param_5;
  auVar4._8_8_ = dVar6 * dVar20 + *(double *)(param_1 + 2) + dVar9 * *param_5;
  return auVar4;
}


