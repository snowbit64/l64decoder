// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderShapeDebugData
// Entry Point: 009abb10
// Size: 824 bytes
// Signature: undefined __thiscall renderShapeDebugData(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, btRigidBody * param_2)


/* Bt2ScenegraphPhysicsContext::renderShapeDebugData(TransformGroup*, btRigidBody*) */

void __thiscall
Bt2ScenegraphPhysicsContext::renderShapeDebugData
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,btRigidBody *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  uint uVar35;
  undefined4 uVar36;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined **local_120;
  undefined8 local_118;
  undefined8 local_110;
  ulong local_108;
  undefined8 uStack_100;
  ulong local_f8;
  undefined8 uStack_f0;
  ulong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar3 = RawTransformGroup::getPhysicsObject();
  if (lVar3 != 0) {
    btRigidBody::getAabb(param_2,(btVector3 *)&local_88,(btVector3 *)&local_98);
    plVar4 = (long *)DeferredDebugRenderer::getPhysicsCullingFrustum();
    if (plVar4 != (long *)0x0) {
      fVar9 = (float)((ulong)local_88 >> 0x20);
      fVar10 = (float)((ulong)local_98 >> 0x20);
      local_120 = (undefined **)
                  CONCAT44((fVar9 + fVar10) * 0.5,((float)local_88 + (float)local_98) * 0.5);
      local_b0 = CONCAT44((fVar10 - fVar9) * 0.5,((float)local_98 - (float)local_88) * 0.5);
      local_118 = (undefined **)CONCAT44(local_118._4_4_,(local_80 + local_90) * 0.5);
      uStack_a8 = CONCAT44(uStack_a8._4_4_,(local_90 - local_80) * 0.5);
      uVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,&local_120,&local_b0);
      if ((uVar5 & 1) == 0) goto LAB_009abe10;
    }
    plVar4 = *(long **)(param_2 + 200);
    iVar6 = *(int *)(plVar4 + 1);
    if (iVar6 - 0x15U < 9) {
      uStack_f0 = *(undefined8 *)(param_2 + 0x10);
      local_f8 = *(ulong *)(param_2 + 8);
      uStack_e0 = *(undefined8 *)(param_2 + 0x20);
      local_e8 = *(ulong *)(param_2 + 0x18);
      uStack_d0 = *(undefined8 *)(param_2 + 0x30);
      local_d8 = *(undefined8 *)(param_2 + 0x28);
      uStack_a8 = 0x5d5e0b6b;
      local_b0 = 0x5d5e0b6b5d5e0b6b;
      local_120 = &PTR__DebugDrawCallback_00fe1920;
      local_118 = &PTR__DebugDrawCallback_00fe1958;
      uStack_128 = 0xdd5e0b6b;
      local_130 = 0xdd5e0b6bdd5e0b6b;
      uStack_c0 = *(undefined8 *)(param_2 + 0x40);
      local_c8 = *(undefined8 *)(param_2 + 0x38);
      local_110 = *(undefined8 *)(this + 0x388);
      local_b8 = 0;
      uStack_100 = 0x3f80000000000000;
      local_108 = 0x3f800000;
                    /* try { // try from 009abc54 to 009abc6b has its CatchHandler @ 009abe48 */
      (**(code **)(*plVar4 + 0x80))(plVar4,&local_120,&local_130,&local_b0);
      btInternalTriangleIndexCallback::~btInternalTriangleIndexCallback
                ((btInternalTriangleIndexCallback *)&local_118);
      btTriangleCallback::~btTriangleCallback((btTriangleCallback *)&local_120);
    }
    else if (iVar6 == 5) {
      renderPointCloudShapeDebugData
                ((btTransform *)this,param_2 + 8,(btConvexPointCloudShape *)param_2,(int)plVar4);
    }
    else if (iVar6 == 0x1f) {
      iVar6 = *(int *)((long)plVar4 + 0x24);
      if (0 < iVar6) {
        lVar3 = 0;
        lVar7 = 0x40;
        do {
          if (*(int *)(*(long *)(plVar4[6] + lVar7) + 8) == 5) {
            lVar1 = plVar4[6] + lVar7;
            uVar30 = *(undefined4 *)(param_2 + 0x10);
            uVar8 = *(undefined4 *)(param_2 + 8);
            fVar9 = *(float *)(param_2 + 0xc);
            uVar14 = *(undefined4 *)(param_2 + 0x18);
            fVar15 = *(float *)(param_2 + 0x1c);
            fVar10 = *(float *)(lVar1 + -0x30);
            fVar12 = *(float *)(lVar1 + -0x2c);
            uVar28 = *(undefined4 *)(param_2 + 0x28);
            fVar29 = *(float *)(param_2 + 0x2c);
            uVar18 = *(undefined4 *)(lVar1 + -0x40);
            uVar21 = *(undefined4 *)(lVar1 + -0x3c);
            fVar13 = *(float *)(lVar1 + -0x28);
            uVar31 = *(undefined4 *)(lVar1 + -0x20);
            uVar32 = *(undefined4 *)(lVar1 + -0x1c);
            uVar16 = NEON_fmadd(uVar18,uVar8,fVar10 * fVar9);
            uVar26 = NEON_fmadd(uVar18,uVar14,fVar10 * fVar15);
            uVar18 = NEON_fmadd(uVar18,uVar28,fVar10 * fVar29);
            uVar19 = NEON_fmadd(uVar21,uVar8,fVar9 * fVar12);
            uVar36 = *(undefined4 *)(lVar1 + -0x10);
            fVar10 = *(float *)(lVar1 + -0xc);
            uVar25 = *(undefined4 *)(lVar1 + -0x38);
            uVar27 = NEON_fmadd(uVar21,uVar14,fVar12 * fVar15);
            uVar17 = NEON_fmadd(uVar31,uVar30,uVar16);
            uVar20 = NEON_fmadd(uVar32,uVar30,uVar19);
            uVar23 = NEON_fmadd(uVar25,uVar8,fVar9 * fVar13);
            uVar34 = NEON_fmadd(uVar25,uVar14,fVar13 * fVar15);
            uVar16 = NEON_fmadd(uVar21,uVar28,fVar12 * fVar29);
            uVar22 = *(undefined4 *)(param_2 + 0x20);
            uVar8 = NEON_fmadd(uVar36,uVar8,fVar9 * fVar10);
            uVar19 = NEON_fmadd(uVar36,uVar14,fVar15 * fVar10);
            uVar21 = NEON_fmadd(uVar36,uVar28,fVar29 * fVar10);
            uVar36 = *(undefined4 *)(param_2 + 0x30);
            uVar14 = *(undefined4 *)(lVar1 + -8);
            uVar26 = NEON_fmadd(uVar31,uVar22,uVar26);
            uVar33 = *(undefined4 *)(lVar1 + -0x18);
            local_120 = (undefined **)CONCAT44(uVar20,uVar17);
            uVar18 = NEON_fmadd(uVar31,uVar36,uVar18);
            fVar9 = (float)NEON_fmadd(uVar14,uVar30,uVar8);
            fVar12 = (float)NEON_fmadd(uVar14,uVar22,uVar19);
            fVar10 = (float)NEON_fmadd(uVar14,uVar36,uVar21);
            uVar8 = NEON_fmadd(uVar32,uVar36,uVar16);
            uVar14 = NEON_fmadd(uVar25,uVar28,fVar13 * fVar29);
            uVar24 = NEON_fmadd(uVar33,uVar30,uVar23);
            uVar16 = NEON_fmadd(uVar32,uVar22,uVar27);
            uVar35 = NEON_fmadd(uVar33,uVar22,uVar34);
            uStack_100 = CONCAT44(uVar8,uVar18);
            uVar11 = NEON_fmadd(uVar33,uVar36,uVar14);
            local_e8 = (ulong)(uint)(fVar10 + *(float *)(param_2 + 0x40));
            uStack_f0 = CONCAT44(fVar12 + *(float *)(param_2 + 0x3c),
                                 *(float *)(param_2 + 0x38) + fVar9);
            local_118 = (undefined **)(ulong)uVar24;
            local_110 = CONCAT44(uVar16,uVar26);
            local_108 = (ulong)uVar35;
            local_f8 = (ulong)uVar11;
            renderPointCloudShapeDebugData
                      ((btTransform *)this,(btRigidBody *)&local_120,
                       (btConvexPointCloudShape *)param_2,(int)*(undefined8 *)(plVar4[6] + lVar7));
            iVar6 = *(int *)((long)plVar4 + 0x24);
          }
          lVar3 = lVar3 + 1;
          lVar7 = lVar7 + 0x58;
        } while (lVar3 < iVar6);
      }
    }
  }
LAB_009abe10:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


