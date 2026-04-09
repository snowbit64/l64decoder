// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRendering
// Entry Point: 00734ab4
// Size: 3508 bytes
// Signature: undefined __cdecl updateRendering(float param_1, SharedRenderArgs * param_2, RenderStats * param_3)


/* VehicleNavigationAgentEntity::updateRendering(float, SharedRenderArgs const*, RenderStats&) */

void VehicleNavigationAgentEntity::updateRendering
               (float param_1,SharedRenderArgs *param_2,RenderStats *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  bool bVar4;
  DeferredDebugRenderer *this;
  uint uVar5;
  ulong extraout_x8;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  undefined4 in_register_00005004;
  undefined8 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  float local_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float local_200;
  float fStack_1fc;
  float local_1f8;
  float local_1f0;
  float fStack_1ec;
  float local_1e8;
  void *local_1e0;
  float local_1d8;
  void *local_1d0;
  float local_1c8;
  float local_1c0;
  float fStack_1bc;
  float local_1b8;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float local_1a0;
  float fStack_19c;
  float local_198;
  float local_190;
  float fStack_18c;
  float local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  int local_128;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  long local_b0;
  
  uVar14 = CONCAT44(in_register_00005004,param_1);
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  if ((param_2[0x68] == (SharedRenderArgs)0x0) || (param_2[0x90] == (SharedRenderArgs)0x0)) {
LAB_00735824:
    if (*(long *)(lVar3 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar14);
    }
    return;
  }
  EngineManager::getInstance();
  this = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
  DeferredDebugRenderer::setNoDepthMode(this,true);
  lVar8 = *(long *)(*(long *)(param_2 + 0x30) + 0x110);
  RawTransformGroup::updateWorldTransformation();
  if ((param_2[0x54] != (SharedRenderArgs)0x0) &&
     ((*(byte *)(*(long *)(param_2 + 0x38) + 0x1383) & 1) == 0)) {
    fVar13 = *(float *)(param_3 + 100) - *(float *)(lVar8 + 0xec);
    fVar19 = *(float *)(param_3 + 0x60) - *(float *)(lVar8 + 0xe8);
    fVar25 = *(float *)(param_3 + 0x68) - *(float *)(lVar8 + 0xf0);
    uVar15 = NEON_fmadd(fVar19,*(undefined4 *)(lVar8 + 0xb8),fVar13 * *(float *)(lVar8 + 0xbc));
    uVar20 = NEON_fmadd(fVar19,*(undefined4 *)(lVar8 + 0xd8),fVar13 * *(float *)(lVar8 + 0xdc));
    uVar15 = NEON_fmadd(fVar25,*(undefined4 *)(lVar8 + 0xc0),uVar15);
    uVar20 = NEON_fmadd(fVar25,*(undefined4 *)(lVar8 + 0xe0),uVar20);
    VehicleNavigationAgent::searchTreeEdges
              (&local_c8,uVar15,uVar20,0x42200000,*(undefined8 *)(param_2 + 0x38),4);
    uVar6 = ((long)local_c0 - (long)local_c8 >> 2) * -0x5555555555555555;
    uStack_178 = 0x3f8000003f800000;
    local_180 = (void *)0x0;
    uStack_168 = 0x3f8000003f800000;
    local_170 = 0;
    if ((uVar6 & 0xfffffffe) != 0) {
      uVar6 = uVar6 >> 1 & 0x7fffffff;
      lVar11 = 0;
      while( true ) {
        uVar6 = uVar6 - 1;
        fVar13 = *(float *)(param_2 + 0xe8);
        puVar1 = (undefined4 *)((long)local_c8 + lVar11);
        uVar15 = *puVar1;
        uVar26 = puVar1[1];
        fVar19 = fVar13 * *(float *)(lVar8 + 200);
        fVar25 = fVar13 * *(float *)(lVar8 + 0xcc);
        fVar13 = fVar13 * *(float *)(lVar8 + 0xd0);
        uVar28 = NEON_fmadd(uVar15,*(undefined4 *)(lVar8 + 0xb8),fVar19);
        uVar32 = NEON_fmadd(uVar15,*(undefined4 *)(lVar8 + 0xbc),fVar25);
        uVar20 = NEON_fmadd(uVar15,*(undefined4 *)(lVar8 + 0xc0),fVar13);
        uVar15 = 0x3f000000;
        if ((*(byte *)(puVar1 + 2) & 2) != 0) {
          uVar15 = 0x3f800000;
        }
        uVar43 = 0x3f000000;
        if ((*(byte *)(puVar1 + 2) & 1) != 0) {
          uVar43 = 0x3f800000;
        }
        fVar29 = (float)NEON_fmadd(uVar26,*(undefined4 *)(lVar8 + 0xd8),uVar28);
        fVar33 = (float)NEON_fmadd(uVar26,*(undefined4 *)(lVar8 + 0xdc),uVar32);
        fVar23 = (float)NEON_fmadd(uVar26,*(undefined4 *)(lVar8 + 0xe0),uVar20);
        local_180 = (void *)CONCAT44(uVar43,uVar15);
        local_e0 = (void *)CONCAT44(*(float *)(lVar8 + 0xec) + fVar33,
                                    *(float *)(lVar8 + 0xe8) + fVar29);
        uVar15 = puVar1[3];
        uVar32 = puVar1[4];
        uVar26 = NEON_fmadd(uVar15,*(undefined4 *)(lVar8 + 0xb8),fVar19);
        uVar28 = NEON_fmadd(uVar15,*(undefined4 *)(lVar8 + 0xbc),fVar25);
        uVar20 = NEON_fmadd(uVar15,*(undefined4 *)(lVar8 + 0xc0),fVar13);
        uVar15 = 0x3f000000;
        if ((*(byte *)(puVar1 + 5) & 2) != 0) {
          uVar15 = 0x3f800000;
        }
        uVar43 = 0x3f000000;
        if ((*(byte *)(puVar1 + 5) & 1) != 0) {
          uVar43 = 0x3f800000;
        }
        fVar19 = (float)NEON_fmadd(uVar32,*(undefined4 *)(lVar8 + 0xd8),uVar26);
        fVar25 = (float)NEON_fmadd(uVar32,*(undefined4 *)(lVar8 + 0xdc),uVar28);
        fVar13 = (float)NEON_fmadd(uVar32,*(undefined4 *)(lVar8 + 0xe0),uVar20);
        local_170 = CONCAT44(uVar43,uVar15);
        local_d8 = (void *)CONCAT44(*(float *)(lVar8 + 0xe8) + fVar19,
                                    *(float *)(lVar8 + 0xf0) + fVar23);
        local_d0 = CONCAT44(*(float *)(lVar8 + 0xf0) + fVar13,*(float *)(lVar8 + 0xec) + fVar25);
                    /* try { // try from 00734cc4 to 00734cdf has its CatchHandler @ 0073589c */
        DeferredDebugRenderer::addLine
                  (this,(float *)&local_e0,(float *)&local_180,(float *)((long)&local_d8 + 4),
                   (float *)&local_170,0x7ff);
        if (uVar6 == 0) break;
        lVar11 = lVar11 + 0x18;
      }
    }
    local_e0 = (void *)0x0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
                    /* try { // try from 00734cfc to 00734d0f has its CatchHandler @ 00735868 */
    extractPath((VehicleNavigationAgentEntity *)param_2,30.0,2.0,(vector *)&local_e0);
    uStack_e8 = 0x3f8000003f800000;
    local_f0 = 0x3f800000;
    if (0x10 < (ulong)((long)local_d8 - (long)local_e0)) {
      uVar6 = 1;
      do {
        fVar13 = *(float *)(param_2 + 0xe8);
        puVar1 = (undefined4 *)((long)local_e0 + (ulong)((int)uVar6 - 1) * 0x10);
        puVar2 = (undefined4 *)((long)local_e0 + uVar6 * 0x10);
        uVar20 = *puVar1;
        uVar32 = puVar1[1];
        fVar19 = fVar13 * *(float *)(lVar8 + 200);
        fVar25 = fVar13 * *(float *)(lVar8 + 0xcc);
        fVar13 = fVar13 * *(float *)(lVar8 + 0xd0);
        uVar15 = *puVar2;
        uVar40 = puVar2[1];
        uVar43 = NEON_fmadd(uVar20,*(undefined4 *)(lVar8 + 0xb8),fVar19);
        uVar37 = NEON_fmadd(uVar20,*(undefined4 *)(lVar8 + 0xbc),fVar25);
        uVar28 = NEON_fmadd(uVar20,*(undefined4 *)(lVar8 + 0xc0),fVar13);
        uVar20 = NEON_fmadd(uVar15,*(undefined4 *)(lVar8 + 0xb8),fVar19);
        uVar26 = NEON_fmadd(uVar15,*(undefined4 *)(lVar8 + 0xbc),fVar25);
        uVar15 = NEON_fmadd(uVar15,*(undefined4 *)(lVar8 + 0xc0),fVar13);
        local_f8 = (float)NEON_fmadd(uVar32,*(undefined4 *)(lVar8 + 0xe0),uVar28);
        fVar23 = (float)NEON_fmadd(uVar32,*(undefined4 *)(lVar8 + 0xd8),uVar43);
        fVar25 = (float)NEON_fmadd(uVar32,*(undefined4 *)(lVar8 + 0xdc),uVar37);
        fVar13 = (float)NEON_fmadd(uVar40,*(undefined4 *)(lVar8 + 0xd8),uVar20);
        fVar19 = (float)NEON_fmadd(uVar40,*(undefined4 *)(lVar8 + 0xdc),uVar26);
        local_108 = (float)NEON_fmadd(uVar40,*(undefined4 *)(lVar8 + 0xe0),uVar15);
        local_f8 = *(float *)(lVar8 + 0xf0) + local_f8;
        local_108 = *(float *)(lVar8 + 0xf0) + local_108;
        local_100 = CONCAT44(*(float *)(lVar8 + 0xec) + fVar25,*(float *)(lVar8 + 0xe8) + fVar23);
        local_110 = CONCAT44(*(float *)(lVar8 + 0xec) + fVar19,*(float *)(lVar8 + 0xe8) + fVar13);
                    /* try { // try from 00734dd0 to 00734deb has its CatchHandler @ 0073586c */
        DeferredDebugRenderer::addLine
                  (this,(float *)&local_100,(float *)&local_f0,(float *)&local_110,
                   (float *)&local_f0,0x7ff);
        uVar6 = (ulong)((int)uVar6 + 1);
      } while (uVar6 < (ulong)((long)local_d8 - (long)local_e0 >> 4));
    }
    if (local_e0 != (void *)0x0) {
      local_d8 = local_e0;
      operator_delete(local_e0);
    }
    if (local_c8 != (void *)0x0) {
      local_c0 = local_c8;
      operator_delete(local_c8);
    }
  }
  lVar11 = *(long *)(param_2 + 0x38);
  TractorTrailer::TractorTrailer
            ((TractorTrailer *)&local_180,*(uint *)(lVar11 + 0x13a0),
             (VehicleNavigationTrailerData *)(lVar11 + 0x13b0),
             (bitset)*(undefined8 *)(lVar11 + 0x13a8));
  __memcpy_chk(&local_180,param_2 + 0x98,(ulong)(local_128 + 1) << 4,0x68);
  iVar9 = 0x14;
  fVar13 = (1.0 / *(float *)(param_2 + 0xec)) * 0.5;
  do {
    fVar19 = (float)NEON_fmadd((undefined4)uStack_178,fVar13 * 0.5,uStack_178._4_4_);
    fVar25 = (float)NEON_fmsub(uStack_178._4_4_,fVar13 * 0.5,(undefined4)uStack_178);
    fVar29 = (float)NEON_fmadd(fVar25,fVar25,fVar19 * fVar19);
    fVar23 = 1.0;
    if (1e-06 < fVar29) {
      fVar23 = 1.0 / SQRT(fVar29);
    }
    fVar29 = (float)NEON_fmadd((undefined4)uStack_178,fVar13,uStack_178._4_4_);
    fVar33 = (float)NEON_fmadd(-uStack_178._4_4_,fVar13,(undefined4)uStack_178);
    fVar21 = 1.0;
    fVar24 = (float)NEON_fmadd(fVar33,fVar33,fVar29 * fVar29);
    local_180 = (void *)CONCAT44(fVar19 * fVar23 + local_180._4_4_,
                                 fVar25 * fVar23 + (float)local_180);
    if (1e-06 < fVar24) {
      fVar21 = 1.0 / SQRT(fVar24);
    }
    uStack_178 = CONCAT44(fVar29 * fVar21,fVar33 * fVar21);
    TractorTrailer::solveTrailers();
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  uVar6 = (ulong)*(uint *)(param_2 + 0x50);
  puVar10 = &uStack_178;
  uVar12 = 0;
  do {
    fVar23 = *(float *)(puVar10 + -1);
    fVar19 = *(float *)((long)puVar10 + -4);
    fVar25 = *(float *)puVar10;
    fVar21 = *(float *)((long)puVar10 + 4);
    fVar24 = *(float *)(param_2 + 0xf4);
    fVar33 = *(float *)(param_2 + 0xf8);
    fVar29 = *(float *)(param_2 + 0xe8);
    uVar20 = *(undefined4 *)(lVar8 + 0xc0);
    uVar15 = *(undefined4 *)(lVar8 + 0xe0);
    fVar13 = fVar24;
    if (uVar12 != 0) {
      uVar7 = uVar12 - 1;
      if (3 < (uint)uVar7) goto LAB_00735138;
      fVar13 = fVar24 * 0.01;
      if ((*(ulong *)(*(long *)(param_2 + 0x38) + 0x13a8) >> (uVar7 & 0x3f) & 1) != 0) {
        fVar13 = fVar24;
      }
      fVar33 = fVar33 + *(float *)(*(long *)(param_2 + 0x38) + (uVar7 & 0xffffffff) * 0xc + 0x13b8);
    }
    fVar24 = (float)*(undefined8 *)(lVar8 + 200);
    fVar31 = fVar24 * 0.0;
    fVar27 = (float)((ulong)*(undefined8 *)(lVar8 + 200) >> 0x20);
    fVar35 = fVar27 * 0.0;
    uVar5 = (uint)uVar6;
    fVar30 = *(float *)(lVar8 + 0xd0) * 0.0;
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    fVar42 = *(float *)(param_2 + 0xf0) * 0.5;
    uVar26 = NEON_fmadd(fVar23,uVar20,fVar29 * *(float *)(lVar8 + 0xd0));
    uVar28 = NEON_fmadd(fVar25,uVar20,fVar30);
    fVar16 = (float)*(undefined8 *)(lVar8 + 0xb8);
    fVar18 = (float)((ulong)*(undefined8 *)(lVar8 + 0xb8) >> 0x20);
    uVar20 = NEON_fmsub(fVar21,uVar20,fVar30);
    fVar41 = (float)NEON_fmadd(fVar19,uVar15,uVar26);
    fVar44 = (float)NEON_fmadd(fVar21,uVar15,uVar28);
    fVar30 = (float)*(undefined8 *)(lVar8 + 0xd8);
    fVar39 = (float)((ulong)*(undefined8 *)(lVar8 + 0xd8) >> 0x20);
    fVar13 = fVar13 * 0.5;
    fVar17 = (float)NEON_fmadd(fVar25,uVar15,uVar20);
    fVar48 = fVar31 + fVar16 * fVar25 + fVar30 * fVar21;
    fVar50 = fVar35 + fVar18 * fVar25 + fVar39 * fVar21;
    fVar17 = fVar17 * fVar42;
    fVar36 = fVar48 * fVar13;
    fVar46 = fVar50 * fVar13;
    local_108 = *(float *)(lVar8 + 0xf0) + fVar41 + fVar44 * fVar33;
    fVar24 = (float)*(undefined8 *)(lVar8 + 0xe8) +
             fVar24 * fVar29 + fVar16 * fVar23 + fVar30 * fVar19 + fVar48 * fVar33;
    fVar19 = (float)((ulong)*(undefined8 *)(lVar8 + 0xe8) >> 0x20) +
             fVar27 * fVar29 + fVar18 * fVar23 + fVar39 * fVar19 + fVar50 * fVar33;
    fVar23 = ((fVar31 - fVar16 * fVar21) + fVar30 * fVar25) * fVar42;
    fVar42 = ((fVar35 - fVar18 * fVar21) + fVar39 * fVar25) * fVar42;
    fVar25 = fVar44 * fVar13 + local_108;
    uVar15 = NEON_fmadd((float)(uVar12 & 0xffffffff) / (float)(ulong)uVar5,0xbecccccd,0x3f666666);
    local_108 = local_108 - fVar44 * fVar13;
    fVar13 = fVar36 + fVar24;
    fVar29 = fVar46 + fVar19;
    fVar24 = fVar24 - fVar36;
    fVar19 = fVar19 - fVar46;
    local_c8 = (void *)CONCAT44(uVar15,uVar15);
    local_f8 = fVar17 + local_108;
    local_108 = local_108 - fVar17;
    local_c0 = (void *)CONCAT44(0x3f800000,uVar15);
    local_d8 = (void *)CONCAT44(local_d8._4_4_,fVar17 + fVar25);
    uStack_e8 = CONCAT44(uStack_e8._4_4_,fVar25 - fVar17);
    local_100 = CONCAT44(fVar42 + fVar19,fVar23 + fVar24);
    local_110 = CONCAT44(fVar19 - fVar42,fVar24 - fVar23);
    local_e0 = (void *)CONCAT44(fVar42 + fVar29,fVar23 + fVar13);
    local_f0 = CONCAT44(fVar29 - fVar42,fVar13 - fVar23);
    DeferredDebugRenderer::addLine
              (this,(float *)&local_100,(float *)&local_c8,(float *)&local_e0,(float *)&local_c8,
               0x7ff);
    DeferredDebugRenderer::addLine
              (this,(float *)&local_110,(float *)&local_c8,(float *)&local_f0,(float *)&local_c8,
               0x7ff);
    DeferredDebugRenderer::addLine
              (this,(float *)&local_100,(float *)&local_c8,(float *)&local_110,(float *)&local_c8,
               0x7ff);
    DeferredDebugRenderer::addLine
              (this,(float *)&local_e0,(float *)&local_c8,(float *)&local_f0,(float *)&local_c8,
               0x7ff);
    uVar6 = (ulong)*(uint *)(param_2 + 0x50);
    puVar10 = puVar10 + 2;
    bVar4 = uVar12 < uVar6;
    uVar12 = uVar12 + 1;
  } while (bVar4);
LAB_00735144:
  uVar5 = 0;
  do {
    fVar13 = *(float *)(param_2 + 0xe8);
    uVar12 = (ulong)uVar5;
    uVar40 = *(undefined4 *)(lVar8 + 0xb8);
    uVar34 = *(undefined4 *)(lVar8 + 0xbc);
    uVar15 = *(undefined4 *)(param_2 + (ulong)uVar5 * 0x10 + 0x98);
    uVar43 = *(undefined4 *)(param_2 + (ulong)uVar5 * 0x10 + 0x9c);
    uVar38 = *(undefined4 *)(lVar8 + 0xc0);
    uVar37 = NEON_fmadd(uVar15,uVar40,fVar13 * *(float *)(lVar8 + 200));
    uVar28 = NEON_fmadd(uVar15,uVar34,fVar13 * *(float *)(lVar8 + 0xcc));
    uVar32 = NEON_fmadd(uVar15,uVar38,fVar13 * *(float *)(lVar8 + 0xd0));
    uVar26 = *(undefined4 *)(lVar8 + 0xe0);
    uVar15 = *(undefined4 *)(lVar8 + 0xd8);
    uVar20 = *(undefined4 *)(lVar8 + 0xdc);
    fVar25 = (float)NEON_fmadd(uVar43,uVar15,uVar37);
    fVar23 = (float)NEON_fmadd(uVar43,uVar20,uVar28);
    fVar19 = (float)NEON_fmadd(uVar43,uVar26,uVar32);
    fVar33 = *(float *)(param_2 + 0xf4);
    fVar29 = *(float *)(param_2 + 0xf8);
    fVar25 = *(float *)(lVar8 + 0xe8) + fVar25;
    fVar23 = *(float *)(lVar8 + 0xec) + fVar23;
    fVar19 = *(float *)(lVar8 + 0xf0) + fVar19;
    uVar28 = *(undefined4 *)(param_2 + (ulong)uVar5 * 0x10 + 0xa0);
    uVar32 = *(undefined4 *)(param_2 + (ulong)uVar5 * 0x10 + 0xa4);
    local_e0 = (void *)CONCAT44(fVar23,fVar25);
    local_d8 = (void *)CONCAT44(local_d8._4_4_,fVar19);
    fVar13 = fVar33;
    if (uVar5 != 0) {
      uVar22 = uVar5 - 1;
      if (3 < uVar22) break;
      fVar13 = fVar33 * 0.01;
      if ((*(ulong *)(*(long *)(param_2 + 0x38) + 0x13a8) >> ((ulong)uVar22 & 0x3f) & 1) != 0) {
        fVar13 = fVar33;
      }
      fVar29 = fVar29 + *(float *)(*(long *)(param_2 + 0x38) + (ulong)uVar22 * 0xc + 0x13b8);
    }
    fVar24 = *(float *)(lVar8 + 0xd0) * 0.0;
    fVar33 = *(float *)(lVar8 + 200) * 0.0;
    fVar21 = *(float *)(lVar8 + 0xcc) * 0.0;
    uVar22 = (uint)uVar6;
    fVar13 = fVar13 * 0.5;
    if (uVar22 == 0) {
      uVar22 = 1;
    }
    local_188 = *(float *)(param_2 + 0xf0) * 0.5;
    uVar49 = NEON_fmadd(uVar28,uVar38,fVar24);
    uVar45 = NEON_fmadd(uVar28,uVar40,fVar33);
    uVar47 = NEON_fmadd(uVar28,uVar34,fVar21);
    uVar43 = NEON_fmsub(uVar32,uVar40,fVar33);
    uVar37 = NEON_fmsub(uVar32,uVar34,fVar21);
    uVar40 = NEON_fmsub(uVar32,uVar38,fVar24);
    fVar24 = (float)NEON_fmadd(uVar32,uVar26,uVar49);
    fVar27 = (float)NEON_fmadd(uVar32,uVar15,uVar45);
    fVar46 = (float)NEON_fmadd(uVar32,uVar20,uVar47);
    fVar30 = (float)NEON_fmadd(uVar28,uVar15,uVar43);
    fVar35 = (float)NEON_fmadd(uVar28,uVar20,uVar37);
    fVar39 = (float)NEON_fmadd(uVar28,uVar26,uVar40);
    fVar31 = fVar30 * local_188;
    fVar19 = fVar19 + fVar24 * fVar29;
    fVar25 = fVar25 + fVar27 * fVar29;
    fVar23 = fVar23 + fVar46 * fVar29;
    fVar36 = fVar35 * local_188;
    local_188 = fVar39 * local_188;
    fVar21 = fVar24 * fVar13 + fVar19;
    fVar29 = fVar27 * fVar13 + fVar25;
    fVar25 = fVar25 - fVar27 * fVar13;
    fVar33 = fVar46 * fVar13 + fVar23;
    fVar23 = fVar23 - fVar46 * fVar13;
    fVar19 = fVar19 - fVar24 * fVar13;
    uStack_e8 = CONCAT44(uStack_e8._4_4_,local_188 + fVar21);
    fStack_18c = fVar23 - fVar36;
    uStack_178 = 0x3f80000000000000;
    local_f0 = CONCAT44(fVar36 + fVar33,fVar31 + fVar29);
    local_f8 = fVar21 - local_188;
    local_100 = CONCAT44(fVar33 - fVar36,fVar29 - fVar31);
    local_108 = local_188 + fVar19;
    local_190 = fVar25 - fVar31;
    local_188 = fVar19 - local_188;
    local_110 = CONCAT44(fVar36 + fVar23,fVar31 + fVar25);
    uVar22 = NEON_fmadd((float)uVar12 / (float)(ulong)uVar22,0xbecccccd,0x3f800000);
    local_180 = (void *)(ulong)uVar22;
    DeferredDebugRenderer::addLine
              (this,(float *)&local_110,(float *)&local_180,(float *)&local_f0,(float *)&local_180,
               0x7ff);
    DeferredDebugRenderer::addLine
              (this,&local_190,(float *)&local_180,(float *)&local_100,(float *)&local_180,0x7ff);
    DeferredDebugRenderer::addLine
              (this,(float *)&local_110,(float *)&local_180,&local_190,(float *)&local_180,0x7ff);
    DeferredDebugRenderer::addLine
              (this,(float *)&local_f0,(float *)&local_180,(float *)&local_100,(float *)&local_180,
               0x7ff);
    DeferredDebugRenderer::addPoint(this,(float *)&local_e0,(float *)&local_180,0x7ff);
    if (uVar5 == 0) {
      fVar13 = *(float *)(param_2 + 0xfc);
      local_c8 = local_180;
      local_1a0 = (float)local_e0 + fVar27 * fVar13;
      fStack_19c = fVar46 * fVar13 + local_e0._4_4_;
      local_198 = fVar24 * fVar13 + (float)local_d8;
      local_c0 = (void *)CONCAT44(uStack_178._4_4_,SUB84(local_180,0) * 0.5);
      DeferredDebugRenderer::addPoint(this,&local_1a0,(float *)&local_c8,0x7ff);
      fVar31 = (*(float *)(param_2 + 0x94) * *(float *)(param_2 + 0x94) * 0.5) /
               *(float *)(param_2 + 0x100);
      local_1c0 = fVar29 + fVar27 * fVar31;
      fStack_1bc = fVar33 + fVar46 * fVar31;
      local_1b8 = fVar21 + fVar24 * fVar31;
      local_1b0 = fVar29;
      fStack_1ac = fVar33;
      local_1a8 = fVar21;
      DeferredDebugRenderer::addLine
                (this,&local_1b0,(float *)&local_180,&local_1c0,(float *)&local_180,0x7ff);
      fVar25 = 0.0;
      iVar9 = 10;
      local_1e0 = (void *)CONCAT44(fStack_1ac,local_1b0);
      fVar23 = (*(float *)(param_2 + 0x94) * *(float *)(param_2 + 0x94)) /
               *(float *)(param_2 + 0x104);
      local_1c8 = local_1a8;
      local_1d8 = local_1a8;
      fVar13 = local_1b0 + fVar30 * fVar23;
      fVar36 = local_1b0 - fVar30 * fVar23;
      fVar21 = fVar39 * fVar23 + local_1a8;
      fVar29 = fStack_1ac - fVar35 * fVar23;
      fVar33 = local_1a8 - fVar39 * fVar23;
      fVar19 = fStack_1ac + fVar35 * fVar23;
      local_1d0 = local_1e0;
      do {
        sincosf(fVar25,&fStack_204,&local_208);
        local_1f0 = fVar13 + fVar23 * (fVar27 * fStack_204 - fVar30 * local_208);
        local_200 = fVar36 + fVar23 * (fVar30 * local_208 + fVar27 * fStack_204);
        local_1e8 = fVar21 + fVar23 * (fVar24 * fStack_204 - fVar39 * local_208);
        fStack_1fc = fVar29 + fVar23 * (fVar35 * local_208 + fVar46 * fStack_204);
        fStack_1ec = fVar19 + fVar23 * (fVar46 * fStack_204 - fVar35 * local_208);
        local_1f8 = fVar33 + fVar23 * (fVar39 * local_208 + fVar24 * fStack_204);
        fVar25 = (fVar31 / 10.0) / fVar23 + fVar25;
        DeferredDebugRenderer::addLine
                  (this,(float *)&local_1d0,(float *)&local_180,&local_1f0,(float *)&local_180,0x7ff
                  );
        DeferredDebugRenderer::addLine
                  (this,(float *)&local_1e0,(float *)&local_180,&local_200,(float *)&local_180,0x7ff
                  );
        local_1d0 = (void *)CONCAT44(fStack_1ec,local_1f0);
        iVar9 = iVar9 + -1;
        local_1c8 = local_1e8;
        local_1e0 = (void *)CONCAT44(fStack_1fc,local_200);
        local_1d8 = local_1f8;
      } while (iVar9 != 0);
      fVar25 = *(float *)(param_2 + 0xec);
      fVar13 = 0.0;
      iVar9 = 0x13;
      fVar19 = (float)local_e0 + fVar30 * fVar25;
      fVar33 = fVar35 * fVar25 + local_e0._4_4_;
      fVar21 = fVar39 * fVar25 + (float)local_d8;
      fVar31 = (float)local_e0 - fVar30 * fVar25;
      fVar29 = local_e0._4_4_ - fVar35 * fVar25;
      fVar23 = (float)local_d8 - fVar39 * fVar25;
      local_1d0 = local_e0;
      local_1e0 = local_e0;
      local_1c8 = (float)local_d8;
      local_1d8 = (float)local_d8;
      while( true ) {
        sincosf(fVar13,&fStack_20c,&local_210);
        local_1f0 = fVar19 + (fVar27 * fStack_20c - fVar30 * local_210) * fVar25;
        local_200 = fVar31 + (fVar30 * local_210 + fVar27 * fStack_20c) * fVar25;
        fStack_1ec = fVar33 + (fVar46 * fStack_20c - fVar35 * local_210) * fVar25;
        fStack_1fc = fVar29 + (fVar35 * local_210 + fVar46 * fStack_20c) * fVar25;
        local_1e8 = fVar21 + (fVar24 * fStack_20c - fVar39 * local_210) * fVar25;
        local_1f8 = fVar23 + (fVar39 * local_210 + fVar24 * fStack_20c) * fVar25;
        DeferredDebugRenderer::addLine
                  (this,(float *)&local_1d0,(float *)&local_180,&local_1f0,(float *)&local_180,0x7ff
                  );
        DeferredDebugRenderer::addLine
                  (this,(float *)&local_1e0,(float *)&local_180,&local_200,(float *)&local_180,0x7ff
                  );
        local_1d0 = (void *)CONCAT44(fStack_1ec,local_1f0);
        local_1c8 = local_1e8;
        local_1e0 = (void *)CONCAT44(fStack_1fc,local_200);
        local_1d8 = local_1f8;
        if (iVar9 == 0) break;
        fVar25 = *(float *)(param_2 + 0xec);
        iVar9 = iVar9 + -1;
        fVar13 = fVar13 + 0.3141593;
      }
    }
    else {
      fVar13 = *(float *)(*(long *)(param_2 + 0x38) + (ulong)(uVar5 - 1) * 0xc + 0x13b0);
      local_c8 = (void *)CONCAT44(fVar46 * fVar13 + local_e0._4_4_,fVar27 * fVar13 + (float)local_e0
                                 );
      local_c0 = (void *)CONCAT44(local_c0._4_4_,fVar24 * fVar13 + (float)local_d8);
      DeferredDebugRenderer::addPoint(this,(float *)&local_c8,(float *)&local_180,0x7ff);
    }
    uVar22 = *(uint *)(param_2 + 0x50);
    uVar5 = uVar5 + 1;
    if (uVar5 <= uVar22) {
      fVar13 = *(float *)(*(long *)(param_2 + 0x38) + uVar12 * 0xc + 0x13b0);
      local_c8 = (void *)CONCAT44(fVar46 * fVar13 + local_e0._4_4_,fVar27 * fVar13 + (float)local_e0
                                 );
      local_c0 = (void *)CONCAT44(local_c0._4_4_,fVar24 * fVar13 + (float)local_d8);
      DeferredDebugRenderer::addPoint(this,(float *)&local_c8,(float *)&local_180,0x7ff);
      uVar22 = *(uint *)(param_2 + 0x50);
    }
    uVar6 = (ulong)uVar22;
    if (uVar22 < uVar5) {
      uVar14 = DeferredDebugRenderer::setNoDepthMode(this,false);
      goto LAB_00735824;
    }
  } while( true );
LAB_00735138:
  FUN_00735e5c("bitset test argument out of range");
  uVar6 = extraout_x8;
  goto LAB_00735144;
}


