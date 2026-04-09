// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setApplyUpdateFinishedCallback
// Entry Point: 008577d4
// Size: 176 bytes
// Signature: undefined __thiscall setApplyUpdateFinishedCallback(DensityMapUpdater * this, ApplyUpdateFinishedCallback * param_1)


/* DensityMapUpdater::setApplyUpdateFinishedCallback(DensityMapUpdater::ApplyUpdateFinishedCallback*)
    */

undefined4 __thiscall
DensityMapUpdater::setApplyUpdateFinishedCallback
          (DensityMapUpdater *this,ApplyUpdateFinishedCallback *param_1)

{
  int iVar1;
  Logger *this_00;
  
  if (*(long *)(this + 0x1080) == 0) {
    if (-1 < *(int *)(this + 0x1078)) {
      *(ApplyUpdateFinishedCallback **)(this + 0x1080) = param_1;
      return 1;
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00857844 to 0085784b has its CatchHandler @ 00857894 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00857850 to 00857853 has its CatchHandler @ 00857884 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Calling DensityMapUpdater setApplyUpdateFinishedCallback while callback is already set. Ignoring new callback.\n"
                     );
  }
  return 0;
}


