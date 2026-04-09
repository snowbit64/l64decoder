// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEntity
// Entry Point: 007225bc
// Size: 552 bytes
// Signature: undefined __cdecl onEntity(uint param_1, int param_2, btCollisionObject * param_3, bool param_4)


/* TrafficVehicle::PhysicsReport::onEntity(unsigned int, int, btCollisionObject const*, bool) */

void TrafficVehicle::PhysicsReport::onEntity
               (uint param_1,int param_2,btCollisionObject *param_3,bool param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  Bt2ScenegraphPhysicsContext *this;
  btCollisionObject *pbVar4;
  ulong in_x4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 in_s2;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  pbVar4 = (btCollisionObject *)(ulong)param_4;
  uVar3 = (ulong)param_1;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_2 != -1) && (*(int *)(*(long *)(uVar3 + 0x158) + 0x18) != param_2)) {
    *(undefined *)(uVar3 + 0x128) = 1;
    ScenegraphPhysicsContextManager::getInstance();
    this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    fVar5 = (float)Bt2ScenegraphPhysicsContext::getDistancePointCloudShape
                             (this,(Matrix4x4 *)(uVar3 + 0x48),(Vector3 *)(uVar3 + 0xb8),4,pbVar4,
                              (Vector3 *)0x0,(Vector3 *)0x0);
    fVar7 = *(float *)(uVar3 + 0x124);
    if (fVar7 <= fVar5) {
      fVar5 = fVar7;
    }
    *(float *)(uVar3 + 0x124) = fVar5;
    uVar2 = Bt2ScenegraphPhysicsContext::getInternalRigidBodyCollisionMask(this,pbVar4);
    *(int *)(uVar3 + 0x150) = param_2;
    *(bool *)(uVar3 + 0x129) =
         ((*(uint *)(uVar3 + 0x11c) | *(uint *)(uVar3 + 0x118)) & uVar2) == *(uint *)(uVar3 + 0x118)
    ;
    *(bool *)(uVar3 + 0x12a) = (*(uint *)(uVar3 + 0x120) & uVar2) != 0;
    uVar6 = Bt2ScenegraphPhysicsContext::getInternalRigidBodyLinearVelocity(this,pbVar4);
    uVar10 = NEON_fmadd(uVar6,uVar6,fVar7 * fVar7);
    uVar9 = NEON_fmadd(*(undefined4 *)(uVar3 + 0x108),*(undefined4 *)(uVar3 + 0x108),
                       *(float *)(uVar3 + 0x10c) * *(float *)(uVar3 + 0x10c));
    fVar11 = (float)NEON_fmadd(in_s2,in_s2,uVar10);
    fVar5 = (float)NEON_fmadd(*(undefined4 *)(uVar3 + 0x110),*(undefined4 *)(uVar3 + 0x110),uVar9);
    if (fVar5 < fVar11) {
      *(undefined4 *)(uVar3 + 0x144) = uVar6;
      *(float *)(uVar3 + 0x148) = fVar7;
      *(undefined4 *)(uVar3 + 0x14c) = in_s2;
    }
    uStack_88 = 0;
    local_90 = 0x3f800000;
    uStack_78 = 0;
    uStack_80 = 0x3f80000000000000;
    uStack_68 = 0x3f800000;
    local_70 = 0;
    uStack_58 = 0x3f80000000000000;
    uStack_60 = 0;
    Bt2ScenegraphPhysicsContext::getInternalRigidBodyCollisionAABB
              (this,pbVar4,(Matrix4x4 *)&local_90,(Vector3 *)&local_a0,(Vector3 *)&local_b0);
    uVar8 = *(undefined8 *)(uVar3 + 300);
    uVar13 = NEON_fcmgt(local_b0,*(undefined8 *)(uVar3 + 0x138),4);
    uVar12 = NEON_fcmgt(uVar8,local_a0,4);
    uVar8 = NEON_bif(local_a0,uVar8,uVar12,1);
    if (*(float *)(uVar3 + 0x134) <= local_98) {
      local_98 = *(float *)(uVar3 + 0x134);
    }
    uVar12 = NEON_bsl(uVar13,local_b0,*(undefined8 *)(uVar3 + 0x138),1);
    if (local_a8 <= *(float *)(uVar3 + 0x140)) {
      local_a8 = *(float *)(uVar3 + 0x140);
    }
    *(undefined8 *)(uVar3 + 300) = uVar8;
    *(float *)(uVar3 + 0x134) = local_98;
    *(undefined8 *)(uVar3 + 0x138) = uVar12;
    *(float *)(uVar3 + 0x140) = local_a8;
  }
  if ((in_x4 & 1) != 0) {
    *(undefined8 *)(uVar3 + 0xfc) = *(undefined8 *)(uVar3 + 0x138);
    *(float *)(uVar3 + 0xe8) = *(float *)(uVar3 + 0x124);
    *(undefined *)(uVar3 + 0xec) = *(undefined *)(uVar3 + 0x128);
    *(undefined2 *)(uVar3 + 0xed) = *(undefined2 *)(uVar3 + 0x129);
    *(undefined8 *)(uVar3 + 0xf0) = *(undefined8 *)(uVar3 + 300);
    *(undefined4 *)(uVar3 + 0xf8) = *(undefined4 *)(uVar3 + 0x134);
    *(undefined4 *)(uVar3 + 0x104) = *(undefined4 *)(uVar3 + 0x140);
    *(undefined8 *)(uVar3 + 0x108) = *(undefined8 *)(uVar3 + 0x144);
    *(undefined4 *)(uVar3 + 0x110) = *(undefined4 *)(uVar3 + 0x14c);
    *(undefined4 *)(uVar3 + 0x114) = *(undefined4 *)(uVar3 + 0x150);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(3.0 < *(float *)(uVar3 + 0x124));
}


