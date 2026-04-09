// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_quatRotate
// Entry Point: 00eb4370
// Size: 152 bytes
// Signature: undefined __cdecl fm_quatRotate(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_quatRotate(float const*, float const*, float*) */

void FLOAT_MATH::fm_quatRotate(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  
  fVar7 = param_2[1];
  fVar1 = param_2[2];
  fVar3 = *param_1;
  fVar2 = param_1[1];
  fVar10 = param_1[2];
  fVar9 = param_1[3];
  fVar6 = *param_2;
  uVar4 = NEON_fmadd(fVar9,fVar6,fVar2 * fVar1);
  uVar11 = NEON_fmadd(fVar9,fVar7,fVar6 * fVar10);
  fVar5 = (float)NEON_fmsub(fVar7,fVar10,uVar4);
  uVar4 = NEON_fmsub(fVar3,fVar6,fVar7 * -fVar2);
  fVar12 = (float)NEON_fmsub(fVar1,fVar3,uVar11);
  uVar8 = NEON_fmsub(fVar10,fVar1,uVar4);
  uVar4 = NEON_fmadd(fVar9,fVar1,fVar7 * fVar3);
  uVar11 = NEON_fmsub(uVar8,fVar3,fVar9 * fVar5);
  fVar1 = (float)NEON_fmsub(fVar6,fVar2,uVar4);
  uVar4 = NEON_fmsub(fVar12,fVar10,uVar11);
  fVar2 = (float)NEON_fmadd(fVar2,fVar1,uVar4);
  *param_3 = fVar2;
  uVar4 = NEON_fmsub(uVar8,param_1[1],fVar12 * param_1[3]);
  uVar4 = NEON_fmsub(fVar1,*param_1,uVar4);
  fVar2 = (float)NEON_fmadd(param_1[2],fVar5,uVar4);
  param_3[1] = fVar2;
  uVar4 = NEON_fmsub(uVar8,param_1[2],fVar1 * param_1[3]);
  uVar4 = NEON_fmsub(fVar5,param_1[1],uVar4);
  fVar1 = (float)NEON_fmadd(*param_1,fVar12,uVar4);
  param_3[2] = fVar1;
  return;
}


