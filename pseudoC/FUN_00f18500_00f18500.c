// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f18500
// Entry Point: 00f18500
// Size: 188 bytes
// Signature: undefined FUN_00f18500(void)


undefined4 FUN_00f18500(lua_State *param_1)

{
  int iVar1;
  
  luaL_checktype(param_1,1,6);
  luaL_checktype(param_1,2,7);
  lua_pushnil(param_1);
  iVar1 = lua_next(param_1,1);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    lua_pushvalue(param_1,2);
    lua_pushvalue(param_1,-3);
    lua_pushvalue(param_1,-3);
    lua_call(param_1,2,1);
    iVar1 = lua_type(param_1,-1);
    if (iVar1 != 0) break;
    lua_settop(param_1,-3);
    iVar1 = lua_next(param_1,1);
  }
  return 1;
}


