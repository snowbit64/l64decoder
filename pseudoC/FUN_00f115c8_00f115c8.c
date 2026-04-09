// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f115c8
// Entry Point: 00f115c8
// Size: 44 bytes
// Signature: undefined FUN_00f115c8(void)


undefined8 FUN_00f115c8(lua_State *param_1)

{
  double dVar1;
  
  dVar1 = (double)lua_clock();
  lua_pushnumber(param_1,dVar1);
  return 1;
}


