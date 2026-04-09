// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addEffect
// Entry Point: 00b10bc4
// Size: 264 bytes
// Signature: undefined __thiscall addEffect(SoftAudioSource * this, uint param_1)


/* SoftAudioSource::addEffect(unsigned int) */

void __thiscall SoftAudioSource::addEffect(SoftAudioSource *this,uint param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (*(int *)(this + 0x110) == 0) {
    if (*(int *)(this + 0x10c) == -1) {
      *(uint *)(this + 0x10c) = param_1;
      return;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b10c94 to 00b10c9f has its CatchHandler @ 00b10ccc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar2 = "SoftAudioSource: Attempted to add more than one effect to audio source.\n";
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b10c4c to 00b10c57 has its CatchHandler @ 00b10cd0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar2 = "SoftAudioSource: Attempted to add effect while audio source is playing.\n";
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar2);
  return;
}


