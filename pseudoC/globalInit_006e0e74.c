// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: globalInit
// Entry Point: 006e0e74
// Size: 196 bytes
// Signature: undefined globalInit(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* globalInit() */

uint globalInit(void)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  Logger *pLVar4;
  
  ThreadUtil::setCurrentThreadAsMainthread();
  Watch::setTimeZero();
  DebugUtil::init();
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 006e0efc to 006e0f03 has its CatchHandler @ 006e0f48 */
    pLVar4 = (Logger *)operator_new(0x38);
                    /* try { // try from 006e0f08 to 006e0f0b has its CatchHandler @ 006e0f38 */
    Logger::Logger(pLVar4);
    LogManager::getInstance()::singletonLogManager = pLVar4;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  pLVar4 = LogManager::getInstance()::singletonLogManager;
  puVar3 = (undefined8 *)operator_new(8);
  *puVar3 = &PTR__ILogSink_00fd9390;
  Logger::addLogSink(pLVar4,(ILogSink *)puVar3);
  uVar1 = AndroidSysUtil::init();
  if ((uVar1 & 1) != 0) {
    AndroidImeUtil::init();
  }
  return uVar1 & 1;
}


