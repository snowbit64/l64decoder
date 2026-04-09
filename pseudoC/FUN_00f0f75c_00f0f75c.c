// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0f75c
// Entry Point: 00f0f75c
// Size: 84 bytes
// Signature: undefined FUN_00f0f75c(void)


undefined8 FUN_00f0f75c(lua_State *param_1)

{
  double dVar1;
  double __y;
  
  dVar1 = (double)luaL_checknumber(param_1,1);
  __y = (double)luaL_checknumber(param_1,2);
  dVar1 = pow(dVar1,__y);
  lua_pushnumber(param_1,dVar1);
  return 1;
}


