// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0e2d4
// Entry Point: 00f0e2d4
// Size: 156 bytes
// Signature: undefined FUN_00f0e2d4(void)


undefined8 FUN_00f0e2d4(lua_State *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = luaL_checkunsigned(param_1,1);
  uVar5 = luaL_checkinteger(param_1,2);
  if (((int)uVar4 < 0) && (-1 < (int)uVar5)) {
    uVar4 = uVar4 >> (ulong)(uVar5 & 0x1f) | 0xffffffffU >> (ulong)(uVar5 & 0x1f) ^ 0xffffffff;
    if (0x1f < uVar5) {
      uVar4 = 0xffffffff;
    }
    lua_pushunsigned(param_1,uVar4);
    return 1;
  }
  uVar3 = -uVar5;
  uVar2 = 0;
  if (uVar3 < 0x20) {
    uVar2 = uVar4 << (ulong)(uVar3 & 0x1f);
  }
  uVar1 = 0;
  if (0xffffffe0 < uVar3) {
    uVar1 = uVar4 >> (ulong)(uVar5 & 0x1f);
  }
  if (0 < (int)uVar5) {
    uVar2 = uVar1;
  }
  lua_pushunsigned(param_1,uVar2);
  return 1;
}


