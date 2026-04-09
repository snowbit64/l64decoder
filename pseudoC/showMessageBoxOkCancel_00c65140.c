// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: showMessageBoxOkCancel
// Entry Point: 00c65140
// Size: 168 bytes
// Signature: undefined __cdecl showMessageBoxOkCancel(char * param_1, char * param_2)


/* SystemDialogUtil::showMessageBoxOkCancel(char const*, char const*) */

undefined8 SystemDialogUtil::showMessageBoxOkCancel(char *param_1,char *param_2)

{
  int iVar1;
  Logger *this;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c651a8 to 00c651af has its CatchHandler @ 00c651f8 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00c651b4 to 00c651b7 has its CatchHandler @ 00c651e8 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"%s\n%s\n",param_1,
                    param_2);
  return 0;
}


