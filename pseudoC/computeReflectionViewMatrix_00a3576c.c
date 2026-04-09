// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeReflectionViewMatrix
// Entry Point: 00a3576c
// Size: 484 bytes
// Signature: undefined __cdecl computeReflectionViewMatrix(Matrix4x4 * param_1, bool param_2, Vector3 * param_3, Vector3 * param_4, float param_5, Matrix4x4 * param_6)


/* RenderQueueUtil::computeReflectionViewMatrix(Matrix4x4 const&, bool, Vector3 const&, Vector3
   const&, float, Matrix4x4&) */

void RenderQueueUtil::computeReflectionViewMatrix
               (Matrix4x4 *param_1,bool param_2,Vector3 *param_3,Vector3 *param_4,float param_5,
               Matrix4x4 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  
  fVar3 = *(float *)param_3;
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 8);
  fVar5 = fVar1 * -2.0;
  fVar6 = fVar3 * -2.0;
  fVar4 = fVar2 * -2.0;
  uVar14 = *(undefined4 *)(param_4 + 8);
  fVar7 = fVar3 * fVar5;
  uVar10 = NEON_fmadd(fVar6,fVar3,0x3f800000);
  fVar12 = fVar3 * fVar4;
  uVar8 = NEON_fmadd(uVar10,*(undefined4 *)param_1,fVar7 * *(float *)(param_1 + 0x10));
  uVar8 = NEON_fmadd(fVar12,*(undefined4 *)(param_1 + 0x20),uVar8);
  uVar11 = *(undefined4 *)param_4;
  fVar13 = *(float *)(param_4 + 4);
  *(undefined4 *)param_6 = uVar8;
  uVar8 = NEON_fmadd(uVar10,*(undefined4 *)(param_1 + 4),fVar7 * *(float *)(param_1 + 0x14));
  uVar9 = NEON_fmadd(fVar12,*(undefined4 *)(param_1 + 0x24),uVar8);
  fVar15 = fVar1 * fVar4;
  uVar8 = NEON_fmadd(fVar4,fVar2,0x3f800000);
  *(undefined4 *)(param_6 + 4) = uVar9;
  uVar9 = NEON_fmadd(uVar10,*(undefined4 *)(param_1 + 8),fVar7 * *(float *)(param_1 + 0x18));
  uVar10 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_6 + 0xc) = 0;
  fVar7 = fVar6 * fVar1;
  fVar6 = fVar6 * fVar2;
  uVar9 = NEON_fmadd(fVar12,uVar10,uVar9);
  fVar4 = (float)NEON_fmadd(fVar5,fVar1,0x3f800000);
  fVar5 = fVar5 * fVar2;
  *(undefined4 *)(param_6 + 8) = uVar9;
  uVar9 = NEON_fmadd(fVar7,*(undefined4 *)param_1,fVar4 * *(float *)(param_1 + 0x10));
  uVar9 = NEON_fmadd(fVar15,*(undefined4 *)(param_1 + 0x20),uVar9);
  *(undefined4 *)(param_6 + 0x10) = uVar9;
  uVar9 = NEON_fmadd(fVar7,*(undefined4 *)(param_1 + 4),fVar4 * *(float *)(param_1 + 0x14));
  uVar9 = NEON_fmadd(fVar15,*(undefined4 *)(param_1 + 0x24),uVar9);
  *(undefined4 *)(param_6 + 0x14) = uVar9;
  uVar9 = NEON_fmadd(fVar7,*(undefined4 *)(param_1 + 8),fVar4 * *(float *)(param_1 + 0x18));
  uVar10 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_6 + 0x1c) = 0;
  uVar9 = NEON_fmadd(fVar15,uVar10,uVar9);
  *(undefined4 *)(param_6 + 0x18) = uVar9;
  uVar9 = NEON_fmadd(fVar6,*(undefined4 *)param_1,fVar5 * *(float *)(param_1 + 0x10));
  uVar9 = NEON_fmadd(uVar8,*(undefined4 *)(param_1 + 0x20),uVar9);
  *(undefined4 *)(param_6 + 0x20) = uVar9;
  uVar9 = NEON_fmadd(fVar6,*(undefined4 *)(param_1 + 4),fVar5 * *(float *)(param_1 + 0x14));
  uVar9 = NEON_fmadd(uVar8,*(undefined4 *)(param_1 + 0x24),uVar9);
  *(undefined4 *)(param_6 + 0x24) = uVar9;
  uVar9 = NEON_fmadd(fVar3,uVar11,fVar1 * fVar13);
  fVar4 = (float)NEON_fmadd(fVar2,uVar14,uVar9);
  uVar9 = NEON_fmadd(fVar6,*(undefined4 *)(param_1 + 8),fVar5 * *(float *)(param_1 + 0x18));
  uVar10 = *(undefined4 *)(param_1 + 0x28);
  fVar4 = fVar4 + fVar4;
  *(undefined4 *)(param_6 + 0x2c) = 0;
  uVar8 = NEON_fmadd(uVar8,uVar10,uVar9);
  fVar1 = fVar1 * fVar4;
  fVar3 = fVar3 * fVar4;
  fVar2 = fVar2 * fVar4;
  *(undefined4 *)(param_6 + 0x28) = uVar8;
  uVar8 = NEON_fmadd(fVar3,*(undefined4 *)param_1,fVar1 * *(float *)(param_1 + 0x10));
  fVar4 = (float)NEON_fmadd(fVar2,*(undefined4 *)(param_1 + 0x20),uVar8);
  *(float *)(param_6 + 0x30) = *(float *)(param_1 + 0x30) + fVar4;
  uVar8 = NEON_fmadd(fVar3,*(undefined4 *)(param_1 + 4),fVar1 * *(float *)(param_1 + 0x14));
  fVar4 = (float)NEON_fmadd(fVar2,*(undefined4 *)(param_1 + 0x24),uVar8);
  *(float *)(param_6 + 0x34) = *(float *)(param_1 + 0x34) + fVar4;
  uVar8 = NEON_fmadd(fVar3,*(undefined4 *)(param_1 + 8),fVar1 * *(float *)(param_1 + 0x18));
  fVar1 = (float)NEON_fmadd(fVar2,*(undefined4 *)(param_1 + 0x28),uVar8);
  fVar2 = *(float *)(param_1 + 0x38);
  *(undefined4 *)(param_6 + 0x3c) = 0x3f800000;
  *(float *)(param_6 + 0x38) = fVar2 + fVar1;
  return;
}


