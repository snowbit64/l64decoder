// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stepUp
// Entry Point: 009bd7d4
// Size: 580 bytes
// Signature: undefined __thiscall stepUp(Bt2KinematicCharacterController * this, btCollisionWorld * param_1)


/* Bt2KinematicCharacterController::stepUp(btCollisionWorld*) */

void __thiscall
Bt2KinematicCharacterController::stepUp
          (Bt2KinematicCharacterController *this,btCollisionWorld *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined **local_150;
  float local_148;
  uint uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  float afStack_120 [8];
  undefined8 local_100;
  btConvexShape *pbStack_f8;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e4;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)(this + 0x58);
  local_8c = 0;
  local_94 = 0;
  local_98 = 0x3f800000;
  local_84 = 0x3f800000;
  local_80 = 0;
  uStack_78 = 0;
  fVar4 = *(float *)(this + 0x24) + *(float *)(this + 0x2c);
  local_70 = 0x3f800000;
  local_d8 = 0x3f800000;
  local_d4 = 0;
  local_cc = 0;
  local_c4 = 0x3f800000;
  local_c0 = 0;
  uStack_b8 = 0;
  *(undefined4 *)(this + 0x78) = 0;
  local_b0 = 0x3f800000;
  puVar3 = (undefined8 *)(this + 0x6c);
  *puVar3 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20) * fVar4 +
                     (float)((ulong)*puVar2 >> 0x20),
                     (float)*(undefined8 *)(this + 0xb8) * fVar4 + (float)*puVar2);
  *(float *)(this + 0x74) = fVar4 * *(float *)(this + 0xc0) + *(float *)(this + 0x60);
  fVar4 = (float)(**(code **)(**(long **)(this + 0x10) + 0x60))();
  fVar4 = fVar4 + *(float *)(this + 0x28);
  uStack_a0 = *(undefined8 *)(this + 0x74);
  local_a8 = *puVar3;
  local_5c = 0;
  fVar6 = (float)*(undefined8 *)(this + 0xb8);
  fVar7 = (float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20);
  local_150 = &PTR__ConvexResultCallback_00fe1d68;
  local_f0 = CONCAT44(-fVar7,-fVar6);
  pbStack_f8 = *(btConvexShape **)(this + 8);
  local_68 = CONCAT44(fVar7 * fVar4 + (float)((ulong)*puVar2 >> 0x20),fVar6 * fVar4 + (float)*puVar2
                     );
  local_60 = fVar4 * *(float *)(this + 0xc0) + *(float *)(this + 0x60);
  uStack_144 = *(uint *)(this + 0x54) >> 0x10 | *(uint *)(this + 0x54) << 0x10;
  local_100 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  local_e8 = -*(float *)(this + 0xc0);
  local_148 = 1.0;
  local_e4 = 0x3f35048100000000;
  if (this[0xb6] == (Bt2KinematicCharacterController)0x0) {
    btCollisionWorld::convexSweepTest
              (param_1,*(btConvexShape **)(this + 0x10),(btTransform *)&local_98,
               (btTransform *)&local_d8,(ConvexResultCallback *)&local_150,0.0,false);
  }
  else {
    btGhostObject::convexSweepTest
              (pbStack_f8,*(btTransform **)(this + 0x10),(btTransform *)&local_98,
               (ConvexResultCallback *)&local_d8,0.0,SUB81(&local_150,0));
  }
  if (1.0 <= local_148) {
    *(undefined4 *)(this + 0x68) = *(undefined4 *)(this + 0x24);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x74);
    *puVar2 = *puVar3;
  }
  else if (afStack_120[*(int *)(this + 200)] <= 0.0) {
    *(undefined4 *)(this + 0x68) = 0;
  }
  else {
    fVar4 = 1.0 - local_148;
    this[0xb4] = (Bt2KinematicCharacterController)0x1;
    uVar5 = NEON_fmadd(fVar4,*(undefined4 *)(this + 0x60),local_148 * *(float *)(this + 0x74));
    *(float *)(this + 0x68) = *(float *)(this + 0x24) * local_148;
    *(ulong *)(this + 0x58) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x6c) >> 0x20) * local_148 +
                  (float)((ulong)*(undefined8 *)(this + 0x58) >> 0x20) * fVar4,
                  (float)*(undefined8 *)(this + 0x6c) * local_148 +
                  (float)*(undefined8 *)(this + 0x58) * fVar4);
    *(undefined4 *)(this + 0x60) = uVar5;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


