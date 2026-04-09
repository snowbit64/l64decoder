// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayTestSingleInternal
// Entry Point: 00f4aa18
// Size: 1792 bytes
// Signature: undefined __cdecl rayTestSingleInternal(btTransform * param_1, btTransform * param_2, btCollisionObjectWrapper * param_3, RayResultCallback * param_4)


/* btCollisionWorld::rayTestSingleInternal(btTransform const&, btTransform const&,
   btCollisionObjectWrapper const*, btCollisionWorld::RayResultCallback&) */

void btCollisionWorld::rayTestSingleInternal
               (btTransform *param_1,btTransform *param_2,btCollisionObjectWrapper *param_3,
               RayResultCallback *param_4)

{
  undefined ***pppuVar1;
  undefined **this;
  long lVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int in_w6;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  float fVar14;
  undefined8 uVar13;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  ulong local_360;
  float fStack_358;
  undefined4 uStack_354;
  undefined **local_350;
  undefined ***local_348;
  undefined ***local_340;
  undefined ***pppuStack_338;
  undefined **local_330;
  undefined **local_328;
  undefined ***pppuStack_320;
  ulong local_318;
  ulong uStack_310;
  undefined4 local_308;
  undefined4 local_304;
  RayResultCallback *local_300;
  ulong local_2f8;
  undefined ***local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_1fc;
  undefined local_1e4;
  undefined **local_1c8;
  undefined ***local_1c0;
  undefined ***local_1b8;
  undefined8 *puStack_1b0;
  btTransform *local_1a8;
  btTransform *pbStack_1a0;
  RayResultCallback *local_198;
  float local_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  float local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined **local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined4 local_dc;
  undefined4 local_cc;
  undefined **local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  int local_98;
  undefined **local_90;
  undefined ***local_88;
  undefined ***local_80;
  undefined ***local_78;
  undefined4 local_70;
  int iStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_f8 = 0;
  local_f0 = 0xffffffff;
  uStack_e4 = 0x3f800000;
  local_ec = 0x3f8000003f800000;
  local_100 = 8;
  pppuVar3 = *(undefined ****)(param_3 + 8);
  local_dc = 0;
  local_cc = 0;
  puVar5 = *(undefined8 **)(param_3 + 0x18);
  iVar6 = *(int *)(pppuVar3 + 1);
  local_108 = &PTR__btConvexShape_0101c5e8;
  if (iVar6 < 0x14) {
    local_80 = &local_108;
    local_1fc = 0x38d1b717;
    local_1c8 = &PTR_DebugDraw_00feb2a8;
    local_118 = 0;
    local_110 = 0;
    local_90 = &PTR__btConvexCast_0101b5c0;
    local_350 = &PTR__btConvexCast_0101b438;
    local_348 = &local_330;
    pppuVar1 = &local_90;
    if ((*(uint *)(param_4 + 0x1c) & 8) != 0) {
      pppuVar1 = &local_350;
    }
    local_340 = local_80;
    pppuStack_338 = pppuVar3;
    local_120 = *(float *)(param_4 + 8);
    local_1e4 = 0;
    local_88 = &local_330;
    local_78 = pppuVar3;
    uVar4 = (*(code *)(*pppuVar1)[2])(pppuVar1);
    if ((uVar4 & 1) != 0) {
      uVar8 = NEON_fmadd(fStack_13c,fStack_13c,local_140 * local_140);
      fVar15 = (float)NEON_fmadd(fStack_138,fStack_138,uVar8);
      if ((0.0001 < fVar15) && (local_120 < *(float *)(param_4 + 8))) {
        local_a0 = (RayResultCallback *)CONCAT44(local_a0._4_4_,local_120);
        local_c0 = *(undefined ***)(param_3 + 0x10);
        local_b8 = 0;
        fVar15 = 1.0 / SQRT(fVar15);
        local_140 = fVar15 * local_140;
        fStack_13c = fVar15 * fStack_13c;
        fStack_138 = fVar15 * fStack_138;
        uStack_a8 = CONCAT44(uStack_134,fStack_138);
        local_b0 = CONCAT44(fStack_13c,local_140);
        (**(code **)(*(long *)param_4 + 0x18))(param_4,&local_c0,1);
      }
    }
  }
  else if (iVar6 - 0x15U < 9) {
    fVar16 = *(float *)(puVar5 + 6);
    fVar11 = *(float *)((long)puVar5 + 0x34);
    fVar19 = *(float *)(param_1 + 0x30);
    fVar22 = *(float *)(param_1 + 0x34);
    uStack_354 = 0;
    fVar9 = *(float *)(puVar5 + 3);
    fVar20 = (float)puVar5[2];
    fVar21 = (float)((ulong)puVar5[2] >> 0x20);
    fVar24 = *(float *)(puVar5 + 1);
    fVar25 = *(float *)(puVar5 + 5);
    fVar26 = *(float *)(puVar5 + 7);
    fVar28 = *(float *)(param_1 + 0x38);
    fVar29 = *(float *)(param_2 + 0x30);
    fVar30 = *(float *)(param_2 + 0x34);
    fVar23 = (float)puVar5[4];
    fVar14 = (float)((ulong)puVar5[4] >> 0x20);
    fVar27 = (float)NEON_fmadd(fVar26,fVar25,fVar11 * fVar9);
    fVar15 = (float)NEON_fmadd(fVar28,fVar25,fVar22 * fVar9);
    fVar34 = *(float *)(param_2 + 0x38);
    fVar27 = (float)NEON_fnmadd(fVar16,fVar24,-fVar27);
    fVar15 = fVar19 * fVar24 + fVar15;
    fVar32 = (float)*puVar5;
    fVar35 = (float)((ulong)*puVar5 >> 0x20);
    fVar9 = (float)NEON_fmadd(fVar34,fVar25,fVar30 * fVar9);
    fVar25 = fVar32 * fVar19 + fVar20 * fVar22 + fVar23 * fVar28;
    fVar22 = fVar35 * fVar19 + fVar21 * fVar22 + fVar14 * fVar28;
    fVar19 = -(fVar20 * fVar11 + fVar23 * fVar26) - fVar32 * fVar16;
    fVar11 = -(fVar21 * fVar11 + fVar14 * fVar26) - fVar35 * fVar16;
    fVar20 = fVar32 * fVar29 + fVar20 * fVar30 + fVar23 * fVar34;
    fVar21 = fVar35 * fVar29 + fVar21 * fVar30 + fVar14 * fVar34;
    fVar9 = fVar29 * fVar24 + fVar9;
    local_348 = (undefined ***)(ulong)(uint)(fVar27 + fVar15);
    local_360 = CONCAT44(fVar11 + fVar21,fVar19 + fVar20);
    fStack_358 = fVar27 + fVar9;
    local_350 = (undefined **)CONCAT44(fVar11 + fVar22,fVar19 + fVar25);
    local_300 = param_4;
    local_2f0 = pppuVar3;
    if (*(int *)(pppuVar3 + 1) == 0x15) {
      local_308 = *(undefined4 *)(param_4 + 0x1c);
      uStack_310 = (ulong)(uint)fStack_358;
      local_2f8 = *(ulong *)(param_3 + 0x10);
      pppuStack_320 = local_348;
      local_330 = &PTR__btTriangleCallback_010194f8;
      local_1b8 = &local_330;
      uStack_2e0 = puVar5[1];
      local_2e8 = *puVar5;
      local_c0 = (undefined **)0x0;
      local_b8 = 0;
      local_90 = (undefined **)0x0;
      local_88 = (undefined ***)0x0;
      uStack_2d0 = puVar5[3];
      local_2d8 = puVar5[2];
      uStack_2c0 = puVar5[5];
      local_2c8 = puVar5[4];
      uStack_2b0 = puVar5[7];
      local_2b8 = puVar5[6];
      local_1c0 = (undefined ***)pppuVar3[8];
      this = pppuVar3[9];
      local_304 = *(undefined4 *)(param_4 + 8);
      local_1c8 = &PTR__btNodeOverlapCallback_01019fc0;
      local_328 = local_350;
      local_318 = local_360;
      if (*(btQuantizedBvh *)(this + 8) == (btQuantizedBvh)0x0) {
        btQuantizedBvh::walkStacklessTreeAgainstRay
                  ((btNodeOverlapCallback *)this,(btVector3 *)&local_1c8,(btVector3 *)&local_350,
                   (btVector3 *)&local_360,(btVector3 *)&local_c0,(int)&local_90,in_w6);
      }
      else {
        btQuantizedBvh::walkStacklessQuantizedTreeAgainstRay
                  ((btQuantizedBvh *)this,(btNodeOverlapCallback *)&local_1c8,
                   (btVector3 *)&local_350,(btVector3 *)&local_360,(btVector3 *)&local_c0,
                   (btVector3 *)&local_90,0,*(int *)((long)this + 0x3c));
      }
    }
    else {
      local_308 = *(undefined4 *)(param_4 + 0x1c);
      fVar22 = fVar22 + fVar11;
      local_328 = (undefined **)CONCAT44(fVar22,fVar25 + fVar19);
      fVar15 = fVar15 + fVar27;
      fVar20 = fVar20 + fVar19;
      fVar21 = fVar21 + fVar11;
      local_318 = CONCAT44(fVar21,fVar20);
      fVar9 = fVar9 + fVar27;
      local_2f8 = *(ulong *)(param_3 + 0x10);
      uVar4 = NEON_fcmgt(local_328,local_318,4);
      pppuStack_320 = (undefined ***)(ulong)(uint)fVar15;
      local_304 = *(undefined4 *)(param_4 + 8);
      uStack_310 = (ulong)(uint)fVar9;
      local_330 = &PTR__btTriangleCallback_01019548;
      uStack_2e0 = puVar5[1];
      local_2e8 = *puVar5;
      uStack_2d0 = puVar5[3];
      local_2d8 = puVar5[2];
      uStack_2c0 = puVar5[5];
      local_2c8 = puVar5[4];
      uStack_2b0 = puVar5[7];
      local_2b8 = puVar5[6];
      local_1c8 = local_328;
      if ((uVar4 & 1) != 0) {
        local_1c8 = (undefined **)CONCAT44(fVar22,fVar20);
      }
      if (fVar21 < fVar22) {
        local_1c8 = (undefined **)CONCAT44(fVar21,local_1c8._0_4_);
      }
      fVar27 = fVar15;
      if (fVar9 < fVar15) {
        fVar27 = fVar9;
      }
      local_1c0 = (undefined ***)(ulong)(uint)fVar27;
      uVar4 = NEON_fcmgt(local_318,local_328,4);
      local_c0 = local_328;
      if ((uVar4 & 1) != 0) {
        local_c0 = (undefined **)CONCAT44(fVar22,fVar20);
      }
      if (fVar22 < fVar21) {
        local_c0 = (undefined **)CONCAT44(fVar21,SUB84(local_c0,0));
      }
      if (fVar15 < fVar9) {
        fVar15 = fVar9;
      }
      local_b8 = (ulong)(uint)fVar15;
      (*(code *)(*pppuVar3)[0x10])(pppuVar3,&local_330,&local_1c8,&local_c0);
    }
  }
  else if (iVar6 == 0x1f) {
    local_1c0 = *(undefined ****)(param_3 + 0x10);
    local_1c8 = &PTR__ICollide_01019598;
    local_1b8 = pppuVar3;
    puStack_1b0 = puVar5;
    local_1a8 = param_1;
    pbStack_1a0 = param_2;
    local_198 = param_4;
    if ((btDbvtNode **)pppuVar3[0xc] == (btDbvtNode **)0x0) {
      uVar10 = *(uint *)((long)pppuVar3 + 0x24);
      if (0 < (int)uVar10) {
        iVar6 = 0;
        lVar7 = 0;
        while( true ) {
          fVar15 = *(float *)puStack_1b0;
          fVar20 = *(float *)((long)puStack_1b0 + 4);
          fVar27 = *(float *)(puStack_1b0 + 2);
          fVar9 = *(float *)((long)puStack_1b0 + 0x14);
          puVar5 = (undefined8 *)((long)local_1b8[6] + lVar7);
          fVar32 = *(float *)(puStack_1b0 + 1);
          fVar23 = *(float *)(puStack_1b0 + 4);
          fVar25 = *(float *)((long)puStack_1b0 + 0x24);
          fVar19 = *(float *)(puVar5 + 1);
          fVar21 = (float)*puVar5;
          fVar11 = (float)((ulong)*puVar5 >> 0x20);
          uVar31 = *(undefined4 *)(puVar5 + 3);
          fVar29 = (float)puVar5[6];
          fVar14 = (float)puVar5[2];
          fVar16 = (float)((ulong)puVar5[2] >> 0x20);
          uVar33 = *(undefined4 *)(puVar5 + 5);
          fVar30 = (float)((ulong)puVar5[6] >> 0x20);
          uVar8 = NEON_fmadd(uVar31,fVar20,fVar19 * fVar15);
          uVar17 = NEON_fmadd(fVar9,uVar31,fVar27 * fVar19);
          fVar28 = *(float *)(puStack_1b0 + 3);
          uVar13 = NEON_rev64(CONCAT44(fVar30 * fVar20,fVar29 * fVar27),4);
          fVar22 = *(float *)(puStack_1b0 + 5);
          uVar12 = NEON_fmadd(uVar33,fVar32,uVar8);
          fVar35 = *(float *)(puVar5 + 7);
          fVar24 = (float)puVar5[4];
          fVar26 = (float)((ulong)puVar5[4] >> 0x20);
          local_330 = (undefined **)
                      CONCAT44(fVar11 * fVar15 + fVar16 * fVar20 + fVar26 * fVar32,
                               fVar21 * fVar15 + fVar14 * fVar20 + fVar24 * fVar32);
          local_88 = (undefined ***)puVar5[8];
          uVar8 = NEON_fmadd(fVar25,uVar31,fVar23 * fVar19);
          fVar20 = (float)NEON_fmadd(fVar35,fVar22,fVar23 * fVar29 + fVar25 * fVar30);
          uVar18 = NEON_fmadd(fVar28,uVar33,uVar17);
          uStack_310 = CONCAT44(fVar11 * fVar23 + fVar16 * fVar25 + fVar26 * fVar22,
                                fVar21 * fVar23 + fVar14 * fVar25 + fVar24 * fVar22);
          local_308 = NEON_fmadd(fVar22,uVar33,uVar8);
          local_80 = local_1c0;
          local_328 = (undefined **)(ulong)uVar12;
          pppuStack_320 =
               (undefined ***)
               CONCAT44(fVar11 * fVar27 + fVar16 * fVar9 + fVar26 * fVar28,
                        fVar21 * fVar27 + fVar14 * fVar9 + fVar24 * fVar28);
          local_300 = (RayResultCallback *)
                      CONCAT44((float)((ulong)uVar13 >> 0x20) + fVar9 * fVar30 + fVar28 * fVar35 +
                               (float)((ulong)puStack_1b0[6] >> 0x20),
                               (float)uVar13 + fVar15 * fVar29 + fVar32 * fVar35 +
                               (float)puStack_1b0[6]);
          local_318 = (ulong)uVar18;
          local_304 = 0;
          local_2f8 = (ulong)(uint)(fVar20 + *(float *)(puStack_1b0 + 7));
          local_70 = 0xffffffff;
          local_b0 = 0;
          local_a0 = local_198;
          local_90 = (undefined **)0x0;
          local_c0 = &PTR__RayResultCallback_010195f8;
          local_b8 = CONCAT44((int)(local_b8 >> 0x20),*(undefined4 *)(local_198 + 8));
          uStack_a8 = CONCAT44(*(undefined4 *)(local_198 + 0x1c),0xffff0001);
          local_98 = iVar6;
          local_78 = &local_330;
          iStack_6c = iVar6;
          rayTestSingleInternal
                    (local_1a8,pbStack_1a0,(btCollisionObjectWrapper *)&local_90,
                     (RayResultCallback *)&local_c0);
          if ((ulong)uVar10 * 0x58 + -0x58 == lVar7) break;
          lVar7 = lVar7 + 0x58;
          iVar6 = iVar6 + 1;
        }
      }
    }
    else {
      fVar20 = *(float *)(param_1 + 0x30) - *(float *)(puVar5 + 6);
      fVar27 = *(float *)(param_1 + 0x34) - *(float *)((long)puVar5 + 0x34);
      fVar21 = *(float *)(param_1 + 0x38) - *(float *)(puVar5 + 7);
      fVar11 = (float)puVar5[2];
      fVar19 = (float)((ulong)puVar5[2] >> 0x20);
      uVar8 = NEON_fmadd(*(float *)(puVar5 + 3),fVar27,*(float *)(puVar5 + 1) * fVar20);
      fVar9 = *(float *)(param_2 + 0x34) - *(float *)((long)puVar5 + 0x34);
      fVar15 = *(float *)(param_2 + 0x30) - *(float *)(puVar5 + 6);
      fVar23 = (float)puVar5[4];
      fVar25 = (float)((ulong)puVar5[4] >> 0x20);
      local_330 = (undefined **)
                  CONCAT44((float)((ulong)*puVar5 >> 0x20) * fVar20 + fVar19 * fVar27 +
                           fVar25 * fVar21,
                           (float)*puVar5 * fVar20 + fVar11 * fVar27 + fVar23 * fVar21);
      uVar10 = NEON_fmadd(*(float *)(puVar5 + 5),fVar21,uVar8);
      fVar20 = *(float *)(param_2 + 0x38) - *(float *)(puVar5 + 7);
      local_328 = (undefined **)(ulong)uVar10;
      uVar8 = NEON_fmadd(fVar20,*(float *)(puVar5 + 5),fVar9 * *(float *)(puVar5 + 3));
      uVar10 = NEON_fmadd(*(float *)(puVar5 + 1),fVar15,uVar8);
      local_b8 = (ulong)uVar10;
      local_c0 = (undefined **)
                 CONCAT44(fVar19 * fVar9 + fVar25 * fVar20 + fVar15 * *(float *)((long)puVar5 + 4),
                          fVar11 * fVar9 + fVar15 * *(float *)puVar5 + fVar23 * fVar20);
      btDbvt::rayTest((btDbvtNode *)*pppuVar3[0xc],(btVector3 *)&local_330,(btVector3 *)&local_c0,
                      (ICollide *)&local_1c8);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


