// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cftf081
// Entry Point: 00e42f8c
// Size: 308 bytes
// Signature: undefined __cdecl cftf081(float * param_1)


/* fftimpl::cftf081(float*) */

void fftimpl::cftf081(float *param_1)

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
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar15 = param_1[2] - param_1[10];
  fVar16 = param_1[3] - param_1[0xb];
  fVar17 = param_1[6] - param_1[0xe];
  fVar18 = param_1[7] - param_1[0xf];
  fVar8 = *param_1 + param_1[8];
  fVar9 = param_1[1] + param_1[9];
  fVar13 = param_1[4] + param_1[0xc];
  fVar1 = *param_1 - param_1[8];
  fVar2 = param_1[1] - param_1[9];
  fVar3 = param_1[5] + param_1[0xd];
  fVar4 = param_1[5] - param_1[0xd];
  fVar7 = fVar15 - fVar18;
  fVar11 = fVar16 + fVar17;
  fVar5 = param_1[4] - param_1[0xc];
  fVar6 = fVar8 + fVar13;
  fVar8 = fVar8 - fVar13;
  fVar14 = fVar9 + fVar3;
  fVar9 = fVar9 - fVar3;
  fVar10 = fVar1 - fVar4;
  fVar1 = fVar1 + fVar4;
  fVar15 = fVar15 + fVar18;
  fVar16 = fVar16 - fVar17;
  fVar12 = fVar2 + fVar5;
  fVar2 = fVar2 - fVar5;
  fVar4 = param_1[2] + param_1[10];
  fVar3 = param_1[6] + param_1[0xe];
  fVar13 = (fVar7 - fVar11) * 0.7071068;
  fVar5 = (fVar11 + fVar7) * 0.7071068;
  fVar11 = param_1[3] + param_1[0xb];
  fVar17 = param_1[7] + param_1[0xf];
  fVar18 = fVar4 + fVar3;
  fVar4 = fVar4 - fVar3;
  fVar7 = (fVar16 + fVar15) * 0.7071068;
  fVar3 = (fVar15 - fVar16) * 0.7071068;
  fVar15 = fVar11 + fVar17;
  fVar11 = fVar11 - fVar17;
  param_1[8] = fVar10 + fVar13;
  param_1[9] = fVar12 + fVar5;
  param_1[10] = fVar10 - fVar13;
  param_1[0xb] = fVar12 - fVar5;
  param_1[0xc] = fVar1 - fVar7;
  param_1[0xd] = fVar2 + fVar3;
  param_1[0xe] = fVar1 + fVar7;
  param_1[0xf] = fVar2 - fVar3;
  *param_1 = fVar6 + fVar18;
  param_1[1] = fVar14 + fVar15;
  param_1[2] = fVar6 - fVar18;
  param_1[3] = fVar14 - fVar15;
  param_1[4] = fVar8 - fVar11;
  param_1[5] = fVar9 + fVar4;
  param_1[6] = fVar8 + fVar11;
  param_1[7] = fVar9 - fVar4;
  return;
}


