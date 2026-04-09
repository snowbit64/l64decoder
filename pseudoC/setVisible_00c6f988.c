// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVisible
// Entry Point: 00c6f988
// Size: 220 bytes
// Signature: undefined __cdecl setVisible(bool param_1, bool param_2)


/* AndroidSysUtil::setVisible(bool, bool) */

void AndroidSysUtil::setVisible(bool param_1,bool param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  Logger *this;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00c6fa24 to 00c6fa2b has its CatchHandler @ 00c6fa74 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00c6fa30 to 00c6fa33 has its CatchHandler @ 00c6fa64 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  pcVar1 = "invisible";
  if (s_isVisible != '\0') {
    pcVar1 = "visible";
  }
  pcVar2 = "visible";
  if (!param_1) {
    pcVar2 = "invisible";
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "AndroidSysUtil::setVisible(): %s -> %s\n",pcVar1,pcVar2);
  s_isVisible = param_1;
  s_windowInitialized = param_2;
  return;
}


