// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f08528
// Entry Point: 00f08528
// Size: 56 bytes
// Signature: undefined FUN_00f08528(void)


undefined8 FUN_00f08528(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_gc(param_1,3,0);
  lua_pushinteger(param_1,iVar1);
  return 1;
}


