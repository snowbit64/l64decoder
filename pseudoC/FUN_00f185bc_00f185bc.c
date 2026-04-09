// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f185bc
// Entry Point: 00f185bc
// Size: 200 bytes
// Signature: undefined FUN_00f185bc(void)


undefined4 FUN_00f185bc(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  luaL_checktype(param_1,1,6);
  luaL_checktype(param_1,2,7);
  iVar1 = lua_objlen(param_1,1);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      lua_pushvalue(param_1,2);
      lua_pushinteger(param_1,iVar3);
      lua_rawgeti(param_1,1,iVar3);
      lua_call(param_1,2,1);
      iVar2 = lua_type(param_1,-1);
      if (iVar2 != 0) {
        return 1;
      }
      lua_settop(param_1,-2);
    } while (iVar1 != iVar3);
  }
  return 0;
}


