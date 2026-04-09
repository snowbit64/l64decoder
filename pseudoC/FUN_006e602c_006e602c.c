// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e602c
// Entry Point: 006e602c
// Size: 172 bytes
// Signature: undefined FUN_006e602c(void)


void FUN_006e602c(uint *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  Logger *this;
  
  RenderDeviceManager::getInstance();
  plVar2 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  uVar3 = (**(code **)(*plVar2 + 0xb8))();
  if ((uVar3 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 006e6098 to 006e609f has its CatchHandler @ 006e60e8 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 006e60a4 to 006e60a7 has its CatchHandler @ 006e60d8 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "ERROR: Lua calls usleep while GPU is not in frame repeat mode\n");
  }
  ThreadUtil::usleep(*param_1);
  return;
}


