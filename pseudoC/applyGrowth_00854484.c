// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyGrowth
// Entry Point: 00854484
// Size: 192 bytes
// Signature: undefined __thiscall applyGrowth(FieldCropsUpdater * this, ApplyGrowthFinishedCallback * param_1, float param_2)


/* FieldCropsUpdater::applyGrowth(FieldCropsUpdater::ApplyGrowthFinishedCallback*, float) */

bool __thiscall
FieldCropsUpdater::applyGrowth
          (FieldCropsUpdater *this,ApplyGrowthFinishedCallback *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  Logger *this_00;
  
  uVar1 = *(uint *)(this + 0xd14);
  uVar2 = *(int *)(this + 0xd0c) * *(int *)(this + 0xd0c);
  if (uVar1 < uVar2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00854504 to 0085450b has its CatchHandler @ 00854554 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00854510 to 00854513 has its CatchHandler @ 00854544 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Calling FieldCropsUpdater applyGrowth while current growth is still running.\n"
                     );
  }
  else {
    *(undefined4 *)(this + 0xd14) = 0;
    *(ApplyGrowthFinishedCallback **)(this + 0xd18) = param_1;
    *(float *)(this + 0xd20) = param_2;
  }
  return uVar2 <= uVar1;
}


