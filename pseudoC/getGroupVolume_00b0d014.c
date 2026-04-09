// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getGroupVolume
// Entry Point: 00b0d014
// Size: 168 bytes
// Signature: undefined __thiscall getGroupVolume(SoftAudioDevice * this, uint param_1)


/* SoftAudioDevice::getGroupVolume(unsigned int) */

undefined4 __thiscall SoftAudioDevice::getGroupVolume(SoftAudioDevice *this,uint param_1)

{
  int iVar1;
  Logger *this_00;
  undefined4 uVar2;
  
  if (param_1 < 0x80) {
    uVar2 = *(undefined4 *)(this + (ulong)param_1 * 4 + 0xa0);
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b0d07c to 00b0d083 has its CatchHandler @ 00b0d0cc */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b0d088 to 00b0d08b has its CatchHandler @ 00b0d0bc */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "SoftAudioDevice groupId must be less than %u.",0x80);
    uVar2 = 0x3f800000;
  }
  return uVar2;
}


