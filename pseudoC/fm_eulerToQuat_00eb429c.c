// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_eulerToQuat
// Entry Point: 00eb429c
// Size: 212 bytes
// Signature: undefined __cdecl fm_eulerToQuat(float * param_1, float * param_2)


/* FLOAT_MATH::fm_eulerToQuat(float const*, float*) */

void FLOAT_MATH::fm_eulerToQuat(float *param_1,float *param_2)

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
  
  fVar1 = param_1[1];
  fVar3 = param_1[2];
  sincosf(*param_1 * 0.5,&fStack_44,&local_48);
  sincosf(fVar1 * 0.5,&fStack_54,&local_58);
  sincosf(fVar3 * 0.5,&fStack_4c,&local_50);
  fVar2 = (float)NEON_fmadd(fStack_44,local_58 * local_50,fStack_54 * fStack_4c * -local_48);
  fVar4 = (float)NEON_fmadd(local_48,fStack_54 * local_50,fStack_44 * local_58 * fStack_4c);
  fVar1 = (float)NEON_fmadd(local_48,local_58 * fStack_4c,fStack_54 * local_50 * -fStack_44);
  fVar3 = (float)NEON_fmadd(local_48,local_58 * local_50,fStack_44 * fStack_54 * fStack_4c);
  *param_2 = fVar2;
  param_2[1] = fVar4;
  param_2[2] = fVar1;
  param_2[3] = fVar3;
  return;
}


