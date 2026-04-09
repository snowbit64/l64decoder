// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doRendering
// Entry Point: 00a07cb0
// Size: 2652 bytes
// Signature: undefined __thiscall doRendering(RenderController * this, RenderStats * param_1, bool param_2)


/* RenderController::doRendering(RenderStats&, bool) */

void __thiscall
RenderController::doRendering(RenderController *this,RenderStats *param_1,bool param_2)

{
  int *this_00;
  long *plVar1;
  ThreadPool *pTVar2;
  long lVar3;
  void **ppvVar4;
  void *pvVar5;
  uint uVar6;
  ICommandBuffer *pIVar7;
  float *pfVar8;
  ushort *puVar9;
  TerrainPatchOccluderManager *this_01;
  DeferredDebugRenderer *pDVar10;
  TextureStreamingManager *this_02;
  undefined8 uVar11;
  LightSource *pLVar12;
  ulong uVar13;
  long *plVar14;
  GsShape *pGVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  long *plVar21;
  long *plVar22;
  GeoMipMappingTerrainPatch *pGVar23;
  GsShape *pGVar24;
  void *pvVar25;
  long lVar26;
  RenderTextureSetup *pRVar27;
  ulong uVar28;
  RenderTargetInfo *pRVar29;
  float *pfVar30;
  LightSource *this_03;
  ulong uVar31;
  IndirectLightRenderController *this_04;
  long lVar32;
  uint uVar33;
  long lVar34;
  int *piVar35;
  float fVar36;
  float fVar37;
  void *local_108;
  void *local_100;
  undefined8 local_f8;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar3 = tpidr_el0;
  uVar33 = 0;
  local_80 = *(long *)(lVar3 + 0x28);
  uVar6 = 0;
  while( true ) {
    while( true ) {
      if ((ulong)(*(long *)(this + 0x130) - *(long *)(this + 0x128) >> 3) <= (ulong)uVar33) break;
      pfVar30 = *(float **)(*(long *)(this + 0x128) + (ulong)uVar33 * 8);
      pfVar8 = pfVar30 + 0x100;
      RenderList::init((RenderList *)pfVar8,(CullingArgs *)pfVar30);
      RenderList::collectObjects((RenderList *)pfVar8,param_1);
      RenderList::preRender();
      fVar36 = pfVar30[0xea];
      if (((uint)fVar36 >> 8 & 1) != 0) {
        plVar21 = *(long **)this;
        this_04 = *(IndirectLightRenderController **)(this + 0x830);
        lVar34 = *(long *)(*(long *)(pfVar30 + 0x10c) + 0x40);
        pIVar7 = (ICommandBuffer *)(**(code **)(*plVar21 + 0x138))(plVar21);
        if (lVar34 == 0) {
          pLVar12 = (LightSource *)0x0;
        }
        else {
          pLVar12 = *(LightSource **)(lVar34 + 0x10);
        }
        IndirectLightRenderController::updateIndirectLighting
                  (this_04,(IRenderDevice *)plVar21,pIVar7,pLVar12,(PostFxParams *)(this + 0x2c8));
        fVar36 = pfVar30[0xea];
      }
      if (((uint)fVar36 >> 7 & 1) != 0) {
        pTVar2 = (ThreadPool *)0x0;
        if (this[0x1a] != (RenderController)0x0) {
          pTVar2 = *(ThreadPool **)(this + 0x10);
        }
        RenderList::kickOccluderRendering
                  ((RenderList *)pfVar8,pTVar2,pfVar30,pfVar30 + 0x20,pfVar30 + 0x34);
      }
      RenderList::issueDependentJobs();
      uVar33 = uVar33 + 1;
    }
    uVar19 = *(uint *)(this + 0x248);
    if (uVar19 <= uVar6) break;
    uVar19 = uVar6 + 1;
    pRVar27 = *(RenderTextureSetup **)(*(long *)(this + 0x230) + (ulong)uVar6 * 8);
    lVar34 = *(long *)(pRVar27 + 0x78);
    uVar17 = *(long *)(pRVar27 + 0x80) - lVar34;
    uVar6 = uVar19;
    if ((int)(uVar17 >> 3) != 0) {
      lVar32 = 0;
      while( true ) {
        piVar35 = *(int **)(lVar34 + lVar32);
        if (*piVar35 == 0) {
          this_00 = piVar35 + 0x16c;
          RenderQueue::init((RenderQueue *)this_00,(RenderArgs *)(piVar35 + 4),
                            *(CullingArgs **)(piVar35 + 2),
                            (RenderList *)(*(CullingArgs **)(piVar35 + 2) + 0x400));
          RenderList::addDependencies((RenderList *)(*(long *)(piVar35 + 2) + 0x400),pRVar27);
          RenderQueue::kickLightingCalcs((RenderQueue *)this_00,param_1,(bool)this[0x18]);
          RenderQueue::issueDependentJobs((RenderQueue *)this_00,pRVar27);
        }
        if ((uVar17 >> 3 & 0xffffffff) * 8 + -8 == lVar32) break;
        lVar34 = *(long *)(pRVar27 + 0x78);
        lVar32 = lVar32 + 8;
      }
    }
  }
  if (uVar19 != 0) {
    uVar17 = 0;
    do {
      lVar26 = *(long *)(*(long *)(this + 0x230) + uVar17 * 8);
      lVar34 = *(long *)(lVar26 + 0x78);
      lVar32 = *(long *)(lVar26 + 0x80);
      if (lVar32 != lVar34) {
        uVar28 = 0;
        do {
          if (**(int **)(lVar34 + uVar28 * 8) == 0) {
            RenderQueue::preRender();
            lVar34 = *(long *)(lVar26 + 0x78);
            lVar32 = *(long *)(lVar26 + 0x80);
          }
          uVar28 = (ulong)((int)uVar28 + 1);
        } while (uVar28 < (ulong)(lVar32 - lVar34 >> 3));
        uVar19 = *(uint *)(this + 0x248);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar19);
  }
  if (*(long *)(this + 0x270) != *(long *)(this + 0x268)) {
    *(long *)(this + 0x270) = *(long *)(this + 0x268);
  }
  if (*(long *)(this + 0x288) != *(long *)(this + 0x280)) {
    *(long *)(this + 0x288) = *(long *)(this + 0x280);
  }
  plVar21 = (long *)(this + 0x268);
  plVar1 = (long *)(this + 0x280);
  uVar17 = *(long *)(this + 0x130) - (long)*(long **)(this + 0x128);
  uVar28 = uVar17 >> 3 & 0xffffffff;
  iVar20 = (int)(uVar17 >> 3);
  if ((iVar20 != 0) &&
     (RenderList::getAllShapesAndLights
                ((RenderList *)(**(long **)(this + 0x128) + 0x400),(vector *)plVar21,
                 (vector *)plVar1), uVar28 != 1)) {
    uVar17 = 1;
    do {
      RenderList::getAllShapesAndLights
                ((RenderList *)(*(long *)(*(long *)(this + 0x128) + uVar17 * 8) + 0x400),
                 (vector *)plVar21,(vector *)plVar1);
      uVar17 = uVar17 + 1;
    } while (uVar28 != uVar17);
  }
  if ((*(char *)(*(long *)(this + 8) + 0x78) != '\0') &&
     (uVar17 = DeferredDebugRenderer::isCategoryEnabled
                         (*(DeferredDebugRenderer **)(*(long *)(this + 8) + 0x80),0x200),
     (uVar17 & 1) != 0)) {
    local_108 = (void *)0x0;
    local_100 = (void *)0x0;
    local_f8 = 0;
    if (iVar20 != 0) {
      lVar34 = 0;
      do {
                    /* try { // try from 00a07fa8 to 00a07faf has its CatchHandler @ 00a08714 */
        RenderList::getAllOccluders
                  ((RenderList *)(*(long *)(*(long *)(this + 0x128) + lVar34) + 0x400),
                   (vector *)&local_108);
        lVar34 = lVar34 + 8;
      } while (uVar28 * 8 - lVar34 != 0);
    }
    FUN_00a0a724(local_108,local_100);
    pvVar5 = local_100;
    for (pvVar25 = local_108; pvVar25 != pvVar5; pvVar25 = (void *)((long)pvVar25 + 0x18)) {
      lVar34 = *(long *)((long)pvVar25 + 8);
      if ((*(byte *)(lVar34 + 0x11) >> 4 & 1) == 0) {
                    /* try { // try from 00a08098 to 00a0809b has its CatchHandler @ 00a08710 */
        Geometry::getCollisionProxyMesh();
        pDVar10 = *(DeferredDebugRenderer **)(*(long *)(this + 8) + 0x80);
        uStack_88 = 0x3f8000003f800000;
        local_90 = 0;
                    /* try { // try from 00a080b8 to 00a0817b has its CatchHandler @ 00a0871c */
        RawTransformGroup::updateWorldTransformation();
        pfVar8 = (float *)TriangleSet::getPositions();
        puVar9 = (ushort *)IndexedTriangleSet::getIndices16();
        uVar17 = IndexedTriangleSet::getNumIndices();
        DeferredDebugRenderer::addSolidMesh
                  (pDVar10,(Matrix4x4 *)(lVar34 + 0xb8),(float *)&local_90,pfVar8,puVar9,
                   (uint)((uVar17 & 0xffffffff) / 3),1.0,0x200,true);
        pDVar10 = *(DeferredDebugRenderer **)(*(long *)(this + 8) + 0x80);
        RawTransformGroup::updateWorldTransformation();
        pfVar8 = (float *)TriangleSet::getPositions();
        puVar9 = (ushort *)IndexedTriangleSet::getIndices16();
        uVar17 = IndexedTriangleSet::getNumIndices();
        DeferredDebugRenderer::addWireMesh
                  (pDVar10,(Matrix4x4 *)(lVar34 + 0xb8),(float *)&local_90,pfVar8,puVar9,
                   (uint)((uVar17 & 0xffffffff) / 3),1.0,0x200,false);
      }
      else {
        pGVar23 = *(GeoMipMappingTerrainPatch **)(lVar34 + 0x170);
                    /* try { // try from 00a08184 to 00a081bb has its CatchHandler @ 00a08718 */
        this_01 = (TerrainPatchOccluderManager *)TerrainPatchOccluderManager::getInstance();
        lVar34 = TerrainPatchOccluderManager::getRenderDebugData
                           (this_01,pGVar23,*(uint *)((long)pvVar25 + 0x14));
        if (lVar34 != 0) {
          DeferredDebugRenderer::addPrimitiveList
                    (*(DeferredDebugRenderer **)(*(long *)(this + 8) + 0x80),*(float **)(lVar34 + 8)
                     ,*(PRIMITIVE_TYPE *)(lVar34 + 0x10),*(uint *)(lVar34 + 4),0x200,true);
        }
      }
    }
    if (local_108 != (void *)0x0) {
      local_100 = local_108;
      operator_delete(local_108);
    }
  }
  uVar17 = (long)*(ulong **)(this + 0x270) - (long)*(ulong **)(this + 0x268);
  uVar13 = uVar17 >> 3 & 0xffffffff;
  uVar33 = (uint)(uVar17 >> 3);
  if (uVar33 != 0) {
    std::__ndk1::__sort<std::__ndk1::__less<unsigned_long,unsigned_long>&,unsigned_long*>
              (*(ulong **)(this + 0x268),*(ulong **)(this + 0x270),(__less *)&local_108);
    lVar34 = 0;
    plVar14 = (long *)0x0;
    do {
      plVar22 = *(long **)(*plVar21 + lVar34);
      if ((plVar22 != plVar14) &&
         (plVar14 = plVar22, ***(int ***)(**(long **)(this + 0x230) + 0x78) == 0)) {
        (**(code **)(*plVar22 + 0x58))(plVar22,**(int ***)(**(long **)(this + 0x230) + 0x78) + 4);
      }
      lVar34 = lVar34 + 8;
    } while (uVar13 * 8 - lVar34 != 0);
    if (*(char *)(*(long *)(this + 8) + 0x78) != '\0') {
      lVar34 = 0;
      uVar6 = uVar33;
      if (uVar33 < 2) {
        uVar6 = 1;
      }
      pGVar15 = (GsShape *)0x0;
      do {
        pGVar24 = *(GsShape **)(*plVar21 + lVar34);
        if (pGVar24 != pGVar15) {
          DeferredDebugRenderer::addBoundingVolume
                    (*(DeferredDebugRenderer **)(*(long *)(this + 8) + 0x80),
                     (BoundingVolume *)(pGVar24 + 0x198),8);
          lVar32 = EngineManager::getInstance();
          pGVar15 = pGVar24;
          if (*(int *)(*(long *)(lVar32 + 0xb8) + 0xf00) == 0x14) {
            createTriangleDensityBuffer(this,pGVar24);
          }
        }
        lVar34 = lVar34 + 8;
      } while ((ulong)uVar6 * 8 - lVar34 != 0);
    }
  }
  if ((*(char *)(*(long *)(this + 8) + 0x78) == '\0') ||
     (lVar34 = EngineManager::getInstance(), *(int *)(*(long *)(lVar34 + 0xb8) + 0xf00) != 0x14)) {
    for (plVar14 = *(long **)(this + 0x2b0); plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      if ((long *)plVar14[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar14[3] + 8))();
      }
    }
    if (*(long *)(this + 0x2b8) != 0) {
      ppvVar4 = (void **)*(void **)(this + 0x2b0);
      while (ppvVar4 != (void **)0x0) {
        pvVar25 = *ppvVar4;
        operator_delete(ppvVar4);
        ppvVar4 = (void **)pvVar25;
      }
      lVar34 = *(long *)(this + 0x2a8);
      *(undefined8 *)(this + 0x2b0) = 0;
      if (lVar34 != 0) {
        lVar32 = 0;
        do {
          *(undefined8 *)(*(long *)(this + 0x2a0) + lVar32 * 8) = 0;
          lVar32 = lVar32 + 1;
        } while (lVar34 != lVar32);
      }
      *(undefined8 *)(this + 0x2b8) = 0;
    }
    if (*(long **)(this + 0x298) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x298) + 8))();
    }
    *(undefined8 *)(this + 0x298) = 0;
  }
  lVar34 = *(long *)(this + 0x288);
  lVar32 = *(long *)(this + 0x280);
  if (((((int)((ulong)(lVar34 - lVar32) >> 3) != 0) &&
       (*(char *)(*(long *)(this + 8) + 0x78) != '\0')) &&
      (pDVar10 = *(DeferredDebugRenderer **)(*(long *)(this + 8) + 0x80),
      pDVar10 != (DeferredDebugRenderer *)0x0)) &&
     (uVar17 = DeferredDebugRenderer::isCategoryEnabled(pDVar10,2), (uVar17 & 1) != 0)) {
    std::__ndk1::__sort<std::__ndk1::__less<unsigned_long,unsigned_long>&,unsigned_long*>
              (*(ulong **)(this + 0x280),*(ulong **)(this + 0x288),(__less *)&local_108);
    lVar26 = 0;
    pLVar12 = (LightSource *)0x0;
    lVar16 = *(long *)(this + 0x280);
    do {
      this_03 = *(LightSource **)(lVar16 + lVar26);
      if (this_03 != pLVar12) {
        uVar6 = LightSource::getLightFlags();
        fVar37 = *(float *)(this_03 + 0x194);
        pDVar10 = *(DeferredDebugRenderer **)(*(long *)(this + 8) + 0x80);
        fVar36 = (float)MathUtil::degreeToRadian(*(float *)(this_03 + 0x19c));
        DeferredDebugRenderer::addLightSource
                  (pDVar10,(Matrix4x4 *)(this_03 + 0xb8),fVar37,fVar36,*(float *)(this_03 + 0x1a0),
                   *(uint *)(this_03 + 0x16c),(bool)((byte)(uVar6 >> 5) & 1));
        uVar17 = LightSource::hasMergedShadow();
        if ((uVar17 & 1) != 0) {
          LightSource::debugDrawMergedShadowLightSource
                    (this_03,*(DeferredDebugRenderer **)(*(long *)(this + 8) + 0x80));
        }
        lVar16 = *plVar1;
        pLVar12 = *(LightSource **)(lVar16 + lVar26);
      }
      lVar26 = lVar26 + 8;
    } while (((ulong)(lVar34 - lVar32) >> 3 & 0xffffffff) * 8 - lVar26 != 0);
  }
  lVar32 = *(long *)(this + 0x250);
  lVar34 = *(long *)(this + 600);
  if (*(long *)(this + 600) != lVar32) {
    *(long *)(this + 600) = lVar32;
    lVar34 = lVar32;
  }
  plVar1 = (long *)(this + 0x250);
  if ((ulong)(lVar34 - lVar32 >> 3) < (ulong)*(uint *)(this + 0x248)) {
    do {
      do {
        uVar17 = addReadyRenderTexture(this,false,(vector *)plVar1);
      } while ((uVar17 & 1) != 0);
      do {
        uVar17 = addReadyRenderTexture(this,true,(vector *)plVar1);
      } while ((uVar17 & 1) != 0);
      lVar34 = *(long *)(this + 600);
      lVar32 = *(long *)(this + 0x250);
    } while ((ulong)(lVar34 - lVar32 >> 3) < (ulong)*(uint *)(this + 0x248));
  }
  if (lVar34 == lVar32) {
    lVar34 = lVar32;
    if (this[0x19] == (RenderController)0x0) goto LAB_00a08470;
LAB_00a08488:
    ThreadPoolTaskManager::ThreadPoolTaskManager
              ((ThreadPoolTaskManager *)&local_108,*(ThreadPool **)(this + 0x10));
    lVar34 = *(long *)(this + 0x250);
    uVar17 = *(long *)(this + 600) - lVar34;
    if ((int)(uVar17 >> 3) != 0) {
      uVar31 = 0;
      while( true ) {
        lVar32 = *(long *)(lVar34 + uVar31 * 8);
        lVar34 = *(long *)(lVar32 + 0x78);
        uVar18 = *(long *)(lVar32 + 0x80) - lVar34;
        if ((int)(uVar18 >> 3) != 0) {
          lVar26 = 0;
          while( true ) {
            piVar35 = *(int **)(lVar34 + lVar26);
            if (*piVar35 == 0) {
                    /* try { // try from 00a084fc to 00a08503 has its CatchHandler @ 00a08738 */
              RenderQueue::issueTasksToThreadPool
                        ((RenderQueue *)(piVar35 + 0x16c),(ThreadPoolTaskManager *)&local_108);
            }
            else {
                    /* try { // try from 00a084ec to 00a084f3 has its CatchHandler @ 00a0873c */
              (**(code **)(**(long **)(piVar35 + 4) + 0x18))(*(long **)(piVar35 + 4),&local_108);
            }
            if ((uVar18 >> 3 & 0xffffffff) * 8 + -8 == lVar26) break;
            lVar34 = *(long *)(lVar32 + 0x78);
            lVar26 = lVar26 + 8;
          }
        }
        uVar31 = uVar31 + 1;
        if (uVar31 == (uVar17 >> 3 & 0xffffffff)) break;
        lVar34 = *plVar1;
      }
    }
                    /* try { // try from 00a0852c to 00a08547 has its CatchHandler @ 00a0870c */
    ThreadPoolTaskManager::waitForAllTasks((ThreadPoolTaskManager *)&local_108,true);
    this_02 = (TextureStreamingManager *)TextureStreamingManager::getInstance();
    TextureStreamingManager::notifyNoMoreTextureUsageContributionsForFrame
              (this_02,*(ulonglong *)(*(long *)(this + 8) + 0x90));
    ThreadPoolTaskManager::~ThreadPoolTaskManager((ThreadPoolTaskManager *)&local_108);
    lVar34 = *(long *)(this + 600);
    lVar32 = *(long *)(this + 0x250);
    if (lVar34 != lVar32) {
LAB_00a08560:
      uVar17 = 0;
      do {
        pRVar29 = *(RenderTargetInfo **)(lVar32 + uVar17 * 8);
        lVar26 = *(long *)(pRVar29 + 0x78);
        if (*(long *)(pRVar29 + 0x80) != lVar26) {
          uVar31 = 0;
          do {
            piVar35 = *(int **)(lVar26 + uVar31 * 8);
            if (*piVar35 == 0) {
              RenderQueue::submitPreparedRenderBuffers
                        ((RenderQueue *)(piVar35 + 0x16c),pRVar29,param_1,(bool)this[0x19]);
            }
            else {
              (**(code **)(**(long **)(piVar35 + 4) + 0x20))
                        (*(long **)(piVar35 + 4),pRVar29,param_1,this[0x19]);
            }
            lVar26 = *(long *)(pRVar29 + 0x78);
            uVar31 = (ulong)((int)uVar31 + 1);
          } while (uVar31 < (ulong)(*(long *)(pRVar29 + 0x80) - lVar26 >> 3));
          lVar34 = *(long *)(this + 600);
          lVar32 = *(long *)(this + 0x250);
        }
        uVar17 = (ulong)((int)uVar17 + 1);
      } while (uVar17 < (ulong)(lVar34 - lVar32 >> 3));
    }
  }
  else {
    uVar17 = 0;
    do {
      prepareRender(this,*(RenderTextureSetup **)(lVar32 + uVar17 * 8),param_1);
      uVar17 = (ulong)((int)uVar17 + 1);
      lVar32 = *(long *)(this + 0x250);
    } while (uVar17 < (ulong)(*(long *)(this + 600) - lVar32 >> 3));
    lVar34 = *(long *)(this + 600);
    if (this[0x19] != (RenderController)0x0) goto LAB_00a08488;
LAB_00a08470:
    if (lVar34 != lVar32) goto LAB_00a08560;
  }
  MaterialShaderManager::getInstance();
  MaterialShaderManager::reconcileNewShaders();
  if ((param_2) && (uVar33 != 0)) {
    lVar34 = 0;
    lVar32 = 0;
    do {
      lVar26 = *(long *)(*plVar21 + lVar34);
      if (lVar26 != lVar32) {
        GsShape::storePrevPoses();
        lVar32 = lVar26;
      }
      lVar34 = lVar34 + 8;
    } while (uVar13 * 8 - lVar34 != 0);
  }
  if (*(char *)(*(IRenderDevice ***)(this + 8) + 0x26) != '\0') {
    if (iVar20 == 0) goto LAB_00a086c4;
    plVar21 = *(long **)(this + 0x128);
    uVar17 = uVar28;
    do {
      if (*(GsMaskedOcclusionCulling **)(*plVar21 + 0x408) != (GsMaskedOcclusionCulling *)0x0) {
        uVar11 = GsMaskedOcclusionCulling::createDebugTexture
                           (*(GsMaskedOcclusionCulling **)(*plVar21 + 0x408),
                            **(IRenderDevice ***)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + 0x138) = uVar11;
        if (iVar20 == 0) goto LAB_00a086c4;
        goto LAB_00a08690;
      }
      plVar21 = plVar21 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if (iVar20 != 0) {
LAB_00a08690:
    lVar34 = 0;
    do {
      if (*(char *)(*(long *)(*(long *)(this + 0x128) + lVar34) + 0x3a8) < '\0') {
        RenderList::releaseOcclusionCulling();
      }
      lVar34 = lVar34 + 8;
    } while (uVar28 * 8 - lVar34 != 0);
  }
LAB_00a086c4:
  if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


