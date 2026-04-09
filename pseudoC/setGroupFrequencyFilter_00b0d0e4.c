// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGroupFrequencyFilter
// Entry Point: 00b0d0e4
// Size: 576 bytes
// Signature: undefined __thiscall setGroupFrequencyFilter(SoftAudioDevice * this, uint param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7)


/* SoftAudioDevice::setGroupFrequencyFilter(unsigned int, float, float, float, float, float, float)
    */

void __thiscall
SoftAudioDevice::setGroupFrequencyFilter
          (SoftAudioDevice *this,uint param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (param_1 < 0x80) {
    uVar5 = (ulong)param_1;
    if (param_4 <= 0.0) {
      param_4 = 5000.0;
    }
    if (param_5 <= 0.0) {
      param_5 = 5000.0;
    }
    if (param_6 <= 0.0) {
      param_6 = 2.0;
    }
    if (param_7 <= 0.0) {
      param_7 = 2.0;
    }
    if ((((*(float *)(this + (ulong)param_1 * 0x18 + 0xf60) != param_2) ||
         (*(float *)(this + uVar5 * 0x18 + 0xf64) != param_3)) ||
        (*(float *)(this + uVar5 * 0x18 + 0xf68) != param_4)) ||
       (((*(float *)(this + uVar5 * 0x18 + 0xf6c) != param_5 ||
         (*(float *)(this + uVar5 * 0x18 + 0xf70) != param_6)) ||
        (*(float *)(this + uVar5 * 0x18 + 0xf74) != param_7)))) {
      *(float *)(this + (ulong)param_1 * 0x18 + 0xf60) = param_2;
      *(float *)(this + uVar5 * 0x18 + 0xf64) = param_3;
      *(float *)(this + uVar5 * 0x18 + 0xf68) = param_4;
      *(float *)(this + uVar5 * 0x18 + 0xf6c) = param_5;
      *(float *)(this + uVar5 * 0x18 + 0xf70) = param_6;
      *(float *)(this + uVar5 * 0x18 + 0xf74) = param_7;
      SoLoud::Soloud::lockAudioMutex();
      Mutex::enterCriticalSection();
      plVar1 = *(long **)(this + 0x40);
      for (plVar6 = *(long **)(this + 0x38); plVar6 != plVar1; plVar6 = plVar6 + 1) {
        if (*(uint *)(*plVar6 + 0xd0) == param_1) {
          SoftAudioSource::updateFrequencyFilterLocked();
        }
      }
      Mutex::leaveCriticalSection();
      Mutex::enterCriticalSection();
      for (plVar6 = *(long **)(this + 0x88); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        if (*(uint *)(plVar6[2] + 0xd0) == param_1) {
                    /* try { // try from 00b0d2d0 to 00b0d2d3 has its CatchHandler @ 00b0d340 */
          SoftAudioSource::updateFrequencyFilterLocked();
        }
      }
                    /* try { // try from 00b0d280 to 00b0d287 has its CatchHandler @ 00b0d33c */
      Mutex::leaveCriticalSection();
      SoLoud::Soloud::unlockAudioMutex();
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00b0d2e8 to 00b0d2f3 has its CatchHandler @ 00b0d324 */
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


