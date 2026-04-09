// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NullConsoleDevice
// Entry Point: 00aaa430
// Size: 172 bytes
// Signature: undefined __thiscall NullConsoleDevice(NullConsoleDevice * this)


/* NullConsoleDevice::NullConsoleDevice() */

void __thiscall NullConsoleDevice::NullConsoleDevice(NullConsoleDevice *this)

{
  int iVar1;
  
  NullRenderDevice::NullRenderDevice((NullRenderDevice *)this);
  *(undefined ***)this = &PTR__NullConsoleDevice_00fe5168;
  *(undefined ***)(this + 0x130) = &PTR__ILogSink_00fe5300;
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00aaa4a4 to 00aaa4af has its CatchHandler @ 00aaa4dc */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
                    /* try { // try from 00aaa484 to 00aaa487 has its CatchHandler @ 00aaa4f0 */
  Logger::addLogSink(LogManager::getInstance()::singletonLogManager,(ILogSink *)(this + 0x130));
  return;
}


