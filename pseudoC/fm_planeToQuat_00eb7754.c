// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_planeToQuat
// Entry Point: 00eb7754
// Size: 324 bytes
// Signature: undefined __cdecl fm_planeToQuat(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_planeToQuat(float const*, float*, float*) */

void FLOAT_MATH::fm_planeToQuat(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar1 = 0.0;
  fVar5 = param_1[2];
  fVar3 = *param_1;
  fVar2 = param_1[1];
  uVar8 = NEON_fmadd(fVar3,0,fVar2);
  fVar9 = (float)NEON_fmadd(fVar5,0,uVar8);
  if (fVar9 <= -0.99999) {
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar3 = -1.0;
    *param_2 = 0.0;
  }
  else {
    fVar10 = SQRT(fVar9 + 1.0 + fVar9 + 1.0);
    fVar13 = 1.0 / fVar10;
    fVar9 = (float)NEON_fmadd(fVar3,0,fVar5 * -0.0);
    fVar3 = (float)NEON_fnmsub(fVar2,0,fVar3);
    fVar1 = (fVar5 + fVar2 * -0.0) * fVar13;
    fVar9 = fVar9 * fVar13;
    fVar3 = fVar3 * fVar13;
    fVar10 = fVar10 * 0.5;
    *param_2 = fVar1;
  }
  param_2[1] = fVar9;
  param_2[2] = fVar3;
  param_2[3] = fVar10;
  fVar6 = fVar1 * fVar9 - fVar3 * fVar10;
  fVar15 = fVar9 * fVar3 + fVar1 * fVar10;
  fVar11 = fVar1 * fVar9 + fVar3 * fVar10;
  fVar14 = fVar1 * fVar3 + fVar9 * fVar10;
  fVar13 = (float)NEON_fmadd(fVar1 * fVar1 + fVar3 * fVar3,0xc0000000,0x3f800000);
  fVar2 = fVar1 * fVar3 - fVar9 * fVar10;
  fVar5 = param_1[3];
  uVar8 = NEON_fmadd(fVar9 * fVar9 + fVar3 * fVar3,0xc0000000,0x3f800000);
  fVar3 = fVar9 * fVar3 - fVar1 * fVar10;
  uVar7 = NEON_fmadd(uVar8,0,fVar5 * (fVar6 + fVar6));
  uVar4 = NEON_fmadd(fVar11 + fVar11,0,fVar5 * fVar13);
  uVar12 = NEON_fmadd(fVar1 * fVar1 + fVar9 * fVar9,0xc0000000,0x3f800000);
  uVar8 = NEON_fmadd(fVar2 + fVar2,0,fVar5 * (fVar15 + fVar15));
  fVar2 = (float)NEON_fmadd(fVar14 + fVar14,0,uVar7);
  fVar3 = (float)NEON_fmadd(fVar3 + fVar3,0,uVar4);
  fVar1 = (float)NEON_fmadd(uVar12,0,uVar8);
  *param_3 = fVar2 + 0.0;
  param_3[1] = fVar3 + 0.0;
  param_3[2] = fVar1 + 0.0;
  return;
}


