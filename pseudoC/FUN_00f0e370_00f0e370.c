// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0e370
// Entry Point: 00f0e370
// Size: 112 bytes
// Signature: undefined FUN_00f0e370(void)


undefined8 FUN_00f0e370(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = lua_gettop(param_1);
  if (iVar1 < 1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar4 = 0;
    uVar3 = 0xffffffff;
    do {
      iVar4 = iVar4 + 1;
      uVar2 = luaL_checkunsigned(param_1,iVar4);
      uVar3 = uVar2 & uVar3;
    } while (iVar1 != iVar4);
  }
  lua_pushunsigned(param_1,uVar3);
  return 1;
}


