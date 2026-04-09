// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHmdMatrix
// Entry Point: 00b5b274
// Size: 420 bytes
// Signature: undefined __cdecl getHmdMatrix(Vector3 * param_1, Matrix4x4 * param_2, Vector3 * param_3, Matrix4x4 * param_4)


/* MathUtil::getHmdMatrix(Vector3 const&, Matrix4x4 const&, Vector3 const&, Matrix4x4&) */

void MathUtil::getHmdMatrix(Vector3 *param_1,Matrix4x4 *param_2,Vector3 *param_3,Matrix4x4 *param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  fVar14 = *(float *)(param_2 + 8);
  fVar1 = *(float *)param_2;
  fVar4 = *(float *)(param_2 + 0x10);
  fVar6 = *(float *)(param_2 + 0x20);
  fVar16 = *(float *)(param_2 + 0x30);
  fVar7 = *(float *)(param_2 + 4) * 0.0;
  uVar3 = NEON_fmadd(fVar1,0,*(float *)(param_2 + 4));
  fVar9 = *(float *)(param_2 + 0x14) * 0.0;
  uVar10 = NEON_fmadd(fVar4,0,*(float *)(param_2 + 0x14));
  fVar12 = *(float *)(param_2 + 0x24) * 0.0;
  fVar15 = *(float *)(param_2 + 0x18);
  fVar22 = *(float *)(param_2 + 0x34) * 0.0;
  fVar19 = *(float *)(param_2 + 0x28);
  fVar8 = (float)NEON_fmadd(fVar1,0,fVar7);
  fVar5 = (float)NEON_fmadd(fVar4,0,fVar9);
  fVar2 = (float)NEON_fmadd(fVar14,0,uVar3);
  fVar11 = (float)NEON_fmadd(fVar15,0,uVar10);
  uVar3 = NEON_fmadd(fVar6,0,*(float *)(param_2 + 0x24));
  fVar7 = (float)NEON_fmadd(fVar14,0,fVar1 + fVar7);
  fVar14 = fVar14 + fVar8;
  fVar8 = (float)NEON_fmadd(fVar15,0,fVar4 + fVar9);
  fVar15 = fVar15 + fVar5;
  fVar1 = (float)NEON_fmadd(fVar19,0,fVar6 + fVar12);
  fVar4 = (float)NEON_fmadd(fVar6,0,fVar12);
  uVar10 = NEON_fmadd(fVar16,0,*(float *)(param_2 + 0x34));
  fVar17 = (float)NEON_fmadd(fVar16,0,fVar22);
  fVar12 = *(float *)(param_2 + 0x38);
  fVar5 = (float)NEON_fmadd(fVar19,0,uVar3);
  fVar6 = (float)NEON_fmadd(fVar12,0,fVar16 + fVar22);
  fVar19 = fVar19 + fVar4;
  fVar9 = (float)NEON_fmadd(fVar12,0,uVar10);
  fVar6 = *(float *)param_1 + fVar6;
  uVar3 = NEON_fmadd(fVar7,0,fVar8);
  uVar20 = NEON_fmadd(fVar1,0,fVar7 + fVar8 * 0.0);
  uVar24 = NEON_fmadd(fVar2,0,fVar11);
  fVar12 = *(float *)(param_1 + 8) + fVar12 + fVar17;
  uVar13 = NEON_fmadd(fVar19,0,fVar14 + fVar15 * 0.0);
  fVar9 = *(float *)(param_1 + 4) + fVar9;
  uVar18 = NEON_fmadd(fVar5,0,fVar2 + fVar11 * 0.0);
  uVar10 = NEON_fmadd(fVar1,0,uVar3);
  uVar3 = *(undefined4 *)param_3;
  uVar20 = NEON_fmadd(fVar6,0,uVar20);
  uVar21 = NEON_fmadd(fVar5,0,uVar24);
  fVar23 = *(float *)(param_3 + 4);
  uVar24 = *(undefined4 *)(param_3 + 8);
  uVar13 = NEON_fmadd(fVar12,0,uVar13);
  uVar25 = NEON_fmadd(fVar14,0,fVar15);
  uVar18 = NEON_fmadd(fVar9,0,uVar18);
  uVar10 = NEON_fmadd(fVar6,0,uVar10);
  uVar21 = NEON_fmadd(fVar9,0,uVar21);
  *(undefined4 *)(param_4 + 0xc) = 0;
  *(undefined4 *)(param_4 + 8) = uVar13;
  uVar13 = NEON_fmadd(fVar19,0,uVar25);
  *(undefined4 *)param_4 = uVar20;
  *(undefined4 *)(param_4 + 4) = uVar18;
  fVar22 = (float)NEON_fmadd(fVar14,0,fVar15 * 0.0);
  *(undefined4 *)(param_4 + 0x10) = uVar10;
  *(undefined4 *)(param_4 + 0x14) = uVar21;
  *(undefined4 *)(param_4 + 0x1c) = 0;
  uVar18 = NEON_fmadd(fVar12,0,uVar13);
  fVar16 = (float)NEON_fmadd(fVar7,0,fVar8 * 0.0);
  fVar17 = (float)NEON_fmadd(fVar2,0,fVar11 * 0.0);
  uVar20 = NEON_fmadd(uVar3,fVar7,fVar8 * fVar23);
  uVar10 = NEON_fmadd(uVar3,fVar2,fVar11 * fVar23);
  uVar13 = NEON_fmadd(uVar3,fVar14,fVar15 * fVar23);
  *(undefined4 *)(param_4 + 0x18) = uVar18;
  fVar4 = (float)NEON_fmadd(uVar24,fVar1,uVar20);
  uVar3 = NEON_fmadd(uVar3,0,fVar23 * 0.0);
  fVar2 = (float)NEON_fmadd(uVar24,fVar5,uVar10);
  uVar20 = NEON_fmadd(fVar12,0,fVar22 + fVar19);
  fVar14 = (float)NEON_fmadd(uVar24,fVar19,uVar13);
  uVar10 = NEON_fmadd(fVar6,0,fVar16 + fVar1);
  *(undefined4 *)(param_4 + 0x2c) = 0;
  uVar13 = NEON_fmadd(fVar9,0,fVar17 + fVar5);
  fVar1 = (float)NEON_fmadd(uVar24,0,uVar3);
  *(undefined4 *)(param_4 + 0x28) = uVar20;
  *(undefined4 *)(param_4 + 0x20) = uVar10;
  *(undefined4 *)(param_4 + 0x24) = uVar13;
  *(float *)(param_4 + 0x30) = fVar6 + fVar4;
  *(float *)(param_4 + 0x34) = fVar9 + fVar2;
  *(float *)(param_4 + 0x38) = fVar12 + fVar14;
  *(float *)(param_4 + 0x3c) = fVar1 + 1.0;
  return;
}


