// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f087b0
// Entry Point: 00f087b0
// Size: 80 bytes
// Signature: undefined FUN_00f087b0(void)


undefined8 FUN_00f087b0(lua_State *param_1)

{
  int iVar1;
  
  luaL_checkany(param_1,1);
  luaL_checkany(param_1,2);
  iVar1 = lua_rawequal(param_1,1,2);
  lua_pushboolean(param_1,iVar1);
  return 1;
}


