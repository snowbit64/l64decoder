// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd3c0
// Entry Point: 007bd3c0
// Size: 136 bytes
// Signature: undefined FUN_007bd3c0(void)


void FUN_007bd3c0(void)

{
  int iVar1;
  Logger *this;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 007bd408 to 007bd40f has its CatchHandler @ 007bd458 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 007bd414 to 007bd417 has its CatchHandler @ 007bd448 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "Warning: This functionality is only available in Developer Builds\n");
  return;
}


