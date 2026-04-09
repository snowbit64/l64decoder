// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bac88
// Entry Point: 007bac88
// Size: 204 bytes
// Signature: undefined FUN_007bac88(void)


void FUN_007bac88(AnimalHusbandry *param_1,uint *param_2)

{
  int iVar1;
  EntityRegistryManager *this;
  TransformGroup *pTVar2;
  Logger *this_00;
  
  if (*param_2 == 0) {
    pTVar2 = (TransformGroup *)0x0;
  }
  else {
    this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    pTVar2 = (TransformGroup *)EntityRegistryManager::getEntityById(this,*param_2);
    if (pTVar2 == (TransformGroup *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 007bad14 to 007bad1b has its CatchHandler @ 007bad64 */
        this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007bad20 to 007bad23 has its CatchHandler @ 007bad54 */
        Logger::Logger(this_00);
        LogManager::getInstance()::singletonLogManager = this_00;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning (script): Unknown entity id %u in method \'setAnimalInteressNode\'.\n"
                        ,(ulong)*param_2);
      return;
    }
  }
  AnimalHusbandry::setAnimalInteressNode(param_1,pTVar2);
  return;
}


