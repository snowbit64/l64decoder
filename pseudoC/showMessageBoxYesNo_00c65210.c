// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: showMessageBoxYesNo
// Entry Point: 00c65210
// Size: 172 bytes
// Signature: undefined __cdecl showMessageBoxYesNo(char * param_1, char * param_2, bool param_3)


/* SystemDialogUtil::showMessageBoxYesNo(char const*, char const*, bool) */

undefined SystemDialogUtil::showMessageBoxYesNo(char *param_1,char *param_2,bool param_3)

{
  int iVar1;
  Logger *this;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c6527c to 00c65283 has its CatchHandler @ 00c652cc */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00c65288 to 00c6528b has its CatchHandler @ 00c652bc */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"%s\n%s\n",param_1,
                    param_2);
  return param_3;
}


