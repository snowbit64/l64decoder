// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCollisionGeometryStraight
// Entry Point: 00722d10
// Size: 520 bytes
// Signature: undefined __cdecl getCollisionGeometryStraight(uint param_1, float * param_2, float * param_3, float param_4, float param_5, Matrix4x4 * param_6, Vector3 * param_7, Vector3 * param_8, Vector3 * param_9)


/* VehicleCollisionDistanceUtil::getCollisionGeometryStraight(unsigned int, float*, float*, float,
   float, Matrix4x4&, Vector3&, Vector3&, Vector3 (&) [4]) */

void VehicleCollisionDistanceUtil::getCollisionGeometryStraight
               (uint param_1,float *param_2,float *param_3,float param_4,float param_5,
               Matrix4x4 *param_6,Vector3 *param_7,Vector3 *param_8,Vector3 *param_9)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar5 = param_2[2];
  fVar3 = *param_2;
  fVar4 = param_2[1];
  pfVar1 = param_2 + (param_1 * 3 - 3);
  fVar7 = *param_3;
  fVar9 = param_3[1];
  uVar14 = NEON_fmadd(fVar7,fVar7,fVar9 * fVar9);
  fVar10 = param_3[2];
  fVar12 = (float)NEON_fmadd(fVar10,fVar10,uVar14);
  fVar15 = 1.0;
  uVar14 = NEON_fmadd(fVar7,*pfVar1 - fVar3,(pfVar1[1] - fVar4) * fVar9);
  fVar6 = 1.0;
  fVar2 = (float)NEON_fmadd(fVar10,pfVar1[2] - fVar5,uVar14);
  if (1e-06 < fVar12) {
    fVar15 = 1.0 / SQRT(fVar12);
  }
  fVar7 = fVar7 * fVar15;
  fVar9 = fVar9 * fVar15;
  fVar10 = fVar10 * fVar15;
  *(undefined4 *)(param_6 + 0xc) = 0;
  *(undefined4 *)param_6 = 0x3f800000;
  *(undefined4 *)(param_6 + 0x1c) = 0;
  uVar14 = NEON_fmadd(fVar7,fVar7,fVar9 * fVar9);
  *(undefined4 *)(param_6 + 0x2c) = 0;
  *(undefined4 *)(param_6 + 0x3c) = 0x3f800000;
  fVar3 = fVar3 + fVar2 * fVar7 * 0.5;
  fVar12 = (float)NEON_fmadd(fVar10,fVar10,uVar14);
  fVar4 = fVar4 + fVar2 * fVar9 * 0.5;
  fVar5 = fVar5 + fVar2 * fVar10 * 0.5;
  *(float *)(param_6 + 0x30) = fVar3;
  *(float *)(param_6 + 0x34) = fVar4;
  *(float *)(param_6 + 0x38) = fVar5;
  if (1e-06 < fVar12) {
    fVar6 = 1.0 / SQRT(fVar12);
  }
  fVar10 = fVar10 * fVar6;
  fVar11 = fVar7 * fVar6;
  fVar9 = fVar9 * fVar6;
  fVar12 = 1.0;
  fVar16 = (float)NEON_fmadd(fVar11,0,fVar10 * -0.0);
  fVar17 = (float)NEON_fnmsub(fVar9,0,fVar11);
  fVar15 = fVar10 + fVar9 * -0.0;
  uVar14 = NEON_fmadd(fVar15,fVar15,fVar16 * fVar16);
  fVar18 = (float)NEON_fmadd(fVar17,fVar17,uVar14);
  if (1e-06 < fVar18) {
    fVar12 = 1.0 / SQRT(fVar18);
  }
  fVar16 = fVar16 * fVar12;
  fVar17 = fVar17 * fVar12;
  fVar15 = fVar15 * fVar12;
  *(float *)(param_6 + 0x24) = fVar9;
  *(float *)(param_6 + 0x28) = fVar10;
  *(float *)(param_6 + 0x20) = fVar11;
  *(float *)param_6 = fVar15;
  *(float *)(param_6 + 4) = fVar16;
  *(float *)(param_6 + 8) = fVar17;
  uVar13 = NEON_fmadd(fVar9,fVar17,fVar16 * -fVar10);
  uVar14 = NEON_fmadd(fVar10,fVar15,fVar17 * -(fVar7 * fVar6));
  uVar8 = NEON_fmadd(fVar11,fVar16,fVar15 * -fVar9);
  *(undefined4 *)(param_6 + 0x10) = uVar13;
  *(undefined4 *)(param_6 + 0x14) = uVar14;
  fVar6 = param_4 * 0.5;
  *(undefined4 *)(param_6 + 0x18) = uVar8;
  fVar7 = param_5 * 0.5;
  *(float *)param_7 = fVar3;
  fVar3 = -(fVar2 * 0.5);
  *(float *)(param_7 + 4) = fVar4;
  *(float *)(param_7 + 8) = fVar5;
  *(float *)param_8 = fVar6;
  *(float *)(param_8 + 4) = fVar7;
  *(float *)(param_8 + 8) = fVar2 * 0.5;
  *(float *)param_9 = fVar6;
  *(float *)(param_9 + 4) = fVar7;
  *(float *)(param_9 + 8) = fVar3;
  *(float *)(param_9 + 0xc) = -(param_4 * 0.5);
  *(float *)(param_9 + 0x10) = fVar7;
  *(float *)(param_9 + 0x14) = fVar3;
  *(float *)(param_9 + 0x18) = fVar6;
  *(float *)(param_9 + 0x1c) = -(param_5 * 0.5);
  *(float *)(param_9 + 0x20) = fVar3;
  *(float *)(param_9 + 0x24) = -(param_4 * 0.5);
  *(float *)(param_9 + 0x28) = -(param_5 * 0.5);
  *(float *)(param_9 + 0x2c) = fVar3;
  return;
}


