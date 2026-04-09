// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushData
// Entry Point: 00bb86f0
// Size: 352 bytes
// Signature: undefined __thiscall pushData(LuauScriptSystem * this, lua_State * param_1, void * param_2, char * param_3)


/* LuauScriptSystem::pushData(lua_State*, void*, char const*) */

int __thiscall
LuauScriptSystem::pushData(LuauScriptSystem *this,lua_State *param_1,void *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  
  checkYieldState();
  lua_getfield(param_1,-10000,param_3);
  iVar1 = lua_gettop(param_1);
  lua_pushstring(param_1,"userdata");
  lua_gettable(param_1,iVar1);
  iVar2 = lua_type(param_1,-1);
  if (iVar2 == 0) {
    lua_settop(param_1,-2);
    lua_createtable(param_1,0,0);
    lua_pushlstring(param_1,"__mode",6);
    lua_pushstring(param_1,"v");
    lua_settable(param_1,-3);
    lua_pushvalue(param_1,-1);
    lua_setmetatable(param_1,-2);
    lua_pushstring(param_1,"userdata");
    lua_pushvalue(param_1,-2);
    lua_settable(param_1,iVar1);
  }
  ppvVar3 = (void **)pushUserdata(this,param_1,param_2,0x10);
  if (ppvVar3 != (void **)0x0) {
    *ppvVar3 = param_2;
    ppvVar3[1] = param_3;
    lua_pushvalue(param_1,iVar1);
    lua_setmetatable(param_1,-2);
  }
  lua_replace(param_1,iVar1);
  lua_settop(param_1,iVar1);
  return iVar1;
}


