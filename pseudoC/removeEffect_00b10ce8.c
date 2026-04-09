// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeEffect
// Entry Point: 00b10ce8
// Size: 172 bytes
// Signature: undefined __thiscall removeEffect(SoftAudioSource * this, uint param_1)


/* SoftAudioSource::removeEffect(unsigned int) */

void __thiscall SoftAudioSource::removeEffect(SoftAudioSource *this,uint param_1)

{
  int iVar1;
  Logger *this_00;
  
  if (*(int *)(this + 0x110) == 0) {
    if (*(uint *)(this + 0x10c) == param_1) {
      *(undefined4 *)(this + 0x10c) = 0xffffffff;
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b10d54 to 00b10d5b has its CatchHandler @ 00b10da4 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b10d60 to 00b10d63 has its CatchHandler @ 00b10d94 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "SoftAudioSource: Attempted to remove effect while audio source is playing.\n"
                      );
  }
  return;
}


