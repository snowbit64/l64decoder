// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeReflectionProjectionMatrix
// Entry Point: 00a35a40
// Size: 336 bytes
// Signature: undefined __cdecl computeReflectionProjectionMatrix(Matrix4x4 * param_1, Matrix4x4 * param_2, Vector3 * param_3, Vector3 * param_4, Matrix4x4 * param_5)


/* RenderQueueUtil::computeReflectionProjectionMatrix(Matrix4x4 const&, Matrix4x4 const&, Vector3
   const&, Vector3 const&, Matrix4x4&) */

void RenderQueueUtil::computeReflectionProjectionMatrix
               (Matrix4x4 *param_1,Matrix4x4 *param_2,Vector3 *param_3,Vector3 *param_4,
               Matrix4x4 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar11 = *(undefined4 *)param_3;
  fVar6 = *(float *)(param_3 + 4);
  uVar16 = *(undefined4 *)(param_3 + 8);
  uVar19 = *(undefined4 *)param_4;
  fVar18 = *(float *)(param_4 + 4);
  uVar2 = NEON_fmadd(uVar11,*(undefined4 *)(param_1 + 4),*(float *)(param_1 + 0x14) * fVar6);
  uVar13 = NEON_fmadd(uVar11,*(undefined4 *)param_1,*(float *)(param_1 + 0x10) * fVar6);
  uVar11 = NEON_fmadd(uVar11,*(undefined4 *)(param_1 + 8),*(float *)(param_1 + 0x18) * fVar6);
  fStack_34 = (float)NEON_fmadd(uVar16,*(undefined4 *)(param_1 + 0x24),uVar2);
  local_38 = (float)NEON_fmadd(uVar16,*(undefined4 *)(param_1 + 0x20),uVar13);
  uVar14 = *(undefined4 *)(param_4 + 8);
  uVar2 = NEON_fmadd(uVar19,*(undefined4 *)param_1,fVar18 * *(float *)(param_1 + 0x10));
  uVar13 = NEON_fmadd(uVar19,*(undefined4 *)(param_1 + 4),fVar18 * *(float *)(param_1 + 0x14));
  uVar19 = NEON_fmadd(uVar19,*(undefined4 *)(param_1 + 8),fVar18 * *(float *)(param_1 + 0x18));
  local_30 = (float)NEON_fmadd(uVar16,*(undefined4 *)(param_1 + 0x28),uVar11);
  fVar17 = (float)NEON_fmadd(uVar14,*(undefined4 *)(param_1 + 0x20),uVar2);
  uVar2 = NEON_fmadd(local_38,local_38,fStack_34 * fStack_34);
  fVar12 = (float)NEON_fmadd(uVar14,*(undefined4 *)(param_1 + 0x24),uVar13);
  fVar18 = (float)NEON_fmadd(uVar14,*(undefined4 *)(param_1 + 0x28),uVar19);
  fVar6 = (float)NEON_fmadd(local_30,local_30,uVar2);
  fVar15 = 1.0;
  if (1e-06 < fVar6) {
    fVar15 = 1.0 / SQRT(fVar6);
  }
  fStack_34 = fStack_34 * fVar15;
  local_38 = local_38 * fVar15;
  local_30 = local_30 * fVar15;
  fVar12 = (float)NEON_fmadd(local_38,fVar17 + *(float *)(param_1 + 0x30),
                             (*(float *)(param_1 + 0x34) + fVar12) * fStack_34);
  fVar6 = (float)NEON_fmadd(local_30,*(float *)(param_1 + 0x38) + fVar18,fVar12);
  fStack_2c = (float)NEON_fnmadd(local_30,*(float *)(param_1 + 0x38) + fVar18,-fVar12);
  if (fVar6 < 0.0) {
    local_38 = -local_38;
    fStack_34 = -fStack_34;
    local_30 = -local_30;
    fStack_2c = fVar6;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar10 = *(undefined8 *)(param_2 + 8);
  uVar9 = *(undefined8 *)param_2;
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_5 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_5 + 0x20) = uVar5;
  *(undefined8 *)(param_5 + 0x38) = uVar4;
  *(undefined8 *)(param_5 + 0x30) = uVar3;
  *(undefined8 *)(param_5 + 8) = uVar10;
  *(undefined8 *)param_5 = uVar9;
  *(undefined8 *)(param_5 + 0x18) = uVar8;
  *(undefined8 *)(param_5 + 0x10) = uVar7;
  RenderDeviceUtil::applyObliqueDepthProjection((float *)param_5,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


