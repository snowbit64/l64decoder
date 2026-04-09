// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b17b4
// Entry Point: 007b17b4
// Size: 232 bytes
// Signature: undefined FUN_007b17b4(void)


DensityMapSyncer * FUN_007b17b4(char **param_1)

{
  uint uVar1;
  int iVar2;
  EntityRegistryManager *this;
  TerrainTransformGroup *pTVar3;
  Logger *this_00;
  DensityMapSyncer *this_01;
  
  uVar1 = *(uint *)(param_1 + 2);
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar3 = (TerrainTransformGroup *)EntityRegistryManager::getEntityById(this,uVar1);
  if ((pTVar3 == (TerrainTransformGroup *)0x0) || (-1 < (char)pTVar3[0x10])) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 007b185c to 007b1863 has its CatchHandler @ 007b18ac */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007b1868 to 007b186b has its CatchHandler @ 007b189c */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Invalid terrain with id %u.\n",(ulong)uVar1);
    this_01 = (DensityMapSyncer *)0x0;
  }
  else {
    this_01 = (DensityMapSyncer *)operator_new(0x70);
                    /* try { // try from 007b182c to 007b1837 has its CatchHandler @ 007b18c4 */
    DensityMapSyncer::DensityMapSyncer(this_01,pTVar3,*(uint *)(param_1 + 4),*param_1,true);
  }
  return this_01;
}


