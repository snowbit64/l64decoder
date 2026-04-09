// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyUpdate
// Entry Point: 00857704
// Size: 168 bytes
// Signature: undefined __thiscall applyUpdate(DensityMapUpdater * this, ApplyUpdateFinishedCallback * param_1, float param_2)


/* DensityMapUpdater::applyUpdate(DensityMapUpdater::ApplyUpdateFinishedCallback*, float) */

uint __thiscall
DensityMapUpdater::applyUpdate
          (DensityMapUpdater *this,ApplyUpdateFinishedCallback *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  Logger *this_00;
  
  uVar1 = *(uint *)(this + 0x1078);
  if ((int)uVar1 < 0) {
    *(undefined4 *)(this + 0x1078) = 0;
    *(ApplyUpdateFinishedCallback **)(this + 0x1080) = param_1;
    *(float *)(this + 0x1088) = param_2;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0085776c to 00857773 has its CatchHandler @ 008577bc */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00857778 to 0085777b has its CatchHandler @ 008577ac */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Calling DensityMapUpdater applyUpdate while current update is still running.\n"
                     );
  }
  return uVar1 >> 0x1f;
}


