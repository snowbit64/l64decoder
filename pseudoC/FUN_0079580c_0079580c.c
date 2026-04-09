// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079580c
// Entry Point: 0079580c
// Size: 196 bytes
// Signature: undefined FUN_0079580c(void)


void FUN_0079580c(uint *param_1)

{
  uint uVar1;
  int iVar2;
  EntityRegistryManager *this;
  TerrainTransformGroup *pTVar3;
  long lVar4;
  Logger *this_00;
  
  uVar1 = *param_1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar3 = (TerrainTransformGroup *)EntityRegistryManager::getEntityById(this,uVar1);
  if ((pTVar3 != (TerrainTransformGroup *)0x0) && ((char)pTVar3[0x10] < '\0')) {
    lVar4 = ScenegraphPhysicsContextManager::getInstance();
    PlayerCenteredCollisionSystem::setTerrainTransformGroup
              (*(PlayerCenteredCollisionSystem **)(lVar4 + 8),pTVar3);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00795890 to 00795897 has its CatchHandler @ 007958e0 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 0079589c to 0079589f has its CatchHandler @ 007958d0 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error: Invalid terrain with id %u.\n",(ulong)uVar1);
  return;
}


