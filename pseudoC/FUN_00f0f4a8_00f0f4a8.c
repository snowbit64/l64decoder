// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0f4a8
// Entry Point: 00f0f4a8
// Size: 80 bytes
// Signature: undefined FUN_00f0f4a8(void)


undefined8 FUN_00f0f4a8(lua_State *param_1)

{
  int __exponent;
  double dVar1;
  
  dVar1 = (double)luaL_checknumber(param_1,1);
  __exponent = luaL_checkinteger(param_1,2);
  dVar1 = ldexp(dVar1,__exponent);
  lua_pushnumber(param_1,dVar1);
  return 1;
}


