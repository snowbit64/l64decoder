// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_38
// Entry Point: 00b0451c
// Size: 44 bytes
// Signature: undefined _INIT_38(void)


void _INIT_38(void)

{
  TimerManager::s_singletonTimerManager._48_8_ = 0;
  TimerManager::s_singletonTimerManager._24_8_ = 0;
  TimerManager::s_singletonTimerManager._16_8_ = 0;
  TimerManager::s_singletonTimerManager._40_8_ = 0;
  TimerManager::s_singletonTimerManager._32_8_ = 0;
  TimerManager::s_singletonTimerManager._8_8_ = 0;
  TimerManager::s_singletonTimerManager._0_8_ = 0;
  __cxa_atexit(TimerManager::~TimerManager,TimerManager::s_singletonTimerManager,&PTR_LOOP_00fd8de0)
  ;
  return;
}


