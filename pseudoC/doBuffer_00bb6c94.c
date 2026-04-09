// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doBuffer
// Entry Point: 00bb6c94
// Size: 728 bytes
// Signature: undefined __thiscall doBuffer(LuauScriptSystem * this, lua_State * param_1, uchar * param_2, uint param_3, char * param_4, char * param_5, bool param_6)


/* LuauScriptSystem::doBuffer(lua_State*, unsigned char const*, unsigned int, char const*, char
   const*, bool) */

void __thiscall
LuauScriptSystem::doBuffer
          (LuauScriptSystem *this,lua_State *param_1,uchar *param_2,uint param_3,char *param_4,
          char *param_5,bool param_6)

{
  uchar uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  LuauScriptSystem *this_00;
  char *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  char local_258 [512];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_3 < 3) {
LAB_00bb6d08:
    if (param_3 != 0) {
      uVar1 = *param_2;
LAB_00bb6d10:
      if ((!param_6) && (uVar1 == '\x01')) {
        if (param_4 == (char *)0x0) {
          bVar3 = false;
        }
        else {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar4 != 0)) {
                    /* try { // try from 00bb6f30 to 00bb6f3b has its CatchHandler @ 00bb6f6c */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning: Script loading failed \'%s\', script is not allowed to be compiled.\n"
                            ,param_4);
          bVar3 = false;
        }
        goto LAB_00bb6eec;
      }
    }
  }
  else {
    uVar1 = *param_2;
    if (uVar1 != 0xef) goto LAB_00bb6d10;
    if ((param_2[1] == 0xbb) && (param_2[2] == 0xbf)) {
      param_2 = param_2 + 3;
      param_3 = param_3 - 3;
      goto LAB_00bb6d08;
    }
  }
  if (param_4 == (char *)0x0) {
    uVar7 = param_3;
    if (*param_2 == '=') {
      pcVar5 = (char *)((ulong)local_258 | 1);
      if (0x1fd < param_3) {
        uVar7 = 0x1fe;
      }
      local_258[0] = ' ';
      uVar6 = 0x1ff;
    }
    else {
      if (0x1fe < param_3) {
        uVar7 = 0x1ff;
      }
      pcVar5 = local_258;
      uVar6 = 0x200;
    }
    this_00 = (LuauScriptSystem *)__memcpy_chk(pcVar5,param_2,uVar7,uVar6);
    uVar7 = param_3;
    if (0x1fe < param_3) {
      uVar7 = 0x1ff;
    }
    local_258[uVar7] = '\0';
  }
  else {
    this_00 = (LuauScriptSystem *)FUN_00bb6bf0(local_258,0x200,0x200,&DAT_00510d4c,param_4);
  }
  iVar4 = loadBuffer(this_00,param_1,param_2,param_3,local_258);
  if (iVar4 == 0) {
    if (param_5 != (char *)0x0) {
      lua_getfield(param_1,-0x2712,param_5);
      iVar4 = lua_type(param_1,-1);
      if (iVar4 != 6) {
        lua_settop(param_1,-2);
        lua_createtable(param_1,0,0);
        lua_pushstring(param_1,param_5);
        lua_pushvalue(param_1,-2);
        lua_settable(param_1,-0x2712);
        luaL_newmetatable(param_1,param_5);
        iVar4 = lua_gettop(param_1);
        lua_pushstring(param_1,"__index");
        lua_getfield(param_1,-0x2712,"_G");
        lua_rawset(param_1,iVar4);
        lua_setmetatable(param_1,-2);
      }
      lua_setfenv(param_1,-2);
    }
    iVar4 = lua_pcall(param_1,0,-1,0);
  }
  if (0 < iVar4) {
    printErrors();
  }
  bVar3 = iVar4 == 0;
LAB_00bb6eec:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


