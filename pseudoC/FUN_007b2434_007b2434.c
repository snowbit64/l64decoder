// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b2434
// Entry Point: 007b2434
// Size: 264 bytes
// Signature: undefined FUN_007b2434(void)


void FUN_007b2434(DensityMapHeightUpdater *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  EntityRegistryManager *this;
  long lVar4;
  Logger *this_00;
  BitVector *pBVar5;
  byte bVar6;
  
  uVar1 = *param_2;
  if (uVar1 == 0) {
    pBVar5 = (BitVector *)0x0;
  }
  else {
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    lVar4 = EntityRegistryManager::getEntityById(this,uVar1);
    if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x15) >> 5 & 1) == 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 007b24fc to 007b2503 has its CatchHandler @ 007b254c */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007b2508 to 007b250b has its CatchHandler @ 007b253c */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Invalid collision map with id %u.\n",(ulong)uVar1);
      bVar6 = 0;
      pBVar5 = (BitVector *)0x0;
      goto LAB_007b24c0;
    }
    pBVar5 = (BitVector *)(**(code **)(**(long **)(lVar4 + 0x20) + 0x38))();
  }
  bVar6 = 1;
LAB_007b24c0:
  bVar2 = DensityMapHeightUpdater::setCollisionMap(param_1,pBVar5,*(bool *)(param_2 + 4));
  param_2[0x42] = 3;
  *(byte *)(param_2 + 0x40) = bVar2 & bVar6;
  return;
}


