// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0fa4c
// Entry Point: 00f0fa4c
// Size: 52 bytes
// Signature: undefined FUN_00f0fa4c(void)


undefined8 FUN_00f0fa4c(lua_State *param_1)

{
  double dVar1;
  
  dVar1 = (double)luaL_checknumber(param_1,1);
  dVar1 = sin(dVar1);
  lua_pushnumber(param_1,dVar1);
  return 1;
}


