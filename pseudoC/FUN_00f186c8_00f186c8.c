// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f186c8
// Entry Point: 00f186c8
// Size: 168 bytes
// Signature: undefined FUN_00f186c8(void)


undefined8 FUN_00f186c8(lua_State *param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  
  luaL_checktype(param_1,1,6);
  lua_pushnil(param_1);
  iVar2 = lua_next(param_1,1);
  dVar1 = 0.0;
  while (iVar2 != 0) {
    lua_settop(param_1,-2);
    iVar2 = lua_type(param_1,-1);
    dVar3 = dVar1;
    if ((iVar2 == 3) && (dVar3 = (double)lua_tonumberx(param_1,-1,(int *)0x0), dVar3 <= dVar1)) {
      dVar3 = dVar1;
    }
    iVar2 = lua_next(param_1,1);
    dVar1 = dVar3;
  }
  lua_pushnumber(param_1,dVar1);
  return 1;
}


