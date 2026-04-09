// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullConsoleDevice
// Entry Point: 00aaa504
// Size: 156 bytes
// Signature: undefined __thiscall ~NullConsoleDevice(NullConsoleDevice * this)


/* NullConsoleDevice::~NullConsoleDevice() */

void __thiscall NullConsoleDevice::~NullConsoleDevice(NullConsoleDevice *this)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__NullConsoleDevice_00fe5168;
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00aaa568 to 00aaa573 has its CatchHandler @ 00aaa5a0 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
                    /* try { // try from 00aaa544 to 00aaa547 has its CatchHandler @ 00aaa5b4 */
  Logger::removeLogSink(LogManager::getInstance()::singletonLogManager,(ILogSink *)(this + 0x130));
  NullRenderDevice::~NullRenderDevice((NullRenderDevice *)this);
  return;
}


