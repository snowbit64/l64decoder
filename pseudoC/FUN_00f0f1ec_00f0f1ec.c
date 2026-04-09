// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0f1ec
// Entry Point: 00f0f1ec
// Size: 52 bytes
// Signature: undefined FUN_00f0f1ec(void)


undefined8 FUN_00f0f1ec(lua_State *param_1)

{
  double dVar1;
  
  dVar1 = (double)luaL_checknumber(param_1,1);
  dVar1 = asin(dVar1);
  lua_pushnumber(param_1,dVar1);
  return 1;
}


