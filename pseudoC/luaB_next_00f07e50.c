// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaB_next
// Entry Point: 00f07e50
// Size: 104 bytes
// Signature: undefined __cdecl luaB_next(lua_State * param_1)


/* luaB_next(lua_State*) */

undefined8 luaB_next(lua_State *param_1)

{
  int iVar1;
  
  luaL_checktype(param_1,1,6);
  lua_settop(param_1,2);
  iVar1 = lua_next(param_1,1);
  if (iVar1 != 0) {
    return 2;
  }
  lua_pushnil(param_1);
  return 1;
}


