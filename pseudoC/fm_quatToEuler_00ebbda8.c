// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_quatToEuler
// Entry Point: 00ebbda8
// Size: 276 bytes
// Signature: undefined __cdecl fm_quatToEuler(double * param_1, double * param_2, double * param_3, double * param_4)


/* FLOAT_MATH::fm_quatToEuler(double const*, double&, double&, double&) */

void FLOAT_MATH::fm_quatToEuler(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double __x;
  double __y;
  double dVar9;
  double dVar10;
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar9 = 1.0;
  dVar3 = param_1[2];
  dVar10 = 0.0;
  dVar4 = param_1[3] + param_1[3];
  dVar5 = -(dVar1 + dVar1);
  __y = (double)NEON_fmadd(dVar4,dVar2,dVar3 * dVar5);
  dVar7 = (double)NEON_fmsub(__y,__y,0x3ff0000000000000);
  __x = SQRT(dVar7);
  if (ABS(dVar7) <= 0.001000000047497451) {
    __x = 0.0;
  }
  if (ABS(__x) <= 0.001000000047497451) {
    uVar6 = NEON_fmadd(dVar5,dVar1,0x3ff0000000000000);
    dVar5 = (double)NEON_fmadd(dVar4,dVar1,dVar2 * -2.0 * dVar3);
    dVar7 = (double)NEON_fmadd(dVar3 * -2.0,dVar3,uVar6);
  }
  else {
    dVar9 = dVar2 + dVar2;
    __x = 1.0 / __x;
    uVar6 = NEON_fmadd(dVar5,dVar1,0x3ff0000000000000);
    uVar8 = NEON_fmsub(dVar9,dVar2,0x3ff0000000000000);
    dVar7 = (double)NEON_fmsub(dVar9,dVar2,uVar6);
    dVar5 = (double)NEON_fmadd(dVar9,dVar3,dVar1 * dVar4);
    dVar10 = (double)NEON_fmadd(dVar1 + dVar1,dVar2,dVar3 * dVar4);
    dVar9 = (double)NEON_fmadd(dVar3 * -2.0,dVar3,uVar8);
    dVar5 = dVar5 * __x;
    dVar7 = dVar7 * __x;
    dVar10 = dVar10 * __x;
    dVar9 = dVar9 * __x;
  }
  dVar1 = atan2(dVar5,dVar7);
  *param_2 = dVar1;
  dVar1 = atan2(__y,__x);
  *param_3 = dVar1;
  dVar1 = atan2(dVar10,dVar9);
  *param_4 = dVar1;
  return;
}


