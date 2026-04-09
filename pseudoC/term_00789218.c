// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: term
// Entry Point: 00789218
// Size: 548 bytes
// Signature: undefined term(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineScriptBinding::term() */

void EngineScriptBinding::term(void)

{
  ScriptingSavegameReport *pSVar1;
  int iVar2;
  TimerManager *this;
  MaterialManager *this_00;
  long **pplVar3;
  long **pplVar4;
  long *plVar5;
  long lVar6;
  long **pplVar7;
  ulong uVar8;
  
  if (((DAT_01053c80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01053c80), iVar2 != 0)) {
    DAT_01053c58 = 0;
    DAT_01053c50 = 0;
    DAT_01053c40 = &PTR__ScriptingNetworkManager_00fdb4c0;
    _DAT_01053c68 = 0;
    DAT_01053c60 = 0;
    DAT_01053c78 = 0;
    _DAT_01053c70 = 0;
    DAT_01053c48 = &DAT_01053c50;
                    /* try { // try from 0078940c to 0078940f has its CatchHandler @ 0078943c */
    lVar6 = ENetNetworkManager::getInstance();
    *(undefined ****)(lVar6 + 0x1c8) = &DAT_01053c40;
    __cxa_atexit(ScriptingNetworkManager::~ScriptingNetworkManager,&DAT_01053c40,&PTR_LOOP_00fd8de0)
    ;
    __cxa_guard_release(&DAT_01053c80);
  }
  ScriptingNetworkManager::reset();
  pSVar1 = ScriptingSavegameReport::s_cloudErrorReport;
  if (ScriptingSavegameReport::s_cloudErrorReport != (ScriptingSavegameReport *)0x0) {
    ScriptingSavegameReport::~ScriptingSavegameReport(ScriptingSavegameReport::s_cloudErrorReport);
    operator_delete(pSVar1);
  }
  ScriptingSavegameReport::s_cloudErrorReport = (ScriptingSavegameReport *)0x0;
  pplVar7 = ScriptingTimerListener::s_listeners;
  if (ScriptingTimerListener::s_listeners != (long **)&DAT_010531f8) {
    do {
      plVar5 = pplVar7[5];
      this = (TimerManager *)TimerManager::getInstance();
      TimerManager::removeTimer(this,(TimerListener *)plVar5);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      pplVar3 = (long **)pplVar7[1];
      if ((long **)pplVar7[1] == (long **)0x0) {
        pplVar3 = pplVar7 + 2;
        pplVar4 = (long **)*pplVar3;
        if ((long **)*pplVar4 != pplVar7) {
          do {
            plVar5 = *pplVar3;
            pplVar3 = (long **)(plVar5 + 2);
            pplVar4 = (long **)*pplVar3;
          } while (*pplVar4 != plVar5);
        }
      }
      else {
        do {
          pplVar4 = pplVar3;
          pplVar3 = (long **)*pplVar4;
        } while ((long **)*pplVar4 != (long **)0x0);
      }
      pplVar7 = pplVar4;
    } while (pplVar4 != (long **)&DAT_010531f8);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,ScriptingTimerListener*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ScriptingTimerListener*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ScriptingTimerListener*>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,ScriptingTimerListener*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ScriptingTimerListener*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ScriptingTimerListener*>>>
             *)&ScriptingTimerListener::s_listeners,DAT_010531f8);
  ScriptingTimerListener::s_listeners = (long **)&DAT_010531f8;
  DAT_01053200 = 0;
  DAT_010531f8 = (__tree_node *)0x0;
  uVar8 = DAT_010531e0 - s_tempMaterials;
  ScriptingTimerListener::s_listenersIndex = 0;
  if ((int)(uVar8 >> 3) != 0) {
    this_00 = (MaterialManager *)MaterialManager::getInstance();
    lVar6 = 0;
    do {
      MaterialManager::releaseMaterial(this_00,*(GsMaterial **)(s_tempMaterials + lVar6));
      lVar6 = lVar6 + 8;
    } while ((uVar8 >> 3 & 0xffffffff) * 8 - lVar6 != 0);
    DAT_010531e0 = s_tempMaterials;
  }
  s_intervalTimers = 0;
  DAT_010530e8 = 0;
  DAT_010530f8 = 0;
  DAT_01053108 = 0;
  DAT_01053118 = 0;
  DAT_01053128 = 0;
  DAT_01053138 = 0;
  DAT_01053148 = 0;
  DAT_01053158 = 0;
  DAT_01053168 = 0;
  DAT_01053178 = 0;
  DAT_01053188 = 0;
  DAT_01053198 = 0;
  DAT_010531a8 = 0;
  DAT_010531b8 = 0;
  DAT_010531c8 = 0;
  return;
}


