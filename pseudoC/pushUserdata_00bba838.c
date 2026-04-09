// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushUserdata
// Entry Point: 00bba838
// Size: 168 bytes
// Signature: undefined __thiscall pushUserdata(LuauScriptSystem * this, lua_State * param_1, void * param_2, uint param_3)


/* LuauScriptSystem::pushUserdata(lua_State*, void*, unsigned int) */

undefined8 __thiscall
LuauScriptSystem::pushUserdata(LuauScriptSystem *this,lua_State *param_1,void *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  checkYieldState();
  lua_pushlightuserdata(param_1,param_2);
  lua_gettable(param_1,-2);
  iVar1 = lua_type(param_1,-1);
  if (iVar1 == 0) {
    lua_settop(param_1,-2);
    uVar2 = lua_newuserdatatagged(param_1,(ulong)param_3,0);
    lua_pushlightuserdata(param_1,param_2);
    lua_pushvalue(param_1,-2);
    lua_settable(param_1,-4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


