// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cftf082
// Entry Point: 00e430c0
// Size: 440 bytes
// Signature: undefined __cdecl cftf082(float * param_1)


/* fftimpl::cftf082(float*) */

void fftimpl::cftf082(float *param_1)

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
  float fVar19;
  
  fVar1 = *param_1 - param_1[9];
  fVar2 = *param_1 + param_1[9];
  fVar14 = param_1[4] - param_1[0xd];
  fVar6 = param_1[4] + param_1[0xd];
  fVar17 = param_1[3] + param_1[10];
  fVar12 = param_1[1] + param_1[8];
  fVar16 = param_1[5] + param_1[0xc];
  fVar7 = param_1[5] - param_1[0xc];
  fVar9 = param_1[2] - param_1[0xb];
  fVar8 = param_1[7] + param_1[0xe];
  fVar3 = param_1[1] - param_1[8];
  fVar5 = param_1[6] - param_1[0xf];
  fVar19 = (float)NEON_fmadd(fVar9,0x3f6c835e,fVar17 * -0.3826834);
  fVar4 = param_1[3] - param_1[10];
  fVar10 = param_1[2] + param_1[0xb];
  fVar11 = (fVar14 - fVar16) * 0.7071068;
  fVar13 = (fVar14 + fVar16) * 0.7071068;
  fVar15 = (fVar6 - fVar7) * 0.7071068;
  fVar14 = (float)NEON_fmadd(fVar5,0x3ec3ef15,fVar8 * -0.9238795);
  fVar16 = (float)NEON_fmadd(fVar17,0x3f6c835e,fVar9 * 0.3826834);
  fVar17 = (float)NEON_fmadd(fVar8,0x3ec3ef15,fVar5 * 0.9238795);
  fVar8 = param_1[7] - param_1[0xe];
  fVar5 = (fVar6 + fVar7) * 0.7071068;
  fVar7 = param_1[6] + param_1[0xf];
  fVar18 = fVar1 + fVar11;
  fVar9 = fVar12 + fVar13;
  fVar6 = (float)NEON_fmadd(fVar10,0x3ec3ef15,fVar4 * -0.9238795);
  fVar4 = (float)NEON_fmadd(fVar4,0x3ec3ef15,fVar10 * 0.9238795);
  fVar1 = fVar1 - fVar11;
  fVar12 = fVar12 - fVar13;
  fVar10 = (float)NEON_fmadd(fVar7,0x3f6c835e,fVar8 * -0.3826834);
  fVar7 = (float)NEON_fmadd(fVar8,0x3f6c835e,fVar7 * 0.3826834);
  *param_1 = fVar18 + fVar19 + fVar14;
  param_1[1] = fVar9 + fVar16 + fVar17;
  fVar8 = fVar2 - fVar5;
  param_1[2] = fVar18 - (fVar19 + fVar14);
  param_1[3] = fVar9 - (fVar16 + fVar17);
  fVar9 = fVar3 + fVar15;
  fVar2 = fVar2 + fVar5;
  fVar3 = fVar3 - fVar15;
  param_1[4] = fVar1 - (fVar16 - fVar17);
  param_1[5] = fVar12 + (fVar19 - fVar14);
  param_1[6] = fVar1 + (fVar16 - fVar17);
  param_1[7] = fVar12 - (fVar19 - fVar14);
  param_1[10] = fVar8 - (fVar6 - fVar10);
  param_1[0xb] = fVar9 - (fVar4 - fVar7);
  param_1[8] = fVar8 + (fVar6 - fVar10);
  param_1[9] = fVar9 + (fVar4 - fVar7);
  param_1[0xc] = fVar2 - (fVar4 + fVar7);
  param_1[0xd] = fVar3 + fVar6 + fVar10;
  param_1[0xe] = fVar2 + fVar4 + fVar7;
  param_1[0xf] = fVar3 - (fVar6 + fVar10);
  return;
}


