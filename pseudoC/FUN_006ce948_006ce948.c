// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ce948
// Entry Point: 006ce948
// Size: 232 bytes
// Signature: undefined FUN_006ce948(void)


void FUN_006ce948(long *param_1)

{
  char *__nptr;
  uint uVar1;
  int iVar2;
  long lVar3;
  Logger *this;
  
  lVar3 = *param_1;
  if (1 < (ulong)((param_1[1] - lVar3 >> 3) * -0x5555555555555555)) {
    __nptr = (char *)(lVar3 + 0x19);
    if ((*(byte *)(lVar3 + 0x18) & 1) != 0) {
      __nptr = *(char **)(lVar3 + 0x28);
    }
    uVar1 = atoi(__nptr);
    lVar3 = EngineManager::getInstance();
    HardwareScalability::setSSAOQuality((HardwareScalability *)(lVar3 + 0x198),uVar1);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 006ce9f0 to 006ce9f7 has its CatchHandler @ 006cea40 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 006ce9fc to 006ce9ff has its CatchHandler @ 006cea30 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  lVar3 = EngineManager::getInstance();
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"num samples: %u\n",
                    (ulong)*(uint *)(lVar3 + 0x240));
  return;
}


