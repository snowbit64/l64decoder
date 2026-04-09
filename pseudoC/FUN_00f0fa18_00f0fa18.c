// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0fa18
// Entry Point: 00f0fa18
// Size: 52 bytes
// Signature: undefined FUN_00f0fa18(void)


undefined8 FUN_00f0fa18(lua_State *param_1)

{
  double dVar1;
  
  dVar1 = (double)luaL_checknumber(param_1,1);
  dVar1 = sinh(dVar1);
  lua_pushnumber(param_1,dVar1);
  return 1;
}


