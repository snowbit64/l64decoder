// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 006ddb24
// Size: 2308 bytes
// Signature: undefined render(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::render() */

void EngineApplication::render(void)

{
  uint uVar1;
  uint uVar2;
  INFO_RENDERING IVar3;
  char cVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  long in_x0;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ICommandBuffer *pIVar13;
  long lVar14;
  float *pfVar15;
  undefined8 uVar16;
  LuauScriptSystem *this;
  StatsOverlayManager *this_00;
  char *pcVar17;
  long *plVar18;
  IRenderDevice *pIVar19;
  SharedRenderArgs *pSVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  long local_1200;
  undefined4 local_11f8;
  undefined8 local_11f4;
  float local_11ec;
  float local_11e8;
  float fStack_11e4;
  undefined8 local_11e0;
  undefined4 local_11d8;
  undefined8 local_11d4;
  undefined4 local_11cc;
  undefined4 local_11c8;
  undefined4 local_11c4;
  undefined4 local_11c0;
  undefined8 local_200;
  ulong uStack_1f8;
  undefined4 local_1e8;
  undefined2 local_1e4;
  undefined local_1e2;
  undefined4 local_1d8;
  undefined2 local_1d4;
  undefined local_1d2;
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined local_1c2;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined local_1b2;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined local_1a2;
  undefined4 local_198;
  undefined2 local_194;
  undefined local_192;
  undefined4 local_188;
  undefined2 local_184;
  undefined local_182;
  undefined4 local_178;
  undefined2 local_174;
  undefined local_172;
  undefined4 local_168;
  undefined2 local_164;
  undefined local_162;
  undefined4 local_158;
  undefined2 local_154;
  undefined local_152;
  undefined4 local_148;
  undefined2 local_144;
  undefined local_142;
  undefined4 local_138;
  undefined2 local_134;
  undefined local_132;
  undefined4 local_128;
  undefined2 local_124;
  undefined local_122;
  undefined4 local_118;
  undefined2 local_114;
  undefined local_112;
  undefined4 local_108;
  undefined2 local_104;
  undefined local_102;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined local_f2;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined local_e2;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined local_d2;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined local_c2;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined local_b2;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined local_a2;
  long local_98;
  
  lVar5 = tpidr_el0;
  local_98 = *(long *)(lVar5 + 0x28);
  lVar8 = EngineManager::getInstance();
  uVar9 = (**(code **)(**(long **)(in_x0 + 0x178) + 0x10))();
  fVar23 = *(float *)(in_x0 + 0x198);
  uVar10 = (**(code **)(**(long **)(in_x0 + 0x178) + 0x18))();
  fVar25 = *(float *)(in_x0 + 0x198);
  if (((HeadMountedDisplayManager::getInstance()::self & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(&HeadMountedDisplayManager::getInstance()::self), iVar7 != 0)) {
                    /* try { // try from 006de314 to 006de31f has its CatchHandler @ 006de44c */
    HeadMountedDisplayManager::HeadMountedDisplayManager
              ((HeadMountedDisplayManager *)HeadMountedDisplayManager::getInstance()::self);
    __cxa_atexit(HeadMountedDisplayManager::~HeadMountedDisplayManager,
                 HeadMountedDisplayManager::getInstance()::self,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&HeadMountedDisplayManager::getInstance()::self);
  }
  pIVar19 = *(IRenderDevice **)(in_x0 + 0x170);
  fVar21 = (float)EngineManager::getScreenAspectRatio();
  plVar11 = (long *)HeadMountedDisplayManager::getDisplay
                              ((HeadMountedDisplayManager *)
                               HeadMountedDisplayManager::getInstance()::self,pIVar19,fVar21);
  lVar12 = Renderer::getCamera();
  if (lVar12 != 0) {
    RawTransformGroup::updateWorldTransformation();
    fVar21 = *(float *)(lVar12 + 0xe0);
    local_1200 = *(long *)(lVar12 + 0xe8);
    local_11f8 = *(undefined4 *)(lVar12 + 0xf0);
    local_11e0 = *(undefined8 *)(lVar12 + 0xb8);
    local_11d8 = *(undefined4 *)(lVar12 + 0xc0);
    local_11ec = -fVar21;
    fVar22 = (float)*(undefined8 *)(lVar12 + 0xd8);
    fVar21 = fVar21 * fVar21 + fVar22 * fVar22;
    local_11f4 = CONCAT44(-(float)((ulong)*(undefined8 *)(lVar12 + 0xd8) >> 0x20),-fVar22);
    local_11d4 = *(undefined8 *)(lVar12 + 200);
    local_11cc = *(undefined4 *)(lVar12 + 0xd0);
    fStack_11e4 = 1.0;
    if (1e-06 < fVar21) {
      fStack_11e4 = 1.0 / SQRT(fVar21);
    }
    local_11e8 = fStack_11e4 * -fVar22;
    fStack_11e4 = fStack_11e4 * local_11ec;
    local_11c0 = Camera::getNearClip();
    local_11c8 = MathUtil::degreeToRadian(100.0);
    local_11c4 = MathUtil::degreeToRadian(70.0);
    if (((PlayerCenteredSystem::Manager::getInstance()::mgr & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&PlayerCenteredSystem::Manager::getInstance()::mgr), iVar7 != 0)
       ) {
                    /* try { // try from 006de3ec to 006de3f7 has its CatchHandler @ 006de428 */
      PlayerCenteredSystem::Manager::Manager
                ((Manager *)PlayerCenteredSystem::Manager::getInstance()::mgr);
      __cxa_atexit(PlayerCenteredSystem::Manager::~Manager,
                   PlayerCenteredSystem::Manager::getInstance()::mgr,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&PlayerCenteredSystem::Manager::getInstance()::mgr);
    }
    pIVar13 = (ICommandBuffer *)(**(code **)(**(long **)(in_x0 + 0x170) + 0x138))();
    PlayerCenteredSystem::Manager::updateAll
              ((Manager *)PlayerCenteredSystem::Manager::getInstance()::mgr,pIVar13,
               (CameraInfo *)&local_1200);
  }
  (**(code **)(*plVar11 + 0x28))(plVar11,*(undefined8 *)(in_x0 + 0x170));
  Renderer::initRendering
            (*(Renderer **)(lVar8 + 0xb8),(IDisplay *)plVar11,*(char *)(in_x0 + 0x1c0) == '\0');
  lVar14 = Renderer::getSharedRenderArgs();
  plVar18 = *(long **)(*(long *)(in_x0 + 0x1f8) + (ulong)*(uint *)(in_x0 + 0x210) * 8);
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x28))(plVar18,lVar14);
  }
  TextureOverlayRenderer::allocateRenderOverlays
            (*(TextureOverlayRenderer **)(lVar8 + 0x100),*(IRenderDevice **)(in_x0 + 0x170));
  TextureOverlayRenderer::renderRenderOverlays
            (*(TextureOverlayRenderer **)(lVar8 + 0x100),*(IRenderDevice **)(in_x0 + 0x170),
             *(Renderer **)(lVar8 + 0xb8));
  if (*(int *)(in_x0 + 0x1ec) != 0) {
    uStack_1f8 = 0x3f8000003f800000;
    local_200 = 0x3f8000003f800000;
    FUN_006de464(&local_1200);
    pfVar15 = (float *)Renderer::getDeferredDebugRenderer();
    DeferredDebugRenderer::addText(0.85,0.875,0.02,pfVar15,(char *)&local_200);
  }
  Renderer::renderMainScene
            (*(Renderer **)(lVar8 + 0xb8),(IDisplay *)plVar11,*(char *)(in_x0 + 0x1c0) == '\0');
  Renderer::getDeferredDebugRenderer();
  DeferredDebugRenderer::reset();
  ScriptSystemManager::getInstance();
  ScriptSystemManager::getCurrentScriptSystem();
  LuauScriptSystem::reclaim();
  if (((OverlayRenderManager::getInstance()::obj & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(&OverlayRenderManager::getInstance()::obj), iVar7 != 0)) {
                    /* try { // try from 006de35c to 006de367 has its CatchHandler @ 006de43c */
    OverlayRenderManager::OverlayRenderManager
              ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj);
    __cxa_atexit(OverlayRenderManager::~OverlayRenderManager,
                 OverlayRenderManager::getInstance()::obj,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&OverlayRenderManager::getInstance()::obj);
  }
  uVar1 = (int)(fVar23 * (float)(uVar9 & 0xffffffff)) + 7U & 0xfffffff8;
  uVar2 = (int)(fVar25 * (float)(uVar10 & 0xffffffff)) + 7U & 0xfffffff8;
  OverlayRenderManager::beginOverlay
            ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj,uVar1,uVar2,
             *(IRenderDevice **)(in_x0 + 0x170),(IDisplay *)plVar11);
  if (NoteNode::s_isRenderActive != '\0') {
    RawTransformGroup::updateWorldTransformation();
    uVar24 = *(undefined4 *)(lVar12 + 0xe8);
    uVar26 = *(undefined4 *)(lVar12 + 0xec);
    uVar27 = *(undefined4 *)(lVar12 + 0xf0);
    uVar16 = Renderer::getFrustum();
    uVar6 = SimpleCullingStructure::getEntities
                      (uVar24,uVar26,uVar27,0x107dba8,uVar16,&local_1200,0x100);
    if (uVar6 != 0) {
      uVar9 = (ulong)uVar6;
      plVar18 = &local_1200;
      do {
        if ((*(byte *)(*plVar18 + 0x17) >> 3 & 1) != 0) {
          NoteNode::render();
        }
        plVar18 = plVar18 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  DebugMarkerManager::getInstance();
  DebugMarkerManager::render();
  uStack_1f8 = uStack_1f8 & 0xff00000000000000;
  local_1e8 = 0;
  local_1e2 = 0;
  local_1e4 = 0;
  local_1d8 = 0;
  local_1d2 = 0;
  local_1d4 = 0;
  local_1c8 = 0;
  local_1c2 = 0;
  local_1c4 = 0;
  local_1b8 = 0;
  local_1b2 = 0;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a2 = 0;
  local_1a4 = 0;
  local_198 = 0;
  local_192 = 0;
  local_194 = 0;
  local_188 = 0;
  local_182 = 0;
  local_184 = 0;
  local_178 = 0;
  local_172 = 0;
  local_174 = 0;
  local_168 = 0;
  local_162 = 0;
  local_164 = 0;
  local_158 = 0;
  local_152 = 0;
  local_154 = 0;
  local_148 = 0;
  local_142 = 0;
  local_144 = 0;
  local_138 = 0;
  local_132 = 0;
  local_134 = 0;
  local_128 = 0;
  local_122 = 0;
  local_124 = 0;
  local_118 = 0;
  local_112 = 0;
  local_114 = 0;
  local_108 = 0;
  local_102 = 0;
  local_104 = 0;
  local_f8 = 0;
  local_f2 = 0;
  local_f4 = 0;
  local_e8 = 0;
  local_e2 = 0;
  local_e4 = 0;
  local_d8 = 0;
  local_d2 = 0;
  local_d4 = 0;
  local_c8 = 0;
  local_c2 = 0;
  local_c4 = 0;
  local_b8 = 0;
  local_b2 = 0;
  local_b4 = 0;
  local_a8 = 0;
  local_a2 = 0;
  local_a4 = 0;
  ScriptSystemManager::getInstance();
  this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  LuauScriptSystem::invokeScriptMethod(this,"draw",(MethodInvocation *)&local_200,0,0,(void *)0x0);
  EngineScriptBinding::cleanupTempResources();
  FontOverlayRenderer::setAlignment(*(FontOverlayRenderer **)(lVar8 + 0xf8),0);
  FontOverlayRenderer::setWrapWidth(*(FontOverlayRenderer **)(lVar8 + 0xf8),0.0,false);
  FontOverlayRenderer::setWidthScale(*(FontOverlayRenderer **)(lVar8 + 0xf8),1.0);
  FontOverlayRenderer::setLineHeightScale(*(FontOverlayRenderer **)(lVar8 + 0xf8),1.1);
  FontOverlayRenderer::setBold(*(FontOverlayRenderer **)(lVar8 + 0xf8),false);
  FontOverlayRenderer::setMaskTexture
            (*(FontOverlayRenderer **)(lVar8 + 0xf8),(Texture *)0x0,(ISamplerObject *)0x0,false,0.0,
             0.0,0.0,0.0);
  TextureOverlayRenderer::setMaskTexture
            (*(TextureOverlayRenderer **)(lVar8 + 0x100),(Texture *)0x0,(ISamplerObject *)0x0,false,
             0.0,0.0,0.0,0.0);
  Renderer::updateStats();
  if ((*(byte *)(in_x0 + 200) | *(byte *)(in_x0 + 0xca)) == 0) {
    this_00 = (StatsOverlayManager *)StatsOverlayManager::getInstance();
    pSVar20 = (SharedRenderArgs *)Renderer::getSharedRenderArgs();
    StatsOverlayManager::render(this_00,pSVar20);
    cVar4 = *(char *)(in_x0 + 0x1cc);
  }
  else {
    pSVar20 = *(SharedRenderArgs **)(lVar8 + 0x100);
    Renderer::getSharedRenderArgs();
    TextureOverlayRenderer::new2DLayer(pSVar20);
    pSVar20 = *(SharedRenderArgs **)(lVar8 + 0xf8);
    Renderer::getSharedRenderArgs();
    FontOverlayRenderer::render(pSVar20);
    Console::render((Console *)(in_x0 + 0x10),*(FontOverlayRenderer **)(lVar8 + 0xf8));
    cVar4 = *(char *)(in_x0 + 0x1cc);
  }
  if (cVar4 != '\0') {
    IVar3 = *(INFO_RENDERING *)(*(long *)(lVar8 + 0xb8) + 0xf00);
    if (IVar3 != 0) {
      pcVar17 = (char *)RenderArgs::toString(IVar3);
      FontOverlayRenderer::setColor(*(FontOverlayRenderer **)(lVar8 + 0xf8),1.0,1.0,1.0,1.0);
      FontOverlayRenderer::xyprintf
                (*(FontOverlayRenderer **)(lVar8 + 0xf8),0.45,0.95,0.04,0,pcVar17);
    }
    fVar23 = 0.1;
    if (15.0 <= *(float *)(in_x0 + 0x1c4)) {
      fVar25 = 1.0;
    }
    else {
      fVar25 = fVar23;
      fVar23 = 1.0;
    }
    FontOverlayRenderer::setColor(*(FontOverlayRenderer **)(lVar8 + 0xf8),fVar23,fVar25,0.1,1.0);
    FUN_006dcb40(&local_1200,0x1000,"%4d FPS",(int)(*(float *)(in_x0 + 0x1c4) + 0.5));
    FontOverlayRenderer::xyprintf
              (*(FontOverlayRenderer **)(lVar8 + 0xf8),0.7125,0.924,0.04,0,(char *)&local_1200);
  }
  plVar18 = *(long **)(*(long *)(in_x0 + 0x1f8) + (ulong)*(uint *)(in_x0 + 0x210) * 8);
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x30))((float)(ulong)uVar2 / (float)(ulong)uVar1,plVar18,lVar14);
  }
  pSVar20 = *(SharedRenderArgs **)(lVar8 + 0x100);
  Renderer::getSharedRenderArgs();
  TextureOverlayRenderer::render(pSVar20);
  pSVar20 = *(SharedRenderArgs **)(lVar8 + 0xf8);
  Renderer::getSharedRenderArgs();
  FontOverlayRenderer::render(pSVar20);
  if (((OverlayRenderManager::getInstance()::obj & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(&OverlayRenderManager::getInstance()::obj), iVar7 != 0)) {
                    /* try { // try from 006de3a4 to 006de3af has its CatchHandler @ 006de438 */
    OverlayRenderManager::OverlayRenderManager
              ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj);
    __cxa_atexit(OverlayRenderManager::~OverlayRenderManager,
                 OverlayRenderManager::getInstance()::obj,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&OverlayRenderManager::getInstance()::obj);
  }
  OverlayRenderManager::endOverlay
            ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj,
             *(IRenderDevice **)(in_x0 + 0x170));
  Renderer::renderFinalComposite(*(Renderer **)(lVar8 + 0xb8),(IDisplay *)plVar11);
  (**(code **)(*plVar11 + 0x30))(plVar11,*(undefined8 *)(in_x0 + 0x170));
  if (*(long **)(lVar14 + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(lVar14 + 0x138) + 8))();
  }
  *(undefined8 *)(lVar14 + 0x138) = 0;
  if (*(long *)(lVar5 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


