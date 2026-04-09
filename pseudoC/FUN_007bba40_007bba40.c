// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bba40
// Entry Point: 007bba40
// Size: 204 bytes
// Signature: undefined FUN_007bba40(void)


void FUN_007bba40(AnimalCompanionManager *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  EntityRegistryManager *this;
  TransformGroup *pTVar3;
  Logger *this_00;
  
  uVar1 = *param_2;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar3 = (TransformGroup *)EntityRegistryManager::getEntityById(this,uVar1);
  if (pTVar3 != (TransformGroup *)0x0) {
    AnimalCompanionManager::setAvoidPlayer(param_1,pTVar3,(float)param_2[4]);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 007bbacc to 007bbad3 has its CatchHandler @ 007bbb1c */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007bbad8 to 007bbadb has its CatchHandler @ 007bbb0c */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "Warning (script): Invalid entity id %u in method \'setCompanionAvoidPlayer\'.\n"
                    ,(ulong)uVar1);
  return;
}


