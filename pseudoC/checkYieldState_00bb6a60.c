// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkYieldState
// Entry Point: 00bb6a60
// Size: 192 bytes
// Signature: undefined checkYieldState(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LuauScriptSystem::checkYieldState() */

void LuauScriptSystem::checkYieldState(void)

{
  uint uVar1;
  int iVar2;
  long in_x0;
  Logger *this;
  
  if (*(char *)(in_x0 + 0x118) != '\0') {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00bb6ae0 to 00bb6ae7 has its CatchHandler @ 00bb6b30 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 00bb6aec to 00bb6aef has its CatchHandler @ 00bb6b20 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: LUA script system called while in yielded state.\n");
    DebugUtil::abort();
  }
  uVar1 = *(int *)(in_x0 + 0x120) + 1;
  *(uint *)(in_x0 + 0x120) = uVar1;
  if ((uVar1 & 0x3fff) != 0) {
    return;
  }
  checkForEmergencyGarbageCollection();
  return;
}


