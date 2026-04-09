// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1882c
// Entry Point: 00f1882c
// Size: 176 bytes
// Signature: undefined FUN_00f1882c(void)


undefined4 FUN_00f1882c(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  luaL_checktype(param_1,1,6);
  iVar1 = lua_objlen(param_1,1);
  iVar2 = luaL_optinteger(param_1,2,iVar1);
  uVar3 = 0;
  if ((0 < iVar2) && (iVar2 <= iVar1)) {
    uVar3 = 1;
    lua_rawgeti(param_1,1,iVar2);
    FUN_00f18ee8(param_1,1,iVar2 + 1,iVar1,iVar2);
    lua_pushnil(param_1);
    lua_rawseti(param_1,1,iVar1);
  }
  return uVar3;
}


