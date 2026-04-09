// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeGroupEffect
// Entry Point: 00b0d6d8
// Size: 256 bytes
// Signature: undefined __thiscall removeGroupEffect(SoftAudioDevice * this, uint param_1, uint param_2)


/* SoftAudioDevice::removeGroupEffect(unsigned int, unsigned int) */

void __thiscall SoftAudioDevice::removeGroupEffect(SoftAudioDevice *this,uint param_1,uint param_2)

{
  size_t __n;
  int iVar1;
  Logger *this_00;
  uint *puVar2;
  uint *__dest;
  
  if (param_1 < 0x80) {
    __dest = *(uint **)(this + (ulong)param_1 * 0x18 + 0x2a0);
    puVar2 = *(uint **)(this + (ulong)param_1 * 0x18 + 0x2a8);
    if (__dest == puVar2) {
LAB_00b0d74c:
      if (__dest != puVar2) {
        __n = (long)puVar2 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        *(size_t *)(this + (ulong)param_1 * 0x18 + 0x2a8) = (long)__dest + __n;
      }
    }
    else {
      do {
        if (*__dest == param_2) goto LAB_00b0d74c;
        __dest = __dest + 1;
      } while (__dest != puVar2);
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b0d798 to 00b0d79f has its CatchHandler @ 00b0d7e8 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b0d7a4 to 00b0d7a7 has its CatchHandler @ 00b0d7d8 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "SoftAudioDevice: invalid audio group id\n");
  }
  return;
}


