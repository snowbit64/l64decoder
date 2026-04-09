// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addOcclusionRegion
// Entry Point: 006f8df0
// Size: 408 bytes
// Signature: undefined __thiscall addOcclusionRegion(AdsBrockerManager * this, uint param_1, float param_2, float param_3, float param_4, float param_5)


/* AdsBrockerManager::addOcclusionRegion(unsigned int, float, float, float, float) */

ulong __thiscall
AdsBrockerManager::addOcclusionRegion
          (AdsBrockerManager *this,uint param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  Logger *pLVar4;
  ulong uVar5;
  
  Mutex::enterCriticalSection();
  if (param_1 < 0x20) {
    uVar1 = *(uint *)(this + (ulong)param_1 * 4 + 0x18);
    uVar5 = (ulong)uVar1;
    if (uVar1 < 4) {
      lVar2 = uVar5 * 0x10 + (ulong)param_1 * 0x40;
      *(uint *)(this + (ulong)param_1 * 4 + 0x18) = uVar1 + 1;
      *(float *)(this + lVar2 + 0xb8) = param_2;
      *(float *)(this + lVar2 + 0xbc) = param_4;
      *(float *)(this + lVar2 + 0xc0) = param_3;
      *(float *)(this + lVar2 + 0xc4) = param_5;
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 006f8f48 to 006f8f4f has its CatchHandler @ 006f8f98 */
        pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 006f8f54 to 006f8f57 has its CatchHandler @ 006f8f88 */
        Logger::Logger(pLVar4);
        LogManager::getInstance()::singletonLogManager = pLVar4;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar5 = 4;
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "[gads] Warning: Occlusion region group overflow. Max %d regions per group.\n"
                        ,4);
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006f8ef8 to 006f8eff has its CatchHandler @ 006f8fac */
      pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 006f8f04 to 006f8f07 has its CatchHandler @ 006f8f9c */
      Logger::Logger(pLVar4);
      LogManager::getInstance()::singletonLogManager = pLVar4;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "[gads] Warning: Invalid occlusion region group %d. Valid groups: 0 to %d.\n",
                      (ulong)param_1,3);
    uVar5 = 4;
  }
  Mutex::leaveCriticalSection();
  return uVar5;
}


