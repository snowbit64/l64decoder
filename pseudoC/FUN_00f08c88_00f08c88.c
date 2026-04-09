// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f08c88
// Entry Point: 00f08c88
// Size: 76 bytes
// Signature: undefined FUN_00f08c88(void)


undefined8 FUN_00f08c88(lua_State *param_1)

{
  int iVar1;
  char *pcVar2;
  
  luaL_checkany(param_1,1);
  iVar1 = lua_type(param_1,1);
  pcVar2 = (char *)lua_typename(param_1,iVar1);
  lua_pushstring(param_1,pcVar2);
  return 1;
}


