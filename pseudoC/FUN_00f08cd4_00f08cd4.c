// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f08cd4
// Entry Point: 00f08cd4
// Size: 64 bytes
// Signature: undefined FUN_00f08cd4(void)


undefined8 FUN_00f08cd4(lua_State *param_1)

{
  char *pcVar1;
  
  luaL_checkany(param_1,1);
  pcVar1 = (char *)luaL_typename(param_1,1);
  lua_pushstring(param_1,pcVar1);
  return 1;
}


