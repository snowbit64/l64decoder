// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: print
// Entry Point: 008b0e28
// Size: 348 bytes
// Signature: undefined print(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SteadyLoopRuntimeSettings::print() const */

void SteadyLoopRuntimeSettings::print(void)

{
  long lVar1;
  int iVar2;
  long *in_x0;
  Logger *pLVar3;
  ulong uVar4;
  long lVar5;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008b0ef8 to 008b0eff has its CatchHandler @ 008b0fa8 */
    pLVar3 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b0f04 to 008b0f07 has its CatchHandler @ 008b0f98 */
    Logger::Logger(pLVar3);
    LogManager::getInstance()::singletonLogManager = pLVar3;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "==== SteadyLoopRuntimeSettings ====\n");
  lVar5 = *in_x0;
  lVar1 = in_x0[1];
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008b0f48 to 008b0f4f has its CatchHandler @ 008b0f94 */
    pLVar3 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b0f54 to 008b0f57 has its CatchHandler @ 008b0f84 */
    Logger::Logger(pLVar3);
    LogManager::getInstance()::singletonLogManager = pLVar3;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  uVar4 = (lVar1 - lVar5 >> 3) * 0x38e38e39;
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "Number of steady loops=%d\n",uVar4 & 0xffffffff);
  if ((int)uVar4 != 0) {
    lVar5 = 0;
    do {
      LoopData::print();
      lVar5 = lVar5 + 0x48;
    } while (((uVar4 & 0xffffffff) + (uVar4 & 0xffffffff) * 8) * 8 - lVar5 != 0);
  }
  return;
}


