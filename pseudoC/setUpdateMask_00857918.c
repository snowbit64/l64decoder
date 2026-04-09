// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setUpdateMask
// Entry Point: 00857918
// Size: 196 bytes
// Signature: undefined __thiscall setUpdateMask(DensityMapUpdater * this, DensityMap * param_1, uint param_2, uint param_3)


/* DensityMapUpdater::setUpdateMask(DensityMap*, unsigned int, unsigned int) */

void __thiscall
DensityMapUpdater::setUpdateMask
          (DensityMapUpdater *this,DensityMap *param_1,uint param_2,uint param_3)

{
  int iVar1;
  Logger *this_00;
  
  *(DensityMap **)(this + 0x1068) = param_1;
  *(uint *)(this + 0x1070) = param_2;
  if (6 < param_3) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0085799c to 008579a3 has its CatchHandler @ 008579ec */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008579a8 to 008579ab has its CatchHandler @ 008579dc */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Setting update mask with too many channels. Clamping %u to %u.\n",
                      (ulong)param_3,6);
  }
  if (5 < param_3) {
    param_3 = 6;
  }
  *(uint *)(this + 0x1074) = param_3;
  return;
}


