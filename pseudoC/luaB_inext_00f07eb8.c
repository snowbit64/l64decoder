// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaB_inext
// Entry Point: 00f07eb8
// Size: 112 bytes
// Signature: undefined __cdecl luaB_inext(lua_State * param_1)


/* luaB_inext(lua_State*) */

long luaB_inext(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = luaL_checkinteger(param_1,2);
  luaL_checktype(param_1,1,6);
  lua_pushinteger(param_1,iVar1 + 1);
  lua_rawgeti(param_1,1,iVar1 + 1);
  iVar1 = lua_type(param_1,-1);
  return (ulong)(iVar1 != 0) << 1;
}


