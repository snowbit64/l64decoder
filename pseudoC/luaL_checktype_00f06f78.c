// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: luaL_checktype
// Entry Point: 00f06f78
// Size: 72 bytes
// Signature: undefined __cdecl luaL_checktype(lua_State * param_1, int param_2, int param_3)


/* luaL_checktype(lua_State*, int, int) */

void luaL_checktype(lua_State *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,param_2);
  if (iVar1 == param_3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f06fc0(param_1,param_2,param_3);
}


