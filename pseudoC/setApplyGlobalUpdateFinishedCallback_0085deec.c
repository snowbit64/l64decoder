// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setApplyGlobalUpdateFinishedCallback
// Entry Point: 0085deec
// Size: 176 bytes
// Signature: undefined __thiscall setApplyGlobalUpdateFinishedCallback(DensityMapHeightUpdater * this, ApplyUpdateFinishedCallback * param_1)


/* DensityMapHeightUpdater::setApplyGlobalUpdateFinishedCallback(DensityMapHeightUpdater::ApplyUpdateFinishedCallback*)
    */

undefined4 __thiscall
DensityMapHeightUpdater::setApplyGlobalUpdateFinishedCallback
          (DensityMapHeightUpdater *this,ApplyUpdateFinishedCallback *param_1)

{
  int iVar1;
  Logger *this_00;
  
  if (*(long *)(this + 0xc78) == 0) {
    if (-1 < *(int *)(this + 0xc54)) {
      *(ApplyUpdateFinishedCallback **)(this + 0xc78) = param_1;
      return 1;
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0085df5c to 0085df63 has its CatchHandler @ 0085dfac */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 0085df68 to 0085df6b has its CatchHandler @ 0085df9c */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Calling DensityMapHeightUpdater setApplyGlobalUpdateFinishedCallback while callback is already set. Ignoring new callback.\n"
                     );
  }
  return 0;
}


