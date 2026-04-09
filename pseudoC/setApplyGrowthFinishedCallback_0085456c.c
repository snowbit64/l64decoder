// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setApplyGrowthFinishedCallback
// Entry Point: 0085456c
// Size: 192 bytes
// Signature: undefined __thiscall setApplyGrowthFinishedCallback(FieldCropsUpdater * this, ApplyGrowthFinishedCallback * param_1)


/* FieldCropsUpdater::setApplyGrowthFinishedCallback(FieldCropsUpdater::ApplyGrowthFinishedCallback*)
    */

undefined4 __thiscall
FieldCropsUpdater::setApplyGrowthFinishedCallback
          (FieldCropsUpdater *this,ApplyGrowthFinishedCallback *param_1)

{
  int iVar1;
  Logger *this_00;
  
  if (*(long *)(this + 0xd18) == 0) {
    if (*(uint *)(this + 0xd14) < (uint)(*(int *)(this + 0xd0c) * *(int *)(this + 0xd0c))) {
      *(ApplyGrowthFinishedCallback **)(this + 0xd18) = param_1;
      return 1;
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008545ec to 008545f3 has its CatchHandler @ 0085463c */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008545f8 to 008545fb has its CatchHandler @ 0085462c */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Calling FieldCropsUpdater setApplyGrowthFinishedCallback while callback is already set. Ignoring new callback.\n"
                     );
  }
  return 0;
}


