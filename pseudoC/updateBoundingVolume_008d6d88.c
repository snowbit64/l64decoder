// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateBoundingVolume
// Entry Point: 008d6d88
// Size: 584 bytes
// Signature: undefined updateBoundingVolume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ParticleSystem::updateBoundingVolume() */

void ParticleSystem::updateBoundingVolume(void)

{
  long lVar1;
  Geometry *in_x0;
  undefined4 *puVar2;
  BoundingSphere *pBVar3;
  undefined8 *puVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  float local_78;
  float local_74;
  float fStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  float local_58;
  float local_54;
  float fStack_50;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = 0;
  local_40 = 0.0;
  if (*(long *)(in_x0 + 0x198) == 0) {
    fVar12 = 0.01;
    pBVar3 = *(BoundingSphere **)(in_x0 + 0x40);
  }
  else {
    fVar6 = (float)NEON_fmadd(*(undefined4 *)(in_x0 + 0x154),*(undefined4 *)(in_x0 + 0x154),
                              *(float *)(in_x0 + 0x158) * *(float *)(in_x0 + 0x158));
    fVar9 = ABS(*(float *)(in_x0 + 0x14c));
    lVar5 = *(long *)(in_x0 + 0xe0);
    fVar10 = ABS(*(float *)(in_x0 + 0x14c) + *(float *)(in_x0 + 0x150));
    uVar7 = NEON_fmadd(*(undefined4 *)(in_x0 + 0x160),*(undefined4 *)(in_x0 + 0x160),
                       *(float *)(in_x0 + 0x164) * *(float *)(in_x0 + 0x164));
    fVar8 = (float)NEON_fmadd(*(undefined4 *)(in_x0 + 0x168),*(undefined4 *)(in_x0 + 0x168),uVar7);
    fVar12 = *(float *)(in_x0 + 0x140);
    if (*(float *)(in_x0 + 0x140) < *(float *)(in_x0 + 0x13c)) {
      fVar12 = *(float *)(in_x0 + 0x13c);
    }
    if (fVar9 < fVar10) {
      fVar9 = fVar10;
    }
    fVar10 = *(float *)(in_x0 + 0x148);
    if (*(float *)(in_x0 + 0x148) < *(float *)(in_x0 + 0x144)) {
      fVar10 = *(float *)(in_x0 + 0x144);
    }
    uVar7 = NEON_fmadd(fVar10,0x3f350481,fVar9 * SQRT(fVar6));
    fVar9 = *(float *)(in_x0 + 0x134);
    uVar7 = NEON_fmadd(fVar9,uVar7,fVar12 * 0.7071 + *(float *)(in_x0 + 0x194));
    fVar12 = (float)NEON_fmadd(fVar9 * fVar9,SQRT(fVar8) * 1e-05,uVar7);
    if (lVar5 == 0) {
      puVar4 = (undefined8 *)(**(code **)(**(long **)(in_x0 + 0x1a0) + 0x38))();
      local_48 = *puVar4;
      local_40 = *(float *)(puVar4 + 1);
      pBVar3 = *(BoundingSphere **)(in_x0 + 0x40);
    }
    else {
      RawTransformGroup::updateWorldTransformation();
      Matrix4x4::invert3x4((Matrix4x4 *)&local_88,(Matrix4x4 *)(lVar5 + 0xb8));
      puVar2 = (undefined4 *)(**(code **)(**(long **)(in_x0 + 0x1a0) + 0x38))();
      uVar11 = puVar2[2];
      uVar7 = NEON_fmadd(*puVar2,local_88,(float)puVar2[1] * local_78);
      fVar9 = (float)NEON_fmadd(uVar11,local_68,uVar7);
      uVar7 = NEON_fmadd(*puVar2,local_84,(float)puVar2[1] * local_74);
      fVar6 = (float)NEON_fmadd(uVar11,uStack_64,uVar7);
      local_48 = CONCAT44(local_54 + fVar6,fVar9 + local_58);
      uVar7 = NEON_fmadd(*puVar2,uStack_80,(float)puVar2[1] * fStack_70);
      local_40 = (float)NEON_fmadd(uVar11,local_60,uVar7);
      local_40 = fStack_50 + local_40;
      pBVar3 = *(BoundingSphere **)(in_x0 + 0x40);
    }
  }
  if (pBVar3 == (BoundingSphere *)0x0) {
    pBVar3 = (BoundingSphere *)operator_new(0x20);
                    /* try { // try from 008d6f6c to 008d6f77 has its CatchHandler @ 008d6fd0 */
    BoundingSphere::BoundingSphere(pBVar3,(Vector3 *)&local_48,fVar12);
    Geometry::setBoundingVolume(in_x0,(BoundingVolume *)pBVar3);
  }
  else {
    BoundingSphere::assign(pBVar3,(Vector3 *)&local_48,fVar12);
  }
  if (0.0 < *(float *)(in_x0 + 0xf4)) {
    BoundingSphere::merge
              (*(BoundingSphere **)(in_x0 + 0x40),(Vector3 *)(in_x0 + 0xe8),*(float *)(in_x0 + 0xf4)
              );
  }
  DynamicGeometry::notifyBoundingVolumeDirtyListeners();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


