// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f085c4
// Entry Point: 00f085c4
// Size: 100 bytes
// Signature: undefined FUN_00f085c4(void)


undefined8 FUN_00f085c4(lua_State *param_1)

{
  int iVar1;
  
  luaL_checkany(param_1,1);
  iVar1 = lua_getmetatable(param_1,1);
  if (iVar1 != 0) {
    luaL_getmetafield(param_1,1,"__metatable");
    return 1;
  }
  lua_pushnil(param_1);
  return 1;
}


