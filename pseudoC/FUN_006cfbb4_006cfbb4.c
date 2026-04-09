// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cfbb4
// Entry Point: 006cfbb4
// Size: 324 bytes
// Signature: undefined FUN_006cfbb4(void)


void FUN_006cfbb4(long *param_1)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  DeferredDebugRenderer *pDVar5;
  byte *pbVar6;
  ulong uVar7;
  Logger *this;
  
  if (1 < (ulong)((param_1[1] - *param_1 >> 3) * -0x5555555555555555)) {
    EngineManager::getInstance();
    pDVar5 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
    pbVar6 = (byte *)(*param_1 + 0x18);
    bVar2 = *pbVar6;
    uVar7 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar7 = *(ulong *)(*param_1 + 0x20);
    }
    if (uVar7 == 4) {
                    /* try { // try from 006cfc14 to 006cfc2b has its CatchHandler @ 006cfd20 */
      iVar4 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)pbVar6,0,(char *)0xffffffffffffffff,0x4ec5fc);
      bVar3 = iVar4 == 0;
    }
    else {
      bVar3 = false;
    }
    DeferredDebugRenderer::setCategory(pDVar5,0x200,bVar3);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 006cfcb8 to 006cfcbf has its CatchHandler @ 006cfd08 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 006cfcc4 to 006cfcc7 has its CatchHandler @ 006cfcf8 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  EngineManager::getInstance();
  pDVar5 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
  uVar7 = DeferredDebugRenderer::isCategoryEnabled(pDVar5,0x200);
  pcVar1 = "enabled";
  if ((uVar7 & 1) == 0) {
    pcVar1 = "disabled";
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "Occluder debug rendering is %s\n",pcVar1);
  return;
}


