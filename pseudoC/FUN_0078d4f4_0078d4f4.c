// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078d4f4
// Entry Point: 0078d4f4
// Size: 184 bytes
// Signature: undefined FUN_0078d4f4(void)


void FUN_0078d4f4(uint *param_1)

{
  uint uVar1;
  int iVar2;
  Logger *this;
  
  uVar1 = *param_1;
  if ((uVar1 < 0x10) && ((&EngineScriptBinding::s_intervalTimers)[(ulong)uVar1 * 0x10] != '\0')) {
    (&EngineScriptBinding::s_intervalTimers)[(ulong)uVar1 * 0x10] = '\0';
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0078d56c to 0078d573 has its CatchHandler @ 0078d5bc */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 0078d578 to 0078d57b has its CatchHandler @ 0078d5ac */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Bad interval timer index %d\n",(ulong)uVar1);
  }
  return;
}


