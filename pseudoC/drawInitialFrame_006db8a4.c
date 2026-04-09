// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drawInitialFrame
// Entry Point: 006db8a4
// Size: 1124 bytes
// Signature: undefined __thiscall drawInitialFrame(EngineApplication * this, IRenderWindow * param_1, float param_2, bool param_3, IDisplay * param_4, bool param_5, bool param_6)


/* EngineApplication::drawInitialFrame(IRenderWindow*, float, bool, IDisplay*, bool, bool) */

undefined8 __thiscall
EngineApplication::drawInitialFrame
          (EngineApplication *this,IRenderWindow *param_1,float param_2,bool param_3,
          IDisplay *param_4,bool param_5,bool param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  LanguageStringManager *pLVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  uint uVar12;
  FontOverlayRenderer *this_00;
  SharedRenderArgs *pSVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  
  lVar3 = Watch::getCurrentTicks();
  if ((param_3) ||
     (dVar14 = (double)Watch::convertTicksToMs(lVar3 - *(long *)(this + 0x268)), 400.0 <= dVar14)) {
    lVar11 = *(long *)param_4;
    *(long *)(this + 0x268) = lVar3;
    (**(code **)(lVar11 + 0x28))(param_4,*(undefined8 *)(this + 0x170));
    EngineManager::getInstance();
    uVar4 = Renderer::getSharedRenderArgs();
    lVar3 = EngineManager::getInstance();
    this_00 = *(FontOverlayRenderer **)(lVar3 + 0xf8);
    lVar3 = EngineManager::getInstance();
    pSVar13 = *(SharedRenderArgs **)(lVar3 + 0x100);
    uVar5 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
    fVar15 = *(float *)(this + 0x198);
    uVar6 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
    fVar16 = *(float *)(this + 0x198);
    if (((OverlayRenderManager::getInstance()::obj & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&OverlayRenderManager::getInstance()::obj), iVar1 != 0)) {
                    /* try { // try from 006dbc88 to 006dbc93 has its CatchHandler @ 006dbd0c */
      OverlayRenderManager::OverlayRenderManager
                ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj);
      __cxa_atexit(OverlayRenderManager::~OverlayRenderManager,
                   OverlayRenderManager::getInstance()::obj,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&OverlayRenderManager::getInstance()::obj);
    }
    OverlayRenderManager::beginOverlay
              ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj,
               (int)(fVar15 * (float)(uVar5 & 0xffffffff)) + 7U & 0xfffffff8,
               (int)(fVar16 * (float)(uVar6 & 0xffffffff)) + 7U & 0xfffffff8,
               *(IRenderDevice **)(this + 0x170),param_4);
    plVar7 = *(long **)(this + 600);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,uVar4);
    }
    (**(code **)(**(long **)(this + 0x270) + 0x10))(*(long **)(this + 0x270),uVar4);
    fVar16 = (float)NEON_fmin(*(float *)(this + 0x28c) * param_2,0x3f800000);
    fVar15 = 0.0;
    if (0.0 <= *(float *)(this + 0x28c) * param_2) {
      fVar15 = fVar16;
    }
    Overlay::setPosition
              (*(Overlay **)(this + 0x278),*(float *)(this + 0x280),*(float *)(this + 0x284),fVar15,
               *(float *)(this + 0x288));
    (**(code **)(**(long **)(this + 0x278) + 0x10))(*(long **)(this + 0x278),uVar4);
    if ((param_5) || (param_6)) {
      FontOverlayRenderer::setBold(this_00,true);
      FontOverlayRenderer::setAlignment(this_00,1);
      pLVar8 = (LanguageStringManager *)LanguageStringManager::getInstance();
      pcVar9 = (char *)LanguageStringManager::getString(pLVar8,0x3f);
      pcVar10 = "Connecting to debugger...";
      if (!param_5) {
        pcVar10 = pcVar9;
      }
      if (this[0x1e8] != (EngineApplication)0x0) {
        pLVar8 = (LanguageStringManager *)LanguageStringManager::getInstance();
        pcVar10 = (char *)LanguageStringManager::getString(pLVar8,0x42);
      }
      FontOverlayRenderer::setColor(this_00,0.0,0.0,0.0,0.75);
      FontOverlayRenderer::xyprintf(this_00,0.5,0.4975,0.06,0,pcVar10);
      FontOverlayRenderer::setColor(this_00,1.0,1.0,1.0,1.0);
      FontOverlayRenderer::xyprintf(this_00,0.5,0.5,0.06,0,pcVar10);
      FontOverlayRenderer::setAlignment(this_00,0);
      FontOverlayRenderer::setBold(this_00,false);
    }
    TextureOverlayRenderer::render(pSVar13);
    renderCopyrightWatermark();
    FontOverlayRenderer::render((SharedRenderArgs *)this_00);
    if (((OverlayRenderManager::getInstance()::obj & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&OverlayRenderManager::getInstance()::obj), iVar1 != 0)) {
                    /* try { // try from 006dbcd0 to 006dbcdb has its CatchHandler @ 006dbd08 */
      OverlayRenderManager::OverlayRenderManager
                ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj);
      __cxa_atexit(OverlayRenderManager::~OverlayRenderManager,
                   OverlayRenderManager::getInstance()::obj,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&OverlayRenderManager::getInstance()::obj);
    }
    OverlayRenderManager::endOverlay
              ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj,
               *(IRenderDevice **)(this + 0x170));
    iVar1 = (**(code **)(*(long *)param_4 + 0x38))(param_4);
    if (iVar1 != 0) {
      uVar12 = 0;
      do {
        if (((OverlayRenderManager::getInstance()::obj & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&OverlayRenderManager::getInstance()::obj), iVar1 != 0)) {
                    /* try { // try from 006dbc08 to 006dbc0f has its CatchHandler @ 006dbd10 */
          OverlayRenderManager::OverlayRenderManager
                    ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj);
          __cxa_atexit(OverlayRenderManager::~OverlayRenderManager,
                       OverlayRenderManager::getInstance()::obj,&PTR_LOOP_00fd8de0);
          __cxa_guard_release(&OverlayRenderManager::getInstance()::obj);
        }
        OverlayRenderManager::compositeOverlayToDisplayPlane
                  ((IRenderDevice *)OverlayRenderManager::getInstance()::obj,
                   *(IDisplay **)(this + 0x170),(uint)param_4,300.0,uVar12,(ITextureObject *)0x0,
                   (ISamplerObject *)0x0,(float *)0x0);
        (**(code **)(*(long *)param_4 + 0xb0))(param_4,*(undefined8 *)(this + 0x170),uVar12);
        uVar12 = uVar12 + 1;
        uVar2 = (**(code **)(*(long *)param_4 + 0x38))(param_4);
      } while (uVar12 < uVar2);
    }
    (**(code **)(*(long *)param_4 + 0x30))(param_4,*(undefined8 *)(this + 0x170));
    (**(code **)(**(long **)(this + 0x178) + 0x90))();
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


