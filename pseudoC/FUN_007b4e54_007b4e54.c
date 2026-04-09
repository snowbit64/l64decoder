// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b4e54
// Entry Point: 007b4e54
// Size: 316 bytes
// Signature: undefined FUN_007b4e54(void)


void FUN_007b4e54(long *param_1,float *param_2)

{
  int iVar1;
  undefined8 uVar2;
  Logger *this;
  
  if (((OverlayRenderManager::getInstance()::obj & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&OverlayRenderManager::getInstance()::obj), iVar1 != 0)) {
                    /* try { // try from 007b4f08 to 007b4f13 has its CatchHandler @ 007b4fb0 */
    OverlayRenderManager::OverlayRenderManager
              ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj);
    __cxa_atexit(OverlayRenderManager::~OverlayRenderManager,
                 OverlayRenderManager::getInstance()::obj,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&OverlayRenderManager::getInstance()::obj);
  }
  if (OverlayRenderManager::getInstance()::obj[16448] != '\0') {
    Overlay::setPosition((Overlay *)param_1,*param_2,param_2[4],param_2[8],param_2[0xc]);
    EngineManager::getInstance();
    uVar2 = Renderer::getSharedRenderArgs();
                    /* WARNING: Could not recover jumptable at 0x007b4ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,uVar2);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 007b4f50 to 007b4f57 has its CatchHandler @ 007b4fa0 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 007b4f5c to 007b4f5f has its CatchHandler @ 007b4f90 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error: renderOverlay is only allowed in \'draw\' callbacks.\n");
  return;
}


