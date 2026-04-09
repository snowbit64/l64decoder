// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0f2a8
// Entry Point: 00f0f2a8
// Size: 52 bytes
// Signature: undefined FUN_00f0f2a8(void)


undefined8 FUN_00f0f2a8(lua_State *param_1)

{
  double dVar1;
  
  dVar1 = (double)luaL_checknumber(param_1,1);
  lua_pushnumber(param_1,(double)(long)dVar1);
  return 1;
}


