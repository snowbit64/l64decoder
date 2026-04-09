// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0ff6c
// Entry Point: 00f0ff6c
// Size: 52 bytes
// Signature: undefined FUN_00f0ff6c(void)


undefined8 FUN_00f0ff6c(lua_State *param_1)

{
  double dVar1;
  
  dVar1 = (double)luaL_checknumber(param_1,1);
  lua_pushnumber(param_1,(double)(long)dVar1);
  return 1;
}


