// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aacb0
// Entry Point: 007aacb0
// Size: 448 bytes
// Signature: undefined FUN_007aacb0(void)


void FUN_007aacb0(long param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  if (EngineScriptBinding::s_warnMaterialChangeRequiresDifferentShaders == '\0') {
    return;
  }
  if ((param_2 == 0) && (param_3 != 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 007aada8 to 007aadb3 has its CatchHandler @ 007aae78 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    pcVar3 = 
    "  DevWarning: material \'%s\' is having the %s added by script.  This can cause problems on consoles as the correct shader will not be built for this case.\n"
    ;
  }
  else if ((param_2 == 0) || (param_3 != 0)) {
    if (param_2 == 0) {
      return;
    }
    if (param_3 == 0) {
      return;
    }
    if ((param_5 & 1) == 0) {
      return;
    }
    if ((*(ushort *)(param_2 + 0x48) >> 2 & 1) != 0) {
      if ((*(ushort *)(param_3 + 0x48) >> 2 & 1) != 0) {
        return;
      }
      puVar2 = (undefined8 *)LogManager::getInstance();
      uVar4 = *(undefined8 *)(param_1 + 8);
      pcVar3 = 
      "  DevWarning: material \'%s\' is having the %s alpha channel removed by script.  This can cause problems on consoles as the correct shader will not be built for this case.\n"
      ;
      goto LAB_007aad2c;
    }
    if ((*(ushort *)(param_3 + 0x48) >> 2 & 1) == 0) {
      return;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 007aae38 to 007aae43 has its CatchHandler @ 007aae70 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    pcVar3 = 
    "  DevWarning: material \'%s\' is having the %s alpha channel added by script.  This can cause problems on consoles as the correct shader will not be built for this case.\n"
    ;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 007aadf0 to 007aadfb has its CatchHandler @ 007aae74 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    pcVar3 = 
    "  DevWarning: material \'%s\' is having the %s removed by script.  This can cause problems on consoles as the correct shader will not be built for this case.\n"
    ;
  }
  puVar2 = &LogManager::getInstance()::singletonLogManager;
LAB_007aad2c:
  LogManager::warnf((char *)puVar2,pcVar3,uVar4,param_4);
  return;
}


