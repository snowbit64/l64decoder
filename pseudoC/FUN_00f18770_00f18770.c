// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f18770
// Entry Point: 00f18770
// Size: 188 bytes
// Signature: undefined FUN_00f18770(void)


undefined8 FUN_00f18770(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  
  luaL_checktype(param_1,1,6);
  iVar1 = lua_objlen(param_1,1);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    iVar2 = luaL_checkinteger(param_1,2);
    if ((0 < iVar2) && (iVar2 <= iVar1)) {
      FUN_00f18ee8(param_1,1,iVar2,iVar1,iVar2 + 1);
    }
  }
  else {
    if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
      luaL_errorL(param_1,"wrong number of arguments to \'insert\'");
    }
    iVar2 = iVar1 + 1;
  }
  lua_rawseti(param_1,1,iVar2);
  return 0;
}


