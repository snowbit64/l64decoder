// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setUpdateMinMaxValue
// Entry Point: 00857ad4
// Size: 192 bytes
// Signature: undefined __thiscall setUpdateMinMaxValue(DensityMapUpdater * this, uint param_1, uint param_2, uint param_3, bool param_4)


/* DensityMapUpdater::setUpdateMinMaxValue(unsigned int, unsigned int, unsigned int, bool) */

void __thiscall
DensityMapUpdater::setUpdateMinMaxValue
          (DensityMapUpdater *this,uint param_1,uint param_2,uint param_3,bool param_4)

{
  int iVar1;
  Logger *this_00;
  
  if (*(uint *)(this + 0x50) < 2) {
    *(undefined4 *)(this + 0x50) = 1;
    if (param_1 < 0x40) {
      *(uint *)(this + (ulong)param_1 * 0xc + 0x54) = param_2;
      *(uint *)(this + (ulong)param_1 * 0xc + 0x58) = param_3;
      this[(ulong)param_1 * 0xc + 0x5c] = (DensityMapUpdater)param_4;
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00857b54 to 00857b5b has its CatchHandler @ 00857ba4 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00857b60 to 00857b63 has its CatchHandler @ 00857b94 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Setting min-max value for updater that uses next value config.\n");
  }
  return;
}


