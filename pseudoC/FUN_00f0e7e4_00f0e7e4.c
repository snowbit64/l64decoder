// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0e7e4
// Entry Point: 00f0e7e4
// Size: 68 bytes
// Signature: undefined FUN_00f0e7e4(void)


undefined8 FUN_00f0e7e4(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = luaL_checkinteger(param_1,2);
  uVar2 = luaL_checkunsigned(param_1,1);
  lua_pushunsigned(param_1,uVar2 >> (uVar1 & 0x1f) | uVar2 << 0x20 - (uVar1 & 0x1f));
  return 1;
}


