// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_quatToMatrix
// Entry Point: 00eb40b4
// Size: 188 bytes
// Signature: undefined __cdecl fm_quatToMatrix(float * param_1, float * param_2)


/* FLOAT_MATH::fm_quatToMatrix(float const*, float*) */

void FLOAT_MATH::fm_quatToMatrix(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar5 = param_1[3];
  param_2[7] = 0.0;
  param_2[3] = 0.0;
  fVar6 = fVar1 * fVar2 - fVar3 * fVar5;
  fVar10 = fVar1 * fVar3 + fVar2 * fVar5;
  fVar7 = fVar1 * fVar2 + fVar3 * fVar5;
  fVar8 = fVar1 * fVar3 - fVar2 * fVar5;
  fVar9 = fVar2 * fVar3 - fVar1 * fVar5;
  fVar5 = fVar2 * fVar3 + fVar1 * fVar5;
  fVar4 = (float)NEON_fmadd(fVar2 * fVar2 + fVar3 * fVar3,0xc0000000,0x3f800000);
  fVar3 = (float)NEON_fmadd(fVar1 * fVar1 + fVar3 * fVar3,0xc0000000,0x3f800000);
  *(undefined8 *)(param_2 + 0xd) = 0;
  *param_2 = fVar4;
  param_2[4] = fVar6 + fVar6;
  fVar1 = (float)NEON_fmadd(fVar1 * fVar1 + fVar2 * fVar2,0xc0000000,0x3f800000);
  param_2[8] = fVar10 + fVar10;
  param_2[1] = fVar7 + fVar7;
  param_2[5] = fVar3;
  param_2[9] = fVar9 + fVar9;
  param_2[2] = fVar8 + fVar8;
  param_2[6] = fVar5 + fVar5;
  param_2[10] = fVar1;
  *(undefined8 *)(param_2 + 0xb) = 0;
  param_2[0xf] = 1.0;
  return;
}


