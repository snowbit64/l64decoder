// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cc318
// Entry Point: 006cc318
// Size: 240 bytes
// Signature: undefined FUN_006cc318(void)


void FUN_006cc318(long *param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  Logger *this;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[1] - lVar3 >> 3) * -0x5555555555555555) < 2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 006cc3c8 to 006cc3cf has its CatchHandler @ 006cc418 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 006cc3d4 to 006cc3d7 has its CatchHandler @ 006cc408 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    EngineManager::getInstance();
    lVar3 = Renderer::getPostFxParams();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      (double)*(float *)(lVar3 + 0x270),"Cloud erosion scaling %.6f\n");
  }
  else {
    pcVar1 = (char *)(lVar3 + 0x19);
    if ((*(byte *)(lVar3 + 0x18) & 1) != 0) {
      pcVar1 = *(char **)(lVar3 + 0x28);
    }
    EngineManager::getInstance();
    lVar3 = Renderer::getPostFxParams();
    StringUtil::atof(pcVar1,(float *)(lVar3 + 0x270));
  }
  return;
}


