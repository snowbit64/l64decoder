// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayFromToTriangle
// Entry Point: 00f868f0
// Size: 380 bytes
// Signature: undefined __cdecl rayFromToTriangle(btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, btVector3 * param_5, btVector3 * param_6, float param_7)


/* btSoftBody::RayFromToCaster::rayFromToTriangle(btVector3 const&, btVector3 const&, btVector3
   const&, btVector3 const&, btVector3 const&, btVector3 const&, float) */

float btSoftBody::RayFromToCaster::rayFromToTriangle
                (btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4,
                btVector3 *param_5,btVector3 *param_6,float param_7)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  fVar11 = *(float *)(param_4 + 4);
  fVar12 = *(float *)(param_4 + 8);
  fVar13 = *(float *)param_4;
  fVar1 = *(float *)(param_5 + 8) - fVar12;
  fVar3 = *(float *)(param_6 + 4) - fVar11;
  fVar16 = *(float *)param_5 - fVar13;
  fVar4 = *(float *)(param_6 + 8) - fVar12;
  fVar15 = *(float *)(param_5 + 4) - fVar11;
  fVar18 = *(float *)param_6 - fVar13;
  fVar6 = (float)NEON_fnmsub(fVar4,fVar15,fVar3 * fVar1);
  uVar5 = NEON_fnmsub(fVar18,fVar1,fVar4 * fVar16);
  fVar3 = (float)NEON_fnmsub(fVar3,fVar16,fVar18 * fVar15);
  uVar2 = NEON_fmadd(uVar5,*(undefined4 *)(param_3 + 4),fVar6 * *(float *)param_3);
  fVar1 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 8),fVar3,uVar2);
  if (1.192093e-07 <= ABS(fVar1)) {
    uVar2 = NEON_fmadd(fVar6,fVar13,fVar3 * fVar12);
    uVar20 = NEON_fmadd(*(undefined4 *)(param_1 + 4),uVar5,*(float *)param_1 * fVar6);
    fVar4 = (float)NEON_fmadd(uVar5,fVar11,uVar2);
    fVar15 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),fVar3,uVar20);
    fVar1 = (fVar4 - fVar15) / fVar1;
    if (1.192093e-06 < fVar1 && fVar1 < param_7) {
      fVar4 = (float)NEON_fmadd(fVar1,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_1 + 4));
      fVar18 = (float)NEON_fmadd(fVar1,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_1 + 8));
      fVar16 = (float)NEON_fmadd(fVar1,*(float *)param_3,*(float *)param_1);
      fVar12 = fVar12 - fVar18;
      fVar14 = *(float *)(param_5 + 4) - fVar4;
      fVar11 = fVar11 - fVar4;
      fVar9 = *(float *)(param_5 + 8) - fVar18;
      fVar4 = *(float *)(param_6 + 4) - fVar4;
      fVar13 = fVar13 - fVar16;
      fVar8 = *(float *)param_5 - fVar16;
      fVar18 = *(float *)(param_6 + 8) - fVar18;
      fVar16 = *(float *)param_6 - fVar16;
      fVar15 = (float)NEON_fnmsub(fVar9,fVar11,fVar14 * fVar12);
      fVar17 = (float)NEON_fnmsub(fVar18,fVar14,fVar4 * fVar9);
      uVar2 = NEON_fnmsub(fVar8,fVar12,fVar13 * fVar9);
      uVar10 = NEON_fnmsub(fVar16,fVar9,fVar8 * fVar18);
      fVar9 = (float)NEON_fnmsub(fVar12,fVar4,fVar11 * fVar18);
      uVar19 = NEON_fnmsub(fVar13,fVar14,fVar8 * fVar11);
      uVar7 = NEON_fnmsub(fVar13,fVar18,fVar16 * fVar12);
      uVar20 = NEON_fmadd(uVar2,uVar5,fVar15 * fVar6);
      uVar2 = NEON_fnmsub(fVar8,fVar4,fVar16 * fVar14);
      uVar10 = NEON_fmadd(uVar10,uVar5,fVar17 * fVar6);
      fVar12 = (float)NEON_fmadd(uVar19,fVar3,uVar20);
      uVar20 = NEON_fnmsub(fVar16,fVar11,fVar13 * fVar4);
      uVar5 = NEON_fmadd(uVar7,uVar5,fVar9 * fVar6);
      fVar4 = (float)NEON_fmadd(uVar2,fVar3,uVar10);
      fVar3 = (float)NEON_fmadd(uVar20,fVar3,uVar5);
      if ((((-1.192093e-06 < fVar12 && fVar4 != -1.192093e-06) &&
           (fVar12 <= -1.192093e-06 || fVar4 >= -1.192093e-06)) && fVar3 != -1.192093e-06) &&
          (((fVar12 <= -1.192093e-06 || fVar4 == -1.192093e-06) ||
           -1.192093e-06 < fVar12 && fVar4 < -1.192093e-06) || -1.192093e-06 <= fVar3)) {
        return fVar1;
      }
    }
  }
  return -1.0;
}


