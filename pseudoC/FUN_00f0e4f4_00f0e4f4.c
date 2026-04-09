// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0e4f4
// Entry Point: 00f0e4f4
// Size: 116 bytes
// Signature: undefined FUN_00f0e4f4(void)


undefined8 FUN_00f0e4f4(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = lua_gettop(param_1);
  if (iVar1 < 1) {
    uVar4 = 1;
  }
  else {
    iVar3 = 0;
    uVar4 = 0xffffffff;
    do {
      iVar3 = iVar3 + 1;
      uVar2 = luaL_checkunsigned(param_1,iVar3);
      uVar4 = uVar2 & uVar4;
    } while (iVar1 != iVar3);
    uVar4 = (uint)(uVar4 != 0);
  }
  lua_pushboolean(param_1,uVar4);
  return 1;
}


