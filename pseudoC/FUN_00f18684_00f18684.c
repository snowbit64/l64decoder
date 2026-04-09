// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f18684
// Entry Point: 00f18684
// Size: 68 bytes
// Signature: undefined FUN_00f18684(void)


undefined8 FUN_00f18684(lua_State *param_1)

{
  int iVar1;
  
  luaL_checktype(param_1,1,6);
  iVar1 = lua_objlen(param_1,1);
  lua_pushinteger(param_1,iVar1);
  return 1;
}


