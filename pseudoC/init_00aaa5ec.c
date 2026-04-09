// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00aaa5ec
// Size: 152 bytes
// Signature: undefined __thiscall init(NullConsoleDevice * this, bool param_1)


/* NullConsoleDevice::init(bool) */

uint __thiscall NullConsoleDevice::init(NullConsoleDevice *this,bool param_1)

{
  uint uVar1;
  int iVar2;
  Logger *this_00;
  
  uVar1 = NullRenderDevice::init((NullRenderDevice *)this,param_1);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00aaa644 to 00aaa64b has its CatchHandler @ 00aaa694 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00aaa650 to 00aaa653 has its CatchHandler @ 00aaa684 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "  NullConsoleDevice initialized\n");
  return uVar1 & 1;
}


