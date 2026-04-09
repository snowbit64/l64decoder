// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: validateObjectRef
// Entry Point: 00bb8184
// Size: 224 bytes
// Signature: undefined __thiscall validateObjectRef(LuauScriptSystem * this, ObjectRef * param_1, char * param_2)


/* LuauScriptSystem::validateObjectRef(LuauScriptSystem::ObjectRef const*, char const*) */

bool __thiscall
LuauScriptSystem::validateObjectRef(LuauScriptSystem *this,ObjectRef *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Logger *this_00;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)this;
  if (iVar1 != iVar2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00bb8224 to 00bb822b has its CatchHandler @ 00bb8274 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bb8230 to 00bb8233 has its CatchHandler @ 00bb8264 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "WARNING: object ref is invalid for %s\n",param_2);
    checkYieldState();
    printCFunctionCallstack(this,*(lua_State **)(this + 8),"validateObjectRef",1);
  }
  return iVar1 == iVar2;
}


