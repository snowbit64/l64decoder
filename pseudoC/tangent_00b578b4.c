// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tangent
// Entry Point: 00b578b4
// Size: 548 bytes
// Signature: undefined __cdecl tangent(Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, Vector3 * param_4, Vector3 * param_5, Vector3 * param_6, Vector3 * param_7, Vector3 * param_8, Vector3 * param_9, float * param_10)


/* WARNING: Removing unreachable block (ram,0x00b57914) */
/* MathUtil::tangent(Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&,
   Vector3 const&, Vector3 const&, Vector3&, Vector3&, float&) */

void MathUtil::tangent(Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,Vector3 *param_4,
                      Vector3 *param_5,Vector3 *param_6,Vector3 *param_7,Vector3 *param_8,
                      Vector3 *param_9,float *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar12 = *(float *)(param_5 + 4) - *(float *)(param_4 + 4);
  fVar8 = *(float *)param_5 - *(float *)param_4;
  fVar9 = *(float *)(param_6 + 4) - *(float *)(param_4 + 4);
  fVar11 = -(*(float *)param_6 - *(float *)param_4);
  fVar5 = 1.0;
  fVar13 = (float)NEON_fmadd(fVar8,fVar9,fVar12 * fVar11);
  fVar12 = -fVar12;
  fVar1 = *(float *)param_2 - *(float *)param_1;
  fVar13 = 1.0 / fVar13;
  fVar15 = *(float *)param_3 - *(float *)param_1;
  fVar16 = *(float *)(param_3 + 4) - *(float *)(param_1 + 4);
  fVar7 = *(float *)(param_3 + 8) - *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  fVar14 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  fVar2 = (float)NEON_fmadd(fVar9,fVar1,fVar15 * fVar12);
  fVar4 = (float)NEON_fmadd(fVar9,fVar3,fVar16 * fVar12);
  fVar9 = (float)NEON_fmadd(fVar9,fVar14,fVar7 * fVar12);
  fVar12 = (float)NEON_fmadd(fVar8,fVar15,fVar1 * fVar11);
  fVar15 = (float)NEON_fmadd(fVar8,fVar16,fVar3 * fVar11);
  fVar1 = (float)NEON_fmadd(fVar8,fVar7,fVar14 * fVar11);
  uVar10 = NEON_fmadd(*(float *)param_7,fVar2 * fVar13,fVar4 * fVar13 * *(float *)(param_7 + 4));
  fVar7 = (float)NEON_fmadd(*(float *)(param_7 + 8),fVar9 * fVar13,uVar10);
  fVar3 = fVar4 * fVar13 - *(float *)(param_7 + 4) * fVar7;
  fVar4 = fVar2 * fVar13 - *(float *)param_7 * fVar7;
  fVar2 = fVar9 * fVar13 - *(float *)(param_7 + 8) * fVar7;
  uVar10 = NEON_fmadd(fVar4,fVar4,fVar3 * fVar3);
  fVar7 = (float)NEON_fmadd(fVar2,fVar2,uVar10);
  if (1e-06 < fVar7) {
    fVar5 = 1.0 / SQRT(fVar7);
  }
  *(float *)param_8 = fVar4 * fVar5;
  *(float *)(param_8 + 4) = fVar3 * fVar5;
  *(float *)(param_8 + 8) = fVar2 * fVar5;
  uVar10 = NEON_fmadd(*(undefined4 *)(param_7 + 4),fVar2 * fVar5,
                      fVar3 * fVar5 * -*(float *)(param_7 + 8));
  *(undefined4 *)param_9 = uVar10;
  uVar10 = NEON_fmadd(*(undefined4 *)(param_7 + 8),*(undefined4 *)param_8,
                      *(float *)(param_8 + 8) * -*(float *)param_7);
  *(undefined4 *)(param_9 + 4) = uVar10;
  uVar10 = NEON_fmadd(*(undefined4 *)param_7,*(undefined4 *)(param_8 + 4),
                      *(float *)param_8 * -*(float *)(param_7 + 4));
  *(undefined4 *)(param_9 + 8) = uVar10;
  *param_10 = 1.0;
  fVar2 = (float)NEON_fmadd(*(float *)(param_7 + 8),*(float *)param_8,
                            *(float *)(param_8 + 8) * -*(float *)param_7);
  uVar10 = NEON_fmadd(*(float *)(param_7 + 4),*(float *)(param_8 + 8),
                      *(float *)(param_8 + 4) * -*(float *)(param_7 + 8));
  uVar6 = NEON_fmadd(*(float *)param_7,*(float *)(param_8 + 4),
                     *(float *)param_8 * -*(float *)(param_7 + 4));
  uVar10 = NEON_fmadd(uVar10,fVar12 * fVar13,fVar15 * fVar13 * fVar2);
  fVar1 = (float)NEON_fmadd(uVar6,fVar1 * fVar13,uVar10);
  if (fVar1 < 0.0) {
    *(ulong *)param_9 =
         CONCAT44(-(float)((ulong)*(undefined8 *)param_9 >> 0x20),-(float)*(undefined8 *)param_9);
    *(float *)(param_9 + 8) = -*(float *)(param_9 + 8);
    *param_10 = -1.0;
  }
  return;
}


