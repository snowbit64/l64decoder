// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initRendering
// Entry Point: 00a13a30
// Size: 1516 bytes
// Signature: undefined __thiscall initRendering(Renderer * this, IDisplay * param_1, bool param_2)


/* Renderer::initRendering(IDisplay*, bool) */

void __thiscall Renderer::initRendering(Renderer *this,IDisplay *param_1,bool param_2)

{
  PIXEL_FORMAT PVar1;
  PIXEL_FORMAT PVar2;
  Renderer RVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  TextureStreamingManager *this_00;
  UpdateRenderingManager *this_01;
  ITextureObject *pIVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  IDisplay *pIVar17;
  IRenderDevice *pIVar18;
  float fVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_c0;
  ITextureObject *local_98;
  long local_90;
  
  lVar4 = tpidr_el0;
  local_90 = *(long *)(lVar4 + 0x28);
  SharedRenderArgs::beginFrame();
  if (*(long *)(this + 8) != 0) {
    RawTransformGroup::updateWorldTransformation();
    pIVar17 = *(IDisplay **)(this + 8);
    fVar19 = (float)(**(code **)(*(long *)param_1 + 0x68))(param_1,0,pIVar17[0x16c]);
    setupDebugClipping((Camera *)this,pIVar17,(uint)param_1,fVar19);
  }
  IndirectLightRenderController::initRendering
            ((IndirectLightRenderController *)(this + 0x1df8),
             *(AtmosphereRenderControllerShared **)(this + 0x2030),0x100);
  local_98 = (ITextureObject *)IndirectLightRenderController::getPrefilteredEnvMap();
  if (local_98 == (ITextureObject *)0x0) {
    pIVar13 = (ITextureObject *)0x0;
  }
  else {
    plVar11 = (long *)(**(code **)(**(long **)(this + 0x30) + 0x138))();
    (**(code **)(*plVar11 + 0x120))(plVar11,1,&local_98,0,0,0,0xc);
    pIVar13 = local_98;
  }
  updateSharedRenderArgs(this,*(Camera **)(this + 8),pIVar13);
  if (this[0xf05] != (Renderer)0x0) {
    AtmosphereRenderControllerShared::update
              (*(AtmosphereRenderControllerShared **)(this + 0x2030),
               *(IRenderDevice **)(this + 0x30),*(ITextureObject **)(this + 0x130),
               (PostFxParams *)(this + 0x11e8));
  }
  *(undefined8 *)(this + 0x1afc) = 0;
  *(undefined8 *)(this + 0x1af4) = 0;
  *(undefined8 *)(this + 0x1ae0) = 0;
  *(undefined8 *)(this + 0x1ad8) = 0;
  *(undefined8 *)(this + 0x1af0) = 0;
  *(undefined8 *)(this + 0x1ae8) = 0;
  *(undefined8 *)(this + 0x1ac0) = 0;
  *(undefined8 *)(this + 0x1ab8) = 0;
  *(undefined8 *)(this + 0x1ad0) = 0;
  *(undefined8 *)(this + 0x1ac8) = 0;
  *(undefined8 *)(this + 0x1aa0) = 0;
  *(undefined8 *)(this + 0x1a98) = 0;
  *(undefined8 *)(this + 0x1ab0) = 0;
  *(undefined8 *)(this + 0x1aa8) = 0;
  *(undefined8 *)(this + 0x1a90) = 0;
  *(undefined8 *)(this + 0x1a88) = 0;
  uVar12 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
  if ((*(long *)(this + 0x1b88) - *(long *)(this + 0x1b80) >> 3) * -0x7063e7063e7063e7 -
      (uVar12 & 0xffffffff) != 0) {
    deletePlaneRenderInfos();
    uVar12 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
    lVar14 = *(long *)(this + 0x1b88) - *(long *)(this + 0x1b80) >> 3;
    uVar16 = lVar14 * -0x7063e7063e7063e7;
    uVar12 = uVar12 & 0xffffffff;
    if (uVar12 <= uVar16) {
      if (uVar12 <= uVar16 && uVar16 - uVar12 != 0) {
        *(ulong *)(this + 0x1b88) = *(long *)(this + 0x1b80) + uVar12 * 0x148;
      }
    }
    else {
      std::__ndk1::
      vector<Renderer::PlaneRenderInfoDesc,std::__ndk1::allocator<Renderer::PlaneRenderInfoDesc>>::
      __append((vector<Renderer::PlaneRenderInfoDesc,std::__ndk1::allocator<Renderer::PlaneRenderInfoDesc>>
                *)(this + 0x1b80),uVar12 + lVar14 * 0x7063e7063e7063e7);
    }
  }
  EngineManager::getInstance();
  iVar7 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
  if (iVar7 != 0) {
    lVar14 = 0;
    uVar12 = 0;
    do {
      uVar8 = (**(code **)(*(long *)param_1 + 0x90))(param_1,uVar12 & 0xffffffff);
      uVar21 = *(undefined8 *)(this + 0x1de0);
      uVar9 = (**(code **)(*(long *)param_1 + 0x98))(param_1,uVar12 & 0xffffffff);
      uVar22 = NEON_ucvtf(CONCAT44(uVar9,uVar8),4);
      uVar21 = NEON_ucvtf(CONCAT44((int)(float)(int)(*(float *)(this + 0x1de0) *
                                                    (float)((ulong)uVar22 >> 0x20)) + 3,
                                   (int)(float)(int)((float)uVar21 * (float)uVar22) + 3) &
                          0xfffffffcfffffffc,4);
      uVar20 = (uint)(float)(int)((float)*(undefined8 *)(this + 0x558) * (float)uVar21);
      uVar23 = (uint)(float)(int)((float)((ulong)*(undefined8 *)(this + 0x558) >> 0x20) *
                                 (float)((ulong)uVar21 >> 0x20));
      local_c0 = CONCAT44(uVar23,uVar20);
      if (lVar14 == 0) {
        Upscaler::init((uint)*(undefined8 *)(this + 0x2040),uVar20,uVar23,uVar20,uVar23,true,1.0);
        local_c0 = *(undefined8 *)(*(long *)(this + 0x2040) + 0x44);
        *(undefined4 *)(this + 0x1bc8) = *(undefined4 *)(*(long *)(this + 0x2040) + 0x4c);
        this_00 = (TextureStreamingManager *)TextureStreamingManager::getInstance();
        TextureStreamingManager::setMipBoost(this_00,-*(float *)(this + 0x1bc8));
        lVar15 = *(long *)(this + 8);
        if (lVar15 == 0) goto LAB_00a13d5c;
LAB_00a13cf8:
        bVar5 = *(char *)(lVar15 + 0x16c) != '\0';
      }
      else {
        lVar15 = *(long *)(this + 8);
        if (lVar15 != 0) goto LAB_00a13cf8;
LAB_00a13d5c:
        bVar5 = false;
      }
      fVar19 = (float)(**(code **)(*(long *)param_1 + 0x68))(param_1,uVar12 & 0xffffffff,bVar5);
      fVar24 = *(float *)(this + 0x558);
      lVar15 = *(long *)(this + 0x1b80);
      fVar25 = *(float *)(this + 0x55c);
      pIVar18 = *(IRenderDevice **)(this + 0x30);
      PVar1 = *(PIXEL_FORMAT *)(this + 0x7c);
      RVar3 = this[0x80];
      PVar2 = *(PIXEL_FORMAT *)(this + 0x84);
      uVar10 = HardwareScalability::getMSAA();
      fVar26 = *(float *)(this + 0x78);
      bVar6 = (**(code **)(*(long *)param_1 + 0x40))(param_1,uVar12 & 0xffffffff);
      initPlaneRenderInfo(this,(PlaneRenderInfoDesc *)(lVar15 + lVar14),(uint)local_c0,
                          (uint)((ulong)local_c0 >> 0x20),uVar20,uVar23,(fVar19 * fVar24) / fVar25,
                          pIVar18,param_1,(uint)uVar12,PVar1,(bool)RVar3,PVar2,uVar10,fVar26,
                          (bool)(bVar6 & 1));
      if (*(long *)(*(long *)(this + 0x1b80) + lVar14 + 0x90) != 0) {
        if (*(int *)(this + 0x1dd8) == 0) {
          RenderTextureController::prepopulate();
        }
        else {
          RenderTextureController::unpopulate();
        }
      }
      uVar12 = uVar12 + 1;
      uVar16 = (**(code **)(*(long *)param_1 + 0x38))(param_1);
      lVar14 = lVar14 + 0x148;
    } while (uVar12 < (uVar16 & 0xffffffff));
  }
  *(undefined8 *)(*(long *)(this + 0x40) + 0x3e0) = *(undefined8 *)(*(long *)(this + 0x1b80) + 0x10)
  ;
  GlobalTimeManager::getInstance();
  fVar19 = (float)GlobalTimeManager::getCurrentDt();
  this_01 = (UpdateRenderingManager *)UpdateRenderingManager::getInstance();
  UpdateRenderingManager::updateRendering
            (this_01,fVar19,(SharedRenderArgs *)(this + 0x38),(RenderStats *)(this + 0x1a88));
  if (((LocalGeometryLoadBalancer::getInstance()::instance & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(&LocalGeometryLoadBalancer::getInstance()::instance), iVar7 != 0))
  {
    LocalGeometryLoadBalancer::getInstance()::instance = 0;
    DAT_02112a48 = 0;
    DAT_02112a50 = 0;
    __cxa_atexit(LocalGeometryLoadBalancer::~LocalGeometryLoadBalancer,
                 &LocalGeometryLoadBalancer::getInstance()::instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LocalGeometryLoadBalancer::getInstance()::instance);
  }
  LocalGeometryLoadBalancer::updateRendering
            (fVar19,(SharedRenderArgs *)&LocalGeometryLoadBalancer::getInstance()::instance,
             (RenderStats *)(SharedRenderArgs *)(this + 0x38));
  if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance), iVar7 != 0)
     ) {
                    /* try { // try from 00a13f80 to 00a13f8b has its CatchHandler @ 00a14038 */
    InstancedGeometryManager::InstancedGeometryManager
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
    __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                 InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
  }
  InstancedGeometryManager::preRenderAll
            ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance,
             *(IRenderDevice **)(this + 0x30));
  if (((VisibilityConditionManager::getInstance()::instance & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(&VisibilityConditionManager::getInstance()::instance), iVar7 != 0)
     ) {
    DAT_0107c5c0 = 0;
    DAT_0107c5b8 = 0;
    VisibilityConditionManager::getInstance()::instance = &DAT_0107c5b8;
                    /* try { // try from 00a13fe0 to 00a13feb has its CatchHandler @ 00a1401c */
    Mutex::Mutex((Mutex *)&DAT_0107c5c8,true);
    __cxa_atexit(VisibilityConditionManager::~VisibilityConditionManager,
                 &VisibilityConditionManager::getInstance()::instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&VisibilityConditionManager::getInstance()::instance);
  }
  VisibilityConditionManager::updateVisibilityConditions();
  CullingManager::updateDirtyEntities();
  if ((param_2) && (this[1] != (Renderer)0x0)) {
    AudioSourceQueue::render();
  }
  if (*(long *)(lVar4 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


