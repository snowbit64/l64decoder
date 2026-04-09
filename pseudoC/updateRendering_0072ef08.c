// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRendering
// Entry Point: 0072ef08
// Size: 1240 bytes
// Signature: undefined __cdecl updateRendering(float param_1, SharedRenderArgs * param_2, RenderStats * param_3)


/* WARNING: Removing unreachable block (ram,0x0072f1c0) */
/* WARNING: Removing unreachable block (ram,0x0072f1c8) */
/* WARNING: Removing unreachable block (ram,0x0072f1d4) */
/* WARNING: Removing unreachable block (ram,0x0072f1d8) */
/* WARNING: Removing unreachable block (ram,0x0072f1e0) */
/* VehicleNavigationMapGenerator::updateRendering(float, SharedRenderArgs const*, RenderStats&) */

void VehicleNavigationMapGenerator::updateRendering
               (float param_1,SharedRenderArgs *param_2,RenderStats *param_3)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  void **ppvVar7;
  void **ppvVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  DeferredDebugRenderer *this;
  void *pvVar12;
  float **ppfVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  void *local_370;
  void *local_368;
  void **local_350;
  void **local_348;
  float local_330;
  float fStack_32c;
  float local_328;
  float local_320;
  float fStack_31c;
  float local_318;
  float local_310;
  float fStack_30c;
  float local_308;
  undefined8 local_300;
  float local_2f8;
  long *local_2f0 [64];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long local_b0;
  
  lVar6 = tpidr_el0;
  local_b0 = *(long *)(lVar6 + 0x28);
  if (param_2[0x1e0] != (SharedRenderArgs)0x0) {
    EngineManager::getInstance();
    lVar11 = Renderer::getCamera();
    if (lVar11 != 0) {
      DynamicAvoidance::waitHandler();
      uStack_c8 = 0x3f8000003f800000;
      local_d0 = 0x3dcccccd;
      uStack_b8 = 0x3f8000003f800000;
      uStack_c0 = 0x3f000000;
      uStack_e8 = 0x3f80000000000000;
      local_f0 = 0x3f0000003f19999a;
      uStack_d8 = 0x3f80000000000000;
      uStack_e0 = 0x3f0000003f800000;
      EngineManager::getInstance();
      this = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
      lVar11 = *(long *)(param_2 + 0x110);
      RawTransformGroup::updateWorldTransformation();
      lVar16 = *(long *)(param_2 + 0x110);
      RawTransformGroup::updateWorldTransformation();
      fVar21 = *(float *)(param_3 + 0x60);
      fVar26 = *(float *)(param_3 + 100);
      fVar17 = *(float *)(param_3 + 0x68);
      fVar28 = *(float *)(lVar11 + 0xe8);
      fVar23 = *(float *)(lVar11 + 0xec);
      uVar22 = *(undefined4 *)(lVar11 + 0xb8);
      fVar24 = *(float *)(lVar11 + 0xbc);
      uVar18 = *(undefined4 *)(lVar11 + 0xc0);
      uVar27 = *(undefined4 *)(lVar11 + 0xd8);
      fVar25 = *(float *)(lVar11 + 0xdc);
      uVar19 = *(undefined4 *)(lVar11 + 0xe0);
      local_2f0[0] = (long *)NEON_fmov(0x3f800000,4);
      fVar29 = *(float *)(lVar11 + 0xf0);
      DynamicObstacle::DynamicObstacle((DynamicObstacle *)&local_370,1,(Vector2 *)local_2f0,0,1);
                    /* try { // try from 0072f01c to 0072f037 has its CatchHandler @ 0072f3ec */
      DynamicObstacle::initStoppingPath((DynamicObstacle *)&local_370,0,0.0,10000.0);
      ppvVar8 = local_350;
                    /* try { // try from 0072f03c to 0072f043 has its CatchHandler @ 0072f3e8 */
      StoppingPath::clear();
      fVar26 = fVar26 - fVar23;
      fVar21 = fVar21 - fVar28;
      fVar17 = fVar17 - fVar29;
      uVar20 = NEON_fmadd(fVar21,uVar22,fVar26 * fVar24);
      uVar22 = NEON_fmadd(fVar21,uVar27,fVar26 * fVar25);
      fVar26 = (float)NEON_fmadd(fVar17,uVar18,uVar20);
      uVar18 = NEON_fmadd(fVar17,uVar19,uVar22);
      local_300 = 0x3f800000;
      local_2f0[0] = (long *)CONCAT44(uVar18,fVar26 + -40.0);
                    /* try { // try from 0072f090 to 0072f0a7 has its CatchHandler @ 0072f3e4 */
      StoppingPath::addKnot
                ((StoppingPath *)ppvVar8,0.0,0.0,(Vector2 *)local_2f0,(Vector2 *)&local_300);
      local_300 = 0x4220000042200000;
                    /* try { // try from 0072f0bc to 0072f0d3 has its CatchHandler @ 0072f3e0 */
      uVar10 = DynamicAvoidance::rangeQuery
                         (*(DynamicAvoidance **)(param_2 + 0x140),(DynamicObstacle *)&local_370,
                          (Vector2 *)&local_300,0.5,(Obstacle **)local_2f0,0x40);
      if (uVar10 != 0) {
        uVar15 = 0;
        do {
          ppfVar13 = (float **)local_2f0[uVar15];
          if (*(int *)((long)ppfVar13 + 0x1c) == 0) {
            bVar9 = true;
          }
          else {
            bVar9 = *(char *)(ppfVar13 + 7) != '\0';
          }
          pfVar4 = ppfVar13[1];
          for (pfVar3 = *ppfVar13; pfVar3 != pfVar4; pfVar3 = pfVar3 + 7) {
            fVar26 = *pfVar3;
            fVar23 = pfVar3[1];
            fVar24 = pfVar3[2];
            fVar25 = pfVar3[3];
            fVar17 = pfVar3[4];
            fVar21 = pfVar3[5];
            for (plVar14 = *(long **)(param_2 + 0x120); plVar14 != *(long **)(param_2 + 0x128);
                plVar14 = plVar14 + 1) {
              lVar11 = *(long *)(*plVar14 + 0x108);
              lVar5 = *(long *)(*plVar14 + 0x110);
              if (lVar11 != lVar5) {
                lVar11 = lVar11 + 4;
                do {
                  lVar1 = lVar11 + 0x18;
                  lVar11 = lVar11 + 0x1c;
                } while (lVar1 != lVar5);
              }
            }
            lVar11 = -0x70;
            if (!bVar9) {
              lVar11 = -0x60;
            }
            pfVar2 = (float *)(&stack0xffffffffffffffa0 + lVar11);
            fVar29 = 1.0;
            fVar28 = (float)NEON_fmadd(fVar24,fVar24,fVar25 * fVar25);
            if (1e-06 < fVar28) {
              fVar29 = 1.0 / SQRT(fVar28);
            }
                    /* try { // try from 0072f23c to 0072f243 has its CatchHandler @ 0072f3f0 */
            fStack_32c = (float)BaseTerrain::getInterpolatedHeightAtPoint
                                          ((BaseTerrain *)(lVar16 + 0x170),
                                           fVar26 / *(float *)(lVar16 + 0x218) +
                                           *(float *)(lVar16 + 0x204),
                                           fVar23 / *(float *)(lVar16 + 0x218) +
                                           *(float *)(lVar16 + 0x204));
            fVar28 = fVar29 * fVar24 * fVar21;
            fVar21 = fVar29 * fVar25 * fVar21;
            local_330 = fVar29 * fVar25 * fVar17;
            fStack_32c = fStack_32c + 0.2;
            fVar25 = fVar28 + fVar26;
            fVar17 = fVar17 * -(fVar29 * fVar24);
            local_308 = fVar21 + fVar23;
            fVar26 = fVar26 - fVar28;
            fVar23 = fVar23 - fVar21;
            local_310 = fVar25 - local_330;
            local_2f8 = fVar17 + local_308;
            local_308 = local_308 - fVar17;
            local_300 = CONCAT44(fStack_32c,local_330 + fVar25);
            local_320 = local_330 + fVar26;
            local_318 = fVar17 + fVar23;
            local_330 = fVar26 - local_330;
            local_328 = fVar23 - fVar17;
                    /* try { // try from 0072f2b8 to 0072f327 has its CatchHandler @ 0072f3f4 */
            fStack_31c = fStack_32c;
            fStack_30c = fStack_32c;
            DeferredDebugRenderer::addLine(this,&local_320,pfVar2,(float *)&local_300,pfVar2,0x7ff);
            DeferredDebugRenderer::addLine(this,&local_330,pfVar2,&local_310,pfVar2,0x7ff);
            DeferredDebugRenderer::addLine(this,&local_320,pfVar2,&local_330,pfVar2,0x7ff);
            DeferredDebugRenderer::addLine(this,(float *)&local_300,pfVar2,&local_310,pfVar2,0x7ff);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar10);
      }
      ppvVar8 = local_350;
      if (local_350 != (void **)0x0) {
        while (ppvVar7 = local_348, ppvVar7 != ppvVar8) {
          local_348 = ppvVar7 + -5;
          pvVar12 = *local_348;
          if (pvVar12 != (void *)0x0) {
            ppvVar7[-4] = pvVar12;
            operator_delete(pvVar12);
          }
        }
        local_348 = ppvVar8;
        operator_delete(local_350);
      }
      if (local_370 != (void *)0x0) {
        local_368 = local_370;
        operator_delete(local_370);
      }
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


