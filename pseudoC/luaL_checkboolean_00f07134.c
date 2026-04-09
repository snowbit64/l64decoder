// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_checkboolean
// Entry Point: 00f07134
// Size: 68 bytes
// Signature: undefined __cdecl luaL_checkboolean(lua_State * param_1, int param_2)


/* luaL_checkboolean(lua_State*, int) */

void luaL_checkboolean(lua_State *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,param_2);
  if (iVar1 == 1) {
    lua_toboolean(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f06fc0(param_1,param_2,1);
}


