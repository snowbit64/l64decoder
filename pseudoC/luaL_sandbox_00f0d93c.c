// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_sandbox
// Entry Point: 00f0d93c
// Size: 192 bytes
// Signature: undefined __cdecl luaL_sandbox(lua_State * param_1)


/* luaL_sandbox(lua_State*) */

void luaL_sandbox(lua_State *param_1)

{
  int iVar1;
  
  lua_pushnil(param_1);
  while (iVar1 = lua_next(param_1,-0x2712), iVar1 != 0) {
    iVar1 = lua_type(param_1,-1);
    if (iVar1 == 6) {
      lua_setreadonly(param_1,-1,1);
    }
    lua_settop(param_1,-2);
  }
  lua_pushlstring(param_1,"",0);
  lua_getmetatable(param_1,-1);
  lua_setreadonly(param_1,-1,1);
  lua_settop(param_1,-3);
  lua_setreadonly(param_1,-0x2712,1);
  lua_setsafeenv(param_1,-0x2712,1);
  return;
}


