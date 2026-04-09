// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_eulerToMatrixDX
// Entry Point: 00eb4be0
// Size: 236 bytes
// Signature: undefined __cdecl fm_eulerToMatrixDX(float param_1, float param_2, float param_3, float * param_4)


/* FLOAT_MATH::fm_eulerToMatrixDX(float, float, float, float*) */

void FLOAT_MATH::fm_eulerToMatrixDX(float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  param_4[3] = 0.0;
  param_4[0xf] = 1.0;
  param_4[7] = 0.0;
  *(undefined8 *)(param_4 + 0xd) = 0;
  *(undefined8 *)(param_4 + 0xb) = 0;
  sincosf(param_3,&fStack_54,&local_58);
  sincosf(param_2,&fStack_4c,&local_50);
  sincosf(param_1,&fStack_44,&local_48);
  param_4[8] = local_48 * fStack_4c;
  param_4[9] = -fStack_44;
  fVar4 = (float)NEON_fmadd(local_58,local_50,fStack_4c * fStack_44 * fStack_54);
  fVar2 = (float)NEON_fmsub(local_58,fStack_4c,local_50 * fStack_44 * fStack_54);
  fVar1 = (float)NEON_fmsub(fStack_54,local_50,fStack_4c * fStack_44 * local_58);
  fVar3 = (float)NEON_fmadd(fStack_54,fStack_4c,local_50 * fStack_44 * local_58);
  param_4[10] = local_48 * local_50;
  *param_4 = fVar4;
  param_4[1] = local_48 * fStack_54;
  param_4[2] = fVar2;
  param_4[4] = fVar1;
  param_4[5] = local_48 * local_58;
  param_4[6] = fVar3;
  return;
}


