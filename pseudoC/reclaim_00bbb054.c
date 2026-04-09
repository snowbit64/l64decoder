// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reclaim
// Entry Point: 00bbb054
// Size: 400 bytes
// Signature: undefined reclaim(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LuauScriptSystem::reclaim() */

void LuauScriptSystem::reclaim(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  LuauScriptSystem *in_x0;
  Logger *this;
  LuauScriptSystem **ppLVar4;
  LuauScriptSystem *pLVar5;
  LuauScriptSystem **ppLVar6;
  
  in_x0[0x118] = (LuauScriptSystem)0x0;
  LuaScriptProfiler::setPaused(*(LuaScriptProfiler **)(in_x0 + 0x110),false);
  if (in_x0[0x119] == (LuauScriptSystem)0x0) {
    Event::wait((Event *)(in_x0 + 0xb4),0xffffffff);
  }
  checkYieldState();
  ppLVar6 = *(LuauScriptSystem ***)(in_x0 + 0x130);
  while (ppLVar6 != (LuauScriptSystem **)(in_x0 + 0x138)) {
    updateClassStorageSlot(in_x0,(ClassTypeObject *)ppLVar6[4],(ClassTypeObject *)(ppLVar6 + 5));
    ppLVar4 = (LuauScriptSystem **)ppLVar6[1];
    if ((LuauScriptSystem **)ppLVar6[1] == (LuauScriptSystem **)0x0) {
      ppLVar4 = ppLVar6 + 2;
      bVar1 = *(LuauScriptSystem ***)*ppLVar4 != ppLVar6;
      ppLVar6 = (LuauScriptSystem **)*ppLVar4;
      if (bVar1) {
        do {
          pLVar5 = *ppLVar4;
          ppLVar4 = (LuauScriptSystem **)(pLVar5 + 0x10);
          ppLVar6 = (LuauScriptSystem **)*ppLVar4;
        } while (*ppLVar6 != pLVar5);
      }
    }
    else {
      do {
        ppLVar6 = ppLVar4;
        ppLVar4 = (LuauScriptSystem **)*ppLVar6;
      } while ((LuauScriptSystem **)*ppLVar6 != (LuauScriptSystem **)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>,std::__ndk1::__map_value_compare<Value::ClassTypeObject*,std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>,std::__ndk1::less<Value::ClassTypeObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>>>
  ::destroy((__tree<std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>,std::__ndk1::__map_value_compare<Value::ClassTypeObject*,std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>,std::__ndk1::less<Value::ClassTypeObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<Value::ClassTypeObject*,Value::ClassTypeObject>>>
             *)(in_x0 + 0x130),*(__tree_node **)(in_x0 + 0x138));
  *(undefined8 *)(in_x0 + 0x138) = 0;
  *(undefined8 *)(in_x0 + 0x140) = 0;
  *(LuauScriptSystem **)(in_x0 + 0x130) = in_x0 + 0x138;
  uVar2 = lua_gc(*(lua_State **)(in_x0 + 8),3,0);
  *(uint *)(in_x0 + 0x11c) = uVar2;
  *(undefined4 *)(in_x0 + 0x120) = 0;
  *(int *)(in_x0 + 0x124) = *(int *)(in_x0 + 0x124) + 1;
  if ((0x4b000 < uVar2) && ((DAT_0211dd70 & 1) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00bbb1a4 to 00bbb1ab has its CatchHandler @ 00bbb1f4 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 00bbb1b0 to 00bbb1b3 has its CatchHandler @ 00bbb1e4 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Lua memory usage has reached %u KB; this is a dangerous level for PS4.\n",
                      (ulong)*(uint *)(in_x0 + 0x11c));
    DAT_0211dd70 = 1;
  }
  return;
}


