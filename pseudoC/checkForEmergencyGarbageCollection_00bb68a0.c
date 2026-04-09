// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkForEmergencyGarbageCollection
// Entry Point: 00bb68a0
// Size: 388 bytes
// Signature: undefined checkForEmergencyGarbageCollection(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LuauScriptSystem::checkForEmergencyGarbageCollection() */

void LuauScriptSystem::checkForEmergencyGarbageCollection(void)

{
  uint uVar1;
  int iVar2;
  long in_x0;
  long lVar3;
  long lVar4;
  Logger *pLVar5;
  
  if ((0x10000 < *(uint *)(in_x0 + 0x11c)) &&
     (uVar1 = lua_gc(*(lua_State **)(in_x0 + 8),3,0), (uint)(*(int *)(in_x0 + 0x11c) * 2) < uVar1))
  {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00bb6998 to 00bb699f has its CatchHandler @ 00bb6a48 */
      pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bb69a4 to 00bb69a7 has its CatchHandler @ 00bb6a38 */
      Logger::Logger(pLVar5);
      LogManager::getInstance()::singletonLogManager = pLVar5;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Performing emergency garbage collection pass - memory went from %u KB to %u KB in less than one frame\n"
                      ,(ulong)*(uint *)(in_x0 + 0x11c),(ulong)uVar1);
    lVar3 = Watch::getCurrentTicks();
    lua_gc(*(lua_State **)(in_x0 + 8),2,0);
    lVar4 = Watch::getCurrentTicks();
    uVar1 = lua_gc(*(lua_State **)(in_x0 + 8),3,0);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00bb69e8 to 00bb69ef has its CatchHandler @ 00bb6a34 */
      pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bb69f4 to 00bb69f7 has its CatchHandler @ 00bb6a24 */
      Logger::Logger(pLVar5);
      LogManager::getInstance()::singletonLogManager = pLVar5;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    Watch::convertTicksToMs(lVar4 - lVar3);
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Usage is now %u KB; full GC took %lfms \n",(ulong)uVar1);
    *(uint *)(in_x0 + 0x11c) = uVar1;
  }
  return;
}


