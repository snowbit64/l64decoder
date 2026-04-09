// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doLog
// Entry Point: 00afaf20
// Size: 396 bytes
// Signature: undefined __cdecl doLog(rcLogCategory param_1, char * param_2, int param_3)


/* RecastBuildContext::doLog(rcLogCategory, char const*, int) */

void RecastBuildContext::doLog(rcLogCategory param_1,char *param_2,int param_3)

{
  int iVar1;
  Logger *pLVar2;
  ulong uVar3;
  
  uVar3 = (ulong)(uint)param_3;
  if ((int)param_2 == 3) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00afb01c to 00afb023 has its CatchHandler @ 00afb0b8 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 00afb028 to 00afb02b has its CatchHandler @ 00afb0b4 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,"Error:  %s\n",uVar3)
    ;
  }
  else if ((int)param_2 == 2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00afafcc to 00afafd3 has its CatchHandler @ 00afb0cc */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 00afafd8 to 00afafdb has its CatchHandler @ 00afb0bc */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,"Warning: %s\n",uVar3)
    ;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00afb06c to 00afb073 has its CatchHandler @ 00afb0b0 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 00afb078 to 00afb07b has its CatchHandler @ 00afb0ac */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_005118dd,uVar3);
  }
  return;
}


