// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_callmeta
// Entry Point: 00f07504
// Size: 240 bytes
// Signature: undefined __cdecl luaL_callmeta(lua_State * param_1, int param_2, char * param_3)


/* luaL_callmeta(lua_State*, int, char const*) */

undefined8 luaL_callmeta(lua_State *param_1,int param_2,char *param_3)

{
  int iVar1;
  
  if (0xffffd8ef < param_2 - 1U) {
    iVar1 = lua_gettop(param_1);
    param_2 = param_2 + iVar1 + 1;
  }
  iVar1 = lua_getmetatable(param_1,param_2);
  if (iVar1 != 0) {
    lua_pushstring(param_1,param_3);
    lua_rawget(param_1,-2);
    iVar1 = lua_type(param_1,-1);
    if (iVar1 != 0) {
      lua_remove(param_1,-2);
      lua_pushvalue(param_1,param_2);
      lua_call(param_1,1,1);
      return 1;
    }
    lua_settop(param_1,-3);
    return 0;
  }
  return 0;
}


