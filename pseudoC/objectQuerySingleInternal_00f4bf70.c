// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: objectQuerySingleInternal
// Entry Point: 00f4bf70
// Size: 2548 bytes
// Signature: undefined __thiscall objectQuerySingleInternal(btCollisionWorld * this, btConvexShape * param_1, btTransform * param_2, btTransform * param_3, btCollisionObjectWrapper * param_4, ConvexResultCallback * param_5, float param_6, bool param_7)


/* btCollisionWorld::objectQuerySingleInternal(btConvexShape const*, btTransform const&, btTransform
   const&, btCollisionObjectWrapper const*, btCollisionWorld::ConvexResultCallback&, float, bool) */

void __thiscall
btCollisionWorld::objectQuerySingleInternal
          (btCollisionWorld *this,btConvexShape *param_1,btTransform *param_2,btTransform *param_3,
          btCollisionObjectWrapper *param_4,ConvexResultCallback *param_5,float param_6,bool param_7
          )

{
  ulong *puVar1;
  btQuantizedBvh *this_00;
  int iVar2;
  long lVar3;
  byte bVar4;
  undefined *puVar5;
  btCollisionWorld *pbVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  btCollisionWorld **ppbVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  uint uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  btVector3 abStack_358 [16];
  undefined8 local_348;
  float local_340;
  undefined4 local_33c;
  undefined local_338 [12];
  undefined4 local_32c;
  undefined8 local_328;
  ulong local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  float local_2f8;
  undefined **local_2f0;
  timeval *local_2e8;
  timeval *local_2e0;
  undefined8 uStack_2d8;
  long *local_2d0;
  btCollisionWorld *pbStack_2c8;
  undefined4 local_2c0;
  timeval local_2b8;
  undefined8 local_2a8;
  ulong uStack_2a0;
  undefined8 local_298;
  ulong uStack_290;
  undefined8 local_288;
  ulong uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  long *plStack_220;
  btCollisionWorld *local_218;
  undefined8 uStack_210;
  btCollisionWorld *local_208;
  undefined8 uStack_200;
  btCollisionWorld *local_1f8;
  btCollisionWorld *pbStack_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  float local_1e0;
  byte local_1dc;
  btCollisionObjectWrapper *local_1d8;
  undefined8 uStack_1d0;
  long *local_1c8;
  undefined4 local_184;
  undefined local_16c;
  undefined **local_150;
  ulong local_148;
  undefined8 local_140;
  timeval *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined8 local_11c;
  undefined4 local_114;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  undefined8 local_a0;
  float local_98;
  long local_90;
  
  uVar15 = (ulong)param_7;
  uVar14 = (uint)param_7;
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  plVar7 = *(long **)(param_3 + 8);
  ppbVar10 = *(btCollisionWorld ***)(param_3 + 0x18);
  iVar2 = *(int *)(plVar7 + 1);
  bVar4 = (byte)param_5;
  if (iVar2 < 0x14) {
    local_184 = 0x38d1b717;
    local_150 = &PTR_DebugDraw_00feb2a8;
    local_a8 = *(float *)(param_4 + 8);
    local_338._0_8_ = &PTR__btConvexPenetrationDepthSolver_0101be48;
    local_2f0 = &PTR__btConvexCast_0101b3d0;
    local_2e8 = &local_2b8;
    local_a0 = 0;
    local_2e0 = (timeval *)local_338;
    local_16c = 0;
    pbStack_2c8 = (btCollisionWorld *)0x0;
    local_2c0 = (float)(CONCAT31(local_2c0._1_3_,bVar4) & 0xffffff01);
    uStack_2d8 = this;
    local_2d0 = plVar7;
    local_98 = param_6;
    this = (btCollisionWorld *)
           btContinuousConvexCollision::calcTimeOfImpact
                     ((btContinuousConvexCollision *)&local_2f0,(btTransform *)param_1,param_2,
                      (btTransform *)ppbVar10,(btTransform *)ppbVar10,(CastResult *)&local_150);
    if (((ulong)this & 1) != 0) {
      uVar13 = NEON_fmadd(fStack_c4,fStack_c4,local_c8 * local_c8);
      fVar20 = (float)NEON_fmadd(fStack_c0,fStack_c0,uVar13);
      if ((0.0001 < fVar20) && (local_a8 < *(float *)(param_4 + 8))) {
        local_2f8 = local_a8;
        local_328 = *(undefined8 *)(param_3 + 0x10);
        local_320 = 0;
        fVar20 = 1.0 / SQRT(fVar20);
        local_c8 = fVar20 * local_c8;
        fStack_c4 = fVar20 * fStack_c4;
        fStack_c0 = fVar20 * fStack_c0;
        uStack_310 = CONCAT44(uStack_bc,fStack_c0);
        local_318 = CONCAT44(fStack_c4,local_c8);
        uStack_300 = uStack_b0;
        local_308 = local_b8;
        this = (btCollisionWorld *)(**(code **)(*(long *)param_4 + 0x18))(param_4,&local_328,1);
      }
    }
  }
  else if (iVar2 - 0x15U < 9) {
    if (iVar2 == 0x1c) {
      uStack_200 = (btCollisionWorld *)CONCAT44(uStack_200._4_4_,param_6);
      local_2b8.tv_sec = (__time_t)&PTR_DebugDraw_00feb2a8;
      local_208 = (btCollisionWorld *)0x0;
      local_140 = 0;
      uStack_210 = (btCollisionWorld *)CONCAT44(uStack_210._4_4_,*(undefined4 *)(param_4 + 8));
      local_150 = &PTR__btConvexCast_0101b3d0;
      local_130 = 0;
      local_128 = SUB84(plVar7,0);
      local_124 = (undefined4)((ulong)plVar7 >> 0x20);
      local_148 = 0;
      local_138 = (timeval *)this;
      this = (btCollisionWorld *)
             btContinuousConvexCollision::calcTimeOfImpact
                       ((btContinuousConvexCollision *)&local_150,(btTransform *)param_1,param_2,
                        (btTransform *)ppbVar10,(btTransform *)ppbVar10,(CastResult *)&local_2b8);
      if (((ulong)this & 1) != 0) {
        uVar13 = NEON_fmadd(uStack_230._4_4_,uStack_230._4_4_,(float)uStack_230 * (float)uStack_230)
        ;
        fVar20 = (float)NEON_fmadd((float)local_228,(float)local_228,uVar13);
        if ((0.0001 < fVar20) && ((float)uStack_210 < *(float *)(param_4 + 8))) {
          local_2c0 = (float)uStack_210;
          fVar20 = 1.0 / SQRT(fVar20);
          uStack_230 = (timeval *)CONCAT44(fVar20 * uStack_230._4_4_,fVar20 * (float)uStack_230);
          local_228 = (btCollisionWorld *)CONCAT44(local_228._4_4_,fVar20 * (float)local_228);
          pbStack_2c8 = local_218;
          local_2d0 = plStack_220;
          local_2f0 = *(undefined ***)(param_3 + 0x10);
          uStack_2d8 = local_228;
          local_2e0 = uStack_230;
          local_2e8 = (timeval *)0x0;
          this = (btCollisionWorld *)(**(code **)(*(long *)param_4 + 0x18))(param_4,&local_2f0,1);
        }
      }
    }
    else {
      local_2b8.tv_usec = (__suseconds_t)this;
      local_1e0 = param_6;
      local_1d8 = param_4;
      local_1c8 = plVar7;
      if (iVar2 == 0x15) {
        fVar25 = *(float *)((long)ppbVar10 + 0x34);
        fVar18 = *(float *)(ppbVar10 + 7);
        fVar16 = *(float *)(ppbVar10 + 5);
        fVar20 = SUB84(ppbVar10[4],0);
        fVar24 = (float)((ulong)ppbVar10[4] >> 0x20);
        fVar21 = *(float *)(ppbVar10 + 3);
        fVar29 = *(float *)(ppbVar10 + 6);
        fVar22 = *(float *)(ppbVar10 + 1);
        fVar45 = SUB84(ppbVar10[2],0);
        fVar17 = (float)((ulong)ppbVar10[2] >> 0x20);
        fVar40 = *(float *)(param_2 + 8);
        local_32c = 0;
        fVar26 = (float)NEON_fmadd(fVar25,fVar21,fVar18 * fVar16);
        fVar30 = *(float *)(param_2 + 0x30);
        fVar36 = *(float *)(param_2 + 0x34);
        fVar33 = SUB84(*ppbVar10,0);
        fVar38 = (float)*(undefined8 *)param_2;
        fVar44 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
        fVar34 = *(float *)(param_1 + 0x30);
        fVar23 = *(float *)(param_1 + 0x34);
        uVar13 = NEON_fnmadd(fVar29,fVar22,-fVar26);
        fVar43 = *(float *)(param_2 + 0x18);
        fVar35 = (float)((ulong)*ppbVar10 >> 0x20);
        fVar26 = -(fVar20 * fVar18 + fVar45 * fVar25) - fVar33 * fVar29;
        fVar25 = -(fVar24 * fVar18 + fVar17 * fVar25) - fVar35 * fVar29;
        fVar46 = (float)*(undefined8 *)(param_2 + 0x10);
        fVar39 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
        local_11c = 0;
        local_124 = 0;
        uStack_120 = 0;
        uVar8 = *(undefined8 *)(param_3 + 0x10);
        uVar31 = NEON_fmadd(fVar30,fVar22,uVar13);
        uVar13 = NEON_fmadd(fVar34,fVar22,uVar13);
        fVar42 = (float)*(undefined8 *)(param_2 + 0x20);
        fVar28 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
        local_150 = (undefined **)
                    CONCAT44(fVar44 * fVar33 + fVar39 * fVar45 + fVar28 * fVar20,
                             fVar38 * fVar33 + fVar46 * fVar45 + fVar42 * fVar20);
        local_114 = 0;
        uVar32 = NEON_fmadd(fVar36,fVar21,uVar31);
        uVar31 = NEON_fmadd(fVar23,fVar21,uVar13);
        fVar18 = *(float *)(param_2 + 0x38);
        fVar37 = *(float *)(param_2 + 0x28);
        fVar29 = *(float *)(param_1 + 0x38);
        local_338._8_4_ = NEON_fmadd(fVar18,fVar16,uVar32);
        local_338._0_8_ =
             CONCAT44(fVar25 + fVar35 * fVar30 + fVar17 * fVar36 + fVar24 * fVar18,
                      fVar26 + fVar33 * fVar30 + fVar45 * fVar36 + fVar20 * fVar18);
        uVar13 = NEON_fmadd(fVar43,fVar21,fVar40 * fVar22);
        uVar27 = NEON_fmadd(fVar29,fVar16,uVar31);
        local_328 = CONCAT44(fVar25 + fVar35 * fVar34 + fVar17 * fVar23 + fVar24 * fVar29,
                             fVar26 + fVar33 * fVar34 + fVar45 * fVar23 + fVar20 * fVar29);
        local_130 = CONCAT44(fVar44 * fVar22 + fVar39 * fVar21 + fVar28 * fVar16,
                             fVar38 * fVar22 + fVar46 * fVar21 + fVar42 * fVar16);
        local_128 = NEON_fmadd(fVar37,fVar16,uVar13);
        local_148 = (ulong)(uint)(fVar40 * fVar33 + fVar43 * fVar45 + fVar37 * fVar20);
        local_320 = (ulong)uVar27;
        local_140 = CONCAT44(fVar44 * fVar35 + fVar39 * fVar17 + fVar28 * fVar24,
                             fVar38 * fVar35 + fVar46 * fVar17 + fVar42 * fVar24);
        local_138 = (timeval *)(ulong)(uint)(fVar40 * fVar35 + fVar43 * fVar17 + fVar37 * fVar24);
        local_1e4 = (**(code **)(*plVar7 + 0x60))(plVar7);
        uStack_2a0 = *(ulong *)(param_1 + 8);
        local_2a8 = *(undefined8 *)param_1;
        uStack_290 = *(ulong *)(param_1 + 0x18);
        local_298 = *(undefined8 *)(param_1 + 0x10);
        uStack_280 = *(ulong *)(param_1 + 0x28);
        local_288 = *(undefined8 *)(param_1 + 0x20);
        uStack_270 = *(undefined8 *)(param_1 + 0x38);
        local_278 = *(undefined8 *)(param_1 + 0x30);
        uStack_260 = *(undefined8 *)(param_2 + 8);
        local_268 = *(undefined8 *)param_2;
        uStack_250 = *(undefined8 *)(param_2 + 0x18);
        local_258 = *(undefined8 *)(param_2 + 0x10);
        uStack_240 = *(undefined8 *)(param_2 + 0x28);
        local_248 = *(undefined8 *)(param_2 + 0x20);
        uStack_230 = *(timeval **)(param_2 + 0x38);
        local_238 = *(undefined8 *)(param_2 + 0x30);
        plStack_220 = (long *)ppbVar10[1];
        local_228 = *ppbVar10;
        local_1e8 = *(undefined4 *)(param_4 + 8);
        uStack_210 = ppbVar10[3];
        local_218 = ppbVar10[2];
        local_1dc = bVar4 & 1;
        uStack_200 = ppbVar10[5];
        local_208 = ppbVar10[4];
        pbStack_1f0 = ppbVar10[7];
        local_1f8 = ppbVar10[6];
        local_2b8.tv_sec = (__time_t)&PTR__btTriangleCallback_01019640;
        uStack_1d0 = uVar8;
        (**(code **)(*(long *)this + 0x10))(this,&local_150,&local_348,abStack_358);
        local_2e8 = (timeval *)plVar7[8];
        this_00 = (btQuantizedBvh *)plVar7[9];
        local_2e0 = &local_2b8;
        local_2f0 = &PTR__btNodeOverlapCallback_0101a010;
        if (this_00[0x40] == (btQuantizedBvh)0x0) {
          this = (btCollisionWorld *)
                 btQuantizedBvh::walkStacklessTreeAgainstRay
                           ((btNodeOverlapCallback *)this_00,(btVector3 *)&local_2f0,
                            (btVector3 *)&local_328,(btVector3 *)local_338,(btVector3 *)&local_348,
                            (int)abStack_358,uVar14);
        }
        else {
          this = (btCollisionWorld *)
                 btQuantizedBvh::walkStacklessQuantizedTreeAgainstRay
                           (this_00,(btNodeOverlapCallback *)&local_2f0,(btVector3 *)&local_328,
                            (btVector3 *)local_338,(btVector3 *)&local_348,abStack_358,0,
                            *(int *)(this_00 + 0x3c));
        }
      }
      else {
        fVar29 = *(float *)((long)ppbVar10 + 0x34);
        fVar21 = *(float *)(ppbVar10 + 7);
        fVar17 = *(float *)(ppbVar10 + 5);
        fVar24 = SUB84(ppbVar10[4],0);
        fVar16 = (float)((ulong)ppbVar10[4] >> 0x20);
        fVar30 = *(float *)(ppbVar10 + 3);
        fVar36 = *(float *)(ppbVar10 + 1);
        fVar26 = SUB84(ppbVar10[2],0);
        fVar25 = (float)((ulong)ppbVar10[2] >> 0x20);
        fVar45 = SUB84(*ppbVar10,0);
        fVar42 = (float)*(undefined8 *)param_2;
        fVar28 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
        fVar22 = (float)NEON_fmadd(fVar29,fVar30,fVar21 * fVar17);
        fVar18 = (float)((ulong)*ppbVar10 >> 0x20);
        fVar20 = *(float *)(ppbVar10 + 6);
        fVar33 = (float)*(undefined8 *)(param_2 + 0x10);
        fVar35 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
        local_11c = 0;
        fVar34 = *(float *)(param_2 + 8);
        fVar23 = *(float *)(param_2 + 0x18);
        fVar44 = -(fVar24 * fVar21 + fVar26 * fVar29) - fVar45 * fVar20;
        fVar46 = -(fVar16 * fVar21 + fVar25 * fVar29) - fVar18 * fVar20;
        fVar37 = (float)*(undefined8 *)(param_2 + 0x20);
        fVar38 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
        uVar13 = NEON_fnmadd(fVar20,fVar36,-fVar22);
        fVar21 = *(float *)(param_1 + 0x30);
        fVar29 = *(float *)(param_1 + 0x34);
        local_140 = CONCAT44(fVar28 * fVar18 + fVar35 * fVar25 + fVar38 * fVar16,
                             fVar42 * fVar18 + fVar33 * fVar25 + fVar37 * fVar16);
        local_130 = CONCAT44(fVar28 * fVar36 + fVar35 * fVar30 + fVar38 * fVar17,
                             fVar42 * fVar36 + fVar33 * fVar30 + fVar37 * fVar17);
        local_150 = (undefined **)
                    CONCAT44(fVar28 * fVar45 + fVar35 * fVar26 + fVar38 * fVar24,
                             fVar42 * fVar45 + fVar33 * fVar26 + fVar37 * fVar24);
        fVar35 = *(float *)(param_2 + 0x30);
        fVar42 = *(float *)(param_2 + 0x34);
        uVar32 = NEON_fmadd(fVar23,fVar30,fVar34 * fVar36);
        fVar20 = *(float *)(param_2 + 0x28);
        uVar31 = NEON_fmadd(fVar21,fVar36,uVar13);
        uVar13 = NEON_fmadd(fVar35,fVar36,uVar13);
        local_128 = NEON_fmadd(fVar20,fVar17,uVar32);
        fVar33 = *(float *)(param_1 + 0x38);
        local_148 = (ulong)(uint)(fVar34 * fVar45 + fVar23 * fVar26 + fVar20 * fVar24);
        fVar22 = *(float *)(param_2 + 0x38);
        local_138 = (timeval *)(ulong)(uint)(fVar34 * fVar18 + fVar23 * fVar25 + fVar20 * fVar16);
        uVar31 = NEON_fmadd(fVar29,fVar30,uVar31);
        uVar13 = NEON_fmadd(fVar42,fVar30,uVar13);
        local_124 = 0;
        uStack_120 = 0;
        fVar20 = fVar44 + fVar45 * fVar21 + fVar26 * fVar29 + fVar24 * fVar33;
        fVar21 = fVar46 + fVar18 * fVar21 + fVar25 * fVar29 + fVar16 * fVar33;
        uVar47 = CONCAT44(fVar21,fVar20);
        local_114 = 0;
        fVar45 = fVar44 + fVar45 * fVar35 + fVar26 * fVar42 + fVar24 * fVar22;
        fVar18 = fVar46 + fVar18 * fVar35 + fVar25 * fVar42 + fVar16 * fVar22;
        fVar24 = (float)NEON_fmadd(fVar33,fVar17,uVar31);
        uVar9 = *(undefined8 *)(param_3 + 0x10);
        fVar16 = (float)NEON_fmadd(fVar22,fVar17,uVar13);
        uVar8 = CONCAT44(fVar18,fVar45);
        local_1e4 = (**(code **)(*plVar7 + 0x60))(plVar7);
        uStack_2a0 = *(ulong *)(param_1 + 8);
        local_2a8 = *(undefined8 *)param_1;
        uStack_290 = *(ulong *)(param_1 + 0x18);
        local_298 = *(undefined8 *)(param_1 + 0x10);
        uStack_280 = *(ulong *)(param_1 + 0x28);
        local_288 = *(undefined8 *)(param_1 + 0x20);
        uStack_270 = *(undefined8 *)(param_1 + 0x38);
        local_278 = *(undefined8 *)(param_1 + 0x30);
        uStack_260 = *(undefined8 *)(param_2 + 8);
        local_268 = *(undefined8 *)param_2;
        uStack_250 = *(undefined8 *)(param_2 + 0x18);
        local_258 = *(undefined8 *)(param_2 + 0x10);
        uStack_240 = *(undefined8 *)(param_2 + 0x28);
        local_248 = *(undefined8 *)(param_2 + 0x20);
        uStack_230 = *(timeval **)(param_2 + 0x38);
        local_238 = *(undefined8 *)(param_2 + 0x30);
        plStack_220 = (long *)ppbVar10[1];
        local_228 = *ppbVar10;
        local_1e8 = *(undefined4 *)(param_4 + 8);
        uStack_210 = ppbVar10[3];
        local_218 = ppbVar10[2];
        local_1dc = bVar4 & 1;
        uStack_200 = ppbVar10[5];
        local_208 = ppbVar10[4];
        pbStack_1f0 = ppbVar10[7];
        local_1f8 = ppbVar10[6];
        local_2b8.tv_sec = (__time_t)&PTR__btTriangleCallback_01019690;
        uStack_1d0 = uVar9;
        (**(code **)(*(long *)this + 0x10))(this,&local_150,&local_2f0,&local_328);
        local_32c = 0;
        uVar15 = NEON_fcmgt(uVar47,uVar8,4);
        if ((uVar15 & 1) != 0) {
          fVar20 = fVar45;
        }
        uVar8 = NEON_fmaxnm(uVar47,uVar8,4);
        local_340 = fVar24;
        if (fVar24 <= fVar16) {
          local_340 = fVar16;
        }
        local_33c = 0;
        fVar45 = (float)NEON_fminnm(fVar18,fVar21);
        local_338._8_4_ = NEON_fminnm(fVar16,fVar24);
        local_338._8_4_ = (float)local_338._8_4_ + local_2e8._0_4_;
        local_348 = CONCAT44((float)((ulong)uVar8 >> 0x20) + (float)((ulong)local_328 >> 0x20),
                             (float)uVar8 + (float)local_328);
        local_338._0_8_ =
             CONCAT44(fVar45 + (float)((ulong)local_2f0 >> 0x20),fVar20 + SUB84(local_2f0,0));
        local_340 = local_340 + (float)local_320;
        this = (btCollisionWorld *)
               (**(code **)(*plVar7 + 0x80))(plVar7,&local_2b8,local_338,&local_348);
      }
    }
  }
  else if (iVar2 == 0x1f) {
    pbVar6 = (btCollisionWorld *)CProfileManager::Start_Profile("convexSweepCompound");
    if (0 < *(int *)((long)plVar7 + 0x24)) {
      lVar12 = 0;
      lVar11 = 0x40;
      do {
        fVar20 = *(float *)ppbVar10;
        fVar24 = *(float *)((long)ppbVar10 + 4);
        fVar45 = *(float *)(ppbVar10 + 2);
        fVar18 = *(float *)((long)ppbVar10 + 0x14);
        puVar1 = (ulong *)(plVar7[6] + lVar11);
        fVar34 = *(float *)(ppbVar10 + 1);
        fVar25 = *(float *)(ppbVar10 + 4);
        fVar21 = *(float *)((long)ppbVar10 + 0x24);
        fVar36 = *(float *)(ppbVar10 + 5);
        fVar16 = *(float *)(puVar1 + -7);
        fVar17 = (float)puVar1[-8];
        fVar26 = (float)(puVar1[-8] >> 0x20);
        uVar32 = *(undefined4 *)(puVar1 + -5);
        fVar22 = (float)puVar1[-6];
        fVar23 = (float)(puVar1[-6] >> 0x20);
        fVar35 = (float)puVar1[-2];
        uVar41 = *(undefined4 *)(puVar1 + -3);
        uVar13 = NEON_fmadd(fVar24,uVar32,fVar20 * fVar16);
        fVar42 = (float)(puVar1[-2] >> 0x20);
        uVar31 = NEON_fmadd(fVar18,uVar32,fVar45 * fVar16);
        fVar33 = *(float *)(ppbVar10 + 3);
        uVar32 = NEON_fmadd(fVar21,uVar32,fVar25 * fVar16);
        uVar8 = NEON_rev64(CONCAT44(fVar24 * fVar42,fVar45 * fVar35),4);
        uVar27 = NEON_fmadd(fVar34,uVar41,uVar13);
        fVar29 = *(float *)(puVar1 + -1);
        uVar19 = NEON_fmadd(fVar33,uVar41,uVar31);
        local_148 = *puVar1;
        uVar14 = NEON_fmadd(fVar36,uVar41,uVar32);
        fVar16 = (float)NEON_fmadd(fVar36,fVar29,fVar25 * fVar35 + fVar21 * fVar42);
        fVar28 = (float)puVar1[-4];
        fVar30 = (float)(puVar1[-4] >> 0x20);
        local_2b8.tv_sec =
             CONCAT44(fVar26 * fVar20 + fVar23 * fVar24 + fVar30 * fVar34,
                      fVar17 * fVar20 + fVar22 * fVar24 + fVar28 * fVar34);
        local_298 = CONCAT44(fVar26 * fVar25 + fVar23 * fVar21 + fVar30 * fVar36,
                             fVar17 * fVar25 + fVar22 * fVar21 + fVar28 * fVar36);
        local_138 = &local_2b8;
        local_2f0 = &PTR__ConvexResultCallback_010196e0;
        local_140 = *(undefined8 *)(param_3 + 0x10);
        local_288 = CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar42 * fVar18 + fVar33 * fVar29 +
                             (float)((ulong)ppbVar10[6] >> 0x20),
                             (float)uVar8 + fVar35 * fVar20 + fVar34 * fVar29 + SUB84(ppbVar10[6],0)
                            );
        local_2e8 = (timeval *)CONCAT44(0xffff0001,*(undefined4 *)(param_4 + 8));
        local_2b8.tv_usec = (__suseconds_t)uVar27;
        local_2a8 = CONCAT44(fVar26 * fVar45 + fVar23 * fVar18 + fVar30 * fVar33,
                             fVar17 * fVar45 + fVar22 * fVar18 + fVar28 * fVar33);
        uStack_2a0 = (ulong)uVar19;
        uStack_290 = (ulong)uVar14;
        uStack_280 = (ulong)(uint)(fVar16 + *(float *)(ppbVar10 + 7));
        uStack_2d8 = (btCollisionWorld *)CONCAT44(uStack_2d8._4_4_,(int)lVar12);
        local_130 = CONCAT44((int)lVar12,0xffffffff);
        local_2e0 = (timeval *)param_4;
        local_150 = (undefined **)param_3;
        pbVar6 = (btCollisionWorld *)
                 objectQuerySingleInternal
                           (this,param_1,param_2,(btTransform *)&local_150,
                            (btCollisionObjectWrapper *)&local_2f0,
                            (ConvexResultCallback *)(ulong)((uint)param_5 & 1),param_6,
                            SUB81(uVar15,0));
        lVar12 = lVar12 + 1;
        lVar11 = lVar11 + 0x58;
      } while (lVar12 < *(int *)((long)plVar7 + 0x24));
    }
    puVar5 = CProfileManager::CurrentNode;
    iVar2 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
    *(int *)(CProfileManager::CurrentNode + 0x18) = iVar2;
    this = pbVar6;
    if ((iVar2 == 0) && (iVar2 = 0, *(int *)(puVar5 + 8) != 0)) {
      uVar14 = gettimeofday(&local_2b8,(__timezone_ptr_t)0x0);
      this = (btCollisionWorld *)(ulong)uVar14;
      iVar2 = *(int *)(puVar5 + 0x18);
      uVar13 = NEON_fmadd((float)ZEXT89((btCollisionWorld *)
                                        (local_2b8.tv_usec +
                                        ((local_2b8.tv_sec - *DAT_02125d68) * 1000000 -
                                        (DAT_02125d68[1] + *(long *)(puVar5 + 0x10))))),0x3a83126f,
                          *(undefined4 *)(puVar5 + 0xc));
      *(undefined4 *)(puVar5 + 0xc) = uVar13;
    }
    if (iVar2 == 0) {
      CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


