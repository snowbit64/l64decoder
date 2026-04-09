// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NullAudioDevice
// Entry Point: 00b09e84
// Size: 276 bytes
// Signature: undefined __thiscall NullAudioDevice(NullAudioDevice * this)


/* NullAudioDevice::NullAudioDevice() */

void __thiscall NullAudioDevice::NullAudioDevice(NullAudioDevice *this)

{
  int iVar1;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__NullAudioDevice_00fe7368;
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b09f18 to 00b09f23 has its CatchHandler @ 00b09f9c */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
                    /* try { // try from 00b09ec4 to 00b09ef3 has its CatchHandler @ 00b09fb0 */
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"Sound System\n");
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b09f60 to 00b09f6b has its CatchHandler @ 00b09f98 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  Driver: NULL\n");
  *(undefined8 *)(this + 0x20) = 0;
  return;
}


