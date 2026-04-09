// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f08800
// Entry Point: 00f08800
// Size: 80 bytes
// Signature: undefined FUN_00f08800(void)


undefined8 FUN_00f08800(lua_State *param_1)

{
  luaL_checktype(param_1,1,6);
  luaL_checkany(param_1,2);
  lua_settop(param_1,2);
  lua_rawget(param_1,1);
  return 1;
}


