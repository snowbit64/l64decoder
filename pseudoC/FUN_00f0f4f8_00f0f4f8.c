// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0f4f8
// Entry Point: 00f0f4f8
// Size: 52 bytes
// Signature: undefined FUN_00f0f4f8(void)


undefined8 FUN_00f0f4f8(lua_State *param_1)

{
  double dVar1;
  
  dVar1 = (double)luaL_checknumber(param_1,1);
  dVar1 = log10(dVar1);
  lua_pushnumber(param_1,dVar1);
  return 1;
}


