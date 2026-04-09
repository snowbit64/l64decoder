// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stepDown
// Entry Point: 009bdea0
// Size: 532 bytes
// Signature: undefined __thiscall stepDown(Bt2KinematicCharacterController * this, btCollisionWorld * param_1)


/* Bt2KinematicCharacterController::stepDown(btCollisionWorld*) */

void __thiscall
Bt2KinematicCharacterController::stepDown
          (Bt2KinematicCharacterController *this,btCollisionWorld *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined **local_140;
  float local_138;
  uint uStack_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_f0;
  btConvexShape *pbStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar4 = -*(float *)(this + 0x2c);
  if (0.0 <= *(float *)(this + 0x2c)) {
    fVar4 = 0.0;
  }
  if ((0.0 < fVar4) &&
     (this[0xb5] != (Bt2KinematicCharacterController)0x0 && fVar4 < *(float *)(this + 0x24))) {
    fVar4 = *(float *)(this + 0x24);
  }
  puVar2 = (undefined8 *)(this + 0x6c);
  fVar4 = fVar4 + *(float *)(this + 0x68);
  uVar8 = *(undefined8 *)(this + 0xb8);
  fVar5 = (float)*puVar2 - (float)uVar8 * fVar4;
  fVar6 = (float)((ulong)*puVar2 >> 0x20) - (float)((ulong)uVar8 >> 0x20) * fVar4;
  *puVar2 = CONCAT44(fVar6,fVar5);
  fVar4 = *(float *)(this + 0x74) - fVar4 * *(float *)(this + 0xc0);
  fVar6 = fVar6 - *(float *)(this + 0x5c);
  puVar3 = (undefined8 *)(this + 0x58);
  *(float *)(this + 0x74) = fVar4;
  fVar5 = fVar5 - *(float *)puVar3;
  uVar7 = NEON_fmadd(fVar5,fVar5,fVar6 * fVar6);
  fVar4 = fVar4 - *(float *)(this + 0x60);
  fVar4 = (float)NEON_fmadd(fVar4,fVar4,uVar7);
  if (1.421085e-14 <= fVar4) {
    uStack_50 = *(undefined8 *)(this + 0x60);
    local_58 = *puVar3;
    local_70 = 0;
    uStack_68 = 0;
    local_7c = 0;
    local_84 = 0;
    local_88 = 0x3f800000;
    local_74 = 0x3f800000;
    local_60 = 0x3f800000;
    local_c8 = 0x3f800000;
    local_bc = 0;
    local_c4 = 0;
    local_b4 = 0x3f800000;
    uStack_90 = *(undefined8 *)(this + 0x74);
    local_98 = *puVar2;
    local_b0 = 0;
    uStack_a8 = 0;
    pbStack_e8 = *(btConvexShape **)(this + 8);
    uStack_d8 = *(undefined8 *)(this + 0xc0);
    local_e0 = *(undefined8 *)(this + 0xb8);
    local_140 = &PTR__ConvexResultCallback_00fe1d68;
    local_a0 = 0x3f800000;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    local_d0 = *(undefined4 *)(this + 0x1c);
    uStack_134 = *(uint *)(this + 0x54) >> 0x10 | *(uint *)(this + 0x54) << 0x10;
    local_f0 = 0;
    local_138 = 1.0;
    if (this[0xb6] == (Bt2KinematicCharacterController)0x0) {
      btCollisionWorld::convexSweepTest
                (param_1,*(btConvexShape **)(this + 0x10),(btTransform *)&local_88,
                 (btTransform *)&local_c8,(ConvexResultCallback *)&local_140,0.0,false);
    }
    else {
      btGhostObject::convexSweepTest
                (pbStack_e8,*(btTransform **)(this + 0x10),(btTransform *)&local_88,
                 (ConvexResultCallback *)&local_c8,0.0,SUB81(&local_140,0));
    }
    if (1.0 <= local_138) {
      *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x74);
      *puVar3 = *puVar2;
    }
    else {
      fVar4 = 1.0 - local_138;
      this[0xb4] = (Bt2KinematicCharacterController)0x1;
      uVar7 = NEON_fmadd(fVar4,*(undefined4 *)(this + 0x60),local_138 * *(float *)(this + 0x74));
      *(ulong *)(this + 0x58) =
           CONCAT44((float)((ulong)*(undefined8 *)(this + 0x6c) >> 0x20) * local_138 +
                    (float)((ulong)*(undefined8 *)(this + 0x58) >> 0x20) * fVar4,
                    (float)*(undefined8 *)(this + 0x6c) * local_138 +
                    (float)*(undefined8 *)(this + 0x58) * fVar4);
      *(undefined4 *)(this + 0x60) = uVar7;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


