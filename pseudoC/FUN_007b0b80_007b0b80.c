// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b0b80
// Entry Point: 007b0b80
// Size: 272 bytes
// Signature: undefined FUN_007b0b80(void)


void FUN_007b0b80(FieldCropsUpdater *param_1,uint *param_2)

{
  int iVar1;
  EntityRegistryManager *this;
  long lVar2;
  Logger *this_00;
  DensityMap *pDVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_2;
  if (uVar4 == 0) {
    pDVar3 = (DensityMap *)0x0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    lVar2 = EntityRegistryManager::getEntityById(this,uVar4);
    if ((lVar2 == 0) || ((*(ulong *)(lVar2 + 0x10) & 0xa00000000000) == 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 007b0c50 to 007b0c57 has its CatchHandler @ 007b0ca0 */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007b0c5c to 007b0c5f has its CatchHandler @ 007b0c90 */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Invalid growth mask with id %u.\n",(ulong)uVar4);
      return;
    }
    if ((*(ulong *)(lVar2 + 0x10) >> 0x2f & 1) == 0) {
      pDVar3 = *(DensityMap **)(lVar2 + 0x20);
      uVar4 = param_2[4];
    }
    else {
      pDVar3 = *(DensityMap **)(lVar2 + 0x50);
      uVar4 = *(int *)(lVar2 + 0x7c) + param_2[4];
    }
    uVar5 = param_2[8];
  }
  FieldCropsUpdater::setGrowthMask(param_1,pDVar3,uVar4,uVar5);
  return;
}


