// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b22d4
// Entry Point: 007b22d4
// Size: 240 bytes
// Signature: undefined FUN_007b22d4(void)


DensityMapHeightUpdater * FUN_007b22d4(char **param_1)

{
  uint uVar1;
  int iVar2;
  EntityRegistryManager *this;
  TerrainFillDataPlane *pTVar3;
  Logger *this_00;
  DensityMapHeightUpdater *this_01;
  
  uVar1 = *(uint *)(param_1 + 2);
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar3 = (TerrainFillDataPlane *)EntityRegistryManager::getEntityById(this,uVar1);
  if ((pTVar3 == (TerrainFillDataPlane *)0x0) || (((byte)pTVar3[0x16] & 1) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 007b2384 to 007b238b has its CatchHandler @ 007b23d4 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007b2390 to 007b2393 has its CatchHandler @ 007b23c4 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Invalid terrain detail with id %u.\n",(ulong)uVar1);
    this_01 = (DensityMapHeightUpdater *)0x0;
  }
  else {
    this_01 = (DensityMapHeightUpdater *)operator_new(0xc88);
                    /* try { // try from 007b2354 to 007b235f has its CatchHandler @ 007b23ec */
    DensityMapHeightUpdater::DensityMapHeightUpdater
              (this_01,*param_1,pTVar3,*(uint *)(param_1 + 4),*(uint *)(param_1 + 6),
               *(uint *)(param_1 + 8),true);
  }
  return this_01;
}


