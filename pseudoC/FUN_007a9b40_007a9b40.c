// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9b40
// Entry Point: 007a9b40
// Size: 220 bytes
// Signature: undefined FUN_007a9b40(void)


void FUN_007a9b40(long param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  Logger *this;
  long lVar5;
  long lVar6;
  
  if (*(char *)(param_2 + 8) == '\0') {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 007a9bdc to 007a9be3 has its CatchHandler @ 007a9c2c */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 007a9be8 to 007a9beb has its CatchHandler @ 007a9c1c */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: setReflectionMapObjectMasks non-shared is not supported yet.\n");
  }
  else {
    uVar3 = *(ushort *)(param_1 + 0x196);
    if (uVar3 != 0) {
      lVar5 = 0;
      do {
        plVar1 = (long *)(*(long *)(param_1 + 0x178) + lVar5);
        lVar5 = lVar5 + 8;
        plVar2 = (long *)(param_1 + 0x178);
        if (uVar3 != 1) {
          plVar2 = plVar1;
        }
        lVar6 = *plVar2;
        *(undefined4 *)(lVar6 + 0x54) = *param_2;
        *(undefined4 *)(lVar6 + 0x58) = param_2[4];
      } while ((ulong)uVar3 * 8 - lVar5 != 0);
    }
  }
  return;
}


