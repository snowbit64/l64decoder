// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ce0c0
// Entry Point: 006ce0c0
// Size: 276 bytes
// Signature: undefined FUN_006ce0c0(void)


void FUN_006ce0c0(long *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  Logger *this;
  float local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar4 = *param_1;
  if ((ulong)((param_1[1] - lVar4 >> 3) * -0x5555555555555555) < 2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006ce190 to 006ce197 has its CatchHandler @ 006ce1e4 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 006ce19c to 006ce19f has its CatchHandler @ 006ce1d4 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    lVar4 = EngineManager::getInstance();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      (double)*(float *)(lVar4 + 0x230),&DAT_0050f343);
  }
  else {
    local_2c = 0.0;
    pcVar1 = (char *)(lVar4 + 0x19);
    if ((*(byte *)(lVar4 + 0x18) & 1) != 0) {
      pcVar1 = *(char **)(lVar4 + 0x28);
    }
    StringUtil::atof(pcVar1,&local_2c);
    lVar4 = EngineManager::getInstance();
    HardwareScalability::setSharpness((HardwareScalability *)(lVar4 + 0x198),local_2c);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


