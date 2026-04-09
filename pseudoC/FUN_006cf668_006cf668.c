// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cf668
// Entry Point: 006cf668
// Size: 324 bytes
// Signature: undefined FUN_006cf668(void)


void FUN_006cf668(long *param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  Logger *this;
  float fVar4;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[1] - lVar3 >> 3) * -0x5555555555555555) < 3) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 006cf76c to 006cf773 has its CatchHandler @ 006cf7bc */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 006cf778 to 006cf77b has its CatchHandler @ 006cf7ac */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    EngineManager::getInstance();
    lVar3 = Renderer::getPostFxParams();
    fVar4 = *(float *)(lVar3 + 8);
    EngineManager::getInstance();
    lVar3 = Renderer::getPostFxParams();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar4,
                      (double)*(float *)(lVar3 + 0xc),"Sets Exposure Range [%.3f, %.3f]\n");
  }
  else {
    pcVar1 = (char *)(lVar3 + 0x19);
    if ((*(byte *)(lVar3 + 0x18) & 1) != 0) {
      pcVar1 = *(char **)(lVar3 + 0x28);
    }
    EngineManager::getInstance();
    lVar3 = Renderer::getPostFxParams();
    StringUtil::atof(pcVar1,(float *)(lVar3 + 8));
    lVar3 = *param_1;
    pcVar1 = (char *)(lVar3 + 0x31);
    if ((*(byte *)(lVar3 + 0x30) & 1) != 0) {
      pcVar1 = *(char **)(lVar3 + 0x40);
    }
    EngineManager::getInstance();
    lVar3 = Renderer::getPostFxParams();
    StringUtil::atof(pcVar1,(float *)(lVar3 + 0xc));
  }
  return;
}


