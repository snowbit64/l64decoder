// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_eulerToQuat
// Entry Point: 00eb3ff0
// Size: 196 bytes
// Signature: undefined __cdecl fm_eulerToQuat(float param_1, float param_2, float param_3, float * param_4)


/* FLOAT_MATH::fm_eulerToQuat(float, float, float, float*) */

void FLOAT_MATH::fm_eulerToQuat(float param_1,float param_2,float param_3,float *param_4)

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
  
  sincosf(param_1 * 0.5,&fStack_44,&local_48);
  sincosf(param_2 * 0.5,&fStack_4c,&local_50);
  sincosf(param_3 * 0.5,&fStack_54,&local_58);
  fVar3 = (float)NEON_fmadd(fStack_44,local_50 * local_58,fStack_4c * fStack_54 * -local_48);
  fVar4 = (float)NEON_fmadd(local_48,fStack_4c * local_58,fStack_44 * local_50 * fStack_54);
  fVar1 = (float)NEON_fmadd(local_48,local_50 * fStack_54,fStack_4c * local_58 * -fStack_44);
  fVar2 = (float)NEON_fmadd(local_48,local_50 * local_58,fStack_44 * fStack_4c * fStack_54);
  *param_4 = fVar3;
  param_4[1] = fVar4;
  param_4[2] = fVar1;
  param_4[3] = fVar2;
  return;
}


