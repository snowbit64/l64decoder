// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: invokeObjectScriptMethod
// Entry Point: 00bba0c4
// Size: 468 bytes
// Signature: undefined __thiscall invokeObjectScriptMethod(LuauScriptSystem * this, void * param_1, MethodInvocation * param_2, int param_3, int param_4, void * param_5, char * param_6)


/* LuauScriptSystem::invokeObjectScriptMethod(void*, MethodInvocation*, int, int, void*, char
   const*) */

uint __thiscall
LuauScriptSystem::invokeObjectScriptMethod
          (LuauScriptSystem *this,void *param_1,MethodInvocation *param_2,int param_3,int param_4,
          void *param_5,char *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  iVar1 = lua_gettop(*(lua_State **)(this + 8));
  uVar4 = validateObjectRef(this,(ObjectRef *)param_1,"resolving to script method target object");
  if ((uVar4 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00bba218 to 00bba223 has its CatchHandler @ 00bba29c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "WARNING: when calling Lua from C++\n");
LAB_00bba1dc:
    uVar2 = 0;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    lua_rawgeti(*(lua_State **)(this + 8),-10000,*param_1);
    if (param_5 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      uVar4 = validateObjectRef(this,(ObjectRef *)param_5,"resolving to script method target object"
                               );
      if ((uVar4 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 00bba260 to 00bba26b has its CatchHandler @ 00bba298 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "WARNING: when calling Lua from C++, method \'%s\'\n",param_6);
        goto LAB_00bba1dc;
      }
                    /* WARNING: Load size is inaccurate */
      lua_rawgeti(*(lua_State **)(this + 8),-10000,*param_5);
      iVar3 = 1;
    }
    uVar2 = invokeScriptMethod(this,iVar1,param_2,iVar3,param_3,param_4,param_6,0);
  }
  lua_settop(*(lua_State **)(this + 8),iVar1);
  return uVar2 & 1;
}


