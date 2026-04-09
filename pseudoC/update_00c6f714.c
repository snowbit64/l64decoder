// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00c6f714
// Size: 172 bytes
// Signature: undefined __cdecl update(float param_1)


/* AndroidSysUtil::update(float) */

void AndroidSysUtil::update(float param_1)

{
  int iVar1;
  Logger *this;
  
  if (500.0 < param_1) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c6f780 to 00c6f787 has its CatchHandler @ 00c6f7d0 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 00c6f78c to 00c6f78f has its CatchHandler @ 00c6f7c0 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "ANR danger: time between polling events %ums!\n",(ulong)(uint)(int)param_1);
  }
  processEventQueue();
  return;
}


