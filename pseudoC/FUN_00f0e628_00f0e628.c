// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0e628
// Entry Point: 00f0e628
// Size: 72 bytes
// Signature: undefined FUN_00f0e628(void)


undefined8 FUN_00f0e628(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = luaL_checkinteger(param_1,2);
  uVar2 = luaL_checkunsigned(param_1,1);
  lua_pushunsigned(param_1,uVar2 >> (-iVar1 & 0x1fU) | uVar2 << 0x20 - (-iVar1 & 0x1fU));
  return 1;
}


