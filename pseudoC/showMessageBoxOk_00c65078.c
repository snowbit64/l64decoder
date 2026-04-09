// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: showMessageBoxOk
// Entry Point: 00c65078
// Size: 160 bytes
// Signature: undefined __cdecl showMessageBoxOk(char * param_1, char * param_2, bool param_3)


/* SystemDialogUtil::showMessageBoxOk(char const*, char const*, bool) */

void SystemDialogUtil::showMessageBoxOk(char *param_1,char *param_2,bool param_3)

{
  int iVar1;
  Logger *this;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager,param_2,param_3),
     iVar1 != 0)) {
                    /* try { // try from 00c650d8 to 00c650df has its CatchHandler @ 00c65128 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00c650e4 to 00c650e7 has its CatchHandler @ 00c65118 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"%s\n%s\n",param_1,
                    param_2);
  return;
}


