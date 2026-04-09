// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f088ac
// Entry Point: 00f088ac
// Size: 96 bytes
// Signature: undefined FUN_00f088ac(void)


undefined8 FUN_00f088ac(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,1);
  if (iVar1 - 5U < 2) {
    iVar1 = lua_objlen(param_1,1);
    lua_pushinteger(param_1,iVar1);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_argerrorL(param_1,1,"table or string expected");
}


