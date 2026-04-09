// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addGroupEffect
// Entry Point: 00b0d534
// Size: 392 bytes
// Signature: undefined __thiscall addGroupEffect(SoftAudioDevice * this, uint param_1, uint param_2)


/* SoftAudioDevice::addGroupEffect(unsigned int, unsigned int) */

void __thiscall SoftAudioDevice::addGroupEffect(SoftAudioDevice *this,uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  uint *puVar4;
  
  if (param_1 < 0x80) {
    puVar4 = *(uint **)(this + (ulong)param_1 * 0x18 + 0x2a8);
    if (puVar4 == *(uint **)(this + (ulong)param_1 * 0x18 + 0x2a0)) {
      if (puVar4 != *(uint **)(this + (ulong)param_1 * 0x18 + 0x2b0)) {
        *puVar4 = param_2;
        *(uint **)(this + (ulong)param_1 * 0x18 + 0x2a8) = puVar4 + 1;
        return;
      }
      puVar2 = (uint *)operator_new(4);
      *(uint **)(this + (ulong)param_1 * 0x18 + 0x2a0) = puVar2;
      *puVar2 = param_2;
      *(uint **)(this + (ulong)param_1 * 0x18 + 0x2a8) = puVar2 + 1;
      *(uint **)(this + (ulong)param_1 * 0x18 + 0x2b0) = puVar2 + 1;
      if (puVar4 == (uint *)0x0) {
        return;
      }
      operator_delete(puVar4);
      return;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b0d684 to 00b0d68f has its CatchHandler @ 00b0d6bc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar3 = "SoftAudioDevice: Attempted to add more than one effect to audio group.\n";
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b0d63c to 00b0d647 has its CatchHandler @ 00b0d6c0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar3 = "SoftAudioDevice: invalid audio group id\n";
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar3);
  return;
}


