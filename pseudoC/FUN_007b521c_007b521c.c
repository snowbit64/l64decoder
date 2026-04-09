// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b521c
// Entry Point: 007b521c
// Size: 392 bytes
// Signature: undefined FUN_007b521c(void)


void FUN_007b521c(float *param_1)

{
  int iVar1;
  long lVar2;
  SharedRenderArgs *pSVar3;
  Logger *this;
  TextureOverlayRenderer *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (((OverlayRenderManager::getInstance()::obj & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&OverlayRenderManager::getInstance()::obj), iVar1 != 0)) {
                    /* try { // try from 007b531c to 007b5327 has its CatchHandler @ 007b53c4 */
    OverlayRenderManager::OverlayRenderManager
              ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj);
    __cxa_atexit(OverlayRenderManager::~OverlayRenderManager,
                 OverlayRenderManager::getInstance()::obj,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&OverlayRenderManager::getInstance()::obj);
  }
  if (OverlayRenderManager::getInstance()::obj[16448] != '\0') {
    lVar2 = EngineManager::getInstance();
    fVar4 = *param_1;
    fVar5 = param_1[4];
    fVar6 = param_1[8];
    this_00 = *(TextureOverlayRenderer **)(lVar2 + 0x100);
    fVar7 = param_1[0xc];
    fVar8 = param_1[0x10];
    fVar9 = param_1[0x14];
    fVar10 = param_1[0x18];
    EngineManager::getInstance();
    pSVar3 = (SharedRenderArgs *)Renderer::getSharedRenderArgs();
    TextureOverlayRenderer::enqueueClearArea
              (this_00,fVar4,fVar5,fVar6,fVar7,fVar8,fVar9,fVar10,pSVar3);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 007b5364 to 007b536b has its CatchHandler @ 007b53b4 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 007b5370 to 007b5373 has its CatchHandler @ 007b53a4 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error: clearOverlayArea is only allowed in \'draw\' callbacks.\n");
  return;
}


