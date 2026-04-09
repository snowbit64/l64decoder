// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ce1fc
// Entry Point: 006ce1fc
// Size: 252 bytes
// Signature: undefined FUN_006ce1fc(void)


void FUN_006ce1fc(long *param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  Logger *this;
  
  lVar4 = *param_1;
  if ((ulong)((param_1[1] - lVar4 >> 3) * -0x5555555555555555) < 2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006ce2b8 to 006ce2bf has its CatchHandler @ 006ce308 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 006ce2c4 to 006ce2c7 has its CatchHandler @ 006ce2f8 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    EngineManager::getInstance();
    uVar5 = HardwareScalability::getMSAA();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"MSAA %u\n",
                      uVar5 & 0xffffffff);
  }
  else {
    pcVar1 = (char *)(lVar4 + 0x19);
    if ((*(byte *)(lVar4 + 0x18) & 1) != 0) {
      pcVar1 = *(char **)(lVar4 + 0x28);
    }
    uVar2 = StringUtil::strtouint(pcVar1);
    lVar4 = EngineManager::getInstance();
    HardwareScalability::setMSAA((HardwareScalability *)(lVar4 + 0x198),uVar2);
  }
  lVar4 = EngineManager::getInstance();
  *(undefined *)(*(long *)(lVar4 + 0xb8) + 0xf06) = 1;
  return;
}


