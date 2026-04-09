// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: message
// Entry Point: 00c5bbd0
// Size: 768 bytes
// Signature: undefined __cdecl message(char * param_1, char * param_2, char * param_3, char * param_4, int param_5)


/* DebugUtil::message(char const*, char const*, char const*, char const*, int) */

void DebugUtil::message(char *param_1,char *param_2,char *param_3,char *param_4,int param_5)

{
  int iVar1;
  Logger *pLVar2;
  
  if (param_1 != (char *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c5bd60 to 00c5bd67 has its CatchHandler @ 00c5bf18 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c5bd6c to 00c5bd6f has its CatchHandler @ 00c5bf08 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004e692f,param_1)
    ;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c5bd10 to 00c5bd17 has its CatchHandler @ 00c5bf2c */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c5bd1c to 00c5bd1f has its CatchHandler @ 00c5bf1c */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004dc8d1,param_2);
  if (((ulong)param_3 | (ulong)param_4) != 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c5bdb0 to 00c5bdb7 has its CatchHandler @ 00c5bf04 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c5bdbc to 00c5bdbf has its CatchHandler @ 00c5bef4 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004dfd37);
    if (param_4 == (char *)0x0) {
      if (param_3 == (char *)0x0) {
        return;
      }
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00c5bdfc to 00c5be03 has its CatchHandler @ 00c5bef0 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c5be08 to 00c5be0b has its CatchHandler @ 00c5beec */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"%s (%u)",param_4,
                        (ulong)(uint)param_5);
      if (param_3 == (char *)0x0) {
        return;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00c5be94 to 00c5be9b has its CatchHandler @ 00c5bed4 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c5bea0 to 00c5bea3 has its CatchHandler @ 00c5bed0 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004f56f4);
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c5be48 to 00c5be4f has its CatchHandler @ 00c5bee8 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c5be54 to 00c5be57 has its CatchHandler @ 00c5bed8 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_005118dd,param_3)
    ;
  }
  return;
}


