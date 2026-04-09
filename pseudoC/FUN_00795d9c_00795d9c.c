// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00795d9c
// Entry Point: 00795d9c
// Size: 376 bytes
// Signature: undefined FUN_00795d9c(void)


void FUN_00795d9c(uint *param_1)

{
  uint uVar1;
  long **pplVar2;
  int iVar3;
  TimerManager *this;
  Logger *this_00;
  long *plVar4;
  long **pplVar5;
  long lVar6;
  long *plVar7;
  
  uVar1 = *param_1;
  if (DAT_010531f8 != (long *)0x0) {
    plVar7 = (long *)&DAT_010531f8;
    plVar4 = DAT_010531f8;
    do {
      if (*(uint *)(plVar4 + 4) >= uVar1) {
        plVar7 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar1];
    } while (plVar4 != (long *)0x0);
    if (((long **)plVar7 != &DAT_010531f8) && (*(uint *)(plVar7 + 4) <= uVar1)) {
      this = (TimerManager *)TimerManager::getInstance();
      TimerManager::removeTimer(this,(TimerListener *)plVar7[5]);
      if ((long *)plVar7[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar7[5] + 0x10))();
      }
      pplVar2 = (long **)plVar7[1];
      if ((long **)plVar7[1] == (long **)0x0) {
        plVar4 = plVar7 + 2;
        pplVar5 = (long **)*plVar4;
        if (*pplVar5 != plVar7) {
          do {
            lVar6 = *plVar4;
            plVar4 = (long *)(lVar6 + 0x10);
            pplVar5 = (long **)*plVar4;
          } while (*pplVar5 != (long *)lVar6);
        }
      }
      else {
        do {
          pplVar5 = pplVar2;
          pplVar2 = (long **)*pplVar5;
        } while ((long **)*pplVar5 != (long **)0x0);
      }
      if (ScriptingTimerListener::s_listeners == (long **)plVar7) {
        ScriptingTimerListener::s_listeners = pplVar5;
      }
      DAT_01053200 = DAT_01053200 + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)DAT_010531f8,(__tree_node_base *)plVar7);
      operator_delete(plVar7);
      return;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00795ed4 to 00795edb has its CatchHandler @ 00795f24 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00795ee0 to 00795ee3 has its CatchHandler @ 00795f14 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error: Invalid timer id %u.\n",(ulong)uVar1);
  return;
}


