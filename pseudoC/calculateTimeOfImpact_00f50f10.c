// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateTimeOfImpact
// Entry Point: 00f50f10
// Size: 716 bytes
// Signature: undefined __cdecl calculateTimeOfImpact(btCollisionObject * param_1, btCollisionObject * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* btConvexConvexAlgorithm::calculateTimeOfImpact(btCollisionObject*, btCollisionObject*,
   btDispatcherInfo const&, btManifoldResult*) */

float btConvexConvexAlgorithm::calculateTimeOfImpact
                (btCollisionObject *param_1,btCollisionObject *param_2,btDispatcherInfo *param_3,
                btManifoldResult *param_4)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined **local_310;
  undefined *puStack_308;
  undefined ***local_300;
  undefined ***pppuStack_2f8;
  undefined auStack_2f0 [308];
  undefined4 local_1bc;
  undefined local_1a4;
  undefined **local_188 [21];
  float local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined **local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined4 local_9c;
  undefined4 local_8c;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)*(undefined8 *)(param_2 + 0x7c) - (float)*(undefined8 *)(param_2 + 0x3c);
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x7c) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_2 + 0x3c) >> 0x20);
  fVar3 = (float)NEON_fmadd(*(float *)(param_2 + 0x78) - *(float *)(param_2 + 0x38),
                            *(float *)(param_2 + 0x78) - *(float *)(param_2 + 0x38),fVar3 * fVar3);
  if (*(float *)(param_2 + 0x11c) * *(float *)(param_2 + 0x11c) <= fVar3 + fVar4 * fVar4) {
    fVar3 = 1.0;
    if (disableCcd != '\0') goto LAB_00f511a0;
  }
  else {
    fVar3 = 1.0;
    fVar4 = (float)*(undefined8 *)(param_3 + 0x7c) - (float)*(undefined8 *)(param_3 + 0x3c);
    fVar5 = (float)((ulong)*(undefined8 *)(param_3 + 0x7c) >> 0x20) -
            (float)((ulong)*(undefined8 *)(param_3 + 0x3c) >> 0x20);
    fVar4 = (float)NEON_fmadd(*(float *)(param_3 + 0x78) - *(float *)(param_3 + 0x38),
                              *(float *)(param_3 + 0x78) - *(float *)(param_3 + 0x38),fVar4 * fVar4)
    ;
    if (fVar4 + fVar5 * fVar5 < *(float *)(param_3 + 0x11c) * *(float *)(param_3 + 0x11c) ||
        disableCcd != '\0') goto LAB_00f511a0;
  }
  local_b8 = 0;
  local_9c = *(undefined4 *)(param_3 + 0x118);
  local_c0 = 8;
  local_b0 = 0xffffffff;
  uStack_a4 = 0x3f800000;
  local_ac = 0x3f8000003f800000;
  pppuStack_2f8 = &local_c8;
  local_e0 = 1e+18;
  local_300 = *(undefined ****)(param_2 + 200);
  local_d8 = 0;
  local_1bc = 0x38d1b717;
  puStack_308 = auStack_2f0;
  local_d0 = 0;
  local_1a4 = 0;
  local_310 = &PTR__btConvexCast_0101b438;
  local_188[0] = &PTR_DebugDraw_00feb2a8;
  local_c8 = &PTR__btConvexShape_0101c5e8;
  local_8c = local_9c;
  uVar2 = btGjkConvexCast::calcTimeOfImpact
                    ((btGjkConvexCast *)&local_310,(btTransform *)(param_2 + 8),
                     (btTransform *)(param_2 + 0x48),(btTransform *)(param_3 + 8),
                     (btTransform *)(param_3 + 0x48),(CastResult *)local_188);
  fVar3 = 1.0;
  if ((uVar2 & 1) != 0) {
    if (local_e0 < *(float *)(param_2 + 0x114)) {
      *(float *)(param_2 + 0x114) = local_e0;
    }
    if (local_e0 < *(float *)(param_3 + 0x114)) {
      *(float *)(param_3 + 0x114) = local_e0;
    }
    fVar3 = 1.0;
    if (local_e0 < 1.0) {
      fVar3 = local_e0;
    }
  }
  puStack_308 = auStack_2f0;
  local_9c = *(undefined4 *)(param_2 + 0x118);
  local_b0 = 0xffffffff;
  local_300 = &local_c8;
  uStack_a4 = 0x3f800000;
  local_ac = 0x3f8000003f800000;
  local_b8 = 0;
  local_c0 = 8;
  local_e0 = 1e+18;
  local_d8 = 0;
  local_d0 = 0;
  local_1bc = 0x38d1b717;
  pppuStack_2f8 = *(undefined ****)(param_3 + 200);
  local_1a4 = 0;
  local_310 = &PTR__btConvexCast_0101b438;
  local_188[0] = &PTR_DebugDraw_00feb2a8;
  local_c8 = &PTR__btConvexShape_0101c5e8;
  local_8c = local_9c;
  param_1 = (btCollisionObject *)
            btGjkConvexCast::calcTimeOfImpact
                      ((btGjkConvexCast *)&local_310,(btTransform *)(param_2 + 8),
                       (btTransform *)(param_2 + 0x48),(btTransform *)(param_3 + 8),
                       (btTransform *)(param_3 + 0x48),(CastResult *)local_188);
  if (((ulong)param_1 & 1) != 0) {
    if (local_e0 < *(float *)(param_2 + 0x114)) {
      *(float *)(param_2 + 0x114) = local_e0;
    }
    if (local_e0 < *(float *)(param_3 + 0x114)) {
      *(float *)(param_3 + 0x114) = local_e0;
    }
    if (local_e0 < fVar3) {
      fVar3 = local_e0;
    }
  }
LAB_00f511a0:
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


