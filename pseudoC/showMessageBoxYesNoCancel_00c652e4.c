// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: showMessageBoxYesNoCancel
// Entry Point: 00c652e4
// Size: 168 bytes
// Signature: undefined __cdecl showMessageBoxYesNoCancel(char * param_1, char * param_2)


/* SystemDialogUtil::showMessageBoxYesNoCancel(char const*, char const*) */

undefined8 SystemDialogUtil::showMessageBoxYesNoCancel(char *param_1,char *param_2)

{
  int iVar1;
  Logger *this;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c6534c to 00c65353 has its CatchHandler @ 00c6539c */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00c65358 to 00c6535b has its CatchHandler @ 00c6538c */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"%s\n%s\n",param_1,
                    param_2);
  return 2;
}


