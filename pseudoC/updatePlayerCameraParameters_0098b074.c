// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updatePlayerCameraParameters
// Entry Point: 0098b074
// Size: 524 bytes
// Signature: undefined __thiscall updatePlayerCameraParameters(PlayerCenteredCollisionSystem * this, ICommandBuffer * param_1, CameraInfo * param_2)


/* PlayerCenteredCollisionSystem::updatePlayerCameraParameters(ICommandBuffer*,
   PlayerCenteredSystem::CameraInfo const&) */

void __thiscall
PlayerCenteredCollisionSystem::updatePlayerCameraParameters
          (PlayerCenteredCollisionSystem *this,ICommandBuffer *param_1,CameraInfo *param_2)

{
  long lVar1;
  Bt2ScenegraphPhysicsContext *this_00;
  PlayerCenteredCollisionHeightmap *this_01;
  long lVar2;
  PlayerCenteredCollisionSystem *this_02;
  ulong uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_120;
  float local_11c;
  undefined4 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_100;
  float local_fc;
  undefined4 uStack_f8;
  undefined4 local_f0 [2];
  undefined4 local_e8;
  float local_e0;
  float local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  float local_c0;
  float local_b8;
  long local_b0;
  
  lVar1 = tpidr_el0;
  local_b0 = *(long *)(lVar1 + 0x28);
  this_01 = *(PlayerCenteredCollisionHeightmap **)(this + 0x10);
  fVar4 = cosf(*(float *)(param_2 + 0x38) * 0.5);
  PlayerCenteredCollisionHeightmap::update
            (this_01,(Vector3 *)param_2,(Vector3 *)(param_2 + 0xc),fVar4);
  lVar2 = *(long *)(this + 8);
  *(undefined4 *)(this + 0x20) = 0;
  if (lVar2 != 0) {
    RawTransformGroup::updateWorldTransformation();
    Matrix4x4::invert3x4((Matrix4x4 *)local_f0,(Matrix4x4 *)(lVar2 + 0xb8));
    if (*(int *)(this + 0x18) != 0) {
      fVar4 = 0.0;
      uVar3 = 0;
      this_02 = this + 0x28;
      do {
        uVar10 = NEON_fmadd((&DAT_00519f58)[uVar3],fVar4,*(undefined4 *)param_2);
        uVar11 = NEON_fmadd((&DAT_00519f6c)[uVar3],fVar4,*(undefined4 *)(param_2 + 8));
        uVar5 = NEON_fmadd(uVar10,local_f0[0],*(float *)(param_2 + 4) * local_e0);
        uVar8 = NEON_fmadd(uVar10,local_e8,*(float *)(param_2 + 4) * local_d8);
        fVar6 = (float)NEON_fmadd(uVar11,local_d0,uVar5);
        fVar9 = (float)NEON_fmadd(uVar11,local_c8,uVar8);
        fVar9 = (float)BaseTerrain::getInterpolatedHeightAtPoint
                                 ((BaseTerrain *)(lVar2 + 0x170),
                                  (local_c0 + fVar6) / *(float *)(lVar2 + 0x218) +
                                  *(float *)(lVar2 + 0x204),
                                  *(float *)(lVar2 + 0x204) +
                                  (local_b8 + fVar9) / *(float *)(lVar2 + 0x218));
        local_110 = 0xbf80000000000000;
        local_108 = 0;
        local_100 = uVar10;
        local_fc = fVar9 + 40.0;
        uStack_f8 = uVar11;
        ScenegraphPhysicsContextManager::getInstance();
        this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
        fVar7 = (float)Bt2ScenegraphPhysicsContext::raycastClip
                                 (this_00,(Vector3 *)&local_100,(Vector3 *)&local_110,40.0,
                                  *(uint *)(this + 0x1c));
        fVar7 = (fVar9 + 40.0) - fVar7;
        fVar6 = (fVar7 - fVar9) * 0.5;
        local_11c = (fVar9 + fVar7) * 0.5;
        local_120 = uVar10;
        uStack_118 = uVar11;
        BoundingSphere::assign((BoundingSphere *)this_02,(Vector3 *)&local_120,fVar6);
        if (uVar3 != 0) {
          fVar6 = fVar4;
        }
        fVar4 = fVar6;
        uVar3 = uVar3 + 1;
        this_02 = (PlayerCenteredCollisionSystem *)((BoundingSphere *)this_02 + 0x20);
      } while (uVar3 < *(uint *)(this + 0x18));
    }
    *(undefined4 *)(this + 0x20) = 5;
  }
  if (*(long *)(lVar1 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


