// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f084b8
// Entry Point: 00f084b8
// Size: 112 bytes
// Signature: undefined FUN_00f084b8(void)


void FUN_00f084b8(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = luaL_optinteger(param_1,2,1);
  lua_settop(param_1,1);
  iVar2 = lua_isstring(param_1,1);
  if ((0 < iVar1) && (iVar2 != 0)) {
    luaL_where(param_1,iVar1);
    lua_pushvalue(param_1,1);
    lua_concat(param_1,2);
  }
                    /* WARNING: Subroutine does not return */
  lua_error(param_1);
}


