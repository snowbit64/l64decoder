// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGroupVolume
// Entry Point: 00b0ce64
// Size: 384 bytes
// Signature: undefined __thiscall setGroupVolume(SoftAudioDevice * this, uint param_1, float param_2)


/* SoftAudioDevice::setGroupVolume(unsigned int, float) */

void __thiscall SoftAudioDevice::setGroupVolume(SoftAudioDevice *this,uint param_1,float param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (param_1 < 0x80) {
    if (*(float *)(this + (ulong)param_1 * 4 + 0xa0) != param_2) {
      *(float *)(this + (ulong)param_1 * 4 + 0xa0) = param_2;
      SoLoud::Soloud::lockAudioMutex();
      Mutex::enterCriticalSection();
      plVar1 = *(long **)(this + 0x40);
      for (plVar5 = *(long **)(this + 0x38); plVar5 != plVar1; plVar5 = plVar5 + 1) {
        if (*(uint *)(*plVar5 + 0xd0) == param_1) {
          SoftAudioSource::updateVolumeLocked();
        }
      }
      Mutex::leaveCriticalSection();
      Mutex::enterCriticalSection();
      for (plVar5 = *(long **)(this + 0x88); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(uint *)(plVar5[2] + 0xd0) == param_1) {
                    /* try { // try from 00b0cf90 to 00b0cf93 has its CatchHandler @ 00b0d000 */
          SoftAudioSource::updateVolumeLocked();
        }
      }
                    /* try { // try from 00b0cf40 to 00b0cf47 has its CatchHandler @ 00b0cffc */
      Mutex::leaveCriticalSection();
      SoLoud::Soloud::unlockAudioMutex();
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00b0cfa8 to 00b0cfb3 has its CatchHandler @ 00b0cfe4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "SoftAudioDevice groupId must be less than %u.",0x80);
  }
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


