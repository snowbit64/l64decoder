// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cc200
// Entry Point: 006cc200
// Size: 240 bytes
// Signature: undefined FUN_006cc200(void)


void FUN_006cc200(long *param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  Logger *this;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[1] - lVar3 >> 3) * -0x5555555555555555) < 2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 006cc2b0 to 006cc2b7 has its CatchHandler @ 006cc300 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 006cc2bc to 006cc2bf has its CatchHandler @ 006cc2f0 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    EngineManager::getInstance();
    lVar3 = Renderer::getPostFxParams();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      (double)*(float *)(lVar3 + 0x26c),"Cloud-Base Shape Scaling %.6f\n");
  }
  else {
    pcVar1 = (char *)(lVar3 + 0x19);
    if ((*(byte *)(lVar3 + 0x18) & 1) != 0) {
      pcVar1 = *(char **)(lVar3 + 0x28);
    }
    EngineManager::getInstance();
    lVar3 = Renderer::getPostFxParams();
    StringUtil::atof(pcVar1,(float *)(lVar3 + 0x26c));
  }
  return;
}


