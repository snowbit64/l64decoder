// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLuaErrorHandler
// Entry Point: 00bb6650
// Size: 288 bytes
// Signature: undefined __cdecl setLuaErrorHandler(lua_State * param_1)


/* LuauScriptSystem::setLuaErrorHandler(lua_State*) */

undefined8 LuauScriptSystem::setLuaErrorHandler(lua_State *param_1)

{
  int iVar1;
  Logger *this;
  
  iVar1 = lua_type(param_1,1);
  if (iVar1 == 7) {
    lua_pushvalue(param_1,1);
    m_errFuncRef = lua_ref(param_1,-1);
    lua_settop(param_1,-2);
    printf("Registry index %u alocated for Lua error handler at %s(%d)\n",(ulong)m_errFuncRef,
           "T:/src/base/scripting/lua/LuauScriptSystem.cpp",0x444);
  }
  else {
    iVar1 = lua_type(param_1,1);
    if (iVar1 == 0) {
      lua_unref(param_1,m_errFuncRef);
      m_errFuncRef = 0;
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00bb6730 to 00bb6737 has its CatchHandler @ 00bb6780 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 00bb673c to 00bb673f has its CatchHandler @ 00bb6770 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Lua error handler needs to be a function\n");
    }
  }
  return 0;
}


