// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stepForwardAndStrafe
// Entry Point: 009bdb0c
// Size: 916 bytes
// Signature: undefined __thiscall stepForwardAndStrafe(Bt2KinematicCharacterController * this, btCollisionWorld * param_1, btVector3 * param_2)


/* Bt2KinematicCharacterController::stepForwardAndStrafe(btCollisionWorld*, btVector3 const&) */

void __thiscall
Bt2KinematicCharacterController::stepForwardAndStrafe
          (Bt2KinematicCharacterController *this,btCollisionWorld *param_1,btVector3 *param_2)

{
  long lVar1;
  btRigidBody *this_00;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined **local_1b8;
  float local_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_178;
  float local_170;
  btRigidBody *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  float local_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  float local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  float local_a8;
  undefined4 local_a4;
  long local_a0;
  
  lVar1 = tpidr_el0;
  local_a0 = *(long *)(lVar1 + 0x28);
  uVar8 = *(undefined8 *)param_2;
  local_f4 = 0;
  puVar4 = (undefined8 *)(this + 0x58);
  fVar11 = *(float *)(param_2 + 8);
  local_fc = 0;
  local_100 = 0x3f800000;
  local_ec = 0x3f800000;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3f800000;
  *(undefined4 *)(this + 0x78) = 0;
  puVar5 = (undefined8 *)(this + 0x6c);
  *puVar5 = CONCAT44((float)((ulong)*puVar4 >> 0x20) + (float)((ulong)uVar8 >> 0x20),
                     (float)*puVar4 + (float)uVar8);
  *(float *)(this + 0x74) = *(float *)(this + 0x60) + fVar11;
  local_140 = 0x3f800000;
  local_134 = 0;
  local_13c = 0;
  local_12c = 0x3f800000;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0x3f800000;
  if (this[0xa0] != (Bt2KinematicCharacterController)0x0) {
    uVar6 = NEON_fmadd(*(undefined4 *)(this + 0x40),*(undefined4 *)(this + 0xa4),
                       *(float *)(this + 0x44) * *(float *)(this + 0xa8));
    fVar11 = (float)NEON_fmadd(*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0xac),uVar6);
    if (0.0 < fVar11) {
      updateTargetPositionBasedOnCollision(this,(btVector3 *)(this + 0xa4),fVar11,1.0);
    }
  }
  uVar3 = 0xfffffff5;
  fVar11 = 1.0;
  do {
    bVar2 = 0xfffffffe < uVar3;
    uVar3 = uVar3 + 1;
    if (bVar2) break;
    fVar7 = (float)*(undefined8 *)(this + 0x58) - (float)*(undefined8 *)(this + 0x6c);
    fVar9 = (float)((ulong)*(undefined8 *)(this + 0x58) >> 0x20) -
            (float)((ulong)*(undefined8 *)(this + 0x6c) >> 0x20);
    fVar10 = *(float *)(this + 0x60) - *(float *)(this + 0x74);
    fVar12 = (float)NEON_fmadd(fVar10,fVar10,fVar9 * fVar9 + fVar7 * fVar7);
    uStack_c8 = *(undefined8 *)(this + 0x60);
    local_d0 = *puVar4;
    uStack_108 = *(undefined8 *)(this + 0x74);
    local_110 = *puVar5;
    if (fVar12 < 1e-06) break;
    uStack_160 = *(undefined8 *)(this + 8);
    local_168 = (btRigidBody *)0x0;
    uStack_1a0 = 0;
    local_1a8 = 0;
    uStack_190 = 0;
    uStack_198 = 0;
    local_14c = 0;
    uStack_148 = 0;
    uStack_1ac = *(uint *)(this + 0x54) >> 0x10 | *(uint *)(this + 0x54) << 0x10;
    local_1b0 = 1.0;
    local_1b8 = &PTR__ConvexResultCallback_00fe1d68;
    local_158 = CONCAT44(fVar9,fVar7);
    local_150 = fVar10;
    fVar7 = (float)(**(code **)(**(long **)(this + 0x10) + 0x60))();
    (**(code **)(**(long **)(this + 0x10) + 0x58))(fVar7 + *(float *)(this + 0x28));
    if (this[0xb6] == (Bt2KinematicCharacterController)0x0) {
      btCollisionWorld::convexSweepTest
                (param_1,*(btConvexShape **)(this + 0x10),(btTransform *)&local_100,
                 (btTransform *)&local_140,(ConvexResultCallback *)&local_1b8,0.0,false);
    }
    else {
      btGhostObject::convexSweepTest
                (*(btConvexShape **)(this + 8),*(btTransform **)(this + 0x10),
                 (btTransform *)&local_100,(ConvexResultCallback *)&local_140,0.0,
                 SUB81(&local_1b8,0));
    }
    fVar9 = (float)(**(code **)(**(long **)(this + 0x10) + 0x58))(fVar7);
    fVar7 = local_1b0;
    if (1.0 <= local_1b0) {
      *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x74);
      *puVar4 = *puVar5;
    }
    else {
      updateTargetPositionBasedOnCollision(this,(btVector3 *)&local_188,fVar9,1.0);
      this_00 = local_168;
      fVar10 = *(float *)(this + 0x70) - *(float *)(this + 0x5c);
      fVar9 = *(float *)(this + 0x6c) - *(float *)(this + 0x58);
      fVar12 = *(float *)(this + 0x74) - *(float *)(this + 0x60);
      uVar6 = NEON_fmadd(fVar9,fVar9,fVar10 * fVar10);
      fVar13 = (float)NEON_fmadd(fVar12,fVar12,uVar6);
      if (fVar13 <= 1.192093e-07) break;
      fVar13 = 1.0 / SQRT(fVar13);
      uVar6 = NEON_fmadd(fVar9 * fVar13,*(undefined4 *)(this + 0x40),
                         fVar10 * fVar13 * *(float *)(this + 0x44));
      fVar9 = (float)NEON_fmadd(fVar12 * fVar13,*(undefined4 *)(this + 0x48),uVar6);
      if (fVar9 <= 0.0) break;
      if (((((byte)local_168[0x100] >> 1 & 1) != 0) && (local_168 != (btRigidBody *)0x0)) &&
         (((byte)local_168[0xe0] & 3) == 0)) {
        local_a4 = 0;
        local_b4 = 0;
        local_b0 = CONCAT44((float)((ulong)local_178 >> 0x20) -
                            (float)((ulong)*(undefined8 *)(local_168 + 0x38) >> 0x20),
                            (float)local_178 - (float)*(undefined8 *)(local_168 + 0x38));
        local_b8 = *(float *)(this + 0x50) * -*(float *)(this + 0xcc);
        local_a8 = local_170 - *(float *)(local_168 + 0x40);
        local_c0 = CONCAT44((float)((ulong)local_188 >> 0x20) * local_b8,(float)local_188 * local_b8
                           );
        local_b8 = local_b8 * local_180;
        btRigidBody::applyImpulse(local_168,(btVector3 *)&local_c0,(btVector3 *)&local_b0);
        btCollisionObject::activate((btCollisionObject *)this_00,false);
      }
    }
    fVar11 = fVar11 - fVar7;
  } while (0.01 < fVar11);
  if (*(long *)(lVar1 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


