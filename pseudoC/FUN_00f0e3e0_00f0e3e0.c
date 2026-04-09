// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0e3e0
// Entry Point: 00f0e3e0
// Size: 52 bytes
// Signature: undefined FUN_00f0e3e0(void)


undefined8 FUN_00f0e3e0(lua_State *param_1)

{
  uint uVar1;
  
  uVar1 = luaL_checkunsigned(param_1,1);
  lua_pushunsigned(param_1,~uVar1);
  return 1;
}


