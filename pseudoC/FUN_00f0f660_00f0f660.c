// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0f660
// Entry Point: 00f0f660
// Size: 128 bytes
// Signature: undefined FUN_00f0f660(void)


undefined8 FUN_00f0f660(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  iVar1 = lua_gettop(param_1);
  dVar3 = (double)luaL_checknumber(param_1,1);
  if (1 < iVar1) {
    iVar2 = 1;
    dVar4 = dVar3;
    do {
      iVar2 = iVar2 + 1;
      dVar3 = (double)luaL_checknumber(param_1,iVar2);
      if (dVar4 <= dVar3) {
        dVar3 = dVar4;
      }
      dVar4 = dVar3;
    } while (iVar1 != iVar2);
  }
  lua_pushnumber(param_1,dVar3);
  return 1;
}


