// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PlaneBoxOverlap
// Entry Point: 00ec9748
// Size: 160 bytes
// Signature: undefined __cdecl PlaneBoxOverlap(Vec3 * param_1, Vec3 * param_2, Vec3 * param_3)


/* VHACD::PlaneBoxOverlap(VHACD::Vec3<double> const&, VHACD::Vec3<double> const&,
   VHACD::Vec3<double> const&) */

bool VHACD::PlaneBoxOverlap(Vec3 *param_1,Vec3 *param_2,Vec3 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  
  dVar2 = *(double *)param_3;
  dVar5 = *(double *)(param_3 + 8);
  dVar1 = *(double *)param_1;
  dVar3 = *(double *)(param_1 + 8);
  dVar6 = *(double *)(param_3 + 0x10);
  dVar4 = *(double *)(param_1 + 0x10);
  dVar9 = -dVar2;
  if (dVar1 <= 0.0) {
    dVar9 = dVar2;
  }
  dVar7 = -dVar5;
  if (dVar3 <= 0.0) {
    dVar7 = dVar5;
  }
  dVar10 = -dVar6;
  if (dVar4 <= 0.0) {
    dVar10 = dVar6;
  }
  uVar8 = NEON_fmadd(dVar1,dVar9 - *(double *)param_2,dVar3 * (dVar7 - *(double *)(param_2 + 8)));
  dVar9 = (double)NEON_fmadd(dVar4,dVar10 - *(double *)(param_2 + 0x10),uVar8);
  if (0.0 < dVar9) {
    return false;
  }
  if (dVar4 <= 0.0) {
    dVar6 = -dVar6;
  }
  if (dVar3 <= 0.0) {
    dVar5 = -dVar5;
  }
  if (dVar1 <= 0.0) {
    dVar2 = -dVar2;
  }
  uVar8 = NEON_fmadd(dVar1,dVar2 - *(double *)param_2,dVar3 * (dVar5 - *(double *)(param_2 + 8)));
  dVar2 = (double)NEON_fmadd(dVar4,dVar6 - *(double *)(param_2 + 0x10),uVar8);
  return 0.0 <= dVar2;
}


