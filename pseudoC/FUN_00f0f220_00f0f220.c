// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0f220
// Entry Point: 00f0f220
// Size: 84 bytes
// Signature: undefined FUN_00f0f220(void)


undefined8 FUN_00f0f220(lua_State *param_1)

{
  double dVar1;
  double __x;
  
  dVar1 = (double)luaL_checknumber(param_1,1);
  __x = (double)luaL_checknumber(param_1,2);
  dVar1 = atan2(dVar1,__x);
  lua_pushnumber(param_1,dVar1);
  return 1;
}


