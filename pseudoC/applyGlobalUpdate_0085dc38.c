// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyGlobalUpdate
// Entry Point: 0085dc38
// Size: 488 bytes
// Signature: undefined __thiscall applyGlobalUpdate(DensityMapHeightUpdater * this, uint param_1, float param_2, float param_3, bool param_4, bool param_5, DensityMap * param_6, uint param_7, uint param_8, ApplyUpdateFinishedCallback * param_9, float param_10)


/* DensityMapHeightUpdater::applyGlobalUpdate(unsigned int, float, float, bool, bool, DensityMap*,
   unsigned int, unsigned int, DensityMapHeightUpdater::ApplyUpdateFinishedCallback*, float) */

uint __thiscall
DensityMapHeightUpdater::applyGlobalUpdate
          (DensityMapHeightUpdater *this,uint param_1,float param_2,float param_3,bool param_4,
          bool param_5,DensityMap *param_6,uint param_7,uint param_8,
          ApplyUpdateFinishedCallback *param_9,float param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  Logger *pLVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = *(uint *)(this + 0xc54);
  if ((int)uVar1 < 0) {
    if (param_4) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 0085dde0 to 0085dde7 has its CatchHandler @ 0085de30 */
        pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 0085ddec to 0085ddef has its CatchHandler @ 0085de20 */
        Logger::Logger(pLVar5);
        LogManager::getInstance()::singletonLogManager = pLVar5;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: DensityMapHeightUpdater applyGlobalUpdate limited to max angle is not supported yet.\n"
                       );
    }
    *(undefined4 *)(this + 0xc54) = 0;
    *(uint *)(this + 0xc58) = param_1;
    uVar6 = *(uint *)(*(long *)(this + 0xa40) + 0x8c);
    *(DensityMap **)(this + 0xc68) = param_6;
    fVar8 = *(float *)(*(long *)(this + 0xa40) + 0x90);
    *(uint *)(this + 0xc64) = param_5 & 1;
    uVar2 = -1 << (ulong)(uVar6 & 0x1f);
    uVar3 = ~uVar2;
    fVar7 = (float)(ulong)uVar3;
    uVar6 = (uint)((fVar7 * param_3) / fVar8);
    uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    if ((int)uVar3 < (int)uVar6) {
      uVar6 = ~uVar2;
    }
    *(uint *)(this + 0xc60) = uVar6;
    *(int *)(this + 0xc5c) = (int)((fVar7 * param_2) / fVar8);
    if (param_6 != (DensityMap *)0x0) {
      FUN_00f276d0(1,param_6 + 8);
    }
    *(uint *)(this + 0xc70) = param_7;
    *(uint *)(this + 0xc74) = param_8;
    *(ApplyUpdateFinishedCallback **)(this + 0xc78) = param_9;
    *(float *)(this + 0xc80) = param_10;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 0085dd90 to 0085dd97 has its CatchHandler @ 0085de44 */
      pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 0085dd9c to 0085dd9f has its CatchHandler @ 0085de34 */
      Logger::Logger(pLVar5);
      LogManager::getInstance()::singletonLogManager = pLVar5;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Calling DensityMapHeightUpdater applyGlobalUpdate while current update is still running.\n"
                     );
  }
  return uVar1 >> 0x1f;
}


