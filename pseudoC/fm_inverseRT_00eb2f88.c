// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_inverseRT
// Entry Point: 00eb2f88
// Size: 108 bytes
// Signature: undefined __cdecl fm_inverseRT(float * param_1, float * param_2, float * param_3)


/* FLOAT_MATH::fm_inverseRT(float const*, float const*, float*) */

void FLOAT_MATH::fm_inverseRT(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_2[1] - param_1[0xd];
  fVar4 = *param_2 - param_1[0xc];
  fVar5 = param_2[2] - param_1[0xe];
  uVar2 = NEON_fmadd(*param_1,fVar4,fVar1 * param_1[1]);
  fVar3 = (float)NEON_fmadd(param_1[2],fVar5,uVar2);
  *param_3 = fVar3;
  uVar2 = NEON_fmadd(param_1[4],fVar4,fVar1 * param_1[5]);
  fVar3 = (float)NEON_fmadd(param_1[6],fVar5,uVar2);
  param_3[1] = fVar3;
  uVar2 = NEON_fmadd(param_1[8],fVar4,fVar1 * param_1[9]);
  fVar1 = (float)NEON_fmadd(param_1[10],fVar5,uVar2);
  param_3[2] = fVar1;
  return;
}


