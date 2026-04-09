// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f08628
// Entry Point: 00f08628
// Size: 136 bytes
// Signature: undefined FUN_00f08628(void)


undefined8 FUN_00f08628(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,1);
  if (iVar1 + 1U < 3) {
    iVar1 = lua_toboolean(param_1,1);
    lua_newuserdatatagged(param_1,0,0x81);
    if (iVar1 != 0) {
      lua_createtable(param_1,0,0);
      lua_setmetatable(param_1,-2);
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  luaL_typeerrorL(param_1,1,"nil or boolean");
}


