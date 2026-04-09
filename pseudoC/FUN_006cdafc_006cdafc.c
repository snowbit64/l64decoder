// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cdafc
// Entry Point: 006cdafc
// Size: 136 bytes
// Signature: undefined FUN_006cdafc(void)


void FUN_006cdafc(void)

{
  int iVar1;
  Logger *this;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 006cdb44 to 006cdb4b has its CatchHandler @ 006cdb94 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 006cdb50 to 006cdb53 has its CatchHandler @ 006cdb84 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "FSR 1.0 is not available\n");
  return;
}


