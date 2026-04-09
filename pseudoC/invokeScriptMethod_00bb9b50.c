// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: invokeScriptMethod
// Entry Point: 00bb9b50
// Size: 576 bytes
// Signature: undefined __thiscall invokeScriptMethod(LuauScriptSystem * this, char * param_1, MethodInvocation * param_2, int param_3, int param_4, void * param_5)


/* LuauScriptSystem::invokeScriptMethod(char const*, MethodInvocation*, int, int, void*) */

uint __thiscall
LuauScriptSystem::invokeScriptMethod
          (LuauScriptSystem *this,char *param_1,MethodInvocation *param_2,int param_3,int param_4,
          void *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  undefined *puVar6;
  lua_State *plVar7;
  ulong uVar8;
  char acStack_268 [512];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  checkYieldState();
  sVar5 = strlen(param_1);
  __memcpy_chk(acStack_268,param_1,(int)sVar5 + 1,0x200);
  puVar6 = (undefined *)StringUtil::stristr(acStack_268,".");
  iVar2 = lua_gettop(*(lua_State **)(this + 8));
  if (puVar6 == (undefined *)0x0) {
    if (param_5 == (void *)0x0) {
      lua_getfield(*(lua_State **)(this + 8),-0x2712,param_1);
      iVar3 = lua_type(*(lua_State **)(this + 8),-1);
      if (iVar3 == 7) {
        iVar3 = 0;
        goto LAB_00bb9cb0;
      }
    }
    else {
      uVar8 = validateObjectRef(this,(ObjectRef *)param_5,"resolving to script method target object"
                               );
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Load size is inaccurate */
        lua_rawgeti(*(lua_State **)(this + 8),-10000,*param_5);
        plVar7 = *(lua_State **)(this + 8);
        goto LAB_00bb9c44;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 00bb9d54 to 00bb9d5f has its CatchHandler @ 00bb9d90 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "WARNING: when calling Lua from C++, method \'%s\'\n",param_1);
    }
    uVar4 = 0;
LAB_00bb9d04:
    plVar7 = *(lua_State **)(this + 8);
  }
  else {
    *puVar6 = 0;
    lua_getfield(*(lua_State **)(this + 8),-0x2712,acStack_268);
    iVar3 = lua_type(*(lua_State **)(this + 8),-1);
    plVar7 = *(lua_State **)(this + 8);
    if (iVar3 == 6) {
      param_1 = puVar6 + 1;
LAB_00bb9c44:
      lua_pushstring(plVar7,param_1);
      lua_gettable(*(lua_State **)(this + 8),-2);
      iVar3 = lua_type(*(lua_State **)(this + 8),-1);
      plVar7 = *(lua_State **)(this + 8);
      if (iVar3 == 7) {
        lua_pushvalue(plVar7,-2);
        iVar3 = 1;
LAB_00bb9cb0:
        uVar4 = invokeScriptMethod(this,iVar2,param_2,iVar3,param_3,param_4,acStack_268,0);
        goto LAB_00bb9d04;
      }
    }
    uVar4 = 0;
  }
  lua_settop(plVar7,iVar2);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


