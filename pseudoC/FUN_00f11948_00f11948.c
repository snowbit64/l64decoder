// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f11948
// Entry Point: 00f11948
// Size: 80 bytes
// Signature: undefined FUN_00f11948(void)


undefined8 FUN_00f11948(lua_State *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)luaL_checknumber(param_1,1);
  dVar2 = (double)luaL_optnumber(param_1,2,0.0);
  dVar1 = difftime((long)dVar1,(long)dVar2);
  lua_pushnumber(param_1,dVar1);
  return 1;
}


