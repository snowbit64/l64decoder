// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: showMessageBoxRetryCancel
// Entry Point: 00c653b4
// Size: 288 bytes
// Signature: undefined __cdecl showMessageBoxRetryCancel(char * param_1, char * param_2, bool param_3)


/* SystemDialogUtil::showMessageBoxRetryCancel(char const*, char const*, bool) */

undefined8 SystemDialogUtil::showMessageBoxRetryCancel(char *param_1,char *param_2,bool param_3)

{
  int iVar1;
  Logger *pLVar2;
  
  if (param_3) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c65444 to 00c6544b has its CatchHandler @ 00c654ec */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c65450 to 00c65453 has its CatchHandler @ 00c654dc */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,"Error: %s \n %s\n",
                       param_1,param_2);
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c65494 to 00c6549b has its CatchHandler @ 00c654d8 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c654a0 to 00c654a3 has its CatchHandler @ 00c654d4 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"%s\n%s\n",param_1,
                      param_2);
  }
  return 0;
}


