// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reportError
// Entry Point: 00b23a80
// Size: 260 bytes
// Signature: undefined __cdecl reportError(char * param_1, Error param_2)


/* USBUtil::reportError(char const*, USBUtil::Error) */

void USBUtil::reportError(char *param_1,Error param_2)

{
  long lVar1;
  int iVar2;
  Logger *this;
  char *local_60 [4];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00b23b40 to 00b23b47 has its CatchHandler @ 00b23b94 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00b23b4c to 00b23b4f has its CatchHandler @ 00b23b84 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  local_60[0] = "OK";
  local_60[1] = "BAD_PACKET";
  local_40 = "NOT_SUPPORTED";
  local_60[2] = "WRONG_TYPE";
  local_60[3] = "NOT_FOUND";
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "USB HID ERROR: %s (%s)\n",param_1,local_60[param_2]);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


