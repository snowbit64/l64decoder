// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleDivideByZero
// Entry Point: 00bba730
// Size: 172 bytes
// Signature: undefined __cdecl handleDivideByZero(lua_State * param_1, lua_Debug * param_2)


/* LuauScriptSystem::handleDivideByZero(lua_State*, lua_Debug*) */

void LuauScriptSystem::handleDivideByZero(lua_State *param_1,lua_Debug *param_2)

{
  int iVar1;
  Logger *this;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00bba79c to 00bba7a3 has its CatchHandler @ 00bba7ec */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00bba7a8 to 00bba7ab has its CatchHandler @ 00bba7dc */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Luau: divide by zero error\n");
  checkYieldState();
  printCFunctionCallstack((LuauScriptSystem *)param_1,*(lua_State **)(param_1 + 8),"",0);
  return;
}


