// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTrigger
// Entry Point: 00876d98
// Size: 332 bytes
// Signature: undefined __thiscall addTrigger(AnimalCompanionManager * this, uint param_1)


/* AnimalCompanionManager::addTrigger(unsigned int) */

void __thiscall AnimalCompanionManager::addTrigger(AnimalCompanionManager *this,uint param_1)

{
  char *pcVar1;
  int iVar2;
  EngineManager *this_00;
  LuauScriptSystem *this_01;
  Logger *this_02;
  ulong uVar3;
  long lVar4;
  TransformGroup *pTVar5;
  
  uVar3 = (ulong)param_1;
  pTVar5 = *(TransformGroup **)(*(long *)(this + 0xb0) + uVar3 * 0x58 + 0x20);
  if (pTVar5 == (TransformGroup *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00876ea4 to 00876eab has its CatchHandler @ 00876ef4 */
      this_02 = (Logger *)operator_new(0x38);
                    /* try { // try from 00876eb0 to 00876eb3 has its CatchHandler @ 00876ee4 */
      Logger::Logger(this_02);
      LogManager::getInstance()::singletonLogManager = this_02;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning (physics): Add trigger callback failed, trigger node not found.\n");
    lVar4 = *(long *)(this + 0xb0);
    if (*(long *)(lVar4 + uVar3 * 0x58 + 0x28) != 0) {
      ScriptSystemManager::getInstance();
      this_01 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::destroyObjectRef
                (this_01,*(void **)(*(long *)(this + 0xb0) + uVar3 * 0x58 + 0x28));
      lVar4 = *(long *)(this + 0xb0);
      *(undefined8 *)(lVar4 + uVar3 * 0x58 + 0x28) = 0;
    }
  }
  else {
    this_00 = (EngineManager *)EngineManager::getInstance();
    lVar4 = *(long *)(this + 0xb0) + uVar3 * 0x58;
    pcVar1 = (char *)(lVar4 + 0x31);
    if ((*(byte *)(lVar4 + 0x30) & 1) != 0) {
      pcVar1 = *(char **)(lVar4 + 0x40);
    }
    iVar2 = EngineManager::addScriptTriggerCallback
                      (this_00,pTVar5,(void *)0x0,pcVar1,*(void **)(lVar4 + 0x28),false);
    lVar4 = *(long *)(this + 0xb0);
    *(int *)(lVar4 + uVar3 * 0x58 + 0x4c) = iVar2;
    if (iVar2 != 0) {
      return;
    }
  }
  *(undefined *)(lVar4 + uVar3 * 0x58 + 0x48) = 0;
  return;
}


