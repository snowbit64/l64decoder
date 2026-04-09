// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setUpdateDeltaValue
// Entry Point: 00857a04
// Size: 168 bytes
// Signature: undefined __thiscall setUpdateDeltaValue(DensityMapUpdater * this, int param_1)


/* DensityMapUpdater::setUpdateDeltaValue(int) */

void __thiscall DensityMapUpdater::setUpdateDeltaValue(DensityMapUpdater *this,int param_1)

{
  int iVar1;
  Logger *this_00;
  
  if (*(uint *)(this + 0x50) < 2) {
    *(int *)(this + 0x354) = param_1;
    *(undefined4 *)(this + 0x50) = 1;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00857a6c to 00857a73 has its CatchHandler @ 00857abc */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00857a78 to 00857a7b has its CatchHandler @ 00857aac */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Setting update delta value for updater that uses next value config.\n"
                      );
  }
  return;
}


