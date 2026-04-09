// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: planeBoxOverlap
// Entry Point: 00ec5798
// Size: 160 bytes
// Signature: undefined __cdecl planeBoxOverlap(double * param_1, double * param_2, double * param_3)


/* aabbtree::planeBoxOverlap(double*, double*, double*) */

bool aabbtree::planeBoxOverlap(double *param_1,double *param_2,double *param_3)

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
  
  dVar2 = *param_3;
  dVar5 = param_3[1];
  dVar1 = *param_1;
  dVar3 = param_1[1];
  dVar6 = param_3[2];
  dVar4 = param_1[2];
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
  uVar8 = NEON_fmadd(dVar1,dVar9 - *param_2,dVar3 * (dVar7 - param_2[1]));
  dVar9 = (double)NEON_fmadd(dVar4,dVar10 - param_2[2],uVar8);
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
  uVar8 = NEON_fmadd(dVar1,dVar2 - *param_2,dVar3 * (dVar5 - param_2[1]));
  dVar2 = (double)NEON_fmadd(dVar4,dVar6 - param_2[2],uVar8);
  return 0.0 <= dVar2;
}


