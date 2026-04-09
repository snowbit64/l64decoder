// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_newmetatable
// Entry Point: 00f06e28
// Size: 136 bytes
// Signature: undefined __cdecl luaL_newmetatable(lua_State * param_1, char * param_2)


/* luaL_newmetatable(lua_State*, char const*) */

undefined8 luaL_newmetatable(lua_State *param_1,char *param_2)

{
  int iVar1;
  
  lua_getfield(param_1,-10000,param_2);
  iVar1 = lua_type(param_1,-1);
  if (iVar1 != 0) {
    return 0;
  }
  lua_settop(param_1,-2);
  lua_createtable(param_1,0,0);
  lua_pushvalue(param_1,-1);
  lua_setfield(param_1,-10000,param_2);
  return 1;
}


