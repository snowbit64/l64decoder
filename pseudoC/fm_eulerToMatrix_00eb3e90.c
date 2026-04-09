// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_eulerToMatrix
// Entry Point: 00eb3e90
// Size: 352 bytes
// Signature: undefined __cdecl fm_eulerToMatrix(float param_1, float param_2, float param_3, float * param_4)


/* FLOAT_MATH::fm_eulerToMatrix(float, float, float, float*) */

void FLOAT_MATH::fm_eulerToMatrix(float param_1,float param_2,float param_3,float *param_4)

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
  float fVar11;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  sincosf(param_1 * 0.5,&fStack_44,&local_48);
  sincosf(param_2 * 0.5,&fStack_4c,&local_50);
  sincosf(param_3 * 0.5,&fStack_54,&local_58);
  param_4[7] = 0.0;
  param_4[3] = 0.0;
  *(undefined8 *)(param_4 + 0xd) = 0;
  *(undefined8 *)(param_4 + 0xb) = 0;
  fVar4 = (float)NEON_fmadd(fStack_44,local_50 * local_58,fStack_4c * fStack_54 * -local_48);
  fVar1 = (float)NEON_fmadd(local_48,local_50 * fStack_54,fStack_4c * local_58 * -fStack_44);
  fVar5 = (float)NEON_fmadd(local_48,fStack_4c * local_58,fStack_44 * local_50 * fStack_54);
  fVar2 = (float)NEON_fmadd(local_48,local_50 * local_58,fStack_44 * fStack_4c * fStack_54);
  param_4[0xf] = 1.0;
  fVar11 = fVar4 * fVar5 - fVar1 * fVar2;
  fVar7 = fVar4 * fVar5 + fVar1 * fVar2;
  fVar8 = fVar4 * fVar1 + fVar5 * fVar2;
  fVar9 = fVar4 * fVar1 - fVar5 * fVar2;
  fVar10 = fVar5 * fVar1 - fVar4 * fVar2;
  fVar2 = fVar5 * fVar1 + fVar4 * fVar2;
  fVar3 = (float)NEON_fmadd(fVar5 * fVar5 + fVar1 * fVar1,0xc0000000,0x3f800000);
  fVar6 = (float)NEON_fmadd(fVar4 * fVar4 + fVar1 * fVar1,0xc0000000,0x3f800000);
  fVar1 = (float)NEON_fmadd(fVar4 * fVar4 + fVar5 * fVar5,0xc0000000,0x3f800000);
  *param_4 = fVar3;
  param_4[1] = fVar7 + fVar7;
  param_4[4] = fVar11 + fVar11;
  param_4[5] = fVar6;
  param_4[6] = fVar2 + fVar2;
  param_4[10] = fVar1;
  param_4[8] = fVar8 + fVar8;
  param_4[9] = fVar10 + fVar10;
  param_4[2] = fVar9 + fVar9;
  return;
}


