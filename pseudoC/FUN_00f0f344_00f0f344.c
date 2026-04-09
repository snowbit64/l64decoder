// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0f344
// Entry Point: 00f0f344
// Size: 60 bytes
// Signature: undefined FUN_00f0f344(void)


undefined8 FUN_00f0f344(lua_State *param_1)

{
  double dVar1;
  
  dVar1 = (double)luaL_checknumber(param_1,1);
  lua_pushnumber(param_1,dVar1 / 0.0174532925199433);
  return 1;
}


