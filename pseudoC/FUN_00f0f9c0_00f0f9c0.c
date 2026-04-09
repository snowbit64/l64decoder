// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0f9c0
// Entry Point: 00f0f9c0
// Size: 88 bytes
// Signature: undefined FUN_00f0f9c0(void)


undefined8 FUN_00f0f9c0(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = luaL_checkinteger(param_1,1);
  *(long *)(*(long *)(param_1 + 0x18) + 0xc10) =
       (long)iVar1 * 0x5851f42d4c957f2d + 0x399d2694695129de;
  return 0;
}


