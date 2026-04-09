// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e7b90
// Entry Point: 006e7b90
// Size: 136 bytes
// Signature: undefined FUN_006e7b90(void)


void FUN_006e7b90(void)

{
  int iVar1;
  Logger *this;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 006e7bd8 to 006e7bdf has its CatchHandler @ 006e7c28 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 006e7be4 to 006e7be7 has its CatchHandler @ 006e7c18 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "This platform does not support input fuzzing\n");
  return;
}


