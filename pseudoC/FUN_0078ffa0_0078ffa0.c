// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078ffa0
// Entry Point: 0078ffa0
// Size: 136 bytes
// Signature: undefined FUN_0078ffa0(void)


void FUN_0078ffa0(void)

{
  int iVar1;
  Logger *this;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0078ffe8 to 0078ffef has its CatchHandler @ 00790038 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 0078fff4 to 0078fff7 has its CatchHandler @ 00790028 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "Warning: Lua trace is not compiled in\n");
  return;
}


