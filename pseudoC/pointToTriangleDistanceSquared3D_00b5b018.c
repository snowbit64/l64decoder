// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pointToTriangleDistanceSquared3D
// Entry Point: 00b5b018
// Size: 604 bytes
// Signature: undefined __cdecl pointToTriangleDistanceSquared3D(Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4)


/* MathUtil::pointToTriangleDistanceSquared3D(Vector3 const&, Vector3 const&, Vector3 const&,
   Vector3 const&) */

undefined4
MathUtil::pointToTriangleDistanceSquared3D
          (Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4)

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
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_2 + 8);
  fVar5 = *(float *)(param_3 + 4) - fVar2;
  fVar6 = *(float *)param_3 - fVar1;
  fVar9 = *(float *)(param_1 + 4) - fVar2;
  fVar11 = *(float *)param_1 - fVar1;
  fVar3 = *(float *)(param_4 + 4) - fVar2;
  fVar7 = *(float *)param_4 - fVar1;
  fVar19 = *(float *)(param_1 + 8) - fVar4;
  fVar8 = *(float *)(param_3 + 8) - fVar4;
  uVar12 = NEON_fmadd(fVar6,fVar6,fVar5 * fVar5);
  fVar13 = (float)NEON_fmadd(fVar11,fVar6,fVar9 * fVar5);
  fVar10 = *(float *)(param_4 + 8) - fVar4;
  uVar15 = NEON_fmadd(fVar6,fVar7,fVar5 * fVar3);
  uVar17 = NEON_fmadd(fVar7,fVar7,fVar3 * fVar3);
  fVar9 = (float)NEON_fmadd(fVar11,fVar7,fVar9 * fVar3);
  fVar11 = (float)NEON_fmadd(fVar8,fVar8,uVar12);
  fVar21 = (float)NEON_fmadd(fVar19,fVar8,fVar13);
  fVar18 = (float)NEON_fmadd(fVar8,fVar10,uVar15);
  fVar16 = (float)NEON_fnmadd(fVar19,fVar8,-fVar13);
  fVar13 = (float)NEON_fmadd(fVar10,fVar10,uVar17);
  fVar14 = (float)NEON_fmadd(fVar19,fVar10,fVar9);
  uVar12 = NEON_fnmadd(fVar19,fVar10,-fVar9);
  fVar11 = fVar11 - fVar21;
  fVar9 = fVar18 - fVar21;
  if (fVar21 <= 0.0) {
    if (fVar9 < 0.0) {
LAB_00b5b118:
      fVar19 = fVar9 / (fVar9 - fVar11);
      fVar16 = fVar16 / (fVar16 - fVar9);
      fVar20 = (1.0 - fVar19) - fVar16;
      fVar21 = (float)NEON_fmadd(fVar13,fVar16,uVar12);
      fVar21 = fVar21 * fVar20;
      if (fVar21 < 0.0) {
        fVar22 = (float)NEON_fmadd(fVar18,fVar19,fVar13 * (1.0 - fVar19));
        fVar22 = fVar20 * (fVar22 - fVar14);
        if (0.0 < fVar22) {
          fVar21 = fVar21 / (fVar21 - fVar22);
          fVar19 = (float)NEON_fmadd(fVar19,fVar21,0);
          fVar21 = (float)NEON_fmadd(fVar20,fVar21,fVar16);
          goto LAB_00b5b240;
        }
        goto LAB_00b5b200;
      }
    }
  }
  else {
    if (fVar9 <= 0.0) {
      if (0.0 < fVar11) {
        fVar19 = fVar16 / (fVar16 - fVar11);
        fVar22 = fVar9 / (fVar9 - fVar11);
        fVar20 = 1.0 - fVar22;
        fVar16 = (float)NEON_fmadd(fVar18,fVar19,uVar12);
        fVar16 = fVar16 * fVar20;
        fVar21 = 0.0;
        if (0.0 <= fVar16) goto LAB_00b5b240;
        fVar21 = (float)NEON_fmadd(fVar18,fVar22,fVar13 * fVar20);
        fVar21 = fVar20 * (fVar21 - fVar14);
        if (0.0 < fVar21) {
          fVar16 = fVar16 / (fVar16 - fVar21);
          fVar19 = (float)NEON_fmadd(fVar22 - fVar19,fVar16,fVar19);
          fVar21 = (float)NEON_fmadd(fVar20,fVar16,0);
          goto LAB_00b5b240;
        }
      }
LAB_00b5b200:
      fVar21 = 0.0;
      fVar11 = (fVar18 - fVar14) - fVar11;
      if (fVar11 < 0.0) {
        fVar21 = 1.0;
        fVar9 = (fVar13 - fVar14) - fVar9;
        if (0.0 < fVar9) {
          fVar21 = fVar11 / (fVar11 - fVar9);
        }
      }
      fVar19 = 1.0 - fVar21;
      goto LAB_00b5b240;
    }
    if (fVar11 <= 0.0) goto LAB_00b5b118;
    fVar19 = fVar16 / (fVar16 - fVar11);
    fVar16 = fVar16 / (fVar16 - fVar9);
    fVar9 = (float)NEON_fmadd(fVar18,fVar19,uVar12);
    fVar9 = fVar9 * fVar16;
    fVar21 = 0.0;
    if (0.0 <= fVar9) goto LAB_00b5b240;
    fVar11 = (float)NEON_fmadd(fVar13,fVar16,uVar12);
    if (0.0 < fVar16 * fVar11) {
      fVar9 = fVar9 / (fVar9 - fVar16 * fVar11);
      fVar19 = (float)NEON_fmadd(0.0 - fVar19,fVar9,fVar19);
      fVar21 = (float)NEON_fmadd(fVar16,fVar9,0);
      goto LAB_00b5b240;
    }
  }
  fVar19 = 0.0;
  if (fVar14 <= 0.0) {
    fVar21 = 0.0;
  }
  else {
    fVar21 = 1.0;
    if (0.0 < fVar13 - fVar14) {
      fVar21 = fVar14 / fVar13;
    }
  }
LAB_00b5b240:
  uVar15 = NEON_fmadd(fVar5,fVar19,fVar2);
  uVar12 = NEON_fmadd(fVar6,fVar19,fVar1);
  fVar2 = (float)NEON_fmadd(fVar3,fVar21,uVar15);
  uVar15 = NEON_fmadd(fVar8,fVar19,fVar4);
  fVar1 = (float)NEON_fmadd(fVar7,fVar21,uVar12);
  fVar2 = *(float *)(param_1 + 4) - fVar2;
  fVar3 = (float)NEON_fmadd(fVar10,fVar21,uVar15);
  fVar1 = *(float *)param_1 - fVar1;
  fVar3 = *(float *)(param_1 + 8) - fVar3;
  uVar12 = NEON_fmadd(fVar1,fVar1,fVar2 * fVar2);
  uVar12 = NEON_fmadd(fVar3,fVar3,uVar12);
  return uVar12;
}


