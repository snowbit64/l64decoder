// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBaseFrameMatrix
// Entry Point: 009f1528
// Size: 400 bytes
// Signature: undefined __thiscall getBaseFrameMatrix(DeferredDebugRenderer * this, float * param_1, float * param_2, float param_3, Matrix4x4 * param_4)


/* DeferredDebugRenderer::getBaseFrameMatrix(float const*, float const*, float, Matrix4x4&) */

void __thiscall
DeferredDebugRenderer::getBaseFrameMatrix
          (DeferredDebugRenderer *this,float *param_1,float *param_2,float param_3,
          Matrix4x4 *param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float local_8;
  float fStack_4;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar12 = 1.0;
  fVar4 = param_2[2];
  fVar17 = 0.0;
  fVar9 = fVar12;
  if (fVar1 == 0.0) {
    fVar9 = 0.0;
    fVar17 = 1.0;
  }
  fVar14 = (float)NEON_fmadd(fVar2,fVar9,fVar4 * -0.0);
  fVar13 = (float)NEON_fmadd(fVar4,fVar17,fVar9 * -fVar1);
  fVar17 = (float)NEON_fmadd(fVar1,0,fVar17 * -fVar2);
  uVar6 = NEON_fmadd(fVar14,fVar14,fVar13 * fVar13);
  fVar18 = (float)NEON_fmadd(fVar17,fVar17,uVar6);
  uVar8 = *(undefined8 *)param_1;
  fVar9 = param_1[2];
  if (1e-06 < fVar18) {
    fVar12 = 1.0 / SQRT(fVar18);
  }
  fVar18 = fVar13 * fVar12;
  fVar15 = fVar14 * fVar12;
  fVar16 = fVar17 * fVar12;
  *(float *)(param_4 + 0x20) = fVar1;
  *(float *)(param_4 + 0x24) = fVar2;
  *(float *)(param_4 + 0x28) = fVar4;
  *(undefined4 *)(param_4 + 0x2c) = 0;
  uVar11 = NEON_fmadd(fVar2,fVar16,fVar18 * -fVar4);
  *(undefined8 *)(param_4 + 0x30) = uVar8;
  uVar3 = NEON_fmadd(fVar4,fVar15,fVar16 * -fVar1);
  uVar6 = NEON_fmadd(fVar1,fVar18,fVar15 * -fVar2);
  *(float *)(param_4 + 0x38) = fVar9;
  *(undefined4 *)(param_4 + 0x3c) = 0x3f800000;
  sincosf(param_3,&fStack_4,&local_8);
  uVar7 = NEON_fmadd(uVar11,fStack_4,local_8 * fVar15);
  uVar10 = NEON_fmadd(uVar3,fStack_4,local_8 * fVar18);
  uVar5 = NEON_fmadd(uVar3,local_8,fStack_4 * -(fVar13 * fVar12));
  uVar3 = NEON_fmadd(uVar11,local_8,fStack_4 * -(fVar14 * fVar12));
  uVar19 = NEON_fmadd(uVar6,fStack_4,local_8 * fVar16);
  *(undefined4 *)param_4 = uVar7;
  uVar11 = NEON_fmadd(uVar6,local_8,fStack_4 * -(fVar17 * fVar12));
  uVar7 = NEON_fmadd(fStack_4,0,local_8 * 0.0);
  uVar6 = NEON_fmadd(local_8,0,fStack_4 * -0.0);
  *(undefined4 *)(param_4 + 4) = uVar10;
  *(undefined4 *)(param_4 + 0x10) = uVar3;
  *(undefined4 *)(param_4 + 0x14) = uVar5;
  *(undefined4 *)(param_4 + 8) = uVar19;
  *(undefined4 *)(param_4 + 0x18) = uVar11;
  *(undefined4 *)(param_4 + 0xc) = uVar7;
  *(undefined4 *)(param_4 + 0x1c) = uVar6;
  return;
}


