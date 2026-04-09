// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079b7dc
// Entry Point: 0079b7dc
// Size: 416 bytes
// Signature: undefined FUN_0079b7dc(void)


void FUN_0079b7dc(long param_1,uint param_2,float *param_3)

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
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = *(float *)(param_1 + (ulong)(param_2 + 4) * 0x10);
  fVar2 = *(float *)(param_1 + (ulong)(param_2 + 5) * 0x10);
  fVar3 = *(float *)(param_1 + (ulong)(param_2 + 3) * 0x10);
  fVar5 = *(float *)(param_1 + (ulong)(param_2 + 6) * 0x10);
  fVar6 = *(float *)(param_1 + (ulong)(param_2 + 7) * 0x10);
  fVar7 = *(float *)(param_1 + (ulong)(param_2 + 8) * 0x10);
  fVar9 = (float)NEON_fnmadd(fVar3,fVar6,-(fVar5 * -fVar1));
  uVar12 = NEON_fmadd(fVar3,fVar3,fVar1 * fVar1);
  fVar10 = (float)NEON_fnmadd(fVar1,fVar7,-(fVar6 * -fVar2));
  fVar4 = (float)NEON_fmadd(fVar1,fVar7,fVar6 * -fVar2);
  fVar15 = (float)NEON_fnmadd(fVar2,fVar5,-(fVar7 * -fVar3));
  fVar7 = (float)NEON_fmadd(fVar2,fVar5,fVar7 * -fVar3);
  fVar5 = (float)NEON_fmadd(fVar3,fVar6,fVar5 * -fVar1);
  fVar11 = (float)NEON_fmadd(fVar2,fVar2,uVar12);
  fVar8 = (float)NEON_fmadd(fVar7,fVar2,fVar1 * fVar9);
  fVar6 = (float)NEON_fmadd(fVar5,fVar3,fVar2 * fVar10);
  fVar9 = (float)NEON_fmadd(fVar4,fVar1,fVar3 * fVar15);
  fVar10 = 1.0;
  fVar15 = 1.0;
  if (1e-06 < fVar11) {
    fVar15 = 1.0 / SQRT(fVar11);
  }
  uVar12 = NEON_fmadd(fVar8,fVar8,fVar6 * fVar6);
  fVar11 = (float)NEON_fmadd(fVar9,fVar9,uVar12);
  if (1e-06 < fVar11) {
    fVar10 = 1.0 / SQRT(fVar11);
  }
  uVar12 = NEON_fmadd(fVar4,fVar4,fVar7 * fVar7);
  fVar13 = (float)NEON_fmadd(fVar5,fVar5,uVar12);
  fVar11 = 1.0;
  if (1e-06 < fVar13) {
    fVar11 = 1.0 / SQRT(fVar13);
  }
  fVar14 = *(float *)(param_1 + (ulong)param_2 * 0x10);
  fVar13 = *(float *)(param_1 + (ulong)(param_2 + 1) * 0x10);
  fVar16 = *(float *)(param_1 + (ulong)(param_2 + 2) * 0x10);
  *param_3 = fVar3 * fVar15;
  param_3[1] = fVar1 * fVar15;
  param_3[2] = fVar2 * fVar15;
  param_3[3] = 0.0;
  param_3[7] = 0.0;
  param_3[4] = fVar8 * fVar10;
  param_3[5] = fVar6 * fVar10;
  param_3[6] = fVar9 * fVar10;
  param_3[8] = fVar4 * fVar11;
  param_3[9] = fVar7 * fVar11;
  param_3[0xb] = 0.0;
  param_3[10] = fVar5 * fVar11;
  param_3[0xc] = fVar14;
  param_3[0xd] = fVar13;
  param_3[0xe] = fVar16;
  param_3[0xf] = 1.0;
  return;
}


