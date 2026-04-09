// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cc548
// Entry Point: 006cc548
// Size: 284 bytes
// Signature: undefined FUN_006cc548(void)


void FUN_006cc548(long *param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[1] - lVar3 >> 3) * -0x5555555555555555) < 2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 006cc62c to 006cc637 has its CatchHandler @ 006cc664 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    EngineManager::getInstance();
    lVar3 = Renderer::getPostFxParams();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      (double)*(float *)(lVar3 + 0x2b4),"Cloud precipitation coeff. %.1f [0 1]\n");
  }
  else {
    pcVar1 = (char *)(lVar3 + 0x19);
    if ((*(byte *)(lVar3 + 0x18) & 1) != 0) {
      pcVar1 = *(char **)(lVar3 + 0x28);
    }
    EngineManager::getInstance();
    lVar3 = Renderer::getPostFxParams();
    StringUtil::atof(pcVar1,(float *)(lVar3 + 0x2b4));
    EngineManager::getInstance();
    lVar3 = Renderer::getPostFxParams();
    if (*(float *)(lVar3 + 0x2b4) <= 1.0) {
      if (*(float *)(lVar3 + 0x2b4) < 0.0) {
        *(undefined4 *)(lVar3 + 0x2b4) = 0;
      }
    }
    else {
      *(undefined4 *)(lVar3 + 0x2b4) = 0x3f800000;
    }
  }
  return;
}


