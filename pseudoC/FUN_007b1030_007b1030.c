// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b1030
// Entry Point: 007b1030
// Size: 220 bytes
// Signature: undefined FUN_007b1030(void)


void FUN_007b1030(FieldCropsUpdater *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  EntityRegistryManager *this;
  long lVar3;
  Logger *this_00;
  
  uVar1 = *param_2;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar3 = EntityRegistryManager::getEntityById(this,uVar1);
  if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x16) >> 1 & 1) != 0)) {
    FieldCropsUpdater::setGrowthNextState(param_1,*(int *)(lVar3 + 0x80) - 1,param_2[4],param_2[8]);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 007b10cc to 007b10d3 has its CatchHandler @ 007b111c */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007b10d8 to 007b10db has its CatchHandler @ 007b110c */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error: Invalid foliage with id %u.\n",(ulong)uVar1);
  return;
}


