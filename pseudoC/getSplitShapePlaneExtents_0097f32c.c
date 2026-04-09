// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSplitShapePlaneExtents
// Entry Point: 0097f32c
// Size: 508 bytes
// Signature: undefined __thiscall getSplitShapePlaneExtents(MeshSplitManager * this, MeshSplitShape * param_1, Vector3 * param_2, Vector3 * param_3, float * param_4, float * param_5)


/* MeshSplitManager::getSplitShapePlaneExtents(MeshSplitShape*, Vector3 const&, Vector3 const&,
   float&, float&) */

undefined8 __thiscall
MeshSplitManager::getSplitShapePlaneExtents
          (MeshSplitManager *this,MeshSplitShape *param_1,Vector3 *param_2,Vector3 *param_3,
          float *param_4,float *param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  Plane aPStack_d8 [16];
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  float local_98;
  float local_94;
  float fStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  float local_78;
  float fStack_74;
  float local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(param_1 + 0x170);
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)&local_a8,(Matrix4x4 *)(param_1 + 0xb8));
  uVar9 = *(undefined4 *)param_3;
  fVar8 = *(float *)(param_3 + 4);
  uVar12 = *(undefined4 *)(param_3 + 8);
  uVar15 = *(undefined4 *)param_2;
  fVar13 = *(float *)(param_2 + 4);
  uVar6 = NEON_fmadd(uVar9,uStack_a4,local_94 * fVar8);
  uVar11 = NEON_fmadd(uVar9,local_a8,local_98 * fVar8);
  uVar9 = NEON_fmadd(uVar9,local_a0,fStack_90 * fVar8);
  fStack_c4 = (float)NEON_fmadd(uVar12,uStack_84,uVar6);
  uVar14 = *(undefined4 *)(param_2 + 8);
  local_c8 = (float)NEON_fmadd(uVar12,local_88,uVar11);
  uVar11 = NEON_fmadd(uVar15,local_a8,fVar13 * local_98);
  uVar10 = NEON_fmadd(uVar15,uStack_a4,fVar13 * local_94);
  uVar6 = NEON_fmadd(uVar15,local_a0,fVar13 * fStack_90);
  local_c0 = (float)NEON_fmadd(uVar12,local_80,uVar9);
  local_b8 = (float)NEON_fmadd(uVar14,local_88,uVar11);
  fStack_b4 = (float)NEON_fmadd(uVar14,uStack_84,uVar10);
  local_b0 = (float)NEON_fmadd(uVar14,local_80,uVar6);
  uVar6 = NEON_fmadd(local_c8,local_c8,fStack_c4 * fStack_c4);
  local_b0 = local_70 + local_b0;
  fVar13 = (float)NEON_fmadd(local_c0,local_c0,uVar6);
  local_b8 = local_b8 + local_78;
  fStack_b4 = fStack_74 + fStack_b4;
  fVar8 = 1.0;
  if (1e-06 < fVar13) {
    fVar8 = 1.0 / SQRT(fVar13);
  }
  local_c8 = local_c8 * fVar8;
  fStack_c4 = fStack_c4 * fVar8;
  local_c0 = local_c0 * fVar8;
  Plane::Plane(aPStack_d8,(Vector3 *)&local_b8,(Vector3 *)&local_c8);
  lVar5 = *(long *)(lVar5 + 0x170);
  uVar1 = (uint)(*(int *)(lVar5 + 0x2ef8) - (int)*(Vector3 **)(lVar5 + 0x2ef0)) >> 4 & 0xffff;
  if (uVar1 == 0) {
    fVar8 = -3.402823e+38;
    fVar13 = fVar8;
  }
  else {
    fVar7 = (float)Plane::signedDistanceTo(aPStack_d8,*(Vector3 **)(lVar5 + 0x2ef0));
    fVar8 = fVar7;
    if (fVar7 <= -3.402823e+38) {
      fVar8 = -3.402823e+38;
    }
    fVar13 = -fVar7;
    if (-fVar7 <= -3.402823e+38) {
      fVar13 = -3.402823e+38;
    }
    if (uVar1 != 1) {
      lVar3 = (ulong)uVar1 - 1;
      lVar4 = 0x10;
      do {
        fVar7 = (float)Plane::signedDistanceTo
                                 (aPStack_d8,(Vector3 *)(*(long *)(lVar5 + 0x2ef0) + lVar4));
        lVar4 = lVar4 + 0x10;
        if (fVar8 < fVar7) {
          fVar8 = fVar7;
        }
        if (fVar13 < -fVar7) {
          fVar13 = -fVar7;
        }
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  *param_5 = fVar8;
  *param_4 = fVar13;
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


