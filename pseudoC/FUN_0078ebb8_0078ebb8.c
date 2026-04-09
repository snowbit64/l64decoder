// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078ebb8
// Entry Point: 0078ebb8
// Size: 308 bytes
// Signature: undefined FUN_0078ebb8(void)


void FUN_0078ebb8(void)

{
  int iVar1;
  long lVar2;
  Logger *this;
  SharedRenderArgs *pSVar3;
  
  if (((OverlayRenderManager::getInstance()::obj & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&OverlayRenderManager::getInstance()::obj), iVar1 != 0)) {
                    /* try { // try from 0078ec64 to 0078ec6f has its CatchHandler @ 0078ed0c */
    OverlayRenderManager::OverlayRenderManager
              ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj);
    __cxa_atexit(OverlayRenderManager::~OverlayRenderManager,
                 OverlayRenderManager::getInstance()::obj,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&OverlayRenderManager::getInstance()::obj);
  }
  if (OverlayRenderManager::getInstance()::obj[16448] != '\0') {
    lVar2 = EngineManager::getInstance();
    pSVar3 = *(SharedRenderArgs **)(lVar2 + 0x100);
    Renderer::getSharedRenderArgs();
    TextureOverlayRenderer::new2DLayer(pSVar3);
    pSVar3 = *(SharedRenderArgs **)(lVar2 + 0xf8);
    Renderer::getSharedRenderArgs();
    FontOverlayRenderer::render(pSVar3);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0078ecac to 0078ecb3 has its CatchHandler @ 0078ecfc */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 0078ecb8 to 0078ecbb has its CatchHandler @ 0078ecec */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error: new2DLayer is only allowed in \'draw\' callbacks.\n");
  return;
}


