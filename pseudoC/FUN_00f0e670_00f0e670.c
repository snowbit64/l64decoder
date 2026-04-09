// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0e670
// Entry Point: 00f0e670
// Size: 148 bytes
// Signature: undefined FUN_00f0e670(void)


undefined8 FUN_00f0e670(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = luaL_checkunsigned(param_1,1);
  uVar3 = luaL_checkinteger(param_1,2);
  if (-1 < (int)uVar3) {
    uVar1 = 0;
    if (uVar3 < 0x20) {
      uVar1 = uVar2 << (ulong)(uVar3 & 0x1f);
    }
    lua_pushunsigned(param_1,uVar1);
    return 1;
  }
  if (uVar3 < 0xffffffe1) {
    lua_pushunsigned(param_1,0);
    return 1;
  }
  lua_pushunsigned(param_1,uVar2 >> (ulong)(-uVar3 & 0x1f));
  return 1;
}


