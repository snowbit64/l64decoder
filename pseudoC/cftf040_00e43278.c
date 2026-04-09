// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cftf040
// Entry Point: 00e43278
// Size: 116 bytes
// Signature: undefined __cdecl cftf040(float * param_1)


/* fftimpl::cftf040(float*) */

void fftimpl::cftf040(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *param_1 + param_1[4];
  fVar7 = param_1[1] + param_1[5];
  fVar1 = *param_1 - param_1[4];
  fVar2 = param_1[1] - param_1[5];
  fVar6 = param_1[2] + param_1[6];
  fVar8 = param_1[3] + param_1[7];
  fVar3 = param_1[3] - param_1[7];
  fVar4 = param_1[2] - param_1[6];
  *param_1 = fVar5 + fVar6;
  param_1[1] = fVar7 + fVar8;
  param_1[2] = fVar1 - fVar3;
  param_1[3] = fVar2 + fVar4;
  param_1[4] = fVar5 - fVar6;
  param_1[5] = fVar7 - fVar8;
  param_1[6] = fVar1 + fVar3;
  param_1[7] = fVar2 - fVar4;
  return;
}


