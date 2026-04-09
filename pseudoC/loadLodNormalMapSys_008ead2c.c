// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadLodNormalMapSys
// Entry Point: 008ead2c
// Size: 460 bytes
// Signature: undefined __thiscall loadLodNormalMapSys(BaseTerrain * this, char * param_1)


/* BaseTerrain::loadLodNormalMapSys(char const*) */

long * __thiscall BaseTerrain::loadLodNormalMapSys(BaseTerrain *this,char *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  
  plVar4 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                    false);
  if (plVar4 != (long *)0x0) {
    if (*(void **)(this + 0xe0) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0xe0));
    }
    lVar6 = *plVar4;
    *(undefined8 *)(this + 0xe0) = 0;
    uVar1 = (**(code **)(lVar6 + 0x48))(plVar4);
    if (uVar1 == (*(int *)(this + 0x90) + -1) * (*(int *)(this + 0x90) + -1) * 2) {
      pvVar5 = operator_new__((ulong)uVar1);
      uVar2 = (**(code **)(*plVar4 + 0x28))(plVar4,pvVar5,uVar1);
      if (uVar2 == uVar1) {
        (**(code **)(*plVar4 + 8))(plVar4);
        *(void **)(this + 0xe0) = pvVar5;
        return (long *)0x1;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 008eaec0 to 008eaecb has its CatchHandler @ 008eaef8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Failed to read terrain normal cache \'%s\'.\n",param_1);
      operator_delete__(pvVar5);
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 008eae78 to 008eae83 has its CatchHandler @ 008eaefc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Terrain normal chache \'%s\' has wrong size.\n",param_1);
    }
    (**(code **)(*plVar4 + 8))(plVar4);
    plVar4 = (long *)0x0;
  }
  return plVar4;
}


