// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_sandboxthread
// Entry Point: 00f0d9fc
// Size: 140 bytes
// Signature: undefined __cdecl luaL_sandboxthread(lua_State * param_1)


/* luaL_sandboxthread(lua_State*) */

void luaL_sandboxthread(lua_State *param_1)

{
  lua_createtable(param_1,0,0);
  lua_createtable(param_1,0,0);
  lua_pushvalue(param_1,-0x2712);
  lua_setfield(param_1,-2,"__index");
  lua_setreadonly(param_1,-1,1);
  lua_setmetatable(param_1,-2);
  lua_replace(param_1,-0x2712);
  lua_setsafeenv(param_1,-0x2712,1);
  return;
}


