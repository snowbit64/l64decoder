// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f08850
// Entry Point: 00f08850
// Size: 92 bytes
// Signature: undefined FUN_00f08850(void)


undefined8 FUN_00f08850(lua_State *param_1)

{
  luaL_checktype(param_1,1,6);
  luaL_checkany(param_1,2);
  luaL_checkany(param_1,3);
  lua_settop(param_1,3);
  lua_rawset(param_1,1);
  return 1;
}


