// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_multiplyQuat
// Entry Point: 00ebab04
// Size: 96 bytes
// Signature: undefined __cdecl fm_multiplyQuat(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_multiplyQuat(float const*, float const*, float*) */

void FLOAT_MATH::fm_multiplyQuat(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  
  fVar1 = *param_1;
  fVar5 = param_1[1];
  fVar8 = param_2[2];
  fVar2 = param_2[3];
  fVar4 = *param_2;
  fVar12 = param_2[1];
  fVar7 = param_1[2];
  fVar10 = param_1[3];
  uVar9 = NEON_fmadd(fVar10,fVar4,fVar2 * fVar1);
  uVar11 = NEON_fmadd(fVar10,fVar12,fVar2 * fVar5);
  uVar3 = NEON_fmadd(fVar10,fVar2,fVar4 * -fVar1);
  uVar6 = NEON_fmadd(fVar10,fVar8,fVar2 * fVar7);
  uVar9 = NEON_fmadd(fVar5,fVar8,uVar9);
  uVar11 = NEON_fmadd(fVar7,fVar4,uVar11);
  uVar3 = NEON_fmsub(fVar5,fVar12,uVar3);
  uVar6 = NEON_fmadd(fVar1,fVar12,uVar6);
  fVar10 = (float)NEON_fmsub(fVar12,fVar7,uVar9);
  fVar1 = (float)NEON_fmsub(fVar8,fVar1,uVar11);
  fVar2 = (float)NEON_fmsub(fVar7,fVar8,uVar3);
  fVar4 = (float)NEON_fmsub(fVar4,fVar5,uVar6);
  *param_3 = fVar10;
  param_3[1] = fVar1;
  param_3[2] = fVar4;
  param_3[3] = fVar2;
  return;
}


