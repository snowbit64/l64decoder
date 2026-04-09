// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cda4c
// Entry Point: 006cda4c
// Size: 136 bytes
// Signature: undefined FUN_006cda4c(void)


void FUN_006cda4c(void)

{
  int iVar1;
  Logger *this;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 006cda94 to 006cda9b has its CatchHandler @ 006cdae4 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 006cdaa0 to 006cdaa3 has its CatchHandler @ 006cdad4 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "DLSS is not available\n");
  return;
}


