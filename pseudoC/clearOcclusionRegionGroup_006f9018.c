// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearOcclusionRegionGroup
// Entry Point: 006f9018
// Size: 200 bytes
// Signature: undefined __thiscall clearOcclusionRegionGroup(AdsBrockerManager * this, uint param_1)


/* AdsBrockerManager::clearOcclusionRegionGroup(unsigned int) */

void __thiscall AdsBrockerManager::clearOcclusionRegionGroup(AdsBrockerManager *this,uint param_1)

{
  int iVar1;
  Logger *this_00;
  
  Mutex::enterCriticalSection();
  if (param_1 < 0x20) {
    *(undefined4 *)(this + (ulong)param_1 * 4 + 0x18) = 0;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 006f90a0 to 006f90a7 has its CatchHandler @ 006f90f0 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 006f90ac to 006f90af has its CatchHandler @ 006f90e0 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "[gads] Warning: Invalid occlusion region group %d. Valid groups: 0 to %d.\n",
                      (ulong)param_1,3);
  }
  Mutex::leaveCriticalSection();
  return;
}


