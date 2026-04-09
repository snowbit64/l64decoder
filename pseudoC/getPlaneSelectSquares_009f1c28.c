// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlaneSelectSquares
// Entry Point: 009f1c28
// Size: 604 bytes
// Signature: undefined __cdecl getPlaneSelectSquares(int param_1, float param_2, Matrix4x4 * param_3, Vector3 * param_4)


/* DeferredDebugRenderer::getPlaneSelectSquares(int, float, Matrix4x4 const*, Vector3*) */

void DeferredDebugRenderer::getPlaneSelectSquares
               (int param_1,float param_2,Matrix4x4 *param_3,Vector3 *param_4)

{
  float in_s1;
  float in_s2;
  float fVar1;
  float in_s3;
  undefined4 uVar2;
  float fVar3;
  float in_s4;
  float fVar4;
  float in_s5;
  float in_s6;
  float fVar5;
  float in_s7;
  undefined4 uVar6;
  float in_s16;
  float in_s17;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  switch(param_1) {
  case 1:
    in_s2 = 1.0;
    in_s4 = 0.0;
    in_s7 = 0.0;
    in_s5 = 0.0;
    in_s3 = 0.0;
    in_s6 = param_2 * 4.0;
    in_s1 = 0.0;
    in_s17 = 1.0;
    in_s16 = in_s6;
    break;
  case 2:
    in_s2 = 1.0;
    in_s4 = 0.0;
    in_s17 = 0.0;
    in_s5 = 0.0;
    in_s6 = 0.0;
    in_s3 = param_2 * 4.0;
    in_s1 = 0.0;
    in_s7 = 1.0;
    in_s16 = in_s3;
    break;
  case 3:
    in_s4 = 1.0;
    in_s17 = 0.0;
    in_s1 = 0.0;
    in_s7 = 1.0;
LAB_009f1d48:
    in_s3 = param_2 * 4.0;
    in_s2 = 0.0;
    in_s5 = 0.0;
    in_s16 = 0.0;
    in_s6 = in_s3;
    break;
  case -3:
    in_s4 = 0.0;
    in_s7 = 0.0;
    in_s1 = 1.0;
    in_s17 = 1.0;
    goto LAB_009f1d48;
  case -2:
    in_s4 = 0.0;
    in_s2 = 0.0;
    in_s7 = 0.0;
    in_s17 = 0.0;
    in_s6 = 0.0;
    in_s3 = param_2 * 4.0;
    in_s1 = 1.0;
    in_s5 = 1.0;
    in_s16 = in_s3;
    break;
  case -1:
    in_s4 = 1.0;
    in_s2 = 0.0;
    in_s7 = 0.0;
    in_s17 = 0.0;
    in_s3 = 0.0;
    in_s6 = param_2 * 4.0;
    in_s1 = 0.0;
    in_s5 = 1.0;
    in_s16 = in_s6;
  }
  if (param_3 != (Matrix4x4 *)0x0) {
    fVar8 = *(float *)(param_3 + 0x10);
    fVar11 = *(float *)(param_3 + 0x14);
    fVar14 = *(float *)(param_3 + 0x18);
    uVar18 = *(undefined4 *)param_3;
    uVar19 = *(undefined4 *)(param_3 + 4);
    uVar20 = *(undefined4 *)(param_3 + 8);
    uVar16 = NEON_fmadd(in_s7,uVar18,in_s17 * fVar8);
    uVar21 = *(undefined4 *)(param_3 + 0x20);
    uVar15 = *(undefined4 *)(param_3 + 0x24);
    uVar17 = NEON_fmadd(in_s7,uVar19,in_s17 * fVar11);
    uVar6 = NEON_fmadd(in_s7,uVar20,in_s17 * fVar14);
    uVar7 = NEON_fmadd(in_s1,uVar18,in_s4 * fVar8);
    uVar9 = NEON_fmadd(in_s3,uVar18,in_s6 * fVar8);
    uVar12 = NEON_fmadd(in_s3,uVar19,in_s6 * fVar11);
    uVar2 = NEON_fmadd(in_s3,uVar20,in_s6 * fVar14);
    uVar19 = NEON_fmadd(in_s1,uVar19,in_s4 * fVar11);
    uVar18 = NEON_fmadd(in_s1,uVar20,in_s4 * fVar14);
    uVar20 = *(undefined4 *)(param_3 + 0x28);
    in_s7 = (float)NEON_fmadd(in_s5,uVar21,uVar16);
    in_s1 = (float)NEON_fmadd(in_s2,uVar21,uVar7);
    fVar11 = (float)NEON_fmadd(in_s16,uVar21,uVar9);
    fVar14 = (float)NEON_fmadd(in_s16,uVar15,uVar12);
    fVar8 = (float)NEON_fmadd(in_s16,uVar20,uVar2);
    in_s4 = (float)NEON_fmadd(in_s2,uVar15,uVar19);
    in_s17 = (float)NEON_fmadd(in_s5,uVar15,uVar17);
    in_s5 = (float)NEON_fmadd(in_s5,uVar20,uVar6);
    in_s2 = (float)NEON_fmadd(in_s2,uVar20,uVar18);
    in_s3 = fVar11 + *(float *)(param_3 + 0x30);
    in_s6 = fVar14 + *(float *)(param_3 + 0x34);
    in_s16 = fVar8 + *(float *)(param_3 + 0x38);
  }
  fVar8 = param_2 * 0.5;
  fVar14 = fVar8 * in_s1;
  fVar4 = fVar8 * in_s4;
  fVar11 = fVar8 * in_s2;
  fVar10 = in_s3 - fVar8 * in_s7;
  fVar13 = in_s6 - fVar8 * in_s17;
  fVar1 = in_s16 - fVar8 * in_s5;
  fVar3 = fVar8 * in_s7 + in_s3;
  fVar5 = fVar8 * in_s17 + in_s6;
  fVar8 = fVar8 * in_s5 + in_s16;
  *(float *)param_4 = fVar10 - fVar14;
  *(float *)(param_4 + 4) = fVar13 - fVar4;
  *(float *)(param_4 + 8) = fVar1 - fVar11;
  *(float *)(param_4 + 0xc) = fVar3 - fVar14;
  *(float *)(param_4 + 0x18) = fVar14 + fVar3;
  *(float *)(param_4 + 0x1c) = fVar4 + fVar5;
  *(float *)(param_4 + 0x10) = fVar5 - fVar4;
  *(float *)(param_4 + 0x14) = fVar8 - fVar11;
  *(float *)(param_4 + 0x20) = fVar11 + fVar8;
  *(float *)(param_4 + 0x24) = fVar14 + fVar10;
  *(float *)(param_4 + 0x28) = fVar4 + fVar13;
  *(float *)(param_4 + 0x2c) = fVar11 + fVar1;
  return;
}


