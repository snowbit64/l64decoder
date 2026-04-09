// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_quatToEuler
// Entry Point: 00eb3d78
// Size: 280 bytes
// Signature: undefined __cdecl fm_quatToEuler(float * param_1, float * param_2, float * param_3, float * param_4)


/* FLOAT_MATH::fm_quatToEuler(float const*, float&, float&, float&) */

void FLOAT_MATH::fm_quatToEuler(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float __y;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar11 = 1.0;
  fVar5 = 0.0;
  fVar4 = param_1[3] + param_1[3];
  fVar6 = -(fVar1 + fVar1);
  __y = (float)NEON_fmadd(fVar4,fVar2,fVar3 * fVar6);
  fVar8 = (float)NEON_fmsub(__y,__y,0x3f800000);
  fVar10 = SQRT(fVar8);
  if (ABS(fVar8) <= 0.001) {
    fVar10 = 0.0;
  }
  if (ABS(fVar10) <= 0.001) {
    uVar7 = NEON_fmadd(fVar6,fVar1,0x3f800000);
    fVar6 = (float)NEON_fmadd(fVar4,fVar1,fVar2 * -2.0 * fVar3);
    fVar8 = (float)NEON_fmadd(fVar3 * -2.0,fVar3,uVar7);
  }
  else {
    fVar11 = fVar2 + fVar2;
    fVar10 = 1.0 / fVar10;
    uVar7 = NEON_fmadd(fVar6,fVar1,0x3f800000);
    uVar9 = NEON_fmsub(fVar11,fVar2,0x3f800000);
    fVar8 = (float)NEON_fmsub(fVar11,fVar2,uVar7);
    fVar6 = (float)NEON_fmadd(fVar11,fVar3,fVar1 * fVar4);
    fVar5 = (float)NEON_fmadd(fVar1 + fVar1,fVar2,fVar3 * fVar4);
    fVar11 = (float)NEON_fmadd(fVar3 * -2.0,fVar3,uVar9);
    fVar6 = fVar6 * fVar10;
    fVar8 = fVar8 * fVar10;
    fVar5 = fVar5 * fVar10;
    fVar11 = fVar11 * fVar10;
  }
  fVar1 = atan2f(fVar6,fVar8);
  *param_2 = fVar1;
  fVar10 = atan2f(__y,fVar10);
  *param_3 = fVar10;
  fVar10 = atan2f(fVar5,fVar11);
  *param_4 = fVar10;
  return;
}


