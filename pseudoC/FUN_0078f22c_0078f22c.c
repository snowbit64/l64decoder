// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078f22c
// Entry Point: 0078f22c
// Size: 136 bytes
// Signature: undefined FUN_0078f22c(void)


void FUN_0078f22c(void)

{
  int iVar1;
  Logger *this;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0078f274 to 0078f27b has its CatchHandler @ 0078f2c4 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 0078f280 to 0078f283 has its CatchHandler @ 0078f2b4 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "invoked openNativeHelpMenu!\n");
  return;
}


