// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f08a98
// Entry Point: 00f08a98
// Size: 156 bytes
// Signature: undefined FUN_00f08a98(void)


undefined8 FUN_00f08a98(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,2);
  luaL_checktype(param_1,1,6);
  if ((iVar1 != 0) && (iVar1 != 6)) {
                    /* WARNING: Subroutine does not return */
    luaL_typeerrorL(param_1,2,"nil or table");
  }
  iVar1 = luaL_getmetafield(param_1,1,"__metatable");
  if (iVar1 == 0) {
    lua_settop(param_1,2);
    lua_setmetatable(param_1,1);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(param_1,"cannot change a protected metatable");
}


