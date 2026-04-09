// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_planeToMatrix
// Entry Point: 00eb74c8
// Size: 356 bytes
// Signature: undefined __cdecl fm_planeToMatrix(float * param_1, float * param_2)


/* FLOAT_MATH::fm_planeToMatrix(float const*, float*) */

void FLOAT_MATH::fm_planeToMatrix(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar3 = param_1[2];
  fVar2 = *param_1;
  fVar1 = param_1[1];
  fVar7 = 0.0;
  fVar9 = -1.0;
  uVar4 = NEON_fmadd(fVar2,0,fVar1);
  fVar10 = (float)NEON_fmadd(fVar3,0,uVar4);
  fVar5 = 0.0;
  fVar11 = 0.0;
  if (-0.99999 < fVar10) {
    fVar7 = SQRT(fVar10 + 1.0 + fVar10 + 1.0);
    fVar10 = 1.0 / fVar7;
    fVar9 = (float)NEON_fnmsub(fVar1,0,fVar2);
    fVar11 = (float)NEON_fmadd(fVar2,0,fVar3 * -0.0);
    fVar7 = fVar7 * 0.5;
    fVar5 = (fVar3 + fVar1 * -0.0) * fVar10;
    fVar11 = fVar11 * fVar10;
    fVar9 = fVar9 * fVar10;
  }
  fVar13 = fVar5 * fVar11 + fVar9 * fVar7;
  fVar12 = fVar5 * fVar11 - fVar9 * fVar7;
  fVar14 = fVar11 * fVar9 - fVar5 * fVar7;
  fVar3 = fVar11 * fVar9 + fVar5 * fVar7;
  fVar2 = fVar5 * fVar9 + fVar11 * fVar7;
  fVar7 = fVar5 * fVar9 - fVar11 * fVar7;
  fVar13 = fVar13 + fVar13;
  fVar12 = fVar12 + fVar12;
  fVar14 = fVar14 + fVar14;
  fVar3 = fVar3 + fVar3;
  fVar10 = (float)NEON_fmadd(fVar11 * fVar11 + fVar9 * fVar9,0xc0000000,0x3f800000);
  fVar9 = (float)NEON_fmadd(fVar5 * fVar5 + fVar9 * fVar9,0xc0000000,0x3f800000);
  fVar2 = fVar2 + fVar2;
  fVar7 = fVar7 + fVar7;
  fVar1 = (float)NEON_fmadd(fVar5 * fVar5 + fVar11 * fVar11,0xc0000000,0x3f800000);
  param_2[6] = fVar3;
  *param_2 = fVar10;
  param_2[1] = fVar13;
  param_2[4] = fVar12;
  param_2[5] = fVar9;
  param_2[8] = fVar2;
  param_2[9] = fVar14;
  param_2[2] = fVar7;
  param_2[10] = fVar1;
  param_2[7] = 0.0;
  param_2[3] = 0.0;
  *(undefined8 *)(param_2 + 0xd) = 0;
  *(undefined8 *)(param_2 + 0xb) = 0;
  param_2[0xf] = 1.0;
  fVar5 = -param_1[3];
  uVar8 = NEON_fmadd(fVar10,0,fVar12 * fVar5);
  uVar4 = NEON_fmadd(fVar13,0,fVar9 * fVar5);
  uVar6 = NEON_fmadd(fVar7,0,fVar3 * fVar5);
  fVar2 = (float)NEON_fmadd(fVar2,0,uVar8);
  fVar9 = (float)NEON_fmadd(fVar14,0,uVar4);
  fVar1 = (float)NEON_fmadd(fVar1,0,uVar6);
  param_2[0xc] = fVar2 + 0.0;
  param_2[0xd] = fVar9 + 0.0;
  param_2[0xe] = fVar1 + 0.0;
  return;
}


