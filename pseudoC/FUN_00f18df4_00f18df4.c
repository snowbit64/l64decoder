// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f18df4
// Entry Point: 00f18df4
// Size: 68 bytes
// Signature: undefined FUN_00f18df4(void)


undefined8 FUN_00f18df4(lua_State *param_1)

{
  int iVar1;
  
  luaL_checktype(param_1,1,6);
  iVar1 = lua_getreadonly(param_1,1);
  lua_pushboolean(param_1,iVar1);
  return 1;
}


